/********************************************************************************
** Form generated from reading UI file 'zhuce_govern.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZHUCE_GOVERN_H
#define UI_ZHUCE_GOVERN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_zhuce_govern
{
public:
    QLabel *label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEditAccount;
    QLineEdit *lineEditPassword;
    QLineEdit *lineEditPassword_2;
    QLineEdit *lineEditName;
    QLineEdit *lineEditGongHao;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_2;

    void setupUi(QWidget *zhuce_govern)
    {
        if (zhuce_govern->objectName().isEmpty())
            zhuce_govern->setObjectName("zhuce_govern");
        zhuce_govern->resize(346, 380);
        label = new QLabel(zhuce_govern);
        label->setObjectName("label");
        label->setGeometry(QRect(-10, 0, 361, 131));
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/Image/Imageres/BackGround3.jpg);\n"
"border-image: url(:/Image/Imageres/BlueSkyAri.jpg);"));
        layoutWidget = new QWidget(zhuce_govern);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(70, 130, 201, 211));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lineEditAccount = new QLineEdit(layoutWidget);
        lineEditAccount->setObjectName("lineEditAccount");
        lineEditAccount->setStyleSheet(QString::fromUtf8("border: 1px solid gray; border-radius: 5px; padding: 2px;"));

        verticalLayout->addWidget(lineEditAccount);

        lineEditPassword = new QLineEdit(layoutWidget);
        lineEditPassword->setObjectName("lineEditPassword");
        lineEditPassword->setStyleSheet(QString::fromUtf8("border: 1px solid gray; border-radius: 5px; padding: 2px;"));
        lineEditPassword->setEchoMode(QLineEdit::EchoMode::Password);

        verticalLayout->addWidget(lineEditPassword);

        lineEditPassword_2 = new QLineEdit(layoutWidget);
        lineEditPassword_2->setObjectName("lineEditPassword_2");
        lineEditPassword_2->setStyleSheet(QString::fromUtf8("border: 1px solid gray; border-radius: 5px; padding: 2px;"));
        lineEditPassword_2->setEchoMode(QLineEdit::EchoMode::Password);

        verticalLayout->addWidget(lineEditPassword_2);

        lineEditName = new QLineEdit(layoutWidget);
        lineEditName->setObjectName("lineEditName");
        lineEditName->setStyleSheet(QString::fromUtf8("border: 1px solid gray; border-radius: 5px; padding: 2px;"));
        lineEditName->setEchoMode(QLineEdit::EchoMode::Normal);

        verticalLayout->addWidget(lineEditName);

        lineEditGongHao = new QLineEdit(layoutWidget);
        lineEditGongHao->setObjectName("lineEditGongHao");
        lineEditGongHao->setStyleSheet(QString::fromUtf8("border: 1px solid gray; border-radius: 5px; padding: 2px;"));
        lineEditGongHao->setEchoMode(QLineEdit::EchoMode::Normal);

        verticalLayout->addWidget(lineEditGongHao);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(95, 25));
        pushButton->setMaximumSize(QSize(95, 25));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\271\274\345\234\206")});
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{border-radius:4px;background:#409eff;color:white;font-size:14px}"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setMinimumSize(QSize(95, 25));
        pushButton_2->setMaximumSize(QSize(95, 25));
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{border-radius:4px;background:#409eff;color:white;font-size:14px}"));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout);

        label_2 = new QLabel(zhuce_govern);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(120, 70, 91, 21));
        QFont font1;
        font1.setPointSize(16);
        label_2->setFont(font1);

        retranslateUi(zhuce_govern);

        QMetaObject::connectSlotsByName(zhuce_govern);
    } // setupUi

    void retranslateUi(QWidget *zhuce_govern)
    {
        zhuce_govern->setWindowTitle(QCoreApplication::translate("zhuce_govern", "Form", nullptr));
        label->setText(QString());
        lineEditAccount->setPlaceholderText(QCoreApplication::translate("zhuce_govern", "\350\257\267\350\276\223\345\205\245\350\264\246\345\217\267", nullptr));
        lineEditPassword->setPlaceholderText(QCoreApplication::translate("zhuce_govern", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
        lineEditPassword_2->setPlaceholderText(QCoreApplication::translate("zhuce_govern", "\345\206\215\346\254\241\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
        lineEditName->setPlaceholderText(QCoreApplication::translate("zhuce_govern", "\350\257\267\350\276\223\345\205\245\345\247\223\345\220\215", nullptr));
        lineEditGongHao->setPlaceholderText(QCoreApplication::translate("zhuce_govern", "\350\257\267\350\276\223\345\205\245\345\267\245\345\217\267", nullptr));
        pushButton->setText(QCoreApplication::translate("zhuce_govern", "\347\241\256\345\256\232", nullptr));
        pushButton_2->setText(QCoreApplication::translate("zhuce_govern", "\345\217\226\346\266\210", nullptr));
        label_2->setText(QCoreApplication::translate("zhuce_govern", "\346\263\250\345\206\214\350\264\246\345\217\267", nullptr));
    } // retranslateUi

};

namespace Ui {
    class zhuce_govern: public Ui_zhuce_govern {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZHUCE_GOVERN_H
