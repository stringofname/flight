#include "adminlogin.h"
#include "ui_adminlogin.h"
#include "zhuce_govern.h"
#include"global.h"
#include"governor.h"
#include"mainwindow.h"
#include"qboxlayout.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QDebug>

AdminLogin::AdminLogin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AdminLogin)
{
    ui->setupUi(this);

    // 设置占位文本
    ui->lineEditAccount->setPlaceholderText("请输入管理员账号");
    ui->lineEditPassword->setPlaceholderText("请输入管理员密码");

    // 初始化数据库连接
    if (!QSqlDatabase::contains("qt_sql_default_connection")) {
        db = QSqlDatabase::addDatabase("QODBC");
        db.setHostName("localhost");
        db.setDatabaseName("flight");
        db.setUserName(sqluser);  // 替换为您的数据库用户名
        db.setPassword(sqlpass);  // 替换为您的数据库密码
    } else {
        db = QSqlDatabase::database("qt_sql_default_connection");
    }

    if (!db.open()) {
        qDebug() << "Failed to connect to the database.";
    } else {
        qDebug() << "Database connected.";
    }
    connect(ui->lineEditAccount, SIGNAL(returnPressed()), ui->lineEditPassword, SLOT(setFocus()));
    connect(ui->lineEditPassword, SIGNAL(returnPressed()), this, SLOT(on_PushBotton_clicked()));

}

AdminLogin::~AdminLogin()
{
    delete ui;
}

void AdminLogin::on_PushBotton_clicked()
{
    // 获取输入信息
    QString account = ui->lineEditAccount->text();
    QString password = ui->lineEditPassword->text();

    if (account.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, "错误", "账号和密码不能为空！");
        return;
    }

    // 查询管理员账号信息
    QSqlQuery query(db);
    query.prepare("SELECT password FROM admin_info WHERE account = :account");
    query.bindValue(":account", account);

    if (!query.exec()) {
        QMessageBox::warning(this, "错误", "数据库查询失败：" + query.lastError().text());
        return;
    }

    if (query.next()) {
        QString dbPassword = query.value(0).toString();
        if (password == dbPassword) {
            QMessageBox::information(this, "提示", "登录成功！");
            governor *governorWindow = new governor();
            governorWindow->show();
            this->close(); // 关闭当前登录界面
        } else {
            QMessageBox::warning(this, "错误", "密码错误！");
        }
    } else {
        QMessageBox::warning(this, "错误", "账号不存在！");
    }
}

void AdminLogin::on_Buttonregerist_clicked()
{
    // 显示管理员注册界面
    zhuce_govern *registerPage = new zhuce_govern();
    registerPage->show();
    this->close();
}


void AdminLogin::on_checkBox_toggled(bool checked)
{
    // 显示或隐藏密码
    if (checked) {
        ui->lineEditPassword->setEchoMode(QLineEdit::Normal);
    } else {
        ui->lineEditPassword->setEchoMode(QLineEdit::Password);
    }
}

void AdminLogin::on_AdReturnButton_clicked()
{
    // 创建并显示 MainWindow 界面
    MainWindow *mainWindow = new MainWindow();
    // 隐藏当前界面
    this->close();
    mainWindow->show();
}

