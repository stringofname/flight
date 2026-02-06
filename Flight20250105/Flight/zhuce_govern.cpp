#include "zhuce_govern.h"
#include "ui_zhuce_govern.h"
#include"global.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include "mainwindow.h"
#include "adminlogin.h"
#include "zhuce.h"

zhuce_govern::zhuce_govern(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::zhuce_govern)
{
    ui->setupUi(this);

    // 初始化数据库连接
    if (!QSqlDatabase::contains("qt_sql_default_connection")) {
        db = QSqlDatabase::addDatabase("QODBC");
        db.setHostName("localhost");
        db.setDatabaseName("flight");
        db.setUserName(sqluser);
        db.setPassword(sqlpass);
    } else {
        db = QSqlDatabase::database("qt_sql_default_connection");
    }

    if (!db.open()) {
        qDebug() << "Failed to connect to the database.";
    } else {
        qDebug() << "Database connected.";
    }


    // 连接回车键信号
    connect(ui->lineEditAccount, SIGNAL(returnPressed()), ui->lineEditPassword, SLOT(setFocus()));
    connect(ui->lineEditPassword, SIGNAL(returnPressed()), ui->lineEditPassword_2, SLOT(setFocus()));
    connect(ui->lineEditPassword_2, SIGNAL(returnPressed()), ui->lineEditName, SLOT(setFocus()));
    connect(ui->lineEditName, SIGNAL(returnPressed()), ui->lineEditGongHao, SLOT(setFocus()));
    connect(ui->lineEditGongHao, SIGNAL(returnPressed()), this, SLOT(on_pushButton_clicked()));
}

zhuce_govern::~zhuce_govern()
{
    delete ui;
}

void zhuce_govern::on_pushButton_clicked()
{
    // 获取输入信息
    QString account = ui->lineEditAccount->text();
    QString password = ui->lineEditPassword->text();
    QString rePassword = ui->lineEditPassword_2->text();
    QString name = ui->lineEditName->text();
    QString employeeNumber = ui->lineEditGongHao->text();

    // 检查是否为空
    if (account.isEmpty() || password.isEmpty() || rePassword.isEmpty() || name.isEmpty() || employeeNumber.isEmpty()) {
        QMessageBox::warning(this, "错误", "所有字段必须填写！");
        return;
    }

    // 检查密码是否一致
    if (password != rePassword) {
        QMessageBox::warning(this, "错误", "两次输入的密码不一致！");
        return;
    }

    // 检查账号是否已存在
    QSqlQuery query(db);
    query.prepare("SELECT account FROM admin_info WHERE account = :account");
    query.bindValue(":account", account);
    if (query.exec() && query.next()) {
        QMessageBox::warning(this, "错误", "该账号已存在！");
        return;
    }

    // 插入管理员信息
    query.prepare("INSERT INTO admin_info (account, password, name, employee_number) "
                  "VALUES (:account, :password, :name, :employee_number)");
    query.bindValue(":account", account);
    query.bindValue(":password", password);
    query.bindValue(":name", name);
    query.bindValue(":employee_number", employeeNumber);

    if (query.exec()) {
        QMessageBox::information(this, "提示", "注册成功！");
        this->close();
        MainWindow *mainWindow = new MainWindow();
        mainWindow->show();
    } else {
        QMessageBox::warning(this, "错误", "注册失败！" + query.lastError().text());
        qDebug() << "Insert Error:" << query.lastError().text();
    }
}

void zhuce_govern::on_pushButton_2_clicked()
{
    // 取消并返回主界面
    this->close();
    AdminLogin *adminLogin = new AdminLogin();
    adminLogin->show();
}
