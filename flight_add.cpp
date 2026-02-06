#include "flight_add.h"
#include "ui_flight_add.h"
#include "global.h"
#include"governor.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QDebug>

flight_add::flight_add(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::flight_add)
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

flight_add::~flight_add()
{
    delete ui;
}

void flight_add::on_pushButton_clicked()
{
    // 检查输入有效性
    if (!validateInputs()) {
        return;
    }

    // 获取用户输入
    QString flightNumber = ui->flightNumber->text();
    QString flightDate = ui->flightDate->text();
    QString takeoffCity = ui->takeoffCity->text();
    QString arrivalCity = ui->arrivalCity->text();
    QString time = ui->time->text();
    QString arrivalTime = ui->arrivalTime->text();
    QString economyPrice = ui->economyPrice->text();
    QString firstPrice = ui->firstPrice->text();
    QString businessPrice = ui->businessPrice->text();
    QString economyNum = ui->economyNum->text();
    QString firstNum = ui->firstNum->text();
    QString businessNum = ui->businessNum->text();

    // 插入航班信息到数据库
    QSqlQuery query(db);
    query.prepare("INSERT INTO flightinformation (flightNumber, flightDate, takeoffCity, arrivalCity, time, arrivalTime, "
                  "economyPrice, firstPrice, businessPrice, economyNum, firstNum, businessNum) "
                  "VALUES (:flightNumber, :flightDate, :takeoffCity, :arrivalCity, :time, :arrivalTime, "
                  ":economyPrice, :firstPrice, :businessPrice, :economyNum, :firstNum, :businessNum)");
    query.bindValue(":flightNumber", flightNumber);
    query.bindValue(":flightDate", flightDate);
    query.bindValue(":takeoffCity", takeoffCity);
    query.bindValue(":arrivalCity", arrivalCity);
    query.bindValue(":time", time);
    query.bindValue(":arrivalTime", arrivalTime);
    query.bindValue(":economyPrice", economyPrice);
    query.bindValue(":firstPrice", firstPrice);
    query.bindValue(":businessPrice", businessPrice);
    query.bindValue(":economyNum", economyNum);
    query.bindValue(":firstNum", firstNum);
    query.bindValue(":businessNum", businessNum);

    if (query.exec()) {
        QMessageBox::information(this, "提示", "航班添加成功！");
        // 清空输入框
        ui->flightNumber->clear();
        ui->flightDate->clear();
        ui->takeoffCity->clear();
        ui->arrivalCity->clear();
        ui->time->clear();
        ui->arrivalTime->clear();
        ui->economyPrice->clear();
        ui->firstPrice->clear();
        ui->businessPrice->clear();
        ui->economyNum->clear();
        ui->firstNum->clear();
        ui->businessNum->clear();
    } else {
        QMessageBox::warning(this, "错误", "航班添加失败：" + query.lastError().text());
    }
}

bool flight_add::validateInputs()
{
    // 验证输入是否为空
    if (ui->flightNumber->text().isEmpty() || ui->flightDate->text().isEmpty() ||
        ui->takeoffCity->text().isEmpty() || ui->arrivalCity->text().isEmpty() ||
        ui->time->text().isEmpty() || ui->arrivalTime->text().isEmpty() ||
        ui->economyPrice->text().isEmpty() || ui->firstPrice->text().isEmpty() ||
        ui->businessPrice->text().isEmpty() || ui->economyNum->text().isEmpty() ||
        ui->firstNum->text().isEmpty() || ui->businessNum->text().isEmpty()) {
        QMessageBox::warning(this, "错误", "所有字段必须填写！");
        return false;
    }

    // 验证价格和座位数是否为正数
    bool ok1, ok2, ok3, ok4, ok5, ok6;
    ui->economyPrice->text().toDouble(&ok1);
    ui->firstPrice->text().toDouble(&ok2);
    ui->businessPrice->text().toDouble(&ok3);
    ui->economyNum->text().toInt(&ok4);
    ui->firstNum->text().toInt(&ok5);
    ui->businessNum->text().toInt(&ok6);

    if (!(ok1 && ok2 && ok3 && ok4 && ok5 && ok6)) {
        QMessageBox::warning(this, "错误", "价格和座位数必须是有效数字！");
        return false;
    }

    return true;
}
void flight_add::on_ReturnBtn_clicked()
{
    // 返回按钮点击时，关闭当前修改页面
    this->close();
    // 删除当前窗口对象
    this->deleteLater();


    // 在 governor 页面重新显示
    governor *governorWindow = new governor();
    governorWindow->show();
}

