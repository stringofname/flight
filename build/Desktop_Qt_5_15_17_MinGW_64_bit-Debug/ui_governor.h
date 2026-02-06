/********************************************************************************
** Form generated from reading UI file 'governor.ui'
**
** Created by: Qt User Interface Compiler version 5.15.17
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GOVERNOR_H
#define UI_GOVERNOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_governor
{
public:
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QToolButton *btnAdd;
    QToolButton *btnDelete;
    QToolButton *btnSereach;
    QToolButton *btnChange;
    QSpacerItem *verticalSpacer;
    QStackedWidget *stackedWidget;

    void setupUi(QWidget *governor)
    {
        if (governor->objectName().isEmpty())
            governor->setObjectName(QString::fromUtf8("governor"));
        governor->resize(400, 300);
        widget = new QWidget(governor);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 5, 150, 611));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        btnAdd = new QToolButton(widget);
        btnAdd->setObjectName(QString::fromUtf8("btnAdd"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnAdd->sizePolicy().hasHeightForWidth());
        btnAdd->setSizePolicy(sizePolicy);
        btnAdd->setCheckable(true);
        btnAdd->setChecked(true);
        btnAdd->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout_2->addWidget(btnAdd, 1, 0, 1, 1);

        btnDelete = new QToolButton(widget);
        btnDelete->setObjectName(QString::fromUtf8("btnDelete"));
        sizePolicy.setHeightForWidth(btnDelete->sizePolicy().hasHeightForWidth());
        btnDelete->setSizePolicy(sizePolicy);
        btnDelete->setCheckable(true);
        btnDelete->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout_2->addWidget(btnDelete, 2, 0, 1, 1);

        btnSereach = new QToolButton(widget);
        btnSereach->setObjectName(QString::fromUtf8("btnSereach"));
        sizePolicy.setHeightForWidth(btnSereach->sizePolicy().hasHeightForWidth());
        btnSereach->setSizePolicy(sizePolicy);
        btnSereach->setStyleSheet(QString::fromUtf8(""));
        btnSereach->setCheckable(true);
        btnSereach->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout_2->addWidget(btnSereach, 4, 0, 1, 1);

        btnChange = new QToolButton(widget);
        btnChange->setObjectName(QString::fromUtf8("btnChange"));
        sizePolicy.setHeightForWidth(btnChange->sizePolicy().hasHeightForWidth());
        btnChange->setSizePolicy(sizePolicy);
        btnChange->setCheckable(true);
        btnChange->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout_2->addWidget(btnChange, 3, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 5, 0, 1, 1);

        stackedWidget = new QStackedWidget(governor);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(151, 0, 901, 611));

        retranslateUi(governor);

        QMetaObject::connectSlotsByName(governor);
    } // setupUi

    void retranslateUi(QWidget *governor)
    {
        governor->setWindowTitle(QCoreApplication::translate("governor", "Form", nullptr));
        btnAdd->setText(QCoreApplication::translate("governor", "\346\267\273\345\212\240\350\210\252\347\217\255", nullptr));
        btnDelete->setText(QCoreApplication::translate("governor", "\345\210\240\351\231\244\350\210\252\347\217\255", nullptr));
        btnSereach->setText(QCoreApplication::translate("governor", "\350\277\224\345\233\236", nullptr));
        btnChange->setText(QCoreApplication::translate("governor", "\346\237\245\350\257\242\350\210\252\347\217\255", nullptr));
    } // retranslateUi

};

namespace Ui {
    class governor: public Ui_governor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GOVERNOR_H
