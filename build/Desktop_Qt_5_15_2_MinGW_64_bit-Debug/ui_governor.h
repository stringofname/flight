/********************************************************************************
** Form generated from reading UI file 'governor.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GOVERNOR_H
#define UI_GOVERNOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_governor
{
public:
    QLabel *labelBackground;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QToolButton *btnSereach;
    QToolButton *btnChange;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *btnDelete;
    QToolButton *btnAdd;

    void setupUi(QWidget *governor)
    {
        if (governor->objectName().isEmpty())
            governor->setObjectName(QString::fromUtf8("governor"));
        governor->resize(578, 370);
        governor->setStyleSheet(QString::fromUtf8("#governor{background-image: url(:/Image/Imageres/Bookings.jpg);}"));
        labelBackground = new QLabel(governor);
        labelBackground->setObjectName(QString::fromUtf8("labelBackground"));
        labelBackground->setGeometry(QRect(0, 0, 900, 600));
        labelBackground->setStyleSheet(QString::fromUtf8("background-image: url(:/Image/Imageres/Bookings.jpg);"));
        layoutWidget = new QWidget(governor);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(110, 30, 361, 313));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnSereach = new QToolButton(layoutWidget);
        btnSereach->setObjectName(QString::fromUtf8("btnSereach"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnSereach->sizePolicy().hasHeightForWidth());
        btnSereach->setSizePolicy(sizePolicy);
        btnSereach->setMinimumSize(QSize(0, 150));
        btnSereach->setStyleSheet(QString::fromUtf8(""));
        btnSereach->setCheckable(true);
        btnSereach->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonTextBesideIcon);

        horizontalLayout->addWidget(btnSereach);

        btnChange = new QToolButton(layoutWidget);
        btnChange->setObjectName(QString::fromUtf8("btnChange"));
        sizePolicy.setHeightForWidth(btnChange->sizePolicy().hasHeightForWidth());
        btnChange->setSizePolicy(sizePolicy);
        btnChange->setMinimumSize(QSize(0, 150));
        btnChange->setStyleSheet(QString::fromUtf8(""));
        btnChange->setCheckable(true);
        btnChange->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonTextBesideIcon);

        horizontalLayout->addWidget(btnChange);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        btnDelete = new QToolButton(layoutWidget);
        btnDelete->setObjectName(QString::fromUtf8("btnDelete"));
        sizePolicy.setHeightForWidth(btnDelete->sizePolicy().hasHeightForWidth());
        btnDelete->setSizePolicy(sizePolicy);
        btnDelete->setMinimumSize(QSize(0, 150));
        btnDelete->setStyleSheet(QString::fromUtf8(""));
        btnDelete->setCheckable(true);
        btnDelete->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonTextBesideIcon);

        horizontalLayout_2->addWidget(btnDelete);

        btnAdd = new QToolButton(layoutWidget);
        btnAdd->setObjectName(QString::fromUtf8("btnAdd"));
        sizePolicy.setHeightForWidth(btnAdd->sizePolicy().hasHeightForWidth());
        btnAdd->setSizePolicy(sizePolicy);
        btnAdd->setMinimumSize(QSize(0, 150));
        btnAdd->setStyleSheet(QString::fromUtf8(""));
        btnAdd->setCheckable(true);
        btnAdd->setChecked(true);
        btnAdd->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonTextBesideIcon);

        horizontalLayout_2->addWidget(btnAdd);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(governor);

        QMetaObject::connectSlotsByName(governor);
    } // setupUi

    void retranslateUi(QWidget *governor)
    {
        governor->setWindowTitle(QCoreApplication::translate("governor", "\345\257\274\350\210\252\350\217\234\345\215\225", nullptr));
        btnSereach->setText(QCoreApplication::translate("governor", "\350\277\224\345\233\236", nullptr));
        btnChange->setText(QCoreApplication::translate("governor", "\346\237\245\350\257\242\350\210\252\347\217\255", nullptr));
        btnDelete->setText(QCoreApplication::translate("governor", "\345\210\240\351\231\244\350\210\252\347\217\255", nullptr));
        btnAdd->setText(QCoreApplication::translate("governor", "\346\267\273\345\212\240\350\210\252\347\217\255", nullptr));
    } // retranslateUi

};

namespace Ui {
    class governor: public Ui_governor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GOVERNOR_H
