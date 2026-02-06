#ifndef ZHUCE_H
#define ZHUCE_H

#include <QWidget>
#include <QSqlDatabase>

namespace Ui {
class zhuce;
}

class zhuce : public QWidget
{
    Q_OBJECT

public:
    explicit zhuce(QWidget *parent = nullptr);
    ~zhuce();

private slots:
    void on_zhuceBtn_clicked();
    void on_cancelBtn_clicked();
    void togglePasswordVisibility(); // 新增槽函数

private:
    Ui::zhuce *ui;
    QSqlDatabase db;
    bool isPasswordVisible; // 记录密码是否可见
    QAction *togglePasswordAction; // 眼睛图标动作
};

#endif // ZHUCE_H
