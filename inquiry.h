#ifndef INQUIRY_H
#define INQUIRY_H

#include <QWidget>
#include <QSqlDatabase>

namespace Ui {
class inquiry;
}

class inquiry : public QWidget
{
    Q_OBJECT


public:
    explicit inquiry(QWidget *parent = nullptr);
    ~inquiry();

private slots:
    void on_SearchBtn_clicked(); // 搜索按钮槽函数
    void on_ReturnBtn_clicked(); // 返回按钮槽函数
    void on_HomeButton_clicked();//个人中心按钮

private:
    Ui::inquiry *ui;
    QSqlDatabase db;
};

#endif // INQUIRY_H
