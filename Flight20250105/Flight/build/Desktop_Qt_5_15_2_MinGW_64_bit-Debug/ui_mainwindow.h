/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *lineEditAccount;
    QLabel *label_2;
    QLineEdit *lineEditPassword;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *LoginButton;
    QPushButton *RegisterButton;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *checkBox;
    QPushButton *pushButton;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(302, 350);
        MainWindow->setMinimumSize(QSize(302, 350));
        MainWindow->setMaximumSize(QSize(302, 350));
        QFont font;
        font.setPointSize(9);
        MainWindow->setFont(font);
        MainWindow->setAcceptDrops(false);
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow {\n"
"            background-color: #FFFFFF; /* \347\272\257\347\231\275\350\211\262\350\203\214\346\231\257 */\n"
"            border: 2px solid #E0E0E0; /* \346\267\241\347\201\260\350\211\262\350\276\271\346\241\206 */\n"
"            border-radius: 10px; /* \345\234\206\350\247\222 */\n"
"        }"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        lineEditAccount = new QLineEdit(centralwidget);
        lineEditAccount->setObjectName(QString::fromUtf8("lineEditAccount"));
        lineEditAccount->setGeometry(QRect(70, 170, 167, 30));
        lineEditAccount->setMinimumSize(QSize(0, 30));
        lineEditAccount->setStyleSheet(QString::fromUtf8("border: 1px solid gray; border-radius: 5px; padding: 2px;"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(-80, 0, 391, 151));
        label_2->setStyleSheet(QString::fromUtf8("background-image: url(:/Image/Imageres/BlueSkyAri.jpg);"));
        lineEditPassword = new QLineEdit(centralwidget);
        lineEditPassword->setObjectName(QString::fromUtf8("lineEditPassword"));
        lineEditPassword->setGeometry(QRect(70, 210, 167, 30));
        lineEditPassword->setMinimumSize(QSize(0, 30));
        lineEditPassword->setStyleSheet(QString::fromUtf8("border: 1px solid gray; border-radius: 5px; padding: 2px;"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(70, 280, 171, 41));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        LoginButton = new QPushButton(layoutWidget);
        LoginButton->setObjectName(QString::fromUtf8("LoginButton"));
        LoginButton->setMinimumSize(QSize(0, 25));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\271\274\345\234\206"));
        font1.setBold(false);
        font1.setItalic(false);
        LoginButton->setFont(font1);
        LoginButton->setStyleSheet(QString::fromUtf8("QPushButton{border-radius:4px;background:#409eff;color:white;font-size:14px}"));

        horizontalLayout->addWidget(LoginButton);

        RegisterButton = new QPushButton(layoutWidget);
        RegisterButton->setObjectName(QString::fromUtf8("RegisterButton"));
        RegisterButton->setMinimumSize(QSize(0, 25));
        RegisterButton->setFont(font1);
        RegisterButton->setStyleSheet(QString::fromUtf8("QPushButton{border-radius:4px;background:#409eff;color:white;font-size:14px}"));

        horizontalLayout->addWidget(RegisterButton);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(70, 250, 175, 25));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        checkBox = new QCheckBox(layoutWidget1);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\347\255\211\347\272\277"));
        checkBox->setFont(font2);

        horizontalLayout_2->addWidget(checkBox);

        pushButton = new QPushButton(layoutWidget1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Microsoft YaHei UI"));
        font3.setPointSize(9);
        font3.setBold(false);
        font3.setItalic(false);
        font3.setUnderline(true);
        pushButton->setFont(font3);
        pushButton->setMouseTracking(true);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton { background-color: none; border-radius: 3px; color: black;font: 9pt \"Microsoft YaHei UI\";} "));

        horizontalLayout_2->addWidget(pushButton);

        MainWindow->setCentralWidget(centralwidget);
        layoutWidget->raise();
        layoutWidget->raise();
        lineEditPassword->raise();
        label_2->raise();
        lineEditAccount->raise();
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "l", nullptr));
        LoginButton->setText(QCoreApplication::translate("MainWindow", "\347\231\273\351\231\206", nullptr));
        RegisterButton->setText(QCoreApplication::translate("MainWindow", "\346\263\250\345\206\214", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\345\257\206\347\240\201", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\347\256\241\347\220\206\345\221\230\347\231\273\351\231\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
