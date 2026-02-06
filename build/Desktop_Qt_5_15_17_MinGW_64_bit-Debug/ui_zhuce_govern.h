/********************************************************************************
** Form generated from reading UI file 'zhuce_govern.ui'
**
** Created by: Qt User Interface Compiler version 5.15.17
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZHUCE_GOVERN_H
#define UI_ZHUCE_GOVERN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_zhuce_govern
{
public:
    QFrame *frame;
    QLabel *label_3;
    QLineEdit *lineEditAccount;
    QLineEdit *lineEditPassword;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *lineEditPassword_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *lineEditName;
    QLineEdit *lineEditGongHao;
    QLabel *label_7;
    QLabel *label_8;

    void setupUi(QWidget *zhuce_govern)
    {
        if (zhuce_govern->objectName().isEmpty())
            zhuce_govern->setObjectName(QString::fromUtf8("zhuce_govern"));
        zhuce_govern->resize(400, 300);
        frame = new QFrame(zhuce_govern);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 421, 321));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(48, 69, 54, 16));
        QFont font;
        font.setPointSize(10);
        label_3->setFont(font);
        label_3->setFrameShape(QFrame::NoFrame);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEditAccount = new QLineEdit(frame);
        lineEditAccount->setObjectName(QString::fromUtf8("lineEditAccount"));
        lineEditAccount->setGeometry(QRect(110, 66, 151, 23));
        lineEditAccount->setStyleSheet(QString::fromUtf8("QLineEdit{border-radius:4px,border:1 px solid black}"));
        lineEditPassword = new QLineEdit(frame);
        lineEditPassword->setObjectName(QString::fromUtf8("lineEditPassword"));
        lineEditPassword->setGeometry(QRect(110, 100, 151, 23));
        lineEditPassword->setStyleSheet(QString::fromUtf8("QLineEdit{border-radius:4px,border:1 px solid black}"));
        lineEditPassword->setEchoMode(QLineEdit::Password);
        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(49, 103, 54, 16));
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_6 = new QLabel(frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 134, 81, 16));
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEditPassword_2 = new QLineEdit(frame);
        lineEditPassword_2->setObjectName(QString::fromUtf8("lineEditPassword_2"));
        lineEditPassword_2->setGeometry(QRect(110, 130, 151, 23));
        lineEditPassword_2->setStyleSheet(QString::fromUtf8("QLineEdit{border-radius:4px,border:1 px solid black}"));
        lineEditPassword_2->setEchoMode(QLineEdit::Password);
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(110, 220, 61, 24));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{border-radius:4px;background:#409eff;color:white;font-size:14px}"));
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(200, 220, 61, 24));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{border-radius:4px;background:#409eff;color:white;font-size:14px}"));
        lineEditName = new QLineEdit(frame);
        lineEditName->setObjectName(QString::fromUtf8("lineEditName"));
        lineEditName->setGeometry(QRect(110, 160, 151, 23));
        lineEditName->setStyleSheet(QString::fromUtf8("QLineEdit{border-radius:4px,border:1 px solid black}"));
        lineEditName->setEchoMode(QLineEdit::Normal);
        lineEditGongHao = new QLineEdit(frame);
        lineEditGongHao->setObjectName(QString::fromUtf8("lineEditGongHao"));
        lineEditGongHao->setGeometry(QRect(110, 190, 151, 23));
        lineEditGongHao->setStyleSheet(QString::fromUtf8("QLineEdit{border-radius:4px,border:1 px solid black}"));
        lineEditGongHao->setEchoMode(QLineEdit::Normal);
        label_7 = new QLabel(frame);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(48, 164, 54, 16));
        label_7->setFont(font);
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_8 = new QLabel(frame);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(50, 193, 54, 16));
        label_8->setFont(font);
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        retranslateUi(zhuce_govern);

        QMetaObject::connectSlotsByName(zhuce_govern);
    } // setupUi

    void retranslateUi(QWidget *zhuce_govern)
    {
        zhuce_govern->setWindowTitle(QCoreApplication::translate("zhuce_govern", "Form", nullptr));
        label_3->setText(QCoreApplication::translate("zhuce_govern", "\350\264\246\345\217\267", nullptr));
        label_5->setText(QCoreApplication::translate("zhuce_govern", "\345\257\206\347\240\201", nullptr));
        label_6->setText(QCoreApplication::translate("zhuce_govern", "\345\206\215\346\254\241\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
        pushButton->setText(QCoreApplication::translate("zhuce_govern", "\347\241\256\345\256\232", nullptr));
        pushButton_2->setText(QCoreApplication::translate("zhuce_govern", "\345\217\226\346\266\210", nullptr));
        label_7->setText(QCoreApplication::translate("zhuce_govern", "\345\247\223\345\220\215", nullptr));
        label_8->setText(QCoreApplication::translate("zhuce_govern", "\345\267\245\345\217\267", nullptr));
    } // retranslateUi

};

namespace Ui {
    class zhuce_govern: public Ui_zhuce_govern {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZHUCE_GOVERN_H
