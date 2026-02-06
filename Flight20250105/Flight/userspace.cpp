#include "userspace.h"
#include "ui_userspace.h"
#include "global.h"
#include"inquiry.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlError>
#include <QPushButton>
#include <QDebug>

userspace::userspace(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::userspace)
{
    ui->setupUi(this);

    // 设置当前用户信息
    ui->labelSet1->setText(loggedInName);   // 设置姓名
    ui->labelSet2->setText(account_qj);     // 设置账号

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

    loadPurchasedTickets();
}


userspace::~userspace()
{
    delete ui;
}

void userspace::setUserAccount(const QString &account)
{
    currentAccount = account;
}

void userspace::loadPurchasedTickets()
{
    if (!db.isOpen()) {
        QMessageBox::warning(this, "错误", "数据库连接失败！");
        return;
    }

    QSqlQuery query(db);
    query.prepare("SELECT flightNumber, flightDate, seatClass, takeoffCity, arrivalCity, departTime, arrivalTime "
                  "FROM purchased_tickets WHERE passengerName = :name AND passengerIdCard = :idCard");
    query.bindValue(":name", loggedInName);
    query.bindValue(":idCard", loggedInIdCard);

    if (!query.exec()) {
        QMessageBox::warning(this, "错误", "加载购票记录失败！" + query.lastError().text());
        return;
    }

    // 清空表格
    ui->tableTickets->setRowCount(0);

    int row = 0;
    while (query.next()) {
        QString flightNumber = query.value(0).toString();
        QString flightDate = query.value(1).toString();
        QString seatClass = query.value(2).toString();
        QString takeoffCity = query.value(3).toString();
        QString arrivalCity = query.value(4).toString();
        QString departTime = query.value(5).toString();
        QString arrivalTime = query.value(6).toString();

        // 插入新行
        ui->tableTickets->insertRow(row);

        ui->tableTickets->setItem(row, 0, new QTableWidgetItem(flightNumber));
        ui->tableTickets->setItem(row, 1, new QTableWidgetItem(flightDate));
        ui->tableTickets->setItem(row, 2, new QTableWidgetItem(seatClass));
        ui->tableTickets->setItem(row, 3, new QTableWidgetItem(takeoffCity + " (" + departTime + ")"));
        ui->tableTickets->setItem(row, 4, new QTableWidgetItem(arrivalCity + " (" + arrivalTime + ")"));

        // 创建退票按钮
        QPushButton *cancelButton = new QPushButton("退票");
        ui->tableTickets->setCellWidget(row, 5, cancelButton);

        // 连接退票按钮信号与槽
        connect(cancelButton, &QPushButton::clicked, [this, flightNumber, flightDate, seatClass]() {
            cancelTicket(flightNumber, flightDate, seatClass);
        });
        row++;
    }
    // 连接返回按钮的点击事件到槽函数
    connect(ui->ReturnButtn, &QPushButton::clicked, this, &userspace::on_ReturnButton_clicked);


    // 调整列宽
    ui->tableTickets->resizeColumnsToContents();
}


void userspace::cancelTicket(const QString &flightNumber, const QString &flightDate, const QString &seatClass)
{
    // 弹出确认窗口
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "确认退票", "确定要退票吗？",
                                  QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes) {
        QSqlQuery query(db);
        query.prepare("DELETE FROM purchased_tickets WHERE flightNumber = :flightNumber AND flightDate = :flightDate "
                      "AND seatClass = :seatClass AND passengerName = :name AND passengerIdCard = :idCard");
        query.bindValue(":flightNumber", flightNumber);
        query.bindValue(":flightDate", flightDate);
        query.bindValue(":seatClass", seatClass);
        query.bindValue(":name", loggedInName);
        query.bindValue(":idCard", loggedInIdCard);

        if (query.exec()) {
            QMessageBox::information(this, "提示", "退票成功！");
            loadPurchasedTickets(); // 重新加载购票信息
        } else {
            QMessageBox::warning(this, "错误", "退票失败：" + query.lastError().text());
        }
    }
}

void userspace::on_ReturnButton_clicked()
{
    // 返回到 inquiry 界面
    inquiry *inquiryWindow = new inquiry();
    inquiryWindow->show();
    this->close(); // 关闭当前 userspace 窗口
}

