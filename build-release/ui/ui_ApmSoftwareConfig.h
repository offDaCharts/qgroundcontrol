/********************************************************************************
** Form generated from reading UI file 'ApmSoftwareConfig.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APMSOFTWARECONFIG_H
#define UI_APMSOFTWARECONFIG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QScrollArea>
#include <QtGui/QSpacerItem>
#include <QtGui/QStackedWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ApmSoftwareConfig
{
public:
    QHBoxLayout *horizontalLayout;
    QScrollArea *scrollArea_6;
    QWidget *scrollAreaWidgetContents_3;
    QVBoxLayout *verticalLayout_12;
    QVBoxLayout *navBarLayout;
    QPushButton *plannerConfigButton;
    QPushButton *flightModesButton;
    QPushButton *standardParamButton;
    QPushButton *failSafeButton;
    QPushButton *advancedParamButton;
    QPushButton *advParamListButton;
    QPushButton *arduCopterPidButton;
    QPushButton *arduPlanePidButton;
    QPushButton *arduRoverPidButton;
    QSpacerItem *verticalSpacer;
    QStackedWidget *stackedWidget;

    void setupUi(QWidget *ApmSoftwareConfig)
    {
        if (ApmSoftwareConfig->objectName().isEmpty())
            ApmSoftwareConfig->setObjectName(QString::fromUtf8("ApmSoftwareConfig"));
        ApmSoftwareConfig->resize(853, 619);
        horizontalLayout = new QHBoxLayout(ApmSoftwareConfig);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        scrollArea_6 = new QScrollArea(ApmSoftwareConfig);
        scrollArea_6->setObjectName(QString::fromUtf8("scrollArea_6"));
        scrollArea_6->setMinimumSize(QSize(175, 0));
        scrollArea_6->setMaximumSize(QSize(175, 16777215));
        scrollArea_6->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 173, 599));
        verticalLayout_12 = new QVBoxLayout(scrollAreaWidgetContents_3);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        navBarLayout = new QVBoxLayout();
        navBarLayout->setObjectName(QString::fromUtf8("navBarLayout"));
        navBarLayout->setSizeConstraint(QLayout::SetMinAndMaxSize);
        plannerConfigButton = new QPushButton(scrollAreaWidgetContents_3);
        plannerConfigButton->setObjectName(QString::fromUtf8("plannerConfigButton"));
        plannerConfigButton->setMinimumSize(QSize(100, 35));

        navBarLayout->addWidget(plannerConfigButton);

        flightModesButton = new QPushButton(scrollAreaWidgetContents_3);
        flightModesButton->setObjectName(QString::fromUtf8("flightModesButton"));
        flightModesButton->setMinimumSize(QSize(0, 35));
        flightModesButton->setCheckable(false);

        navBarLayout->addWidget(flightModesButton);

        standardParamButton = new QPushButton(scrollAreaWidgetContents_3);
        standardParamButton->setObjectName(QString::fromUtf8("standardParamButton"));
        standardParamButton->setMinimumSize(QSize(0, 35));
        standardParamButton->setCheckable(false);

        navBarLayout->addWidget(standardParamButton);

        failSafeButton = new QPushButton(scrollAreaWidgetContents_3);
        failSafeButton->setObjectName(QString::fromUtf8("failSafeButton"));
        failSafeButton->setMinimumSize(QSize(0, 35));
        failSafeButton->setCheckable(false);

        navBarLayout->addWidget(failSafeButton);

        advancedParamButton = new QPushButton(scrollAreaWidgetContents_3);
        advancedParamButton->setObjectName(QString::fromUtf8("advancedParamButton"));
        advancedParamButton->setMinimumSize(QSize(0, 35));
        advancedParamButton->setCheckable(false);

        navBarLayout->addWidget(advancedParamButton);

        advParamListButton = new QPushButton(scrollAreaWidgetContents_3);
        advParamListButton->setObjectName(QString::fromUtf8("advParamListButton"));
        advParamListButton->setMinimumSize(QSize(0, 35));
        advParamListButton->setCheckable(false);

        navBarLayout->addWidget(advParamListButton);

        arduCopterPidButton = new QPushButton(scrollAreaWidgetContents_3);
        arduCopterPidButton->setObjectName(QString::fromUtf8("arduCopterPidButton"));
        arduCopterPidButton->setMinimumSize(QSize(0, 35));
        arduCopterPidButton->setCheckable(false);

        navBarLayout->addWidget(arduCopterPidButton);

        arduPlanePidButton = new QPushButton(scrollAreaWidgetContents_3);
        arduPlanePidButton->setObjectName(QString::fromUtf8("arduPlanePidButton"));
        arduPlanePidButton->setMinimumSize(QSize(0, 35));

        navBarLayout->addWidget(arduPlanePidButton);

        arduRoverPidButton = new QPushButton(scrollAreaWidgetContents_3);
        arduRoverPidButton->setObjectName(QString::fromUtf8("arduRoverPidButton"));
        arduRoverPidButton->setMinimumSize(QSize(0, 35));

        navBarLayout->addWidget(arduRoverPidButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        navBarLayout->addItem(verticalSpacer);


        verticalLayout_12->addLayout(navBarLayout);

        scrollArea_6->setWidget(scrollAreaWidgetContents_3);

        horizontalLayout->addWidget(scrollArea_6);

        stackedWidget = new QStackedWidget(ApmSoftwareConfig);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));

        horizontalLayout->addWidget(stackedWidget);


        retranslateUi(ApmSoftwareConfig);

        QMetaObject::connectSlotsByName(ApmSoftwareConfig);
    } // setupUi

    void retranslateUi(QWidget *ApmSoftwareConfig)
    {
        ApmSoftwareConfig->setWindowTitle(QApplication::translate("ApmSoftwareConfig", "Form", 0, QApplication::UnicodeUTF8));
        plannerConfigButton->setText(QApplication::translate("ApmSoftwareConfig", "qgroundcontrol 2.0 Config", 0, QApplication::UnicodeUTF8));
        flightModesButton->setText(QApplication::translate("ApmSoftwareConfig", "Flight Modes", 0, QApplication::UnicodeUTF8));
        standardParamButton->setText(QApplication::translate("ApmSoftwareConfig", "Standard Params", 0, QApplication::UnicodeUTF8));
        failSafeButton->setText(QApplication::translate("ApmSoftwareConfig", "FailSafe", 0, QApplication::UnicodeUTF8));
        advancedParamButton->setText(QApplication::translate("ApmSoftwareConfig", "Advanced Params", 0, QApplication::UnicodeUTF8));
        advParamListButton->setText(QApplication::translate("ApmSoftwareConfig", "Full Parameter List", 0, QApplication::UnicodeUTF8));
        arduCopterPidButton->setText(QApplication::translate("ApmSoftwareConfig", "ArduCopter Pids", 0, QApplication::UnicodeUTF8));
        arduPlanePidButton->setText(QApplication::translate("ApmSoftwareConfig", "ArduPlane Pids", 0, QApplication::UnicodeUTF8));
        arduRoverPidButton->setText(QApplication::translate("ApmSoftwareConfig", "ArduRover Pids", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ApmSoftwareConfig: public Ui_ApmSoftwareConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APMSOFTWARECONFIG_H
