/********************************************************************************
** Form generated from reading UI file 'inquiry.ui'
**
** Created by: Qt User Interface Compiler version 5.15.17
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INQUIRY_H
#define UI_INQUIRY_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_inquiry
{
public:
    QLineEdit *lineEditDepart;
    QLineEdit *lineEditArrival;
    QLineEdit *lineEditDate;
    QPushButton *SearchBtn;
    QPushButton *ReturnBtn;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QTableWidget *tableWidget;
    QPushButton *HomeButton;

    void setupUi(QWidget *inquiry)
    {
        if (inquiry->objectName().isEmpty())
            inquiry->setObjectName(QString::fromUtf8("inquiry"));
        inquiry->setEnabled(true);
        inquiry->resize(1059, 639);
        QFont font;
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(false);
        inquiry->setFont(font);
        lineEditDepart = new QLineEdit(inquiry);
        lineEditDepart->setObjectName(QString::fromUtf8("lineEditDepart"));
        lineEditDepart->setGeometry(QRect(180, 170, 113, 20));
        lineEditArrival = new QLineEdit(inquiry);
        lineEditArrival->setObjectName(QString::fromUtf8("lineEditArrival"));
        lineEditArrival->setGeometry(QRect(360, 170, 113, 20));
        lineEditDate = new QLineEdit(inquiry);
        lineEditDate->setObjectName(QString::fromUtf8("lineEditDate"));
        lineEditDate->setGeometry(QRect(560, 170, 113, 20));
        SearchBtn = new QPushButton(inquiry);
        SearchBtn->setObjectName(QString::fromUtf8("SearchBtn"));
        SearchBtn->setGeometry(QRect(750, 160, 71, 31));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setUnderline(false);
        SearchBtn->setFont(font1);
        SearchBtn->setStyleSheet(QString::fromUtf8("QPushButton { background-color: rgb(233, 28, 35); border-radius: 3px; color: rgb(255, 255, 255); } \n"
"QPushButton:hover { background-color:rgb(255, 32, 36); }"));
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("QIcon::ThemeIcon::MediaSeekForward")));
        SearchBtn->setIcon(icon);
        ReturnBtn = new QPushButton(inquiry);
        ReturnBtn->setObjectName(QString::fromUtf8("ReturnBtn"));
        ReturnBtn->setGeometry(QRect(110, 40, 81, 41));
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setItalic(true);
        font2.setUnderline(true);
        ReturnBtn->setFont(font2);
        ReturnBtn->setStyleSheet(QString::fromUtf8("QPushButton { background-color: none; border-radius: 3px; color: black; } \n"
"QPushButton:hover { background-color:rgb(233, 182, 163); }\n"
""));
        label = new QLabel(inquiry);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(140, 170, 40, 12));
        label_2 = new QLabel(inquiry);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(320, 170, 40, 12));
        label_3 = new QLabel(inquiry);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(520, 170, 40, 12));
        tableWidget = new QTableWidget(inquiry);
        if (tableWidget->columnCount() < 8)
            tableWidget->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(50, 240, 800, 201));
        tableWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 242, 242);"));
        HomeButton = new QPushButton(inquiry);
        HomeButton->setObjectName(QString::fromUtf8("HomeButton"));
        HomeButton->setEnabled(true);
        HomeButton->setGeometry(QRect(750, 50, 121, 41));
        HomeButton->setCursor(QCursor(Qt::OpenHandCursor));
        HomeButton->setStyleSheet(QString::fromUtf8("QPushButton#HomeButton {\n"
"    font-size: 17px; /* \350\256\276\347\275\256\345\255\227\344\275\223\345\244\247\345\260\217\344\270\27217px */\n"
"    font-weight: bold; /* \350\256\276\347\275\256\345\255\227\344\275\223\345\212\240\347\262\227 */\n"
"    background: transparent; /* \350\203\214\346\231\257\351\200\217\346\230\216 */\n"
"    border: none; /* \347\247\273\351\231\244\350\276\271\346\241\206 */\n"
"}\n"
""));

        retranslateUi(inquiry);

        QMetaObject::connectSlotsByName(inquiry);
    } // setupUi

    void retranslateUi(QWidget *inquiry)
    {
        inquiry->setWindowTitle(QCoreApplication::translate("inquiry", "Form", nullptr));
        SearchBtn->setText(QCoreApplication::translate("inquiry", "\346\220\234\347\264\242", nullptr));
        ReturnBtn->setText(QCoreApplication::translate("inquiry", "<-\350\277\224\345\233\236", nullptr));
        label->setText(QCoreApplication::translate("inquiry", "\345\207\272\345\217\221", nullptr));
        label_2->setText(QCoreApplication::translate("inquiry", "\345\210\260\350\276\276", nullptr));
        label_3->setText(QCoreApplication::translate("inquiry", "\346\227\245\346\234\237", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("inquiry", "\350\210\252\347\217\255\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("inquiry", "\346\227\266\351\227\264", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("inquiry", "\347\273\217\346\265\216\350\210\261\347\245\250\344\273\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("inquiry", "\345\244\264\347\255\211\350\210\261\347\245\250\344\273\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("inquiry", "\345\225\206\345\212\241\350\210\261\347\245\250\344\273\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("inquiry", "\347\273\217\346\265\216\350\210\261\344\272\272\346\225\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("inquiry", "\345\244\264\347\255\211\350\210\261\344\272\272\346\225\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("inquiry", "\345\225\206\345\212\241\350\210\261\344\272\272\346\225\260", nullptr));
        HomeButton->setText(QCoreApplication::translate("inquiry", "->\344\270\252\344\272\272\344\270\255\345\277\203", nullptr));
    } // retranslateUi

};

namespace Ui {
    class inquiry: public Ui_inquiry {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INQUIRY_H
