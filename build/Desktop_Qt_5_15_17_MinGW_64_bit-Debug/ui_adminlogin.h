/********************************************************************************
** Form generated from reading UI file 'adminlogin.ui'
**
** Created by: Qt User Interface Compiler version 5.15.17
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINLOGIN_H
#define UI_ADMINLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminLogin
{
public:
    QFrame *frame;
    QLabel *label_2;
    QLineEdit *lineEditAccount;
    QLineEdit *lineEditPassword;
    QLabel *label_3;
    QPushButton *PushBotton;
    QPushButton *Buttonregerist;
    QCheckBox *checkBox;

    void setupUi(QWidget *AdminLogin)
    {
        if (AdminLogin->objectName().isEmpty())
            AdminLogin->setObjectName(QString::fromUtf8("AdminLogin"));
        AdminLogin->resize(400, 298);
        frame = new QFrame(AdminLogin);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 411, 211));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(33, 60, 71, 20));
        QFont font;
        font.setPointSize(10);
        label_2->setFont(font);
        label_2->setFrameShape(QFrame::NoFrame);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEditAccount = new QLineEdit(frame);
        lineEditAccount->setObjectName(QString::fromUtf8("lineEditAccount"));
        lineEditAccount->setGeometry(QRect(110, 60, 151, 23));
        lineEditAccount->setStyleSheet(QString::fromUtf8("QLineEdit{border-radius:4px,border:1 px solid black}"));
        lineEditPassword = new QLineEdit(frame);
        lineEditPassword->setObjectName(QString::fromUtf8("lineEditPassword"));
        lineEditPassword->setGeometry(QRect(110, 100, 151, 23));
        lineEditPassword->setStyleSheet(QString::fromUtf8("QLineEdit{border-radius:4px,border:1 px solid black}"));
        lineEditPassword->setEchoMode(QLineEdit::Password);
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 101, 54, 16));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        PushBotton = new QPushButton(frame);
        PushBotton->setObjectName(QString::fromUtf8("PushBotton"));
        PushBotton->setGeometry(QRect(80, 160, 80, 24));
        PushBotton->setStyleSheet(QString::fromUtf8("QPushButton{border-radius:4px;background:#409eff;color:white;font-size:14px}"));
        Buttonregerist = new QPushButton(frame);
        Buttonregerist->setObjectName(QString::fromUtf8("Buttonregerist"));
        Buttonregerist->setGeometry(QRect(180, 160, 80, 24));
        Buttonregerist->setStyleSheet(QString::fromUtf8("QPushButton{border-radius:4px;background:#409eff;color:white;font-size:14px}"));
        checkBox = new QCheckBox(frame);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(110, 130, 81, 22));

        retranslateUi(AdminLogin);

        QMetaObject::connectSlotsByName(AdminLogin);
    } // setupUi

    void retranslateUi(QWidget *AdminLogin)
    {
        AdminLogin->setWindowTitle(QCoreApplication::translate("AdminLogin", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("AdminLogin", "\350\264\246\345\217\267", nullptr));
        label_3->setText(QCoreApplication::translate("AdminLogin", "\345\257\206\347\240\201", nullptr));
        PushBotton->setText(QCoreApplication::translate("AdminLogin", "\347\231\273\345\275\225", nullptr));
        Buttonregerist->setText(QCoreApplication::translate("AdminLogin", "\346\263\250\345\206\214", nullptr));
        checkBox->setText(QCoreApplication::translate("AdminLogin", "\346\230\276\347\244\272\345\257\206\347\240\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminLogin: public Ui_AdminLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINLOGIN_H
