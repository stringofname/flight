#ifndef FLIGHT_ADD_H
#define FLIGHT_ADD_H

#include <QWidget>
#include <QSqlDatabase>

namespace Ui {
class flight_add;
}

class flight_add : public QWidget
{
    Q_OBJECT

public:
    explicit flight_add(QWidget *parent = nullptr);
    ~flight_add();

private slots:
    void on_pushButton_clicked();    // 添加航班按钮的槽函数
     void on_ReturnBtn_clicked();

private:
    Ui::flight_add *ui;
    QSqlDatabase db;

    bool validateInputs();  // 检查输入的有效性
};

#endif // FLIGHT_ADD_H
