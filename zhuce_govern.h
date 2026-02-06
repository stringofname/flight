#ifndef ZHUCE_GOVERN_H
#define ZHUCE_GOVERN_H

#include <QWidget>
#include <QSqlDatabase>

namespace Ui {
class zhuce_govern;
}

class zhuce_govern : public QWidget
{
    Q_OBJECT

public:
    explicit zhuce_govern(QWidget *parent = nullptr);
    ~zhuce_govern();

private slots:
    void on_pushButton_clicked();   // 确定按钮
    void on_pushButton_2_clicked(); // 取消按钮

private:
    Ui::zhuce_govern *ui;
    QSqlDatabase db;

};

#endif // ZHUCE_GOVERN_H
