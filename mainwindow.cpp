#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtDebug>
#include "zhuce.h"
#include "inquiry.h"
#include "global.h"
#include "adminlogin.h"
#include "ui_adminlogin.h"
#include <QMouseEvent> // 添加此行以包含 QMouseEvent
#include "QGraphicsDropShadowEffect"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)

{
    ui->setupUi(this);
    ui->lineEditAccount->setPlaceholderText("请输入账号");
    ui->lineEditPassword->setPlaceholderText("请输入密码");
    // 确保密码输入框默认隐藏密码
    ui->lineEditPassword->setEchoMode(QLineEdit::Password);
    // 使用旧的连接语法
    connect(ui->lineEditAccount, SIGNAL(returnPressed()), ui->lineEditPassword, SLOT(setFocus()));
    connect(ui->lineEditPassword, SIGNAL(returnPressed()), this, SLOT(on_LoginButton_clicked()));

//     this->setStyleSheet(R"(
//     QMainWindow {
//         background-color: #FFFFFF; /* 纯白色背景 */
//         border: 2px solid #E0E0E0; /* 淡灰色边框 */
//     }
// )");
    // 添加增强的阴影效果
    // QGraphicsDropShadowEffect *shadow = new QGraphicsDropShadowEffect(this);
    // shadow->setBlurRadius(15);
    // shadow->setColor(QColor(0, 0, 0, 220));
    // shadow->setOffset(2, 2);
    // this->setGraphicsEffect(shadow);

    ui->LoginButton->setCursor(Qt::PointingHandCursor); // 设置鼠标光标
    ui->RegisterButton->setCursor(Qt::PointingHandCursor); // 设置鼠标光标
}

MainWindow::~MainWindow()
{
    delete ui;
}
// 实现鼠标按下事件
void MainWindow::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton) {
        m_dragging = true;
       // m_dragPosition = event->globalPosition().toPoint() - this->frameGeometry().topLeft();
        event->accept();
    }
}

// 实现鼠标移动事件
void MainWindow::mouseMoveEvent(QMouseEvent *event)
{
    if (m_dragging && (event->buttons() & Qt::LeftButton)) {
     //   this->move(event->globalPosition().toPoint() - m_dragPosition);
        event->accept();
    }
}

// 实现鼠标释放事件
void MainWindow::mouseReleaseEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton) {
        m_dragging = false;
        event->accept();
    }
}

void MainWindow::on_checkBox_toggled(bool checked)
{
    if (checked) {
        ui->lineEditPassword->setEchoMode(QLineEdit::Normal);
    } else {
        ui->lineEditPassword->setEchoMode(QLineEdit::Password);
    }
}

void MainWindow::on_LoginButton_clicked() // 登陆(按钮)检测
{
    QString account = ui->lineEditAccount->text();
    QString password = ui->lineEditPassword->text();
    qDebug() << "用户名：" << account << "密码:" << password;

    QSqlDatabase db;
    if (QSqlDatabase::contains("qt_sql_default_connection"))
        db = QSqlDatabase::database("qt_sql_default_connection");
    else
        db = QSqlDatabase::addDatabase("QODBC");

    db.setHostName("localhost");
    db.setDatabaseName("flight");
    db.setUserName(sqluser);
    db.setPassword(sqlpass);

    if (!db.open()) {
        qDebug() << "Failed to connect to root mysql admin";
    } else {
        qDebug() << "open";
    }

    QSqlQuery query(db);
    db.exec("SET NAMES 'GBK'");
    query.exec("SELECT id, account, password, name, id_card FROM admin"); // 修改查询语句

    bool T1 = false;
    while (query.next()) {
        QString acco = query.value(1).toString();
        QString pass = query.value(2).toString();
        QString name = query.value(3).toString();     // 获取用户姓名
        QString idCard = query.value(4).toString();  // 获取用户身份证号

        qDebug() << acco << pass << name << idCard;

        if (account.compare(acco) == 0 && password.compare(pass) == 0) {
            // 存储全局变量
            loggedInName = name;
            loggedInIdCard = idCard;

            password_qj = password;
            account_qj = account;
            T1 = true;

            this->hide();
            inquiry *inquiry1 = new inquiry();
            inquiry1->show();

            ui->lineEditAccount->setPlaceholderText("请输入手机号");
            ui->lineEditPassword->setPlaceholderText("请输入密码");
            ui->lineEditAccount->clear();
            ui->lineEditPassword->clear();
            QMessageBox::information(this, "提示", "登录成功");
            break;
        }
    }

    if (T1 == false)
        QMessageBox::information(this, "警告", "用户名或密码错误");
}

void MainWindow::on_RegisterButton_clicked()
{
    zhuce *zhuce1 = new zhuce();
    zhuce1->show();
    this->hide();
    ui->lineEditAccount->clear();
    ui->lineEditPassword->clear();
}

void MainWindow::on_pushButton_clicked()
{
    // 创建管理员登录界面
    AdminLogin *adminLogin = new AdminLogin();
    adminLogin->show();

    // 隐藏当前界面
    this->hide();
}

void MainWindow::on_pushButtonClose_clicked()
{

}


void MainWindow::on_pushButtonMin_clicked()
{

}

