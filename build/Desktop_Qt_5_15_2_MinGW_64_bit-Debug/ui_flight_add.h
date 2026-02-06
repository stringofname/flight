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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_flight_add
{
public:
    QLabel *label;
    QLineEdit *firstPrice;
    QLineEdit *flightDate;
    QLineEdit *flightNumber;
    QLabel *label_15;
    QLineEdit *businessNum;
    QPushButton *ReturnBtn;
    QLabel *label_11;
    QLineEdit *economyNum;
    QLabel *label_7;
    QLineEdit *firstNum;
    QLabel *label_4;
    QLineEdit *businessPrice;
    QLabel *label_17;
    QLineEdit *time;
    QLabel *label_18;
    QLineEdit *arrivalTime;
    QLineEdit *economyPrice;
    QLineEdit *takeoffCity;
    QLineEdit *arrivalCity;
    QPushButton *pushButton;
    QLabel *label_14;
    QLabel *label_9;
    QLabel *label_2;
    QLabel *label_6;
    QLabel *label_8;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QLabel *label_3;

    void setupUi(QWidget *flight_add)
    {
        if (flight_add->objectName().isEmpty())
            flight_add->setObjectName(QString::fromUtf8("flight_add"));
        flight_add->resize(800, 500);
        flight_add->setStyleSheet(QString::fromUtf8(""));
        label = new QLabel(flight_add);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, -5, 801, 511));
        label->setStyleSheet(QString::fromUtf8("background-image: url(:/Imageres/airBg.jpeg);"));
        firstPrice = new QLineEdit(flight_add);
        firstPrice->setObjectName(QString::fromUtf8("firstPrice"));
        firstPrice->setGeometry(QRect(349, 349, 81, 23));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\271\274\345\234\206"));
        font.setPointSize(14);
        firstPrice->setFont(font);
        firstPrice->setStyleSheet(QString::fromUtf8("border: 1px solid gray; border-radius: 5px; padding: 2px;\n"
""));
        firstPrice->setAlignment(Qt::AlignmentFlag::AlignCenter);
        flightDate = new QLineEdit(flight_add);
        flightDate->setObjectName(QString::fromUtf8("flightDate"));
        flightDate->setGeometry(QRect(160, 90, 161, 31));
        flightDate->setFont(font);
        flightDate->setStyleSheet(QString::fromUtf8("border: 1px solid gray; border-radius: 5px; padding: 2px;\n"
""));
        flightDate->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        flightNumber = new QLineEdit(flight_add);
        flightNumber->setObjectName(QString::fromUtf8("flightNumber"));
        flightNumber->setGeometry(QRect(510, 80, 161, 31));
        flightNumber->setFont(font);
        flightNumber->setStyleSheet(QString::fromUtf8("border: 1px solid gray; border-radius: 5px; padding: 2px;\n"
""));
        flightNumber->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        label_15 = new QLabel(flight_add);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(370, 140, 91, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\271\274\345\234\206"));
        font1.setPointSize(15);
        font1.setBold(true);
        label_15->setFont(font1);
        label_15->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: rgba(0, 0, 0, 0); /* \344\275\277\347\224\250rgba\351\242\234\350\211\262\346\250\241\345\274\217\357\274\214\346\234\200\345\220\216\344\270\200\344\270\252\345\217\202\346\225\2600\350\241\250\347\244\272\345\256\214\345\205\250\351\200\217\346\230\216 */\n"
"}"));
        label_15->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        businessNum = new QLineEdit(flight_add);
        businessNum->setObjectName(QString::fromUtf8("businessNum"));
        businessNum->setGeometry(QRect(540, 390, 71, 23));
        businessNum->setFont(font);
        businessNum->setStyleSheet(QString::fromUtf8("border: 1px solid gray; border-radius: 5px; padding: 2px;\n"
""));
        businessNum->setAlignment(Qt::AlignmentFlag::AlignCenter);
        ReturnBtn = new QPushButton(flight_add);
        ReturnBtn->setObjectName(QString::fromUtf8("ReturnBtn"));
        ReturnBtn->setGeometry(QRect(30, 20, 31, 31));
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
        label_11 = new QLabel(flight_add);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(20, 90, 91, 31));
        label_11->setFont(font1);
        label_11->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        economyNum = new QLineEdit(flight_add);
        economyNum->setObjectName(QString::fromUtf8("economyNum"));
        economyNum->setGeometry(QRect(160, 390, 71, 23));
        economyNum->setFont(font);
        economyNum->setStyleSheet(QString::fromUtf8("border: 1px solid gray; border-radius: 5px; padding: 2px;\n"
""));
        economyNum->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        label_7 = new QLabel(flight_add);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(30, 200, 71, 31));
        label_7->setFont(font1);
        label_7->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        firstNum = new QLineEdit(flight_add);
        firstNum->setObjectName(QString::fromUtf8("firstNum"));
        firstNum->setGeometry(QRect(350, 390, 81, 23));
        firstNum->setFont(font);
        firstNum->setStyleSheet(QString::fromUtf8("border: 1px solid gray; border-radius: 5px; padding: 2px;\n"
""));
        firstNum->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_4 = new QLabel(flight_add);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(50, 340, 41, 31));
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        businessPrice = new QLineEdit(flight_add);
        businessPrice->setObjectName(QString::fromUtf8("businessPrice"));
        businessPrice->setGeometry(QRect(540, 350, 71, 23));
        businessPrice->setFont(font);
        businessPrice->setStyleSheet(QString::fromUtf8("border: 1px solid gray; border-radius: 5px; padding: 2px;\n"
""));
        businessPrice->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_17 = new QLabel(flight_add);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(360, 80, 91, 31));
        label_17->setFont(font1);
        label_17->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        time = new QLineEdit(flight_add);
        time->setObjectName(QString::fromUtf8("time"));
        time->setGeometry(QRect(160, 140, 161, 31));
        time->setFont(font);
        time->setStyleSheet(QString::fromUtf8("border: 1px solid gray; border-radius: 5px; padding: 2px;\n"
""));
        time->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        label_18 = new QLabel(flight_add);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(50, 390, 41, 31));
        label_18->setFont(font1);
        label_18->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        arrivalTime = new QLineEdit(flight_add);
        arrivalTime->setObjectName(QString::fromUtf8("arrivalTime"));
        arrivalTime->setGeometry(QRect(510, 140, 161, 31));
        arrivalTime->setFont(font);
        arrivalTime->setStyleSheet(QString::fromUtf8("border: 1px solid gray; border-radius: 5px; padding: 2px;\n"
""));
        arrivalTime->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        economyPrice = new QLineEdit(flight_add);
        economyPrice->setObjectName(QString::fromUtf8("economyPrice"));
        economyPrice->setGeometry(QRect(162, 350, 71, 23));
        economyPrice->setFont(font);
        economyPrice->setStyleSheet(QString::fromUtf8("border: 1px solid gray; border-radius: 5px; padding: 2px;\n"
""));
        economyPrice->setAlignment(Qt::AlignmentFlag::AlignCenter);
        takeoffCity = new QLineEdit(flight_add);
        takeoffCity->setObjectName(QString::fromUtf8("takeoffCity"));
        takeoffCity->setGeometry(QRect(160, 200, 161, 31));
        takeoffCity->setFont(font);
        takeoffCity->setStyleSheet(QString::fromUtf8("border: 1px solid gray; border-radius: 5px; padding: 2px;\n"
""));
        takeoffCity->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        arrivalCity = new QLineEdit(flight_add);
        arrivalCity->setObjectName(QString::fromUtf8("arrivalCity"));
        arrivalCity->setGeometry(QRect(510, 200, 161, 31));
        arrivalCity->setFont(font);
        arrivalCity->setStyleSheet(QString::fromUtf8("border: 1px solid gray; border-radius: 5px; padding: 2px;\n"
""));
        arrivalCity->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        pushButton = new QPushButton(flight_add);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(560, 440, 111, 31));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\271\274\345\234\206"));
        pushButton->setFont(font3);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{border-radius:4px;background:#409eff;color:white;font-size:14px}\n"
"QPushButton:hover {\n"
"         background-color: #ADD8E6;\"        /* \346\202\254\345\201\234\346\227\266\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"        }"));
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("audio-card")));
        pushButton->setIcon(icon);
        pushButton->setCheckable(false);
        pushButton->setChecked(false);
        pushButton->setAutoDefault(false);
        label_14 = new QLabel(flight_add);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(20, 140, 91, 31));
        label_14->setFont(font1);
        label_14->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        label_9 = new QLabel(flight_add);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(380, 200, 71, 31));
        label_9->setFont(font1);
        label_9->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: transparent;\n"
"}"));
        label_9->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        label_2 = new QLabel(flight_add);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(160, 310, 71, 16));
        QFont font4;
        font4.setPointSize(12);
        label_2->setFont(font4);
        label_6 = new QLabel(flight_add);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(350, 310, 91, 16));
        label_6->setFont(font4);
        label_8 = new QLabel(flight_add);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(540, 310, 71, 16));
        label_8->setFont(font4);
        layoutWidget = new QWidget(flight_add);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 450, 93, 22));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font1);
        label_5->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout->addWidget(label_5);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/icon.8.png);"));

        horizontalLayout->addWidget(label_3);


        retranslateUi(flight_add);

        pushButton->setDefault(false);


        QMetaObject::connectSlotsByName(flight_add);
    } // setupUi

    void retranslateUi(QWidget *flight_add)
    {
        flight_add->setWindowTitle(QCoreApplication::translate("flight_add", "\346\267\273\345\212\240\350\210\252\347\217\255", nullptr));
        label->setText(QString());
        label_15->setText(QCoreApplication::translate("flight_add", "\345\210\260\350\276\276\346\227\266\351\227\264", nullptr));
        ReturnBtn->setText(QString());
        label_11->setText(QCoreApplication::translate("flight_add", "\346\227\245\346\234\237", nullptr));
        label_7->setText(QCoreApplication::translate("flight_add", "\345\207\272\345\217\221\345\234\260", nullptr));
        label_4->setText(QCoreApplication::translate("flight_add", "\344\273\267\346\240\274", nullptr));
        label_17->setText(QCoreApplication::translate("flight_add", "\350\210\252\347\217\255\345\217\267", nullptr));
        label_18->setText(QCoreApplication::translate("flight_add", "\346\225\260\351\207\217", nullptr));
        pushButton->setText(QCoreApplication::translate("flight_add", "\346\267\273\345\212\240", nullptr));
        label_14->setText(QCoreApplication::translate("flight_add", "\345\207\272\345\217\221\346\227\266\351\227\264", nullptr));
        label_9->setText(QCoreApplication::translate("flight_add", "\345\210\260\350\276\276\345\234\260", nullptr));
        label_2->setText(QCoreApplication::translate("flight_add", "\347\273\217\346\265\216\350\210\261", nullptr));
        label_6->setText(QCoreApplication::translate("flight_add", "\345\244\264\347\255\211\350\210\261", nullptr));
        label_8->setText(QCoreApplication::translate("flight_add", "\345\225\206\345\212\241\350\210\261", nullptr));
        label_5->setText(QCoreApplication::translate("flight_add", "\345\272\247\344\275\215\346\225\260", nullptr));
        label_3->setText(QCoreApplication::translate("flight_add", "100", nullptr));
    } // retranslateUi

};

namespace Ui {
    class flight_add: public Ui_flight_add {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLIGHT_ADD_H
