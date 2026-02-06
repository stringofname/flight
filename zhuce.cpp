#include "zhuce.h"
#include "ui_zhuce.h"
#include "global.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QDebug>
#include "mainwindow.h"
#include<QAction>

zhuce::zhuce(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::zhuce)
{
    ui->setupUi(this);

    // 设置占位符
    ui->lineEditAccount->setPlaceholderText("请输入账号");
    ui->lineEditPassword->setPlaceholderText("请输入密码");
    ui->lineEditRePassword->setPlaceholderText("请再次输入密码");
    ui->lineEditIdCard->setPlaceholderText("请输入证件号");
    ui->lineEditName->setPlaceholderText("请输入姓名");
    ui->lineEdit->setPlaceholderText("请输入电话号码");
    // 确保“重新输入密码”输入框始终隐藏密码
    ui->lineEditRePassword->setEchoMode(QLineEdit::Password);
    ui->lineEditPassword->setEchoMode(QLineEdit::Password);
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
    // 添加眼睛图标到密码输入框
    togglePasswordAction = new QAction(this);
    togglePasswordAction->setIcon(QIcon(":/Image/Imageres/hide.png")); // 初始为闭合的眼睛
    togglePasswordAction->setCheckable(true);
    ui->lineEditPassword->addAction(togglePasswordAction, QLineEdit::TrailingPosition);

    connect(togglePasswordAction, &QAction::toggled, this, &zhuce::togglePasswordVisibility);
    // 连接回车键信号
    connect(ui->lineEditAccount, SIGNAL(returnPressed()), ui->lineEditPassword, SLOT(setFocus()));
    connect(ui->lineEditPassword, SIGNAL(returnPressed()), ui->lineEditRePassword, SLOT(setFocus()));
    connect(ui->lineEditRePassword, SIGNAL(returnPressed()), ui->lineEditName, SLOT(setFocus()));
    connect(ui->lineEditName, SIGNAL(returnPressed()), ui->lineEditIdCard, SLOT(setFocus()));
    connect(ui->lineEditIdCard, SIGNAL(returnPressed()), ui->lineEdit, SLOT(setFocus()));
    connect(ui->lineEdit, SIGNAL(returnPressed()), this, SLOT(on_zhuceBtn_clicked()));


}

zhuce::~zhuce()
{
    delete ui;
}
void zhuce::togglePasswordVisibility()
{
    if (togglePasswordAction->isChecked()) {
        ui->lineEditPassword->setEchoMode(QLineEdit::Normal);
        togglePasswordAction->setIcon(QIcon(":/Image/Imageres/view.png")); // 更换为睁开的眼睛
    } else {
        ui->lineEditPassword->setEchoMode(QLineEdit::Password);
        togglePasswordAction->setIcon(QIcon(":/Image/Imageres/hide.png")); // 更换为闭合的眼睛
    }
}
void zhuce::on_zhuceBtn_clicked()
{
    // 获取用户输入
    QString account = ui->lineEditAccount->text();
    QString password = ui->lineEditPassword->text();
    QString rePassword = ui->lineEditRePassword->text();
    QString name = ui->lineEditName->text();
    QString idCard = ui->lineEditIdCard->text();
    QString phone = ui->lineEdit->text();

    // 检查输入是否为空
    if (account.isEmpty() || password.isEmpty() || rePassword.isEmpty() || name.isEmpty() || idCard.isEmpty() || phone.isEmpty()) {
        QMessageBox::warning(this, "错误", "所有字段必须填写！");
        return;
    }

    // 检查两次输入的密码是否一致
    if (password != rePassword) {
        QMessageBox::warning(this, "错误", "两次输入的密码不一致！");
        return;
    }

    // 检查账号是否已存在
    QSqlQuery query(db);
    query.prepare("SELECT account FROM admin WHERE account = :account");
    query.bindValue(":account", account);
    if (query.exec() && query.next()) {
        QMessageBox::warning(this, "提示", "该账号已存在！");
        return;
    }

    // 插入新用户
    query.prepare("INSERT INTO admin (account, password, name, id_card, phone) VALUES (:account, :password, :name, :id_card, :phone)");
    query.bindValue(":account", account);
    query.bindValue(":password", password);
    query.bindValue(":name", name);
    query.bindValue(":id_card", idCard);
    query.bindValue(":phone", phone);

    if (query.exec()) {
        QMessageBox::information(this, "提示", "注册成功！");
        this->hide();
        MainWindow *mainWindow = new MainWindow();
        mainWindow->show();
    } else {
        QMessageBox::warning(this, "错误", "注册失败！");
        qDebug() << "Insert Error:" << query.lastError().text();
    }
}

void zhuce::on_cancelBtn_clicked()
{
    this->hide();
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
}
