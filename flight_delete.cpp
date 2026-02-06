#include "flight_delete.h"
#include "ui_flight_delete.h"
#include "global.h"
#include "governor.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QDebug>

flight_delete::flight_delete(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::flight_delete)
{
    ui->setupUi(this);
    //disconnect(ui->pushButton, nullptr, this, nullptr); // 先断开所有关联，防止重复(这里已经自动连接上了 不需要额外连接)
    //connect(ui->pushButton, &QPushButton::clicked, this, &flight_delete::on_pushButton_clicked);
    // ui->pushButton->setStyleSheet(
    //     "QPushButton { "
    //     "color: red; "  // 字体颜色为红色
    //     "background-color: transparent; "  // 背景透明
    //     "border: none; "  // 移除边框
    //     "font-size: 16px; "  // 字体大小
    //     "font-weight: bold; "  // 字体加粗
    //     "padding: 5px; "  // 添加内边距
    //     "text-align: center; "  // 文本居中
    //     "} "
    //     "QPushButton:hover { "
    //     "color: darkred; "  // 鼠标悬停时字体颜色为深红
    //     "text-decoration: underline; "  // 鼠标悬停时加下划线
    //     "} "
    //     "QPushButton:pressed { "
    //     "color: white; "  // 按下时字体颜色为白色
    //     "background-color: darkred; "  // 按下时背景色为深红
    //     "border-radius: 8px; "  // 按下时添加圆角
    //     "}"
    //     );




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
}

flight_delete::~flight_delete()
{
    delete ui;
}

void flight_delete::on_pushButton_clicked()
{
    QString flightNumber = ui->lineEdit->text();

    // 检查输入是否为空
    if (flightNumber.isEmpty()) {
        QMessageBox::warning(this, "错误", "航班号不能为空！");
        return; // 立即返回，避免后续逻辑执行
    }

    // 提示确认
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "确认", "确定要删除航班号为 " + flightNumber + " 的航班吗？",
                                  QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::No) {
        return; // 如果选择“否”，立即返回
    }

    // 执行删除操作
    QSqlQuery query(db);
    query.prepare("DELETE FROM flightinformation WHERE flightNumber = :flightNumber");
    query.bindValue(":flightNumber", flightNumber);

    if (query.exec()) {
        if (query.numRowsAffected() > 0) {
            QMessageBox::information(this, "提示", "航班删除成功！");
            ui->lineEdit->clear();
        } else {
            QMessageBox::warning(this, "错误", "航班号不存在，无法删除！");
        }
    } else {
        QMessageBox::warning(this, "错误", "航班删除失败：" + query.lastError().text());
    }
}


void flight_delete::on_ReturnButton_clicked()
{
    // 创建并显示 governor 界面
    governor *governor1 = new governor();
    // 隐藏当前界面
    this->close();
    governor1->show();
}

