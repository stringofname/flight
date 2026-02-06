#include "book.h"
#include "ui_book.h"
#include "inquiry.h" // 引入 inquiry 头文件
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include "global.h" // 引入全局变量

book::book(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::book)
{
    ui->setupUi(this);

    // 数据库连接初始化
    db = QSqlDatabase::addDatabase("QODBC");
    db.setHostName("localhost");
    db.setDatabaseName("flight");
    db.setUserName(sqluser);  // 替换为您的数据库用户名
    db.setPassword(sqlpass);  // 替换为您的数据库密码

    if (!db.open()) {
        qDebug() << "Failed to connect to MySQL.";
    } else {
        qDebug() << "Database opened successfully.";
    }
}

book::~book()
{
    delete ui;
}

void book::on_pushButton_clicked()
{
    QString passengerName = ui->lineEditName->text();
    QString passengerIdCard = ui->lineEdit_8->text();
    QString seatClass = ui->comboBox->currentText();
    QString flightNumber = ui->lineEditFlightNum->text();
    QString flightDate = ui->lineEditDate->text();
    QString departTime = ui->lineEditDepartTime->text();
    QString arrivalTime = ui->lineEditArrivalTime->text();
    QString departCity = ui->lineEditDepart->text();
    QString arrivalCity = ui->lineEditArrival->text();

    // 校验输入
    if (passengerName.isEmpty() || passengerIdCard.isEmpty()) {
        QMessageBox::warning(this, "错误", "姓名和身份证号不能为空！");
        return;
    }

    // 检查输入的姓名和身份证是否与登录账号的信息匹配
    if (passengerName != loggedInName || passengerIdCard != loggedInIdCard) {
        QMessageBox::warning(this, "错误", "姓名或身份证号与登录账号不匹配！");
        return;
    }

    // 插入购票信息到数据库
    QSqlQuery query(db);
    query.prepare(
        "INSERT INTO purchased_tickets "
        "(flightNumber, flightDate, departTime, arrivalTime, seatClass, "
        "takeoffCity, arrivalCity, passengerName, passengerIdCard) "
        "VALUES (:flightNumber, :flightDate, :departTime, :arrivalTime, :seatClass, "
        ":takeoffCity, :arrivalCity, :passengerName, :passengerIdCard)"
        );
    query.bindValue(":flightNumber", flightNumber);
    query.bindValue(":flightDate", flightDate);
    query.bindValue(":departTime", departTime);
    query.bindValue(":arrivalTime", arrivalTime);
    query.bindValue(":seatClass", seatClass);
    query.bindValue(":takeoffCity", departCity);
    query.bindValue(":arrivalCity", arrivalCity);
    query.bindValue(":passengerName", passengerName);
    query.bindValue(":passengerIdCard", passengerIdCard);

    if (query.exec()) {
        QMessageBox::information(this, "提示", "购票成功！");

        // 返回到 inquiry 界面
        this->hide(); // 隐藏当前 book 窗口
        inquiry *inquiryWindow = new inquiry();
        inquiryWindow->show(); // 显示 inquiry 窗口

    } else {
        QMessageBox::warning(this, "错误", "购票失败！" + query.lastError().text());
    }
}

void book::setFlightInformation(const QString &flightNumber, const QString &flightDate,
                                const QString &departTime, const QString &arrivalTime,
                                const QString &departCity, const QString &arrivalCity,
                                const QString &economyPrice, const QString &firstPrice, const QString &businessPrice)
{
    // 设置 UI 的各个字段
    ui->lineEditFlightNum->setText(flightNumber);
    ui->lineEditDate->setText(flightDate);
    ui->lineEditDepartTime->setText(departTime);
    ui->lineEditArrivalTime->setText(arrivalTime);
    ui->lineEditDepart->setText(departCity);
    ui->lineEditArrival->setText(arrivalCity);
    ui->lineEditPrice_1->setText(economyPrice);
    ui->lineEditPrice_2->setText(firstPrice);
    ui->lineEditPrice_3->setText(businessPrice);
}

void book::on_pushButton_2_clicked()
{
    // 创建并显示 MainWindow 界面
    inquiry *inquiry1 = new inquiry();
    // 隐藏当前界面
    this->close();
    inquiry1->show();
}

