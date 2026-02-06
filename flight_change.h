#ifndef FLIGHT_CHANGE_H
#define FLIGHT_CHANGE_H

#include <QWidget>
#include <QString> // 引入 QString
#include <QSqlQuery>

namespace Ui {
class flight_change;
}

class flight_change : public QWidget
{
    Q_OBJECT

public:
    explicit flight_change(const QString &flightNumber, QWidget *parent = nullptr); // 添加 flightNumber 参数
    ~flight_change();

    void loadFlightDetails(const QString &flightNumber);

private slots:
    void on_pushButton_clicked();
    void on_ReturnBtn_clicked();

private:
    Ui::flight_change *ui;
    QString currentFlightNumber;  // 保存当前航班号
};

#endif // FLIGHT_CHANGE_H
