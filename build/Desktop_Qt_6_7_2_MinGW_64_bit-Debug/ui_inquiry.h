/********************************************************************************
** Form generated from reading UI file 'inquiry.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INQUIRY_H
#define UI_INQUIRY_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
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
    QFrame *frame_2;
    QFrame *frame;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEditArrival;
    QLineEdit *lineEditDepart;
    QPushButton *SearchBtn;
    QLineEdit *lineEditDate;
    QTableWidget *tableWidget;
    QPushButton *HomeButton;
    QPushButton *ReturnBtn;
    QLabel *label_4;

    void setupUi(QWidget *inquiry)
    {
        if (inquiry->objectName().isEmpty())
            inquiry->setObjectName("inquiry");
        inquiry->setEnabled(true);
        inquiry->resize(855, 544);
        QFont font;
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(false);
        inquiry->setFont(font);
        frame_2 = new QFrame(inquiry);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(-10, 0, 921, 561));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: rgb(234, 255, 251);\n"
""));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        frame = new QFrame(frame_2);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(10, 110, 861, 101));
        frame->setStyleSheet(QString::fromUtf8(" QFrame {\n"
"	background-color: rgb(255, 255, 255);\n"
"	background-color: rgb(255, 255, 255);\n"
"        border: 1px solid #E0E0E0;\n"
"        border-radius: 10px;\n"
" \n"
"    }"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(250, 30, 71, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\345\271\274\345\234\206")});
        font1.setPointSize(11);
        label->setFont(font1);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 30, 71, 31));
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(480, 30, 81, 31));
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lineEditArrival = new QLineEdit(frame);
        lineEditArrival->setObjectName("lineEditArrival");
        lineEditArrival->setGeometry(QRect(100, 30, 142, 41));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEditArrival->sizePolicy().hasHeightForWidth());
        lineEditArrival->setSizePolicy(sizePolicy);
        lineEditArrival->setMinimumSize(QSize(80, 35));
        lineEditArrival->setStyleSheet(QString::fromUtf8("border: 1px solid gray; border-radius: 5px; padding: 2px;"));
        lineEditDepart = new QLineEdit(frame);
        lineEditDepart->setObjectName("lineEditDepart");
        lineEditDepart->setGeometry(QRect(330, 30, 141, 41));
        sizePolicy.setHeightForWidth(lineEditDepart->sizePolicy().hasHeightForWidth());
        lineEditDepart->setSizePolicy(sizePolicy);
        lineEditDepart->setMinimumSize(QSize(80, 35));
        lineEditDepart->setStyleSheet(QString::fromUtf8("border: 1px solid gray; border-radius: 5px; padding: 2px;"));
        SearchBtn = new QPushButton(frame);
        SearchBtn->setObjectName("SearchBtn");
        SearchBtn->setGeometry(QRect(760, 30, 81, 41));
        SearchBtn->setFont(font);
        SearchBtn->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{border-radius:4px;background:#409eff;color:white;font-size:14px}\n"
"QPushButton:hover {\n"
"         background-color: #ADD8E6;\"        /* \346\202\254\345\201\234\346\227\266\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"        }"));
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::MediaSeekForward));
        SearchBtn->setIcon(icon);
        lineEditDate = new QLineEdit(frame);
        lineEditDate->setObjectName("lineEditDate");
        lineEditDate->setGeometry(QRect(570, 30, 167, 41));
        sizePolicy.setHeightForWidth(lineEditDate->sizePolicy().hasHeightForWidth());
        lineEditDate->setSizePolicy(sizePolicy);
        lineEditDate->setMinimumSize(QSize(0, 35));
        lineEditDate->setStyleSheet(QString::fromUtf8("border: 1px solid gray; border-radius: 5px; padding: 2px;"));
        tableWidget = new QTableWidget(frame_2);
        if (tableWidget->columnCount() < 8)
            tableWidget->setColumnCount(8);
        QFont font2;
        font2.setFamilies({QString::fromUtf8("\345\271\274\345\234\206")});
        font2.setBold(false);
        font2.setItalic(false);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font2);
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QFont font3;
        font3.setFamilies({QString::fromUtf8("\345\271\274\345\234\206")});
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font3);
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font3);
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFont(font3);
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setFont(font3);
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setFont(font3);
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setFont(font3);
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        __qtablewidgetitem7->setFont(font3);
        tableWidget->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(9, 210, 861, 341));
        tableWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 242, 242);"));
        HomeButton = new QPushButton(frame_2);
        HomeButton->setObjectName("HomeButton");
        HomeButton->setEnabled(true);
        HomeButton->setGeometry(QRect(770, 40, 51, 41));
        HomeButton->setCursor(QCursor(Qt::CursorShape::OpenHandCursor));
        HomeButton->setStyleSheet(QString::fromUtf8("QPushButton#HomeButton{\n"
"	image: url(:/Image/Imageres/user (1).png);\n"
"    background: transparent; /* \350\203\214\346\231\257\351\200\217\346\230\216 */\n"
"    border: none; /* \347\247\273\351\231\244\350\276\271\346\241\206 */\n"
"}"));
        ReturnBtn = new QPushButton(frame_2);
        ReturnBtn->setObjectName("ReturnBtn");
        ReturnBtn->setGeometry(QRect(20, 20, 61, 41));
        QFont font4;
        font4.setPointSize(14);
        font4.setBold(true);
        font4.setItalic(true);
        font4.setUnderline(true);
        ReturnBtn->setFont(font4);
        ReturnBtn->setStyleSheet(QString::fromUtf8("QPushButton#ReturnBtn{\n"
"	image: url(:/Image/Imageres/back.png);\n"
"    background: transparent; /* \350\203\214\346\231\257\351\200\217\346\230\216 */\n"
"    border: none; /* \347\247\273\351\231\244\350\276\271\346\241\206 */\n"
"    cursor: pointing-hand; \n"
"}\n"
"\n"
""));
        label_4 = new QLabel(frame_2);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 0, 861, 251));
        label_4->setStyleSheet(QString::fromUtf8("background-image: url(:/Image/Imageres/BackGround4.jpg);\n"
"background-image: url(:/Imageres/airBg.jpeg);"));
        label_4->raise();
        tableWidget->raise();
        HomeButton->raise();
        ReturnBtn->raise();
        frame->raise();

        retranslateUi(inquiry);

        QMetaObject::connectSlotsByName(inquiry);
    } // setupUi

    void retranslateUi(QWidget *inquiry)
    {
        inquiry->setWindowTitle(QCoreApplication::translate("inquiry", "\346\220\234\347\264\242\350\210\252\347\217\255", nullptr));
        label->setText(QCoreApplication::translate("inquiry", "\345\207\272\345\217\221\345\234\260", nullptr));
        label_2->setText(QCoreApplication::translate("inquiry", "\347\233\256\347\232\204\345\234\260", nullptr));
        label_3->setText(QCoreApplication::translate("inquiry", "\345\207\272\345\217\221\346\227\245\346\234\237", nullptr));
        SearchBtn->setText(QCoreApplication::translate("inquiry", "\346\220\234\347\264\242", nullptr));
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
        HomeButton->setText(QString());
        ReturnBtn->setText(QString());
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class inquiry: public Ui_inquiry {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INQUIRY_H
