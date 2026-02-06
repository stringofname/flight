/********************************************************************************
** Form generated from reading UI file 'book.ui'
**
** Created by: Qt User Interface Compiler version 5.15.17
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOK_H
#define UI_BOOK_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_book
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QComboBox *comboBox;
    QLabel *label_9;
    QLabel *label_10;
    QLineEdit *lineEditDate;
    QLineEdit *lineEditDepartTime;
    QLineEdit *lineEditDepart;
    QLineEdit *lineEditFlightNum;
    QLineEdit *lineEditArrivalTime;
    QLineEdit *lineEditArrival;
    QLineEdit *lineEditName;
    QLineEdit *lineEdit_8;
    QLineEdit *lineEditPrice_1;
    QLineEdit *lineEditPrice_2;
    QLineEdit *lineEditPrice_3;
    QPushButton *pushButton;

    void setupUi(QWidget *book)
    {
        if (book->objectName().isEmpty())
            book->setObjectName(QString::fromUtf8("book"));
        book->resize(862, 576);
        label = new QLabel(book);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(140, 90, 91, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\271\274\345\234\206"));
        font.setPointSize(15);
        font.setBold(true);
        label->setFont(font);
        label_2 = new QLabel(book);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(410, 90, 91, 31));
        label_2->setFont(font);
        label_3 = new QLabel(book);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(110, 170, 91, 31));
        label_3->setFont(font);
        label_4 = new QLabel(book);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(400, 170, 91, 31));
        label_4->setFont(font);
        label_5 = new QLabel(book);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(130, 240, 91, 31));
        label_5->setFont(font);
        label_6 = new QLabel(book);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(410, 240, 91, 31));
        label_6->setFont(font);
        label_7 = new QLabel(book);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(580, 320, 91, 31));
        label_7->setFont(font);
        label_8 = new QLabel(book);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(570, 380, 91, 31));
        label_8->setFont(font);
        comboBox = new QComboBox(book);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(630, 440, 151, 22));
        comboBox->setStyleSheet(QString::fromUtf8("background-color: rgb(253, 253, 253);"));
        label_9 = new QLabel(book);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(580, 440, 91, 31));
        label_9->setFont(font);
        label_10 = new QLabel(book);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(90, 410, 91, 31));
        label_10->setFont(font);
        lineEditDate = new QLineEdit(book);
        lineEditDate->setObjectName(QString::fromUtf8("lineEditDate"));
        lineEditDate->setGeometry(QRect(190, 89, 141, 31));
        lineEditDepartTime = new QLineEdit(book);
        lineEditDepartTime->setObjectName(QString::fromUtf8("lineEditDepartTime"));
        lineEditDepartTime->setGeometry(QRect(190, 170, 141, 31));
        lineEditDepart = new QLineEdit(book);
        lineEditDepart->setObjectName(QString::fromUtf8("lineEditDepart"));
        lineEditDepart->setGeometry(QRect(190, 240, 141, 31));
        lineEditFlightNum = new QLineEdit(book);
        lineEditFlightNum->setObjectName(QString::fromUtf8("lineEditFlightNum"));
        lineEditFlightNum->setGeometry(QRect(490, 90, 141, 31));
        lineEditArrivalTime = new QLineEdit(book);
        lineEditArrivalTime->setObjectName(QString::fromUtf8("lineEditArrivalTime"));
        lineEditArrivalTime->setGeometry(QRect(490, 170, 141, 31));
        lineEditArrival = new QLineEdit(book);
        lineEditArrival->setObjectName(QString::fromUtf8("lineEditArrival"));
        lineEditArrival->setGeometry(QRect(490, 240, 141, 31));
        lineEditName = new QLineEdit(book);
        lineEditName->setObjectName(QString::fromUtf8("lineEditName"));
        lineEditName->setGeometry(QRect(630, 320, 191, 31));
        lineEdit_8 = new QLineEdit(book);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));
        lineEdit_8->setGeometry(QRect(630, 380, 191, 31));
        lineEditPrice_1 = new QLineEdit(book);
        lineEditPrice_1->setObjectName(QString::fromUtf8("lineEditPrice_1"));
        lineEditPrice_1->setGeometry(QRect(170, 409, 81, 31));
        lineEditPrice_2 = new QLineEdit(book);
        lineEditPrice_2->setObjectName(QString::fromUtf8("lineEditPrice_2"));
        lineEditPrice_2->setGeometry(QRect(280, 410, 81, 31));
        lineEditPrice_3 = new QLineEdit(book);
        lineEditPrice_3->setObjectName(QString::fromUtf8("lineEditPrice_3"));
        lineEditPrice_3->setGeometry(QRect(390, 410, 81, 31));
        pushButton = new QPushButton(book);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(730, 220, 111, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\271\274\345\234\206"));
        font1.setPointSize(15);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton { \n"
"background-color: rgb(233, 28, 35); \n"
"border-radius: 8px;\n"
" color: rgb(255, 255, 255);\n"
" } \n"
"QPushButton:hover { background-color:rgb(255, 32, 36); }\n"
""));
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("QIcon::ThemeIcon::MediaSeekForward")));
        pushButton->setIcon(icon);

        retranslateUi(book);

        QMetaObject::connectSlotsByName(book);
    } // setupUi

    void retranslateUi(QWidget *book)
    {
        book->setWindowTitle(QCoreApplication::translate("book", "Form", nullptr));
        label->setText(QCoreApplication::translate("book", "\346\227\245\346\234\237\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("book", "\350\210\252\347\217\255\345\217\267\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("book", "\345\207\272\345\217\221\346\227\266\351\227\264\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("book", "\345\210\260\350\276\276\346\227\266\351\227\264\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("book", "\345\207\272\345\217\221\345\234\260\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("book", "\347\233\256\347\232\204\345\234\260\357\274\232", nullptr));
        label_7->setText(QCoreApplication::translate("book", "\345\247\223\345\220\215\357\274\232", nullptr));
        label_8->setText(QCoreApplication::translate("book", "\350\272\253\344\273\275\350\257\201\357\274\232", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("book", "\347\273\217\346\265\216\350\210\261", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("book", "\345\244\264\347\255\211\350\210\261", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("book", "\345\225\206\345\212\241\350\210\261", nullptr));

        label_9->setText(QCoreApplication::translate("book", "\345\272\247\344\275\215\357\274\232", nullptr));
        label_10->setText(QCoreApplication::translate("book", "\344\273\267\346\240\274\357\274\232", nullptr));
        pushButton->setText(QCoreApplication::translate("book", "\350\256\242\347\245\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class book: public Ui_book {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOK_H
