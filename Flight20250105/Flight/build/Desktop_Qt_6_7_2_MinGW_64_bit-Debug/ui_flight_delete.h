/********************************************************************************
** Form generated from reading UI file 'flight_delete.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FLIGHT_DELETE_H
#define UI_FLIGHT_DELETE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_flight_delete
{
public:
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *ReturnButton;
    QFrame *frame;

    void setupUi(QWidget *flight_delete)
    {
        if (flight_delete->objectName().isEmpty())
            flight_delete->setObjectName("flight_delete");
        flight_delete->resize(460, 284);
        flight_delete->setStyleSheet(QString::fromUtf8(""));
        label_2 = new QLabel(flight_delete);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(90, 100, 71, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\271\274\345\234\206")});
        font.setPointSize(14);
        font.setBold(true);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0)"));
        label_3 = new QLabel(flight_delete);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(100, 150, 211, 21));
        lineEdit = new QLineEdit(flight_delete);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(180, 100, 121, 31));
        QFont font1;
        font1.setPointSize(14);
        font1.setUnderline(false);
        lineEdit->setFont(font1);
        lineEdit->setStyleSheet(QString::fromUtf8("border: 1px solid gray; border-radius: 5px; padding: 2px;\n"
""));
        lineEdit->setAlignment(Qt::AlignmentFlag::AlignCenter);
        pushButton = new QPushButton(flight_delete);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(320, 100, 75, 31));
        pushButton->setCursor(QCursor(Qt::CursorShape::OpenHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{border-radius:4px;background:#409eff;color:white;font-size:14px}\n"
"QPushButton:hover {\n"
"         background-color: #ADD8E6;\"        /* \346\202\254\345\201\234\346\227\266\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"        }"));
        ReturnButton = new QPushButton(flight_delete);
        ReturnButton->setObjectName("ReturnButton");
        ReturnButton->setGeometry(QRect(20, 20, 31, 31));
        ReturnButton->setStyleSheet(QString::fromUtf8("QPushButton#ReturnButton{\n"
"	image: url(:/Image/Imageres/back.png);\n"
"    background: transparent; /* \350\203\214\346\231\257\351\200\217\346\230\216 */\n"
"    border: none; /* \347\247\273\351\231\244\350\276\271\346\241\206 */\n"
"}"));
        frame = new QFrame(flight_delete);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(-30, -20, 511, 321));
        frame->setStyleSheet(QString::fromUtf8("\n"
"#frame{background-image: url(:/Imageres/airBg.jpeg);}"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        frame->raise();
        label_2->raise();
        label_3->raise();
        lineEdit->raise();
        pushButton->raise();
        ReturnButton->raise();

        retranslateUi(flight_delete);

        QMetaObject::connectSlotsByName(flight_delete);
    } // setupUi

    void retranslateUi(QWidget *flight_delete)
    {
        flight_delete->setWindowTitle(QCoreApplication::translate("flight_delete", "\345\210\240\351\231\244\350\210\252\347\217\255", nullptr));
        label_2->setText(QCoreApplication::translate("flight_delete", "\350\210\252\347\217\255\345\217\267", nullptr));
        label_3->setText(QCoreApplication::translate("flight_delete", "\346\217\220\347\244\272\357\274\232\350\210\252\347\217\255\345\217\267\346\230\257\351\243\236\346\234\272\347\232\204\345\224\257\344\270\200\346\240\207\350\257\206", nullptr));
        pushButton->setText(QCoreApplication::translate("flight_delete", "\345\210\240\351\231\244", nullptr));
        ReturnButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class flight_delete: public Ui_flight_delete {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLIGHT_DELETE_H
