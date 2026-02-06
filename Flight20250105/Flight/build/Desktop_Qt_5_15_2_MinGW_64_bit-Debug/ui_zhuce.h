/********************************************************************************
** Form generated from reading UI file 'zhuce.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZHUCE_H
#define UI_ZHUCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_zhuce
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEditAccount;
    QLineEdit *lineEditPassword;
    QLineEdit *lineEditRePassword;
    QLineEdit *lineEditName;
    QLineEdit *lineEditIdCard;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *zhuceBtn;
    QPushButton *cancelBtn;
    QLabel *label;

    void setupUi(QWidget *zhuce)
    {
        if (zhuce->objectName().isEmpty())
            zhuce->setObjectName(QString::fromUtf8("zhuce"));
        zhuce->resize(343, 363);
        layoutWidget = new QWidget(zhuce);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(70, 80, 191, 241));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lineEditAccount = new QLineEdit(layoutWidget);
        lineEditAccount->setObjectName(QString::fromUtf8("lineEditAccount"));
        lineEditAccount->setCursor(QCursor(Qt::SizeVerCursor));
        lineEditAccount->setStyleSheet(QString::fromUtf8("border: 1px solid gray; border-radius: 5px; padding: 2px;"));
        lineEditAccount->setClearButtonEnabled(false);

        verticalLayout->addWidget(lineEditAccount);

        lineEditPassword = new QLineEdit(layoutWidget);
        lineEditPassword->setObjectName(QString::fromUtf8("lineEditPassword"));
        lineEditPassword->setStyleSheet(QString::fromUtf8("border: 1px solid gray; border-radius: 5px; padding: 2px;"));

        verticalLayout->addWidget(lineEditPassword);

        lineEditRePassword = new QLineEdit(layoutWidget);
        lineEditRePassword->setObjectName(QString::fromUtf8("lineEditRePassword"));
        lineEditRePassword->setStyleSheet(QString::fromUtf8("border: 1px solid gray; border-radius: 5px; padding: 2px;"));

        verticalLayout->addWidget(lineEditRePassword);

        lineEditName = new QLineEdit(layoutWidget);
        lineEditName->setObjectName(QString::fromUtf8("lineEditName"));
        lineEditName->setStyleSheet(QString::fromUtf8("border: 1px solid gray; border-radius: 5px; padding: 2px;"));

        verticalLayout->addWidget(lineEditName);

        lineEditIdCard = new QLineEdit(layoutWidget);
        lineEditIdCard->setObjectName(QString::fromUtf8("lineEditIdCard"));
        lineEditIdCard->setStyleSheet(QString::fromUtf8("border: 1px solid gray; border-radius: 5px; padding: 2px;"));

        verticalLayout->addWidget(lineEditIdCard);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setStyleSheet(QString::fromUtf8("border: 1px solid gray; border-radius: 5px; padding: 2px;"));

        verticalLayout->addWidget(lineEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        zhuceBtn = new QPushButton(layoutWidget);
        zhuceBtn->setObjectName(QString::fromUtf8("zhuceBtn"));
        zhuceBtn->setMinimumSize(QSize(0, 25));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\271\274\345\234\206"));
        zhuceBtn->setFont(font);
        zhuceBtn->setStyleSheet(QString::fromUtf8("QPushButton{border-radius:4px;background:#409eff;color:white;font-size:14px}"));
        zhuceBtn->setIconSize(QSize(20, 20));

        horizontalLayout->addWidget(zhuceBtn);

        cancelBtn = new QPushButton(layoutWidget);
        cancelBtn->setObjectName(QString::fromUtf8("cancelBtn"));
        cancelBtn->setMinimumSize(QSize(0, 25));
        cancelBtn->setFont(font);
        cancelBtn->setStyleSheet(QString::fromUtf8("QPushButton{border-radius:4px;background:#409eff;color:white;font-size:14px}"));

        horizontalLayout->addWidget(cancelBtn);


        verticalLayout->addLayout(horizontalLayout);

        label = new QLabel(zhuce);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(-30, 0, 381, 171));
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/Image/Imageres/BackGround3.jpg);"));
        label->raise();
        layoutWidget->raise();

        retranslateUi(zhuce);

        QMetaObject::connectSlotsByName(zhuce);
    } // setupUi

    void retranslateUi(QWidget *zhuce)
    {
        zhuce->setWindowTitle(QCoreApplication::translate("zhuce", "Form", nullptr));
        lineEditAccount->setPlaceholderText(QString());
        zhuceBtn->setText(QCoreApplication::translate("zhuce", "\346\263\250\345\206\214", nullptr));
        cancelBtn->setText(QCoreApplication::translate("zhuce", "\345\217\226\346\266\210", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class zhuce: public Ui_zhuce {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZHUCE_H
