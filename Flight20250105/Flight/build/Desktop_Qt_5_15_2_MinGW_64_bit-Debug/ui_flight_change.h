/********************************************************************************
** Form generated from reading UI file 'flight_change.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FLIGHT_CHANGE_H
#define UI_FLIGHT_CHANGE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_flight_change
{
public:
    QLabel *label_4;
    QLineEdit *flightNumber;
    QLabel *label_7;
    QLabel *label_9;
    QLabel *label_11;
    QLineEdit *arrivalCity;
    QLineEdit *firstPrice;
    QLabel *label_3;
    QLineEdit *flightDate;
    QLineEdit *arrivalTime;
    QLineEdit *businessNum;
    QLineEdit *firstNum;
    QLineEdit *time;
    QLabel *label_17;
    QLineEdit *economyPrice;
    QLabel *label_15;
    QLineEdit *economyNum;
    QLineEdit *takeoffCity;
    QLabel *label_5;
    QLineEdit *businessPrice;
    QLabel *label_6;
    QLabel *label_18;
    QLabel *label_14;
    QLabel *label_16;
    QFrame *frame;
    QPushButton *pushButton;
    QPushButton *ReturnBtn;

    void setupUi(QWidget *flight_change)
    {
        if (flight_change->objectName().isEmpty())
            flight_change->setObjectName(QString::fromUtf8("flight_change"));
        flight_change->resize(695, 448);
        label_4 = new QLabel(flight_change);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 330, 41, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\271\274\345\234\206"));
        font.setPointSize(15);
        font.setBold(true);
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        flightNumber = new QLineEdit(flight_change);
        flightNumber->setObjectName(QString::fromUtf8("flightNumber"));
        flightNumber->setGeometry(QRect(500, 70, 161, 23));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\271\274\345\234\206"));
        font1.setPointSize(14);
        flightNumber->setFont(font1);
        flightNumber->setStyleSheet(QString::fromUtf8("border:none"));
        flightNumber->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        label_7 = new QLabel(flight_change);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 190, 71, 31));
        label_7->setFont(font);
        label_7->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        label_9 = new QLabel(flight_change);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(370, 190, 71, 31));
        label_9->setFont(font);
        label_9->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        label_11 = new QLabel(flight_change);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(0, 70, 91, 31));
        label_11->setFont(font);
        label_11->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        arrivalCity = new QLineEdit(flight_change);
        arrivalCity->setObjectName(QString::fromUtf8("arrivalCity"));
        arrivalCity->setGeometry(QRect(500, 190, 161, 23));
        arrivalCity->setFont(font1);
        arrivalCity->setStyleSheet(QString::fromUtf8("border:none"));
        arrivalCity->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        firstPrice = new QLineEdit(flight_change);
        firstPrice->setObjectName(QString::fromUtf8("firstPrice"));
        firstPrice->setGeometry(QRect(339, 339, 81, 23));
        firstPrice->setFont(font1);
        firstPrice->setStyleSheet(QString::fromUtf8("border:none"));
        firstPrice->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_3 = new QLabel(flight_change);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(90, 400, 581, 121));
        label_3->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/icon.8.png);"));
        flightDate = new QLineEdit(flight_change);
        flightDate->setObjectName(QString::fromUtf8("flightDate"));
        flightDate->setGeometry(QRect(150, 70, 161, 23));
        flightDate->setFont(font1);
        flightDate->setStyleSheet(QString::fromUtf8("border:none"));
        flightDate->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        arrivalTime = new QLineEdit(flight_change);
        arrivalTime->setObjectName(QString::fromUtf8("arrivalTime"));
        arrivalTime->setGeometry(QRect(500, 130, 161, 23));
        arrivalTime->setFont(font1);
        arrivalTime->setStyleSheet(QString::fromUtf8("border:none"));
        arrivalTime->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        businessNum = new QLineEdit(flight_change);
        businessNum->setObjectName(QString::fromUtf8("businessNum"));
        businessNum->setGeometry(QRect(530, 380, 71, 23));
        businessNum->setFont(font1);
        businessNum->setStyleSheet(QString::fromUtf8("border:none"));
        businessNum->setAlignment(Qt::AlignmentFlag::AlignCenter);
        firstNum = new QLineEdit(flight_change);
        firstNum->setObjectName(QString::fromUtf8("firstNum"));
        firstNum->setGeometry(QRect(340, 380, 81, 23));
        firstNum->setFont(font1);
        firstNum->setStyleSheet(QString::fromUtf8("border:none"));
        firstNum->setAlignment(Qt::AlignmentFlag::AlignCenter);
        time = new QLineEdit(flight_change);
        time->setObjectName(QString::fromUtf8("time"));
        time->setGeometry(QRect(150, 130, 161, 23));
        time->setFont(font1);
        time->setStyleSheet(QString::fromUtf8("border:none"));
        time->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        label_17 = new QLabel(flight_change);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(350, 70, 91, 31));
        label_17->setFont(font);
        label_17->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        economyPrice = new QLineEdit(flight_change);
        economyPrice->setObjectName(QString::fromUtf8("economyPrice"));
        economyPrice->setGeometry(QRect(152, 340, 71, 23));
        economyPrice->setFont(font1);
        economyPrice->setStyleSheet(QString::fromUtf8("border:none"));
        economyPrice->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_15 = new QLabel(flight_change);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(360, 130, 91, 31));
        label_15->setFont(font);
        label_15->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        economyNum = new QLineEdit(flight_change);
        economyNum->setObjectName(QString::fromUtf8("economyNum"));
        economyNum->setGeometry(QRect(150, 380, 71, 23));
        economyNum->setFont(font1);
        economyNum->setStyleSheet(QString::fromUtf8("border:none"));
        economyNum->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        takeoffCity = new QLineEdit(flight_change);
        takeoffCity->setObjectName(QString::fromUtf8("takeoffCity"));
        takeoffCity->setGeometry(QRect(140, 190, 161, 23));
        takeoffCity->setFont(font1);
        takeoffCity->setStyleSheet(QString::fromUtf8("border:none"));
        takeoffCity->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        label_5 = new QLabel(flight_change);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 450, 61, 31));
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        businessPrice = new QLineEdit(flight_change);
        businessPrice->setObjectName(QString::fromUtf8("businessPrice"));
        businessPrice->setGeometry(QRect(530, 340, 71, 23));
        businessPrice->setFont(font1);
        businessPrice->setStyleSheet(QString::fromUtf8("border:none"));
        businessPrice->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_6 = new QLabel(flight_change);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(100, 180, 211, 51));
        label_6->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/icon.9.png);"));
        label_18 = new QLabel(flight_change);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(30, 370, 41, 31));
        label_18->setFont(font);
        label_18->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        label_14 = new QLabel(flight_change);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(10, 130, 91, 31));
        label_14->setFont(font);
        label_14->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        label_16 = new QLabel(flight_change);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(450, 60, 221, 51));
        label_16->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/icon.9.png);"));
        frame = new QFrame(flight_change);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(-20, -20, 721, 491));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(198, 246, 255);"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(560, 280, 111, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\271\274\345\234\206"));
        font2.setPointSize(15);
        pushButton->setFont(font2);
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
        ReturnBtn = new QPushButton(frame);
        ReturnBtn->setObjectName(QString::fromUtf8("ReturnBtn"));
        ReturnBtn->setGeometry(QRect(40, 40, 51, 31));
        QFont font3;
        font3.setPointSize(14);
        font3.setBold(true);
        font3.setItalic(true);
        font3.setUnderline(true);
        ReturnBtn->setFont(font3);
        ReturnBtn->setStyleSheet(QString::fromUtf8("QPushButton#ReturnBtn{\n"
"	image: url(:/Image/Imageres/back.png);\n"
"    background: transparent; /* \350\203\214\346\231\257\351\200\217\346\230\216 */\n"
"    border: none; /* \347\247\273\351\231\244\350\276\271\346\241\206 */\n"
"}"));
        frame->raise();
        label_4->raise();
        flightNumber->raise();
        label_7->raise();
        label_9->raise();
        label_11->raise();
        arrivalCity->raise();
        firstPrice->raise();
        label_3->raise();
        flightDate->raise();
        arrivalTime->raise();
        businessNum->raise();
        firstNum->raise();
        time->raise();
        label_17->raise();
        economyPrice->raise();
        label_15->raise();
        economyNum->raise();
        takeoffCity->raise();
        label_5->raise();
        businessPrice->raise();
        label_6->raise();
        label_18->raise();
        label_14->raise();
        label_16->raise();

        retranslateUi(flight_change);

        pushButton->setDefault(false);


        QMetaObject::connectSlotsByName(flight_change);
    } // setupUi

    void retranslateUi(QWidget *flight_change)
    {
        flight_change->setWindowTitle(QCoreApplication::translate("flight_change", "Form", nullptr));
        label_4->setText(QCoreApplication::translate("flight_change", "\344\273\267\346\240\274", nullptr));
        label_7->setText(QCoreApplication::translate("flight_change", "\345\207\272\345\217\221\345\234\260", nullptr));
        label_9->setText(QCoreApplication::translate("flight_change", "\345\210\260\350\276\276\345\234\260", nullptr));
        label_11->setText(QCoreApplication::translate("flight_change", "\346\227\245\346\234\237", nullptr));
        label_3->setText(QString());
        label_17->setText(QCoreApplication::translate("flight_change", "\350\210\252\347\217\255\345\217\267", nullptr));
        label_15->setText(QCoreApplication::translate("flight_change", "\345\210\260\350\276\276\346\227\266\351\227\264", nullptr));
        label_5->setText(QCoreApplication::translate("flight_change", "\345\272\247\344\275\215\346\225\260", nullptr));
        label_6->setText(QString());
        label_18->setText(QCoreApplication::translate("flight_change", "\346\225\260\351\207\217", nullptr));
        label_14->setText(QCoreApplication::translate("flight_change", "\345\207\272\345\217\221\346\227\266\351\227\264", nullptr));
        label_16->setText(QString());
        pushButton->setText(QCoreApplication::translate("flight_change", "\346\233\264\346\224\271", nullptr));
        ReturnBtn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class flight_change: public Ui_flight_change {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLIGHT_CHANGE_H
