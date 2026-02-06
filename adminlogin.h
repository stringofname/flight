#ifndef ADMINLOGIN_H
#define ADMINLOGIN_H

#include <QWidget>
#include <QSqlDatabase>

namespace Ui {
class AdminLogin;
}

class AdminLogin : public QWidget
{
    Q_OBJECT

public:
    explicit AdminLogin(QWidget *parent = nullptr);
    ~AdminLogin();

private slots:
    void on_PushBotton_clicked();    // 登录按钮槽函数
    void on_Buttonregerist_clicked(); // 注册按钮槽函数
    void on_checkBox_toggled(bool checked); // 显示密码复选框槽函数
    void on_AdReturnButton_clicked();

private:
    Ui::AdminLogin *ui;
    QSqlDatabase db;
};

#endif // ADMINLOGIN_H
