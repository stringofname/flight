/********************************************************************************
** Form generated from reading UI file 'flight_search.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FLIGHT_SEARCH_H
#define UI_FLIGHT_SEARCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_flight_search
{
public:
    QLabel *labelBackground;
    QLabel *labelTitle;
    QPushButton *ReturnButton;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labelTakeoff;
    QLineEdit *lineEditChu;
    QLabel *labelArrival;
    QLineEdit *lineEditDao;
    QLabel *labelDate;
    QLineEdit *lineEditDate;
    QPushButton *pushButton;
    QTableWidget *tableWidget;

    void setupUi(QWidget *flight_search)
    {
        if (flight_search->objectName().isEmpty())
            flight_search->setObjectName(QString::fromUtf8("flight_search"));
        flight_search->resize(867, 471);
        flight_search->setStyleSheet(QString::fromUtf8("#flight_search{background-image: url(:/Image/Imageres/Bookings.jpg);}"));
        labelBackground = new QLabel(flight_search);
        labelBackground->setObjectName(QString::fromUtf8("labelBackground"));
        labelBackground->setGeometry(QRect(-10, -60, 900, 600));
        labelBackground->setStyleSheet(QString::fromUtf8(" \n"
"background-image: url(:/Imageres/airBg.jpeg);"));
        labelTitle = new QLabel(flight_search);
        labelTitle->setObjectName(QString::fromUtf8("labelTitle"));
        labelTitle->setGeometry(QRect(360, 50, 121, 30));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        labelTitle->setFont(font);
        labelTitle->setAlignment(Qt::AlignmentFlag::AlignCenter);
        ReturnButton = new QPushButton(flight_search);
        ReturnButton->setObjectName(QString::fromUtf8("ReturnButton"));
        ReturnButton->setGeometry(QRect(20, 30, 31, 31));
        ReturnButton->setStyleSheet(QString::fromUtf8("QPushButton#ReturnButton{\n"
"	image: url(:/Image/Imageres/back.png);\n"
"    background: transparent; /* \350\203\214\346\231\257\351\200\217\346\230\216 */\n"
"    border: none; /* \347\247\273\351\231\244\350\276\271\346\241\206 */\n"
"}"));
        layoutWidget = new QWidget(flight_search);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 90, 832, 371));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labelTakeoff = new QLabel(layoutWidget);
        labelTakeoff->setObjectName(QString::fromUtf8("labelTakeoff"));
        QFont font1;
        font1.setPointSize(14);
        labelTakeoff->setFont(font1);
        labelTakeoff->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout->addWidget(labelTakeoff);

        lineEditChu = new QLineEdit(layoutWidget);
        lineEditChu->setObjectName(QString::fromUtf8("lineEditChu"));
        lineEditChu->setFont(font1);
        lineEditChu->setStyleSheet(QString::fromUtf8("border: 1px solid gray; border-radius: 5px; padding: 2px;"));

        horizontalLayout->addWidget(lineEditChu);

        labelArrival = new QLabel(layoutWidget);
        labelArrival->setObjectName(QString::fromUtf8("labelArrival"));
        labelArrival->setFont(font1);
        labelArrival->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout->addWidget(labelArrival);

        lineEditDao = new QLineEdit(layoutWidget);
        lineEditDao->setObjectName(QString::fromUtf8("lineEditDao"));
        lineEditDao->setFont(font1);
        lineEditDao->setStyleSheet(QString::fromUtf8("border: 1px solid gray; border-radius: 5px; padding: 2px;"));

        horizontalLayout->addWidget(lineEditDao);

        labelDate = new QLabel(layoutWidget);
        labelDate->setObjectName(QString::fromUtf8("labelDate"));
        labelDate->setFont(font1);
        labelDate->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout->addWidget(labelDate);

        lineEditDate = new QLineEdit(layoutWidget);
        lineEditDate->setObjectName(QString::fromUtf8("lineEditDate"));
        lineEditDate->setFont(font1);
        lineEditDate->setStyleSheet(QString::fromUtf8("border: 1px solid gray; border-radius: 5px; padding: 2px;"));

        horizontalLayout->addWidget(lineEditDate);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(100, 32));
        QFont font2;
        font2.setBold(true);
        pushButton->setFont(font2);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{border-radius:4px;background:#409eff;color:white;font-size:14px}\n"
"QPushButton:hover {\n"
"         background-color: #ADD8E6;\"        /* \346\202\254\345\201\234\346\227\266\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"        }"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);

        tableWidget = new QTableWidget(layoutWidget);
        if (tableWidget->columnCount() < 9)
            tableWidget->setColumnCount(9);
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
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setStyleSheet(QString::fromUtf8("background-color: white; border: 1px solid gray; border-radius: 5px;"));
        tableWidget->setRowCount(0);
        tableWidget->setColumnCount(9);

        verticalLayout->addWidget(tableWidget);


        retranslateUi(flight_search);

        QMetaObject::connectSlotsByName(flight_search);
    } // setupUi

    void retranslateUi(QWidget *flight_search)
    {
        flight_search->setWindowTitle(QCoreApplication::translate("flight_search", "\350\210\252\347\217\255\346\220\234\347\264\242", nullptr));
        labelTitle->setText(QCoreApplication::translate("flight_search", "\350\210\252\347\217\255\346\220\234\347\264\242", nullptr));
        ReturnButton->setText(QString());
        labelTakeoff->setText(QCoreApplication::translate("flight_search", "\345\207\272\345\217\221\345\234\260", nullptr));
        labelArrival->setText(QCoreApplication::translate("flight_search", "\345\210\260\350\276\276\345\234\260", nullptr));
        labelDate->setText(QCoreApplication::translate("flight_search", "\346\227\245\346\234\237", nullptr));
        pushButton->setText(QCoreApplication::translate("flight_search", "\346\220\234\347\264\242", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("flight_search", "\350\210\252\347\217\255\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("flight_search", "\346\227\266\351\227\264", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("flight_search", "\347\273\217\346\265\216\350\210\261\347\245\250\344\273\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("flight_search", "\350\266\205\347\272\247\347\273\217\346\265\216\350\210\261\347\245\250\344\273\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("flight_search", "\345\244\264\347\255\211\350\210\261\347\245\250\344\273\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("flight_search", "\347\273\217\346\265\216\350\210\261\344\272\272\346\225\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("flight_search", "\350\266\205\347\272\247\347\273\217\346\265\216\350\210\261\344\272\272\346\225\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("flight_search", "\345\244\264\347\255\211\350\210\261\344\272\272\346\225\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("flight_search", "\346\223\215\344\275\234", nullptr));
    } // retranslateUi

};

namespace Ui {
    class flight_search: public Ui_flight_search {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLIGHT_SEARCH_H
