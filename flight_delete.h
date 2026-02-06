#ifndef FLIGHT_DELETE_H
#define FLIGHT_DELETE_H

#include <QWidget>
#include <QSqlDatabase>

namespace Ui {
class flight_delete;
}

class flight_delete : public QWidget
{
    Q_OBJECT

public:
    explicit flight_delete(QWidget *parent = nullptr);
    ~flight_delete();

private slots:
    void on_pushButton_clicked(); // 删除按钮槽函数

    void on_ReturnButton_clicked();

private:
    Ui::flight_delete *ui;
    QSqlDatabase db;
};

#endif // FLIGHT_DELETE_H
