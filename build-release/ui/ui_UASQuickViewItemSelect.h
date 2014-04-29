/********************************************************************************
** Form generated from reading UI file 'UASQuickViewItemSelect.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UASQUICKVIEWITEMSELECT_H
#define UI_UASQUICKVIEWITEMSELECT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QScrollArea>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UASQuickViewItemSelect
{
public:
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *UASQuickViewItemSelect)
    {
        if (UASQuickViewItemSelect->objectName().isEmpty())
            UASQuickViewItemSelect->setObjectName(QString::fromUtf8("UASQuickViewItemSelect"));
        UASQuickViewItemSelect->resize(947, 248);
        verticalLayout = new QVBoxLayout(UASQuickViewItemSelect);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        scrollArea = new QScrollArea(UASQuickViewItemSelect);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 927, 228));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));

        verticalLayout_2->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);


        retranslateUi(UASQuickViewItemSelect);

        QMetaObject::connectSlotsByName(UASQuickViewItemSelect);
    } // setupUi

    void retranslateUi(QWidget *UASQuickViewItemSelect)
    {
        UASQuickViewItemSelect->setWindowTitle(QApplication::translate("UASQuickViewItemSelect", "Select Item", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class UASQuickViewItemSelect: public Ui_UASQuickViewItemSelect {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UASQUICKVIEWITEMSELECT_H
