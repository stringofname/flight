/********************************************************************************
** Form generated from reading UI file 'userspace.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERSPACE_H
#define UI_USERSPACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_userspace
{
public:
    QTableWidget *tableTickets;
    QPushButton *ReturnButtn;
    QLabel *labelSet1;
    QLabel *labelSet2;
    QLabel *labelName;
    QLabel *labelAccount;
    QLabel *label;

    void setupUi(QWidget *userspace)
    {
        if (userspace->objectName().isEmpty())
            userspace->setObjectName(QString::fromUtf8("userspace"));
        userspace->resize(458, 462);
        tableTickets = new QTableWidget(userspace);
        if (tableTickets->columnCount() < 6)
            tableTickets->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableTickets->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableTickets->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableTickets->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableTickets->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableTickets->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableTickets->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        tableTickets->setObjectName(QString::fromUtf8("tableTickets"));
        tableTickets->setGeometry(QRect(0, 180, 731, 241));
        tableTickets->setRowCount(0);
        tableTickets->setColumnCount(6);
        ReturnButtn = new QPushButton(userspace);
        ReturnButtn->setObjectName(QString::fromUtf8("ReturnButtn"));
        ReturnButtn->setGeometry(QRect(20, 10, 51, 31));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setItalic(true);
        font.setUnderline(true);
        ReturnButtn->setFont(font);
        ReturnButtn->setStyleSheet(QString::fromUtf8("QPushButton#ReturnButtn{\n"
"	image: url(:/Image/Imageres/back.png);\n"
"    background: transparent; /* \350\203\214\346\231\257\351\200\217\346\230\216 */\n"
"    border: none; /* \347\247\273\351\231\244\350\276\271\346\241\206 */\n"
"}"));
        labelSet1 = new QLabel(userspace);
        labelSet1->setObjectName(QString::fromUtf8("labelSet1"));
        labelSet1->setGeometry(QRect(170, 50, 201, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\271\274\345\234\206"));
        font1.setPointSize(16);
        font1.setBold(true);
        labelSet1->setFont(font1);
        labelSet1->setStyleSheet(QString::fromUtf8(""));
        labelSet1->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        labelSet2 = new QLabel(userspace);
        labelSet2->setObjectName(QString::fromUtf8("labelSet2"));
        labelSet2->setGeometry(QRect(170, 110, 201, 31));
        labelSet2->setFont(font1);
        labelSet2->setStyleSheet(QString::fromUtf8(""));
        labelSet2->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        labelName = new QLabel(userspace);
        labelName->setObjectName(QString::fromUtf8("labelName"));
        labelName->setGeometry(QRect(60, 40, 101, 51));
        labelName->setFont(font1);
        labelName->setAlignment(Qt::AlignmentFlag::AlignCenter);
        labelAccount = new QLabel(userspace);
        labelAccount->setObjectName(QString::fromUtf8("labelAccount"));
        labelAccount->setGeometry(QRect(60, 100, 111, 41));
        labelAccount->setFont(font1);
        labelAccount->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label = new QLabel(userspace);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(-10, -10, 741, 171));
        label->setStyleSheet(QString::fromUtf8("background-image: url(:/Image/Imageres/BackGround4.jpg);"));
        label->raise();
        tableTickets->raise();
        ReturnButtn->raise();
        labelSet1->raise();
        labelSet2->raise();
        labelName->raise();
        labelAccount->raise();

        retranslateUi(userspace);

        QMetaObject::connectSlotsByName(userspace);
    } // setupUi

    void retranslateUi(QWidget *userspace)
    {
        userspace->setWindowTitle(QCoreApplication::translate("userspace", "Form", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableTickets->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("userspace", "\350\210\252\347\217\255\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableTickets->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("userspace", "\346\227\245\346\234\237", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableTickets->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("userspace", "\345\272\247\344\275\215\347\255\211\347\272\247", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableTickets->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("userspace", "\345\207\272\345\217\221\345\234\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableTickets->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("userspace", "\347\233\256\347\232\204\345\234\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableTickets->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("userspace", "\346\223\215\344\275\234", nullptr));
        ReturnButtn->setText(QString());
        labelSet1->setText(QString());
        labelSet2->setText(QString());
        labelName->setText(QCoreApplication::translate("userspace", "\345\247\223\345\220\215\357\274\232", nullptr));
        labelAccount->setText(QCoreApplication::translate("userspace", "\350\264\246\345\217\267\357\274\232", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class userspace: public Ui_userspace {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERSPACE_H
