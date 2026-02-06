#ifndef FLIGHT_SEARCH_H
#define FLIGHT_SEARCH_H

#include <QWidget>
#include <QSqlDatabase>
#include <QTableWidgetItem>

namespace Ui {
class flight_search;
}

class flight_search : public QWidget
{
    Q_OBJECT

public:
    explicit flight_search(QWidget *parent = nullptr);
    ~flight_search();

private slots:
    void on_pushButton_clicked(); // 搜索按钮点击槽函数

    void on_ReturnButton_clicked();

private:
    Ui::flight_search *ui;
    QSqlDatabase db;

    void addModifyButton(int row, const QString &flightNumber); // 为某行添加修改按钮
    void openModifyWindow(const QString &flightNumber);
};

#endif // FLIGHT_SEARCH_H
