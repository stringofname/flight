#include "flight_search.h"
#include "ui_flight_search.h"
#include "flight_change.h"  // 引入 flight_change 界面
#include "global.h"
#include "governor.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QSqlRecord>
#include <QPushButton>
#include <QDebug>

flight_search::flight_search(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::flight_search)
{
    ui->setupUi(this);

    // 初始化数据库连接
    if (!QSqlDatabase::contains("qt_sql_default_connection")) {
        db = QSqlDatabase::addDatabase("QODBC");
        db.setHostName("localhost");
        db.setDatabaseName("flight");
        db.setUserName(sqluser);
        db.setPassword(sqlpass);
    } else {
        db = QSqlDatabase::database("qt_sql_default_connection");
    }

    if (!db.open()) {
        qDebug() << "Failed to connect to the database.";
    } else {
        qDebug() << "Database connected.";
    }
}

flight_search::~flight_search()
{
    delete ui;
}

void flight_search::on_pushButton_clicked()
{
    QString takeoffCity = ui->lineEditChu->text();
    QString arrivalCity = ui->lineEditDao->text();
    QString flightDate = ui->lineEditDate->text();

    // 检查输入是否为空
    if (takeoffCity.isEmpty() || arrivalCity.isEmpty() || flightDate.isEmpty()) {
        QMessageBox::warning(this, "错误", "请输入完整的出发地、到达地和日期！");
        return;
    }

    // 执行搜索操作
    QSqlQuery query(db);
    query.prepare("SELECT flightNumber, time, economyPrice, firstPrice, businessPrice, "
                  "economyNum, firstNum, businessNum FROM flightinformation "
                  "WHERE takeoffCity = :takeoffCity AND arrivalCity = :arrivalCity AND flightDate = :flightDate");
    query.bindValue(":takeoffCity", takeoffCity);
    query.bindValue(":arrivalCity", arrivalCity);
    query.bindValue(":flightDate", flightDate);

    if (!query.exec()) {
        QMessageBox::warning(this, "错误", "搜索失败：" + query.lastError().text());
        return;
    }

    // 清空表格
    ui->tableWidget->setRowCount(0);

    int row = 0;
    while (query.next()) {
        ui->tableWidget->insertRow(row);

        // 设置航班信息到表格
        for (int col = 0; col < query.record().count(); ++col) {
            QTableWidgetItem *item = new QTableWidgetItem(query.value(col).toString());
            ui->tableWidget->setItem(row, col, item);
        }

        // 添加修改按钮
        addModifyButton(row, query.value(0).toString()); // 传入航班号
        row++;
    }

    ui->tableWidget->resizeColumnsToContents();
    QMessageBox::information(this, "提示", "搜索完成，共找到 " + QString::number(row) + " 个结果。");
}

void flight_search::addModifyButton(int row, const QString &flightNumber)
{
    QPushButton *modifyButton = new QPushButton("修改");
    modifyButton->setStyleSheet(
        "QPushButton { "
        "background-color: rgb(233, 28, 35); "
        "color: white; "
        "border-radius: 5px; "
        "padding: 3px; "
        "} "
        "QPushButton:hover { background-color: rgb(255, 32, 36); }"
        );

    connect(modifyButton, &QPushButton::clicked, [this, flightNumber]() {
        qDebug() << "Modify button clicked for flight number:" << flightNumber;
        // 点击后跳转到修改界面并传递航班号
        openModifyWindow(flightNumber);
    });

    ui->tableWidget->setCellWidget(row, ui->tableWidget->columnCount() - 1, modifyButton);
}

void flight_search::openModifyWindow(const QString &flightNumber)
{
    // 隐藏当前页面
    this->hide();

    // 创建 flight_change 窗口实例并传递航班号
    flight_change *changeWindow = new flight_change(flightNumber);

    // 在 changeWindow 中实现返回按钮的逻辑
    changeWindow->show();
}


void flight_search::on_ReturnButton_clicked()
{
    // 创建并显示 governor 界面
    governor *governor1 = new governor();
    // 隐藏当前界面
    this->close();
    governor1->show();
}

