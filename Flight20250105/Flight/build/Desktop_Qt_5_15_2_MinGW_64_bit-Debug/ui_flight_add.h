/********************************************************************************
** Form generated from reading UI file 'flight_add.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FLIGHT_ADD_H
#define UI_FLIGHT_ADD_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_flight_add
{
public:
    QLineEdit *time;
    QLineEdit *economyPrice;
    QLabel *label_5;
    QLabel *label_15;
    QLineEdit *arrivalCity;
    QLabel *label_7;
    QLineEdit *arrivalTime;
    QLineEdit *businessPrice;
    QLabel *label_16;
    QLabel *label_6;
    QLineEdit *takeoffCity;
    QLabel *label_17;
    QLineEdit *firstPrice;
    QLabel *label_3;
    QLabel *label_14;
    QLabel *label_9;
    QLineEdit *flightNumber;
    QLineEdit *economyNum;
    QLineEdit *firstNum;
    QLineEdit *businessNum;
    QPushButton *ReturnBtn;
    QLineEdit *flightDate;
    QLabel *label_11;
    QPushButton *pushButton;
    QLabel *label_4;
    QLabel *label_18;

    void setupUi(QWidget *flight_add)
    {
        if (flight_add->objectName().isEmpty())
            flight_add->setObjectName(QString::fromUtf8("flight_add"));
        flight_add->resize(787, 458);
        time = new QLineEdit(flight_add);
        time->setObjectName(QString::fromUtf8("time"));
        time->setGeometry(QRect(150, 130, 161, 23));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\271\274\345\234\206"));
        font.setPointSize(14);
        time->setFont(font);
        time->setStyleSheet(QString::fromUtf8("border:none"));
        time->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        economyPrice = new QLineEdit(flight_add);
        economyPrice->setObjectName(QString::fromUtf8("economyPrice"));
        economyPrice->setGeometry(QRect(152, 340, 71, 23));
        economyPrice->setFont(font);
        economyPrice->setStyleSheet(QString::fromUtf8("border:none"));
        economyPrice->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_5 = new QLabel(flight_add);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 420, 61, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\271\274\345\234\206"));
        font1.setPointSize(15);
        font1.setBold(true);
        label_5->setFont(font1);
        label_5->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        label_15 = new QLabel(flight_add);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(360, 130, 91, 31));
        label_15->setFont(font1);
        label_15->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        arrivalCity = new QLineEdit(flight_add);
        arrivalCity->setObjectName(QString::fromUtf8("arrivalCity"));
        arrivalCity->setGeometry(QRect(500, 190, 161, 23));
        arrivalCity->setFont(font);
        arrivalCity->setStyleSheet(QString::fromUtf8("border:none"));
        arrivalCity->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        label_7 = new QLabel(flight_add);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 190, 71, 31));
        label_7->setFont(font1);
        label_7->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        arrivalTime = new QLineEdit(flight_add);
        arrivalTime->setObjectName(QString::fromUtf8("arrivalTime"));
        arrivalTime->setGeometry(QRect(500, 130, 161, 23));
        arrivalTime->setFont(font);
        arrivalTime->setStyleSheet(QString::fromUtf8("border:none"));
        arrivalTime->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        businessPrice = new QLineEdit(flight_add);
        businessPrice->setObjectName(QString::fromUtf8("businessPrice"));
        businessPrice->setGeometry(QRect(530, 340, 71, 23));
        businessPrice->setFont(font);
        businessPrice->setStyleSheet(QString::fromUtf8("border:none"));
        businessPrice->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_16 = new QLabel(flight_add);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(450, 60, 221, 51));
        label_16->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/icon.9.png);"));
        label_6 = new QLabel(flight_add);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(100, 180, 211, 51));
        label_6->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/icon.9.png);"));
        takeoffCity = new QLineEdit(flight_add);
        takeoffCity->setObjectName(QString::fromUtf8("takeoffCity"));
        takeoffCity->setGeometry(QRect(140, 190, 161, 23));
        takeoffCity->setFont(font);
        takeoffCity->setStyleSheet(QString::fromUtf8("border:none"));
        takeoffCity->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        label_17 = new QLabel(flight_add);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(350, 70, 91, 31));
        label_17->setFont(font1);
        label_17->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        firstPrice = new QLineEdit(flight_add);
        firstPrice->setObjectName(QString::fromUtf8("firstPrice"));
        firstPrice->setGeometry(QRect(339, 339, 81, 23));
        firstPrice->setFont(font);
        firstPrice->setStyleSheet(QString::fromUtf8("border:none"));
        firstPrice->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_3 = new QLabel(flight_add);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 320, 581, 121));
        label_3->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/icon.8.png);"));
        label_14 = new QLabel(flight_add);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(10, 130, 91, 31));
        label_14->setFont(font1);
        label_14->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        label_9 = new QLabel(flight_add);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(370, 190, 71, 31));
        label_9->setFont(font1);
        label_9->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        flightNumber = new QLineEdit(flight_add);
        flightNumber->setObjectName(QString::fromUtf8("flightNumber"));
        flightNumber->setGeometry(QRect(500, 70, 161, 23));
        flightNumber->setFont(font);
        flightNumber->setStyleSheet(QString::fromUtf8("border:none"));
        flightNumber->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        economyNum = new QLineEdit(flight_add);
        economyNum->setObjectName(QString::fromUtf8("economyNum"));
        economyNum->setGeometry(QRect(150, 380, 71, 23));
        economyNum->setFont(font);
        economyNum->setStyleSheet(QString::fromUtf8("border:none"));
        economyNum->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        firstNum = new QLineEdit(flight_add);
        firstNum->setObjectName(QString::fromUtf8("firstNum"));
        firstNum->setGeometry(QRect(340, 380, 81, 23));
        firstNum->setFont(font);
        firstNum->setStyleSheet(QString::fromUtf8("border:none"));
        firstNum->setAlignment(Qt::AlignmentFlag::AlignCenter);
        businessNum = new QLineEdit(flight_add);
        businessNum->setObjectName(QString::fromUtf8("businessNum"));
        businessNum->setGeometry(QRect(530, 380, 71, 23));
        businessNum->setFont(font);
        businessNum->setStyleSheet(QString::fromUtf8("border:none"));
        businessNum->setAlignment(Qt::AlignmentFlag::AlignCenter);
        ReturnBtn = new QPushButton(flight_add);
        ReturnBtn->setObjectName(QString::fromUtf8("ReturnBtn"));
        ReturnBtn->setGeometry(QRect(20, 10, 31, 31));
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setItalic(true);
        font2.setUnderline(true);
        ReturnBtn->setFont(font2);
        ReturnBtn->setStyleSheet(QString::fromUtf8("QPushButton#ReturnBtn{\n"
"	image: url(:/Image/Imageres/back.png);\n"
"    background: transparent; /* \350\203\214\346\231\257\351\200\217\346\230\216 */\n"
"    border: none; /* \347\247\273\351\231\244\350\276\271\346\241\206 */\n"
"}"));
        flightDate = new QLineEdit(flight_add);
        flightDate->setObjectName(QString::fromUtf8("flightDate"));
        flightDate->setGeometry(QRect(150, 80, 161, 23));
        flightDate->setFont(font);
        flightDate->setStyleSheet(QString::fromUtf8("border:none"));
        flightDate->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        label_11 = new QLabel(flight_add);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(10, 80, 91, 31));
        label_11->setFont(font1);
        label_11->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        pushButton = new QPushButton(flight_add);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(670, 360, 111, 31));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\271\274\345\234\206"));
        font3.setPointSize(15);
        pushButton->setFont(font3);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton { \n"
"background-color: rgb(233, 28, 35); \n"
"border-radius: 8px;\n"
" color: rgb(255, 255, 255);\n"
" } \n"
"QPushButton:hover { background-color:rgb(255, 32, 36); }\n"
""));
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("audio-card")));
        pushButton->setIcon(icon);
        pushButton->setCheckable(false);
        pushButton->setChecked(false);
        pushButton->setAutoDefault(false);
        label_4 = new QLabel(flight_add);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(40, 330, 41, 31));
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        label_18 = new QLabel(flight_add);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(40, 380, 41, 31));
        label_18->setFont(font1);
        label_18->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        retranslateUi(flight_add);

        pushButton->setDefault(false);


        QMetaObject::connectSlotsByName(flight_add);
    } // setupUi

    void retranslateUi(QWidget *flight_add)
    {
        flight_add->setWindowTitle(QCoreApplication::translate("flight_add", "Form", nullptr));
        label_5->setText(QCoreApplication::translate("flight_add", "\345\272\247\344\275\215\346\225\260", nullptr));
        label_15->setText(QCoreApplication::translate("flight_add", "\345\210\260\350\276\276\346\227\266\351\227\264", nullptr));
        label_7->setText(QCoreApplication::translate("flight_add", "\345\207\272\345\217\221\345\234\260", nullptr));
        label_16->setText(QString());
        label_6->setText(QString());
        label_17->setText(QCoreApplication::translate("flight_add", "\350\210\252\347\217\255\345\217\267", nullptr));
        label_3->setText(QString());
        label_14->setText(QCoreApplication::translate("flight_add", "\345\207\272\345\217\221\346\227\266\351\227\264", nullptr));
        label_9->setText(QCoreApplication::translate("flight_add", "\345\210\260\350\276\276\345\234\260", nullptr));
        ReturnBtn->setText(QString());
        label_11->setText(QCoreApplication::translate("flight_add", "\346\227\245\346\234\237", nullptr));
        pushButton->setText(QCoreApplication::translate("flight_add", "\346\267\273\345\212\240", nullptr));
        label_4->setText(QCoreApplication::translate("flight_add", "\344\273\267\346\240\274", nullptr));
        label_18->setText(QCoreApplication::translate("flight_add", "\346\225\260\351\207\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class flight_add: public Ui_flight_add {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLIGHT_ADD_H
