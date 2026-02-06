/********************************************************************************
** Form generated from reading UI file 'zhuce.ui'
**
** Created by: Qt User Interface Compiler version 5.15.17
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZHUCE_H
#define UI_ZHUCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_zhuce
{
public:
    QLineEdit *lineEditPassword;
    QLineEdit *lineEditRePassword;
    QLineEdit *lineEditName;
    QLineEdit *lineEditAccount;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *zhuceBtn;
    QPushButton *cancelBtn;
    QLineEdit *lineEditIdCard;
    QLabel *label_6;
    QLineEdit *lineEdit;

    void setupUi(QWidget *zhuce)
    {
        if (zhuce->objectName().isEmpty())
            zhuce->setObjectName(QString::fromUtf8("zhuce"));
        zhuce->resize(400, 300);
        lineEditPassword = new QLineEdit(zhuce);
        lineEditPassword->setObjectName(QString::fromUtf8("lineEditPassword"));
        lineEditPassword->setGeometry(QRect(130, 90, 141, 20));
        lineEditRePassword = new QLineEdit(zhuce);
        lineEditRePassword->setObjectName(QString::fromUtf8("lineEditRePassword"));
        lineEditRePassword->setGeometry(QRect(130, 120, 141, 20));
        lineEditName = new QLineEdit(zhuce);
        lineEditName->setObjectName(QString::fromUtf8("lineEditName"));
        lineEditName->setGeometry(QRect(130, 150, 141, 20));
        lineEditAccount = new QLineEdit(zhuce);
        lineEditAccount->setObjectName(QString::fromUtf8("lineEditAccount"));
        lineEditAccount->setGeometry(QRect(130, 60, 141, 20));
        label = new QLabel(zhuce);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 60, 40, 21));
        label_2 = new QLabel(zhuce);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(80, 90, 40, 21));
        label_3 = new QLabel(zhuce);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(60, 120, 61, 20));
        label_3->setLayoutDirection(Qt::LeftToRight);
        label_4 = new QLabel(zhuce);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(80, 150, 40, 21));
        label_5 = new QLabel(zhuce);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(70, 180, 41, 21));
        zhuceBtn = new QPushButton(zhuce);
        zhuceBtn->setObjectName(QString::fromUtf8("zhuceBtn"));
        zhuceBtn->setGeometry(QRect(90, 240, 61, 24));
        zhuceBtn->setStyleSheet(QString::fromUtf8("QPushButton{border-radius:4px;background:#409eff;color:white;font-size:14px}"));
        cancelBtn = new QPushButton(zhuce);
        cancelBtn->setObjectName(QString::fromUtf8("cancelBtn"));
        cancelBtn->setGeometry(QRect(200, 240, 61, 24));
        cancelBtn->setStyleSheet(QString::fromUtf8("QPushButton{border-radius:4px;background:#409eff;color:white;font-size:14px}"));
        lineEditIdCard = new QLineEdit(zhuce);
        lineEditIdCard->setObjectName(QString::fromUtf8("lineEditIdCard"));
        lineEditIdCard->setGeometry(QRect(130, 180, 141, 20));
        label_6 = new QLabel(zhuce);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(80, 210, 53, 15));
        lineEdit = new QLineEdit(zhuce);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(130, 210, 141, 21));

        retranslateUi(zhuce);

        QMetaObject::connectSlotsByName(zhuce);
    } // setupUi

    void retranslateUi(QWidget *zhuce)
    {
        zhuce->setWindowTitle(QCoreApplication::translate("zhuce", "Form", nullptr));
        label->setText(QCoreApplication::translate("zhuce", "\350\264\246\345\217\267", nullptr));
        label_2->setText(QCoreApplication::translate("zhuce", "\345\257\206\347\240\201", nullptr));
        label_3->setText(QCoreApplication::translate("zhuce", "\345\206\215\346\254\241\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
        label_4->setText(QCoreApplication::translate("zhuce", "\345\247\223\345\220\215", nullptr));
        label_5->setText(QCoreApplication::translate("zhuce", "\350\272\253\344\273\275\350\257\201", nullptr));
        zhuceBtn->setText(QCoreApplication::translate("zhuce", "\346\263\250\345\206\214", nullptr));
        cancelBtn->setText(QCoreApplication::translate("zhuce", "\345\217\226\346\266\210", nullptr));
        label_6->setText(QCoreApplication::translate("zhuce", "\347\224\265\350\257\235", nullptr));
    } // retranslateUi

};

namespace Ui {
    class zhuce: public Ui_zhuce {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZHUCE_H
