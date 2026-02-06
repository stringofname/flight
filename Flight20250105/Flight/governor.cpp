#include "governor.h"
#include "ui_governor.h"

// 添加子页面的头文件
#include "flight_add.h"
#include "adminlogin.h"
#include "mainwindow.h"
#include "flight_delete.h"
#include "flight_search.h"
#include<QDebug>

governor::governor(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::governor)
{
    ui->setupUi(this);

    // 手动连接信号和槽
    //connect(ui->btnAdd, &QToolButton::clicked, this, &governor::on_btnAdd_clicked);
    //connect(ui->btnDelete, &QToolButton::clicked, this, &governor::on_btnDelete_clicked);
   // connect(ui->btnChange, &QToolButton::clicked, this, &governor::on_btnChange_clicked);
   // connect(ui->btnSereach, &QToolButton::clicked, this, &governor::on_btnSereach_clicked);


    // 设置按钮图标和图标大小
    ui->btnAdd->setIcon(QIcon(":/Image/Imageres/travel.png"));
    ui->btnAdd->setIconSize(QSize(70, 70)); // 根据需要调整大小

    ui->btnDelete->setIcon(QIcon(":/Image/Imageres/no-flight.png"));
    ui->btnDelete->setIconSize(QSize(70, 70));

    ui->btnChange->setIcon(QIcon(":/Image/Imageres/ticket-flight.png"));
    ui->btnChange->setIconSize(QSize(70, 70));

    ui->btnSereach->setIcon(QIcon(":/Image/Imageres/back.png"));
    ui->btnSereach->setIconSize(QSize(70, 70));
    // // 应用样式表
    // this->setStyleSheet(
    //     "QToolButton#btnAdd, "
    //     "QToolButton#btnDelete, "
    //     "QToolButton#btnChange, "
    //     "QToolButton#btnSereach {"
    //     "    background-color: transparent;"   /* 背景透明 */
    //     "    border-radius: 5px;"              /* 圆角边框（可选） */
    //     "    padding: 10px;"                    /* 内边距 */
    //     "    text-align: center;"               /* 文本居中 */
    //     "}"
    //     "QToolButton#btnAdd:hover, "
    //     "QToolButton#btnDelete:hover, "
    //     "QToolButton#btnChange:hover, "
    //     "QToolButton#btnSereach:hover {"
    //     "    background-color: #ADD8E6;"        /* 悬停时背景颜色 */
    //     "}"
    //     );

    this->setStyleSheet("#governor{background-image: url(:/Image/Imageres/Bookings.jpg);}");
}

governor::~governor()
{
    delete ui;
}

// 添加航班按钮点击逻辑
void governor::on_btnAdd_clicked()
{
    // 切换到添加航班页面
    flight_add *addPage = new flight_add();
   // qDebug() << "Add button clicked";  // 添加调试信息
    addPage->show();
    this->hide();
}

// 删除航班按钮点击逻辑
void governor::on_btnDelete_clicked()
{
    // 切换到删除航班页面
    flight_delete *deletePage = new flight_delete();
    deletePage->show();
    this->hide();
}

// 查询航班按钮点击逻辑
void governor::on_btnChange_clicked()
{
    // 切换到查询航班页面
    flight_search *searchPage = new flight_search();
    searchPage->show();
    this->hide();
}

// 返回按钮点击逻辑
void governor::on_btnSereach_clicked()
{
    // 创建并显示 MainWindow 界面
    AdminLogin *adminLogin = new AdminLogin();
    // 隐藏当前界面
    this->close();
    adminLogin->show();
}
