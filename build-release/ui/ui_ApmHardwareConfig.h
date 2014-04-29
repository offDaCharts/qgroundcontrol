/********************************************************************************
** Form generated from reading UI file 'ApmHardwareConfig.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APMHARDWARECONFIG_H
#define UI_APMHARDWARECONFIG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QScrollArea>
#include <QtGui/QSpacerItem>
#include <QtGui/QStackedWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ApmHardwareConfig
{
public:
    QScrollArea *scrollArea_6;
    QWidget *scrollAreaWidgetContents_3;
    QVBoxLayout *verticalLayout_12;
    QVBoxLayout *navBarLayout;
    QPushButton *firmwareButton;
    QPushButton *manditoryHardware;
    QPushButton *frameTypeButton;
    QPushButton *compassButton;
    QPushButton *accelCalibrateButton;
    QPushButton *arduPlaneLevelButton;
    QPushButton *radioCalibrateButton;
    QPushButton *optionalHardwareButton;
    QPushButton *radio3DRButton;
    QPushButton *batteryMonitorButton;
    QPushButton *sonarButton;
    QPushButton *airspeedButton;
    QPushButton *opticalFlowButton;
    QPushButton *osdButton;
    QPushButton *cameraGimbalButton;
    QPushButton *antennaTrackerButton;
    QSpacerItem *verticalSpacer;
    QStackedWidget *stackedWidget;

    void setupUi(QWidget *ApmHardwareConfig)
    {
        if (ApmHardwareConfig->objectName().isEmpty())
            ApmHardwareConfig->setObjectName(QString::fromUtf8("ApmHardwareConfig"));
        ApmHardwareConfig->resize(1225, 827);
        scrollArea_6 = new QScrollArea(ApmHardwareConfig);
        scrollArea_6->setObjectName(QString::fromUtf8("scrollArea_6"));
        scrollArea_6->setGeometry(QRect(0, 20, 175, 531));
        scrollArea_6->setMinimumSize(QSize(175, 0));
        scrollArea_6->setMaximumSize(QSize(175, 16777215));
        scrollArea_6->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 156, 676));
        verticalLayout_12 = new QVBoxLayout(scrollAreaWidgetContents_3);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        navBarLayout = new QVBoxLayout();
        navBarLayout->setObjectName(QString::fromUtf8("navBarLayout"));
        navBarLayout->setSizeConstraint(QLayout::SetMinAndMaxSize);
        firmwareButton = new QPushButton(scrollAreaWidgetContents_3);
        firmwareButton->setObjectName(QString::fromUtf8("firmwareButton"));
        firmwareButton->setMinimumSize(QSize(100, 35));

        navBarLayout->addWidget(firmwareButton);

        manditoryHardware = new QPushButton(scrollAreaWidgetContents_3);
        manditoryHardware->setObjectName(QString::fromUtf8("manditoryHardware"));
        manditoryHardware->setMinimumSize(QSize(0, 35));
        manditoryHardware->setCheckable(true);

        navBarLayout->addWidget(manditoryHardware);

        frameTypeButton = new QPushButton(scrollAreaWidgetContents_3);
        frameTypeButton->setObjectName(QString::fromUtf8("frameTypeButton"));
        frameTypeButton->setMinimumSize(QSize(0, 35));
        frameTypeButton->setLayoutDirection(Qt::LeftToRight);

        navBarLayout->addWidget(frameTypeButton);

        compassButton = new QPushButton(scrollAreaWidgetContents_3);
        compassButton->setObjectName(QString::fromUtf8("compassButton"));
        compassButton->setMinimumSize(QSize(0, 35));

        navBarLayout->addWidget(compassButton);

        accelCalibrateButton = new QPushButton(scrollAreaWidgetContents_3);
        accelCalibrateButton->setObjectName(QString::fromUtf8("accelCalibrateButton"));
        accelCalibrateButton->setMinimumSize(QSize(0, 35));
        accelCalibrateButton->setLayoutDirection(Qt::LeftToRight);
        accelCalibrateButton->setAutoFillBackground(false);

        navBarLayout->addWidget(accelCalibrateButton);

        arduPlaneLevelButton = new QPushButton(scrollAreaWidgetContents_3);
        arduPlaneLevelButton->setObjectName(QString::fromUtf8("arduPlaneLevelButton"));
        arduPlaneLevelButton->setMinimumSize(QSize(0, 35));
        arduPlaneLevelButton->setLayoutDirection(Qt::LeftToRight);
        arduPlaneLevelButton->setAutoFillBackground(false);

        navBarLayout->addWidget(arduPlaneLevelButton);

        radioCalibrateButton = new QPushButton(scrollAreaWidgetContents_3);
        radioCalibrateButton->setObjectName(QString::fromUtf8("radioCalibrateButton"));
        radioCalibrateButton->setMinimumSize(QSize(100, 35));
        radioCalibrateButton->setMaximumSize(QSize(16777215, 16777215));
        radioCalibrateButton->setCheckable(false);
        radioCalibrateButton->setChecked(false);

        navBarLayout->addWidget(radioCalibrateButton);

        optionalHardwareButton = new QPushButton(scrollAreaWidgetContents_3);
        optionalHardwareButton->setObjectName(QString::fromUtf8("optionalHardwareButton"));
        optionalHardwareButton->setMinimumSize(QSize(0, 35));
        optionalHardwareButton->setCheckable(true);

        navBarLayout->addWidget(optionalHardwareButton);

        radio3DRButton = new QPushButton(scrollAreaWidgetContents_3);
        radio3DRButton->setObjectName(QString::fromUtf8("radio3DRButton"));
        radio3DRButton->setMinimumSize(QSize(0, 35));

        navBarLayout->addWidget(radio3DRButton);

        batteryMonitorButton = new QPushButton(scrollAreaWidgetContents_3);
        batteryMonitorButton->setObjectName(QString::fromUtf8("batteryMonitorButton"));
        batteryMonitorButton->setMinimumSize(QSize(0, 35));

        navBarLayout->addWidget(batteryMonitorButton);

        sonarButton = new QPushButton(scrollAreaWidgetContents_3);
        sonarButton->setObjectName(QString::fromUtf8("sonarButton"));
        sonarButton->setMinimumSize(QSize(0, 35));

        navBarLayout->addWidget(sonarButton);

        airspeedButton = new QPushButton(scrollAreaWidgetContents_3);
        airspeedButton->setObjectName(QString::fromUtf8("airspeedButton"));
        airspeedButton->setMinimumSize(QSize(0, 35));

        navBarLayout->addWidget(airspeedButton);

        opticalFlowButton = new QPushButton(scrollAreaWidgetContents_3);
        opticalFlowButton->setObjectName(QString::fromUtf8("opticalFlowButton"));
        opticalFlowButton->setMinimumSize(QSize(0, 35));

        navBarLayout->addWidget(opticalFlowButton);

        osdButton = new QPushButton(scrollAreaWidgetContents_3);
        osdButton->setObjectName(QString::fromUtf8("osdButton"));
        osdButton->setMinimumSize(QSize(0, 35));

        navBarLayout->addWidget(osdButton);

        cameraGimbalButton = new QPushButton(scrollAreaWidgetContents_3);
        cameraGimbalButton->setObjectName(QString::fromUtf8("cameraGimbalButton"));
        cameraGimbalButton->setMinimumSize(QSize(0, 35));

        navBarLayout->addWidget(cameraGimbalButton);

        antennaTrackerButton = new QPushButton(scrollAreaWidgetContents_3);
        antennaTrackerButton->setObjectName(QString::fromUtf8("antennaTrackerButton"));
        antennaTrackerButton->setMinimumSize(QSize(0, 35));

        navBarLayout->addWidget(antennaTrackerButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        navBarLayout->addItem(verticalSpacer);


        verticalLayout_12->addLayout(navBarLayout);

        scrollArea_6->setWidget(scrollAreaWidgetContents_3);
        stackedWidget = new QStackedWidget(ApmHardwareConfig);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(200, 30, 921, 761));

        retranslateUi(ApmHardwareConfig);

        stackedWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(ApmHardwareConfig);
    } // setupUi

    void retranslateUi(QWidget *ApmHardwareConfig)
    {
        ApmHardwareConfig->setWindowTitle(QApplication::translate("ApmHardwareConfig", "Form", 0, QApplication::UnicodeUTF8));
        firmwareButton->setText(QApplication::translate("ApmHardwareConfig", "Install Firmware", 0, QApplication::UnicodeUTF8));
        manditoryHardware->setText(QApplication::translate("ApmHardwareConfig", " >>> Manditory Hardware", 0, QApplication::UnicodeUTF8));
        frameTypeButton->setText(QApplication::translate("ApmHardwareConfig", "         Frame Type", 0, QApplication::UnicodeUTF8));
        compassButton->setText(QApplication::translate("ApmHardwareConfig", "   Compass", 0, QApplication::UnicodeUTF8));
        accelCalibrateButton->setText(QApplication::translate("ApmHardwareConfig", "              Accel Calibration", 0, QApplication::UnicodeUTF8));
        arduPlaneLevelButton->setText(QApplication::translate("ApmHardwareConfig", "             ArduPlane Level", 0, QApplication::UnicodeUTF8));
        radioCalibrateButton->setText(QApplication::translate("ApmHardwareConfig", "              Radio Calibration", 0, QApplication::UnicodeUTF8));
        optionalHardwareButton->setText(QApplication::translate("ApmHardwareConfig", ">>> Optional Hardware", 0, QApplication::UnicodeUTF8));
        radio3DRButton->setText(QApplication::translate("ApmHardwareConfig", "      3DR Radio", 0, QApplication::UnicodeUTF8));
        batteryMonitorButton->setText(QApplication::translate("ApmHardwareConfig", "               Battery Monitor", 0, QApplication::UnicodeUTF8));
        sonarButton->setText(QApplication::translate("ApmHardwareConfig", " Sonar", 0, QApplication::UnicodeUTF8));
        airspeedButton->setText(QApplication::translate("ApmHardwareConfig", "      Airspeed", 0, QApplication::UnicodeUTF8));
        opticalFlowButton->setText(QApplication::translate("ApmHardwareConfig", "          Optical Flow", 0, QApplication::UnicodeUTF8));
        osdButton->setText(QApplication::translate("ApmHardwareConfig", "OSD", 0, QApplication::UnicodeUTF8));
        cameraGimbalButton->setText(QApplication::translate("ApmHardwareConfig", "              Camera Gimbal", 0, QApplication::UnicodeUTF8));
        antennaTrackerButton->setText(QApplication::translate("ApmHardwareConfig", "               Antenna Tracker", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ApmHardwareConfig: public Ui_ApmHardwareConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APMHARDWARECONFIG_H
