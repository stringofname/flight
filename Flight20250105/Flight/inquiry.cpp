#include "inquiry.h"
#include "ui_inquiry.h"
#include"userspace.h"
#include <QTableWidget>
#include <QPushButton>
#include <QTableWidgetItem>
#include <qstackedwidget.h>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>
#include "book.h"
#include "global.h"
#include <QSqlError>
#include <QDebug>
#include "mainwindow.h" // 添加对 MainWindow 的引用

inquiry::inquiry(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::inquiry)
{
    ui->setupUi(this);

    // 设置 QTableWidget 的属性
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget->horizontalHeader()->setDefaultAlignment(Qt::AlignCenter); // 设置水平表头对齐方式
    ui->tableWidget->verticalHeader()->setDefaultAlignment(Qt::AlignCenter);   // 设置垂直表头对齐方式
    ui->lineEditDepart->setPlaceholderText("出发地");
    ui->lineEditArrival->setPlaceholderText("到达地");
    ui->lineEditDate->setPlaceholderText("YYYY-MM-DD"); // 使用标准日期格式

    // 数据库连接初始化
    db = QSqlDatabase::addDatabase("QODBC");
    db.setHostName("localhost");
    db.setDatabaseName("flight");
    db.setUserName(sqluser);
    db.setPassword(sqlpass);

    if (!db.open()) {
        qDebug() << "Failed to connect to MySQL.";
    } else {
        qDebug() << "Database opened successfully.";
    }
    ui->SearchBtn->setCursor(Qt::PointingHandCursor); // 设置鼠标光标
    ui->ReturnBtn->setCursor(Qt::PointingHandCursor); // 设置鼠标光标

}

inquiry::~inquiry()
{
    delete ui;
}

void inquiry::on_SearchBtn_clicked()
{
    if (!db.isOpen()) {
        qDebug() << "Database not open.";
        return;
    }

    // 获取用户输入
    QString departCity = ui->lineEditDepart->text();
    QString arrivalCity = ui->lineEditArrival->text();
    QString flightDate = ui->lineEditDate->text();

    // 检查输入是否为空
    if (departCity.isEmpty() || arrivalCity.isEmpty() || flightDate.isEmpty()) {
        QMessageBox::warning(this, "错误", "请输入完整的查询条件！");
        return;
    }

    // 执行查询，包含飞行日期和到达时间
    QSqlQuery query(db);
    query.prepare("SELECT flightNumber, time, arrivalTime, economyPrice, firstPrice, businessPrice, economyNum, firstNum, businessNum, takeoffCity, arrivalCity, flightDate "
                  "FROM flightinformation "
                  "WHERE takeoffCity = :takeoffCity AND arrivalCity = :arrivalCity AND flightDate = :flightDate");
    query.bindValue(":takeoffCity", departCity);
    query.bindValue(":arrivalCity", arrivalCity);
    query.bindValue(":flightDate", flightDate);

    if (!query.exec()) {
        qDebug() << "Query failed:" << query.lastError().text();
        return;
    } else {
        qDebug() << "Query executed successfully.";
    }

    // 清空表格
    ui->tableWidget->setRowCount(0);

    // 显示匹配的航班信息
    int rowCount = 0;
    ui->tableWidget->setColumnCount(12); // 修改为 12 列，包含到达时间
    ui->tableWidget->setHorizontalHeaderLabels(
        {"航班号", "起飞时间", "到达时间", "经济舱票价", "头等舱票价", "商务舱票价", "经济舱剩余", "头等舱剩余", "商务舱剩余", "出发地", "到达地", "飞行日期"});

    while (query.next()) {
        // 插入新行
        int row = ui->tableWidget->rowCount();
        ui->tableWidget->insertRow(row);

        // 填充数据
        for (int col = 0; col < 12; ++col) {
            QTableWidgetItem *item = new QTableWidgetItem(query.value(col).toString());
            ui->tableWidget->setItem(row, col, item);
        }

        // 创建订票按钮
        QPushButton *bookButton = new QPushButton("订票");
        ui->tableWidget->setCellWidget(row, 11, bookButton); // 在第 12 列放置按钮

        // 连接订票按钮点击事件
        connect(bookButton, &QPushButton::clicked, [this, row]() {
            QString flightNumber = ui->tableWidget->item(row, 0)->text();
            QString flightDate = ui->tableWidget->item(row, 11)->text();
            QString departTime = ui->tableWidget->item(row, 1)->text();
            QString arrivalTime = ui->tableWidget->item(row, 2)->text();
            QString departCity = ui->tableWidget->item(row, 9)->text();
            QString arrivalCity = ui->tableWidget->item(row, 10)->text();
            QString economyPrice = ui->tableWidget->item(row, 3)->text();
            QString firstPrice = ui->tableWidget->item(row, 4)->text();
            QString businessPrice = ui->tableWidget->item(row, 5)->text();

            book *bookPage = new book();
            bookPage->setFlightInformation(flightNumber, flightDate, departTime, arrivalTime,
                                           departCity, arrivalCity, economyPrice, firstPrice, businessPrice);
            this->hide();
            bookPage->show();
        });


        rowCount++;
    }

    qDebug() << "Matching flights: " << rowCount;

    // 调整表格列宽以适应内容
    ui->tableWidget->resizeColumnsToContents();
}

void inquiry::on_ReturnBtn_clicked()
{
    // 创建并显示 MainWindow 界面
    MainWindow *mainWindow = new MainWindow();
    // 隐藏当前界面
    this->close();
    mainWindow->show();
}

void inquiry::on_HomeButton_clicked()
{
    userspace *userSpace = new userspace();
    userSpace->setUserAccount(account_qj);
    this->hide();
    userSpace->show();
}
