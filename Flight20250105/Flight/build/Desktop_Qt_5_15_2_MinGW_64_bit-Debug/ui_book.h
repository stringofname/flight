/********************************************************************************
** Form generated from reading UI file 'book.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
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
    QLineEdit *lineEditDepartTime;
    QLineEdit *lineEditDepart;
    QLineEdit *lineEditArrivalTime;
    QLineEdit *lineEditArrival;
    QLineEdit *lineEditName;
    QLineEdit *lineEdit_8;
    QLineEdit *lineEditPrice_1;
    QLineEdit *lineEditPrice_2;
    QLineEdit *lineEditPrice_3;
    QPushButton *pushButton_2;
    QLineEdit *lineEditDate;
    QLabel *label;
    QLineEdit *lineEditFlightNum;
    QPushButton *pushButton;
    QLabel *label_11;

    void setupUi(QWidget *book)
    {
        if (book->objectName().isEmpty())
            book->setObjectName(QString::fromUtf8("book"));
        book->resize(834, 576);
        label_2 = new QLabel(book);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(410, 190, 91, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\271\274\345\234\206"));
        font.setPointSize(15);
        font.setBold(true);
        label_2->setFont(font);
        label_3 = new QLabel(book);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(390, 70, 131, 31));
        label_3->setFont(font);
        label_4 = new QLabel(book);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(390, 130, 121, 31));
        label_4->setFont(font);
        label_5 = new QLabel(book);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(60, 120, 91, 31));
        label_5->setFont(font);
        label_6 = new QLabel(book);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(60, 190, 91, 31));
        label_6->setFont(font);
        label_7 = new QLabel(book);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(120, 320, 91, 31));
        label_7->setFont(font);
        label_8 = new QLabel(book);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(100, 380, 91, 31));
        label_8->setFont(font);
        comboBox = new QComboBox(book);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(500, 330, 151, 22));
        comboBox->setStyleSheet(QString::fromUtf8("background-color: rgb(253, 253, 253);"));
        label_9 = new QLabel(book);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(420, 320, 91, 31));
        label_9->setFont(font);
        label_10 = new QLabel(book);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(420, 380, 91, 31));
        label_10->setFont(font);
        lineEditDepartTime = new QLineEdit(book);
        lineEditDepartTime->setObjectName(QString::fromUtf8("lineEditDepartTime"));
        lineEditDepartTime->setGeometry(QRect(540, 70, 141, 31));
        lineEditDepart = new QLineEdit(book);
        lineEditDepart->setObjectName(QString::fromUtf8("lineEditDepart"));
        lineEditDepart->setGeometry(QRect(190, 130, 141, 31));
        lineEditArrivalTime = new QLineEdit(book);
        lineEditArrivalTime->setObjectName(QString::fromUtf8("lineEditArrivalTime"));
        lineEditArrivalTime->setGeometry(QRect(540, 130, 141, 31));
        lineEditArrival = new QLineEdit(book);
        lineEditArrival->setObjectName(QString::fromUtf8("lineEditArrival"));
        lineEditArrival->setGeometry(QRect(190, 180, 141, 31));
        lineEditName = new QLineEdit(book);
        lineEditName->setObjectName(QString::fromUtf8("lineEditName"));
        lineEditName->setGeometry(QRect(200, 320, 191, 31));
        lineEdit_8 = new QLineEdit(book);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));
        lineEdit_8->setGeometry(QRect(200, 380, 191, 31));
        lineEditPrice_1 = new QLineEdit(book);
        lineEditPrice_1->setObjectName(QString::fromUtf8("lineEditPrice_1"));
        lineEditPrice_1->setGeometry(QRect(510, 380, 81, 31));
        lineEditPrice_2 = new QLineEdit(book);
        lineEditPrice_2->setObjectName(QString::fromUtf8("lineEditPrice_2"));
        lineEditPrice_2->setGeometry(QRect(620, 380, 81, 31));
        lineEditPrice_3 = new QLineEdit(book);
        lineEditPrice_3->setObjectName(QString::fromUtf8("lineEditPrice_3"));
        lineEditPrice_3->setGeometry(QRect(730, 380, 81, 31));
        pushButton_2 = new QPushButton(book);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 10, 51, 31));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_2{\n"
"	image: url(:/Image/Imageres/back.png);\n"
"    background: transparent; /* \350\203\214\346\231\257\351\200\217\346\230\216 */\n"
"    border: none; /* \347\247\273\351\231\244\350\276\271\346\241\206 */\n"
"}"));
        lineEditDate = new QLineEdit(book);
        lineEditDate->setObjectName(QString::fromUtf8("lineEditDate"));
        lineEditDate->setGeometry(QRect(190, 70, 141, 31));
        label = new QLabel(book);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 60, 91, 31));
        label->setFont(font);
        lineEditFlightNum = new QLineEdit(book);
        lineEditFlightNum->setObjectName(QString::fromUtf8("lineEditFlightNum"));
        lineEditFlightNum->setGeometry(QRect(540, 190, 141, 31));
        pushButton = new QPushButton(book);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(700, 320, 111, 31));
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
        label_11 = new QLabel(book);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(-10, -20, 921, 381));
        label_11->setStyleSheet(QString::fromUtf8("background-image: url(:/Image/Imageres/Bookings.jpg);"));
        label_11->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        label_6->raise();
        label_7->raise();
        label_8->raise();
        comboBox->raise();
        label_9->raise();
        label_10->raise();
        lineEditDepartTime->raise();
        lineEditDepart->raise();
        lineEditArrivalTime->raise();
        lineEditArrival->raise();
        lineEditName->raise();
        lineEdit_8->raise();
        lineEditPrice_1->raise();
        lineEditPrice_2->raise();
        lineEditPrice_3->raise();
        pushButton_2->raise();
        lineEditDate->raise();
        label->raise();
        lineEditFlightNum->raise();
        pushButton->raise();

        retranslateUi(book);

        QMetaObject::connectSlotsByName(book);
    } // setupUi

    void retranslateUi(QWidget *book)
    {
        book->setWindowTitle(QCoreApplication::translate("book", "Form", nullptr));
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
        pushButton_2->setText(QString());
        label->setText(QCoreApplication::translate("book", "\346\227\245\346\234\237\357\274\232", nullptr));
        pushButton->setText(QCoreApplication::translate("book", "\350\256\242\347\245\250", nullptr));
        label_11->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class book: public Ui_book {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOK_H
