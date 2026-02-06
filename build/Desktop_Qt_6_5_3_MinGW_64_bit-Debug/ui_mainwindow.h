/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
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
    QLineEdit *lineEditPassword;
    QLabel *label;
    QLabel *label_2;
    QPushButton *LoginButton;
    QPushButton *RegisterButton;
    QCheckBox *checkBox;
    QPushButton *pushButton;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(435, 278);
        QFont font;
        font.setPointSize(9);
        MainWindow->setFont(font);
        MainWindow->setAcceptDrops(false);
        MainWindow->setStyleSheet(QString::fromUtf8("QPushButton{border-radius:4px;background:#409eff;color:white;font-size:14px}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        lineEditAccount = new QLineEdit(centralwidget);
        lineEditAccount->setObjectName("lineEditAccount");
        lineEditAccount->setGeometry(QRect(150, 70, 141, 20));
        lineEditPassword = new QLineEdit(centralwidget);
        lineEditPassword->setObjectName("lineEditPassword");
        lineEditPassword->setGeometry(QRect(150, 110, 141, 20));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(120, 70, 54, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(120, 110, 54, 16));
        LoginButton = new QPushButton(centralwidget);
        LoginButton->setObjectName("LoginButton");
        LoginButton->setGeometry(QRect(120, 160, 80, 24));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Microsoft YaHei UI")});
        font1.setBold(false);
        font1.setItalic(false);
        LoginButton->setFont(font1);
        LoginButton->setStyleSheet(QString::fromUtf8("QPushButton{border-radius:4px;background:#409eff;color:white;font-size:14px}"));
        RegisterButton = new QPushButton(centralwidget);
        RegisterButton->setObjectName("RegisterButton");
        RegisterButton->setGeometry(QRect(230, 160, 80, 24));
        RegisterButton->setFont(font1);
        checkBox = new QCheckBox(centralwidget);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(130, 140, 71, 16));
        checkBox->setFont(font);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(230, 140, 71, 18));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Microsoft YaHei UI")});
        font2.setPointSize(9);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setUnderline(true);
        pushButton->setFont(font2);
        pushButton->setMouseTracking(true);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton { background-color: none; border-radius: 3px; color: black;font: 9pt \"Microsoft YaHei UI\";} "));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\350\264\246\345\217\267", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\345\257\206\347\240\201", nullptr));
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
