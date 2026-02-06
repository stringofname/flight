#ifndef BOOK_H
#define BOOK_H

#include <QWidget>
#include <QSqlDatabase>

namespace Ui {
class book;
}

class book : public QWidget
{
    Q_OBJECT

public:
    explicit book(QWidget *parent = nullptr);
    ~book();

    void setFlightInformation(const QString &flightNumber, const QString &flightDate,
                              const QString &departTime, const QString &arrivalTime,
                              const QString &departCity, const QString &arrivalCity,
                              const QString &economyPrice, const QString &firstPrice, const QString &businessPrice);

private slots:
    void on_pushButton_clicked(); // 订票按钮槽函数

    void on_pushButton_2_clicked();

private:
    Ui::book *ui;
    QSqlDatabase db;
    QString loggedInAccount; // 当前登录的账号信息，用于对比身份
};

#endif // BOOK_H
