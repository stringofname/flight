/********************************************************************************
** Form generated from reading UI file 'adminlogin.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINLOGIN_H
#define UI_ADMINLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminLogin
{
public:
    QFrame *frame;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEditAccount;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *lineEditPassword;
    QCheckBox *checkBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *PushBotton;
    QPushButton *Buttonregerist;
    QPushButton *AdReturnButton;
    QLabel *label;

    void setupUi(QWidget *AdminLogin)
    {
        if (AdminLogin->objectName().isEmpty())
            AdminLogin->setObjectName("AdminLogin");
        AdminLogin->resize(323, 363);
        frame = new QFrame(AdminLogin);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 120, 431, 221));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        layoutWidget = new QWidget(frame);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(50, 40, 221, 191));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        lineEditAccount = new QLineEdit(layoutWidget);
        lineEditAccount->setObjectName("lineEditAccount");
        lineEditAccount->setMinimumSize(QSize(0, 30));
        lineEditAccount->setStyleSheet(QString::fromUtf8("background-color: #FFFFFF; /* \347\272\257\347\231\275\350\211\262\350\203\214\346\231\257 */\n"
"            border: 2px solid #E0E0E0; /* \346\267\241\347\201\260\350\211\262\350\276\271\346\241\206 */\n"
"            border-radius: 10px; /* \345\234\206\350\247\222 */"));

        horizontalLayout_2->addWidget(lineEditAccount);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        lineEditPassword = new QLineEdit(layoutWidget);
        lineEditPassword->setObjectName("lineEditPassword");
        lineEditPassword->setMinimumSize(QSize(0, 30));
        lineEditPassword->setStyleSheet(QString::fromUtf8("background-color: #FFFFFF; /* \347\272\257\347\231\275\350\211\262\350\203\214\346\231\257 */\n"
"            border: 2px solid #E0E0E0; /* \346\267\241\347\201\260\350\211\262\350\276\271\346\241\206 */\n"
"            border-radius: 10px; /* \345\234\206\350\247\222 */"));
        lineEditPassword->setEchoMode(QLineEdit::EchoMode::Password);

        horizontalLayout_3->addWidget(lineEditPassword);


        verticalLayout->addLayout(horizontalLayout_3);

        checkBox = new QCheckBox(layoutWidget);
        checkBox->setObjectName("checkBox");

        verticalLayout->addWidget(checkBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        PushBotton = new QPushButton(layoutWidget);
        PushBotton->setObjectName("PushBotton");
        PushBotton->setMinimumSize(QSize(105, 23));
        PushBotton->setMaximumSize(QSize(105, 30));
        PushBotton->setStyleSheet(QString::fromUtf8("QPushButton{border-radius:4px;background:#409eff;color:white;font-size:14px}\n"
"QPushButton:hover {\n"
"         background-color: #ADD8E6;\"        /* \346\202\254\345\201\234\346\227\266\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"        }"));

        horizontalLayout->addWidget(PushBotton);

        Buttonregerist = new QPushButton(layoutWidget);
        Buttonregerist->setObjectName("Buttonregerist");
        Buttonregerist->setMinimumSize(QSize(105, 23));
        Buttonregerist->setMaximumSize(QSize(105, 30));
        Buttonregerist->setStyleSheet(QString::fromUtf8("QPushButton{border-radius:4px;background:#409eff;color:white;font-size:14px}\n"
"QPushButton:hover {\n"
"         background-color: #ADD8E6;\"        /* \346\202\254\345\201\234\346\227\266\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"        }"));

        horizontalLayout->addWidget(Buttonregerist);


        verticalLayout->addLayout(horizontalLayout);

        AdReturnButton = new QPushButton(AdminLogin);
        AdReturnButton->setObjectName("AdReturnButton");
        AdReturnButton->setGeometry(QRect(10, 10, 41, 31));
        AdReturnButton->setStyleSheet(QString::fromUtf8("QPushButton#AdReturnButton{\n"
"	image: url(:/Image/Imageres/back.png);\n"
"    background: transparent; /* \350\203\214\346\231\257\351\200\217\346\230\216 */\n"
"    border: none; /* \347\247\273\351\231\244\350\276\271\346\241\206 */\n"
"}"));
        label = new QLabel(AdminLogin);
        label->setObjectName("label");
        label->setGeometry(QRect(-50, 0, 381, 151));
        label->setStyleSheet(QString::fromUtf8("background-image: url(:/Image/Imageres/BlueSkyAri.jpg);"));
        label->raise();
        frame->raise();
        AdReturnButton->raise();

        retranslateUi(AdminLogin);

        QMetaObject::connectSlotsByName(AdminLogin);
    } // setupUi

    void retranslateUi(QWidget *AdminLogin)
    {
        AdminLogin->setWindowTitle(QCoreApplication::translate("AdminLogin", "Form", nullptr));
        checkBox->setText(QCoreApplication::translate("AdminLogin", "\346\230\276\347\244\272\345\257\206\347\240\201", nullptr));
        PushBotton->setText(QCoreApplication::translate("AdminLogin", "\347\231\273\345\275\225", nullptr));
        Buttonregerist->setText(QCoreApplication::translate("AdminLogin", "\346\263\250\345\206\214", nullptr));
        AdReturnButton->setText(QString());
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AdminLogin: public Ui_AdminLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINLOGIN_H
