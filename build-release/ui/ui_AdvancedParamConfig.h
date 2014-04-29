/********************************************************************************
** Form generated from reading UI file 'AdvancedParamConfig.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADVANCEDPARAMCONFIG_H
#define UI_ADVANCEDPARAMCONFIG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QScrollArea>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdvancedParamConfig
{
public:
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;

    void setupUi(QWidget *AdvancedParamConfig)
    {
        if (AdvancedParamConfig->objectName().isEmpty())
            AdvancedParamConfig->setObjectName(QString::fromUtf8("AdvancedParamConfig"));
        AdvancedParamConfig->resize(725, 632);
        verticalLayout_3 = new QVBoxLayout(AdvancedParamConfig);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label = new QLabel(AdvancedParamConfig);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_3->addWidget(label);

        scrollArea = new QScrollArea(AdvancedParamConfig);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 705, 585));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));

        verticalLayout_2->addLayout(verticalLayout);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_3->addWidget(scrollArea);


        retranslateUi(AdvancedParamConfig);

        QMetaObject::connectSlotsByName(AdvancedParamConfig);
    } // setupUi

    void retranslateUi(QWidget *AdvancedParamConfig)
    {
        AdvancedParamConfig->setWindowTitle(QApplication::translate("AdvancedParamConfig", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("AdvancedParamConfig", "<h2>Advanced Params</h2>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AdvancedParamConfig: public Ui_AdvancedParamConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADVANCEDPARAMCONFIG_H
