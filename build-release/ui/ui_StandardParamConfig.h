/********************************************************************************
** Form generated from reading UI file 'StandardParamConfig.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STANDARDPARAMCONFIG_H
#define UI_STANDARDPARAMCONFIG_H

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

class Ui_StandardParamConfig
{
public:
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;

    void setupUi(QWidget *StandardParamConfig)
    {
        if (StandardParamConfig->objectName().isEmpty())
            StandardParamConfig->setObjectName(QString::fromUtf8("StandardParamConfig"));
        StandardParamConfig->resize(651, 552);
        verticalLayout_3 = new QVBoxLayout(StandardParamConfig);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label = new QLabel(StandardParamConfig);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_3->addWidget(label);

        scrollArea = new QScrollArea(StandardParamConfig);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 631, 505));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));

        verticalLayout_2->addLayout(verticalLayout);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_3->addWidget(scrollArea);


        retranslateUi(StandardParamConfig);

        QMetaObject::connectSlotsByName(StandardParamConfig);
    } // setupUi

    void retranslateUi(QWidget *StandardParamConfig)
    {
        StandardParamConfig->setWindowTitle(QApplication::translate("StandardParamConfig", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("StandardParamConfig", "<h2>Standard Params</h2>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class StandardParamConfig: public Ui_StandardParamConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STANDARDPARAMCONFIG_H
