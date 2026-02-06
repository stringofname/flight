#include "flight_change.h"
#include "ui_flight_change.h"
#include"flight_search.h"
#include <QMessageBox>
#include <QSqlQuery>

flight_change::flight_change(const QString &flightNumber, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::flight_change),
    currentFlightNumber(flightNumber)
{
    ui->setupUi(this);
    loadFlightDetails(flightNumber);  // 加载航班信息
}

flight_change::~flight_change()
{
    delete ui;
}

void flight_change::loadFlightDetails(const QString &flightNumber)
{
    QSqlQuery query;
    query.prepare("SELECT flightNumber, flightDate, time, arrivalTime, "
                  "economyPrice, firstPrice, businessPrice, economyNum, "
                  "firstNum, businessNum, takeoffCity, arrivalCity "
                  "FROM flightinformation WHERE flightNumber = :flightNumber");

    query.bindValue(":flightNumber", flightNumber);
    query.exec();

    if (query.next()) {
        ui->flightNumber->setText(query.value("flightNumber").toString());
        ui->flightDate->setText(query.value("flightDate").toString());
        ui->time->setText(query.value("time").toString());
        ui->arrivalTime->setText(query.value("arrivalTime").toString());
        ui->economyPrice->setText(query.value("economyPrice").toString());
        ui->firstPrice->setText(query.value("firstPrice").toString());
        ui->businessPrice->setText(query.value("businessPrice").toString());
        ui->economyNum->setText(query.value("economyNum").toString());
        ui->firstNum->setText(query.value("firstNum").toString());
        ui->businessNum->setText(query.value("businessNum").toString());
        ui->takeoffCity->setText(query.value("takeoffCity").toString());
        ui->arrivalCity->setText(query.value("arrivalCity").toString());
    } else {
        QMessageBox::warning(this, "错误", "没有找到该航班信息。");
    }
}

void flight_change::on_pushButton_clicked()
{
    QString flightNumber = ui->flightNumber->text();
    QSqlQuery query;
    query.prepare("UPDATE flightinformation SET "
                  "flightDate = :flightDate, time = :time, arrivalTime = :arrivalTime, "
                  "economyPrice = :economyPrice, firstPrice = :firstPrice, businessPrice = :businessPrice, "
                  "economyNum = :economyNum, firstNum = :firstNum, businessNum = :businessNum, "
                  "takeoffCity = :takeoffCity, arrivalCity = :arrivalCity "
                  "WHERE flightNumber = :flightNumber");

    query.bindValue(":flightNumber", currentFlightNumber);  // 保持原始航班号不变
    query.bindValue(":flightDate", ui->flightDate->text());
    query.bindValue(":time", ui->time->text());
    query.bindValue(":arrivalTime", ui->arrivalTime->text());
    query.bindValue(":economyPrice", ui->economyPrice->text());
    query.bindValue(":firstPrice", ui->firstPrice->text());
    query.bindValue(":businessPrice", ui->businessPrice->text());
    query.bindValue(":economyNum", ui->economyNum->text());
    query.bindValue(":firstNum", ui->firstNum->text());
    query.bindValue(":businessNum", ui->businessNum->text());
    query.bindValue(":takeoffCity", ui->takeoffCity->text());
    query.bindValue(":arrivalCity", ui->arrivalCity->text());

    if (query.exec()) {
        QMessageBox::information(this, "成功", "航班信息已成功更新！");
    } else {
        QMessageBox::warning(this, "错误", "更新航班信息时发生错误。");
    }
}
void flight_change::on_ReturnBtn_clicked()
{
    // 返回按钮点击时，关闭当前修改页面
    this->close();

    // 在 flight_search 页面重新显示
    flight_search *searchWindow = new flight_search();
    searchWindow->show();
}




