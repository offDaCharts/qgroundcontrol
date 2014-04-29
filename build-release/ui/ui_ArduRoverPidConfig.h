/********************************************************************************
** Form generated from reading UI file 'ArduRoverPidConfig.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ARDUROVERPIDCONFIG_H
#define UI_ARDUROVERPIDCONFIG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ArduRoverPidConfig
{
public:
    QLabel *label;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_18;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QVBoxLayout *verticalLayout_10;
    QDoubleSpinBox *steer2ServoPSpinBox;
    QDoubleSpinBox *steer2ServoISpinBox;
    QDoubleSpinBox *steer2ServoDSpinBox;
    QDoubleSpinBox *steer2ServoIMAXSpinBox;
    QGroupBox *groupBox_7;
    QVBoxLayout *verticalLayout_20;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_13;
    QLabel *label_26;
    QLabel *label_27;
    QLabel *label_28;
    QLabel *label_29;
    QVBoxLayout *verticalLayout_14;
    QDoubleSpinBox *speed2ThrottlePSpinBox;
    QDoubleSpinBox *speed2ThrottleISpinBox;
    QDoubleSpinBox *speed2ThrottleDSpinBox;
    QDoubleSpinBox *speed2ThrottleIMAXSpinBox;
    QGroupBox *groupBox_9;
    QVBoxLayout *verticalLayout_22;
    QHBoxLayout *horizontalLayout_9;
    QVBoxLayout *verticalLayout_17;
    QLabel *label_34;
    QLabel *label_35;
    QLabel *label_36;
    QLabel *label_37;
    QVBoxLayout *verticalLayout_23;
    QDoubleSpinBox *heading2SteerPSpinBox;
    QDoubleSpinBox *heading2SteerISpinBox;
    QDoubleSpinBox *heading2SteerDSpinBox;
    QDoubleSpinBox *heading2SteerIMAXSpinBox;
    QGroupBox *groupBox_10;
    QVBoxLayout *verticalLayout_24;
    QHBoxLayout *horizontalLayout_10;
    QVBoxLayout *verticalLayout_25;
    QLabel *label_38;
    QLabel *label_39;
    QLabel *label_40;
    QLabel *label_41;
    QVBoxLayout *verticalLayout_26;
    QDoubleSpinBox *throttleCruiseSpinBox;
    QDoubleSpinBox *throttleMinSpinBox;
    QDoubleSpinBox *throttleMaxSpinBox;
    QDoubleSpinBox *throttleFSSpinBox;
    QGroupBox *groupBox_11;
    QVBoxLayout *verticalLayout_27;
    QHBoxLayout *horizontalLayout_11;
    QVBoxLayout *verticalLayout_28;
    QLabel *label_42;
    QLabel *label_43;
    QVBoxLayout *verticalLayout_29;
    QDoubleSpinBox *xtrackGainSpinBox;
    QDoubleSpinBox *xtrackEntryAngleSpinBox;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox_8;
    QVBoxLayout *verticalLayout_21;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout_15;
    QLabel *label_30;
    QLabel *label_31;
    QLabel *label_32;
    QLabel *label_33;
    QVBoxLayout *verticalLayout_16;
    QDoubleSpinBox *sonarTriggerSpinBox;
    QDoubleSpinBox *sonarTurnAngleSpinBox;
    QDoubleSpinBox *sonarTurnTimeSpinBox;
    QDoubleSpinBox *sonaeDebounceSpinBox;
    QGroupBox *groupBox_6;
    QVBoxLayout *verticalLayout_19;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QVBoxLayout *verticalLayout_12;
    QDoubleSpinBox *roverCruiseSpinBox;
    QDoubleSpinBox *roverTurnSpeedSpinBox;
    QDoubleSpinBox *roverTurnDistSpinBox;
    QDoubleSpinBox *roverWPRadiusSpinBox;
    QPushButton *refreshPushButton;
    QPushButton *writePushButton;

    void setupUi(QWidget *ArduRoverPidConfig)
    {
        if (ArduRoverPidConfig->objectName().isEmpty())
            ArduRoverPidConfig->setObjectName(QString::fromUtf8("ArduRoverPidConfig"));
        ArduRoverPidConfig->resize(626, 607);
        label = new QLabel(ArduRoverPidConfig);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 151, 21));
        gridLayoutWidget = new QWidget(ArduRoverPidConfig);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(60, 90, 504, 419));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        groupBox_5 = new QGroupBox(gridLayoutWidget);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        verticalLayout_18 = new QVBoxLayout(groupBox_5);
        verticalLayout_18->setObjectName(QString::fromUtf8("verticalLayout_18"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        label_18 = new QLabel(groupBox_5);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        verticalLayout_9->addWidget(label_18);

        label_19 = new QLabel(groupBox_5);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        verticalLayout_9->addWidget(label_19);

        label_20 = new QLabel(groupBox_5);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        verticalLayout_9->addWidget(label_20);

        label_21 = new QLabel(groupBox_5);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        verticalLayout_9->addWidget(label_21);


        horizontalLayout_5->addLayout(verticalLayout_9);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        steer2ServoPSpinBox = new QDoubleSpinBox(groupBox_5);
        steer2ServoPSpinBox->setObjectName(QString::fromUtf8("steer2ServoPSpinBox"));
        steer2ServoPSpinBox->setDecimals(3);
        steer2ServoPSpinBox->setMinimum(-10000);
        steer2ServoPSpinBox->setMaximum(10000);

        verticalLayout_10->addWidget(steer2ServoPSpinBox);

        steer2ServoISpinBox = new QDoubleSpinBox(groupBox_5);
        steer2ServoISpinBox->setObjectName(QString::fromUtf8("steer2ServoISpinBox"));
        steer2ServoISpinBox->setDecimals(3);
        steer2ServoISpinBox->setMinimum(-10000);
        steer2ServoISpinBox->setMaximum(10000);

        verticalLayout_10->addWidget(steer2ServoISpinBox);

        steer2ServoDSpinBox = new QDoubleSpinBox(groupBox_5);
        steer2ServoDSpinBox->setObjectName(QString::fromUtf8("steer2ServoDSpinBox"));
        steer2ServoDSpinBox->setDecimals(3);
        steer2ServoDSpinBox->setMinimum(-10000);
        steer2ServoDSpinBox->setMaximum(10000);

        verticalLayout_10->addWidget(steer2ServoDSpinBox);

        steer2ServoIMAXSpinBox = new QDoubleSpinBox(groupBox_5);
        steer2ServoIMAXSpinBox->setObjectName(QString::fromUtf8("steer2ServoIMAXSpinBox"));
        steer2ServoIMAXSpinBox->setMinimum(-10000);
        steer2ServoIMAXSpinBox->setMaximum(10000);

        verticalLayout_10->addWidget(steer2ServoIMAXSpinBox);


        horizontalLayout_5->addLayout(verticalLayout_10);


        verticalLayout_18->addLayout(horizontalLayout_5);


        gridLayout->addWidget(groupBox_5, 0, 0, 1, 1);

        groupBox_7 = new QGroupBox(gridLayoutWidget);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        verticalLayout_20 = new QVBoxLayout(groupBox_7);
        verticalLayout_20->setObjectName(QString::fromUtf8("verticalLayout_20"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        label_26 = new QLabel(groupBox_7);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        verticalLayout_13->addWidget(label_26);

        label_27 = new QLabel(groupBox_7);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        verticalLayout_13->addWidget(label_27);

        label_28 = new QLabel(groupBox_7);
        label_28->setObjectName(QString::fromUtf8("label_28"));

        verticalLayout_13->addWidget(label_28);

        label_29 = new QLabel(groupBox_7);
        label_29->setObjectName(QString::fromUtf8("label_29"));

        verticalLayout_13->addWidget(label_29);


        horizontalLayout_7->addLayout(verticalLayout_13);

        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        speed2ThrottlePSpinBox = new QDoubleSpinBox(groupBox_7);
        speed2ThrottlePSpinBox->setObjectName(QString::fromUtf8("speed2ThrottlePSpinBox"));
        speed2ThrottlePSpinBox->setDecimals(3);
        speed2ThrottlePSpinBox->setMinimum(-10000);
        speed2ThrottlePSpinBox->setMaximum(10000);

        verticalLayout_14->addWidget(speed2ThrottlePSpinBox);

        speed2ThrottleISpinBox = new QDoubleSpinBox(groupBox_7);
        speed2ThrottleISpinBox->setObjectName(QString::fromUtf8("speed2ThrottleISpinBox"));
        speed2ThrottleISpinBox->setDecimals(3);
        speed2ThrottleISpinBox->setMinimum(-10000);
        speed2ThrottleISpinBox->setMaximum(10000);

        verticalLayout_14->addWidget(speed2ThrottleISpinBox);

        speed2ThrottleDSpinBox = new QDoubleSpinBox(groupBox_7);
        speed2ThrottleDSpinBox->setObjectName(QString::fromUtf8("speed2ThrottleDSpinBox"));
        speed2ThrottleDSpinBox->setDecimals(3);
        speed2ThrottleDSpinBox->setMinimum(-10000);
        speed2ThrottleDSpinBox->setMaximum(10000);

        verticalLayout_14->addWidget(speed2ThrottleDSpinBox);

        speed2ThrottleIMAXSpinBox = new QDoubleSpinBox(groupBox_7);
        speed2ThrottleIMAXSpinBox->setObjectName(QString::fromUtf8("speed2ThrottleIMAXSpinBox"));
        speed2ThrottleIMAXSpinBox->setMinimum(-10000);
        speed2ThrottleIMAXSpinBox->setMaximum(10000);

        verticalLayout_14->addWidget(speed2ThrottleIMAXSpinBox);


        horizontalLayout_7->addLayout(verticalLayout_14);


        verticalLayout_20->addLayout(horizontalLayout_7);


        gridLayout->addWidget(groupBox_7, 1, 1, 1, 1);

        groupBox_9 = new QGroupBox(gridLayoutWidget);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        verticalLayout_22 = new QVBoxLayout(groupBox_9);
        verticalLayout_22->setObjectName(QString::fromUtf8("verticalLayout_22"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        verticalLayout_17 = new QVBoxLayout();
        verticalLayout_17->setObjectName(QString::fromUtf8("verticalLayout_17"));
        label_34 = new QLabel(groupBox_9);
        label_34->setObjectName(QString::fromUtf8("label_34"));

        verticalLayout_17->addWidget(label_34);

        label_35 = new QLabel(groupBox_9);
        label_35->setObjectName(QString::fromUtf8("label_35"));

        verticalLayout_17->addWidget(label_35);

        label_36 = new QLabel(groupBox_9);
        label_36->setObjectName(QString::fromUtf8("label_36"));

        verticalLayout_17->addWidget(label_36);

        label_37 = new QLabel(groupBox_9);
        label_37->setObjectName(QString::fromUtf8("label_37"));

        verticalLayout_17->addWidget(label_37);


        horizontalLayout_9->addLayout(verticalLayout_17);

        verticalLayout_23 = new QVBoxLayout();
        verticalLayout_23->setObjectName(QString::fromUtf8("verticalLayout_23"));
        heading2SteerPSpinBox = new QDoubleSpinBox(groupBox_9);
        heading2SteerPSpinBox->setObjectName(QString::fromUtf8("heading2SteerPSpinBox"));
        heading2SteerPSpinBox->setDecimals(3);
        heading2SteerPSpinBox->setMinimum(-10000);
        heading2SteerPSpinBox->setMaximum(10000);

        verticalLayout_23->addWidget(heading2SteerPSpinBox);

        heading2SteerISpinBox = new QDoubleSpinBox(groupBox_9);
        heading2SteerISpinBox->setObjectName(QString::fromUtf8("heading2SteerISpinBox"));
        heading2SteerISpinBox->setDecimals(3);
        heading2SteerISpinBox->setMinimum(-10000);
        heading2SteerISpinBox->setMaximum(10000);

        verticalLayout_23->addWidget(heading2SteerISpinBox);

        heading2SteerDSpinBox = new QDoubleSpinBox(groupBox_9);
        heading2SteerDSpinBox->setObjectName(QString::fromUtf8("heading2SteerDSpinBox"));
        heading2SteerDSpinBox->setDecimals(3);
        heading2SteerDSpinBox->setMinimum(-10000);
        heading2SteerDSpinBox->setMaximum(10000);

        verticalLayout_23->addWidget(heading2SteerDSpinBox);

        heading2SteerIMAXSpinBox = new QDoubleSpinBox(groupBox_9);
        heading2SteerIMAXSpinBox->setObjectName(QString::fromUtf8("heading2SteerIMAXSpinBox"));
        heading2SteerIMAXSpinBox->setMinimum(-10000);
        heading2SteerIMAXSpinBox->setMaximum(10000);

        verticalLayout_23->addWidget(heading2SteerIMAXSpinBox);


        horizontalLayout_9->addLayout(verticalLayout_23);


        verticalLayout_22->addLayout(horizontalLayout_9);


        gridLayout->addWidget(groupBox_9, 1, 0, 1, 1);

        groupBox_10 = new QGroupBox(gridLayoutWidget);
        groupBox_10->setObjectName(QString::fromUtf8("groupBox_10"));
        verticalLayout_24 = new QVBoxLayout(groupBox_10);
        verticalLayout_24->setObjectName(QString::fromUtf8("verticalLayout_24"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        verticalLayout_25 = new QVBoxLayout();
        verticalLayout_25->setObjectName(QString::fromUtf8("verticalLayout_25"));
        label_38 = new QLabel(groupBox_10);
        label_38->setObjectName(QString::fromUtf8("label_38"));

        verticalLayout_25->addWidget(label_38);

        label_39 = new QLabel(groupBox_10);
        label_39->setObjectName(QString::fromUtf8("label_39"));

        verticalLayout_25->addWidget(label_39);

        label_40 = new QLabel(groupBox_10);
        label_40->setObjectName(QString::fromUtf8("label_40"));

        verticalLayout_25->addWidget(label_40);

        label_41 = new QLabel(groupBox_10);
        label_41->setObjectName(QString::fromUtf8("label_41"));

        verticalLayout_25->addWidget(label_41);


        horizontalLayout_10->addLayout(verticalLayout_25);

        verticalLayout_26 = new QVBoxLayout();
        verticalLayout_26->setObjectName(QString::fromUtf8("verticalLayout_26"));
        throttleCruiseSpinBox = new QDoubleSpinBox(groupBox_10);
        throttleCruiseSpinBox->setObjectName(QString::fromUtf8("throttleCruiseSpinBox"));
        throttleCruiseSpinBox->setDecimals(3);
        throttleCruiseSpinBox->setMinimum(-10000);
        throttleCruiseSpinBox->setMaximum(10000);

        verticalLayout_26->addWidget(throttleCruiseSpinBox);

        throttleMinSpinBox = new QDoubleSpinBox(groupBox_10);
        throttleMinSpinBox->setObjectName(QString::fromUtf8("throttleMinSpinBox"));
        throttleMinSpinBox->setDecimals(3);
        throttleMinSpinBox->setMinimum(-10000);
        throttleMinSpinBox->setMaximum(10000);

        verticalLayout_26->addWidget(throttleMinSpinBox);

        throttleMaxSpinBox = new QDoubleSpinBox(groupBox_10);
        throttleMaxSpinBox->setObjectName(QString::fromUtf8("throttleMaxSpinBox"));
        throttleMaxSpinBox->setDecimals(3);
        throttleMaxSpinBox->setMinimum(-10000);
        throttleMaxSpinBox->setMaximum(10000);

        verticalLayout_26->addWidget(throttleMaxSpinBox);

        throttleFSSpinBox = new QDoubleSpinBox(groupBox_10);
        throttleFSSpinBox->setObjectName(QString::fromUtf8("throttleFSSpinBox"));
        throttleFSSpinBox->setMinimum(-10000);
        throttleFSSpinBox->setMaximum(10000);

        verticalLayout_26->addWidget(throttleFSSpinBox);


        horizontalLayout_10->addLayout(verticalLayout_26);


        verticalLayout_24->addLayout(horizontalLayout_10);


        gridLayout->addWidget(groupBox_10, 0, 2, 1, 1);

        groupBox_11 = new QGroupBox(gridLayoutWidget);
        groupBox_11->setObjectName(QString::fromUtf8("groupBox_11"));
        verticalLayout_27 = new QVBoxLayout(groupBox_11);
        verticalLayout_27->setObjectName(QString::fromUtf8("verticalLayout_27"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        verticalLayout_28 = new QVBoxLayout();
        verticalLayout_28->setObjectName(QString::fromUtf8("verticalLayout_28"));
        label_42 = new QLabel(groupBox_11);
        label_42->setObjectName(QString::fromUtf8("label_42"));

        verticalLayout_28->addWidget(label_42);

        label_43 = new QLabel(groupBox_11);
        label_43->setObjectName(QString::fromUtf8("label_43"));

        verticalLayout_28->addWidget(label_43);


        horizontalLayout_11->addLayout(verticalLayout_28);

        verticalLayout_29 = new QVBoxLayout();
        verticalLayout_29->setObjectName(QString::fromUtf8("verticalLayout_29"));
        xtrackGainSpinBox = new QDoubleSpinBox(groupBox_11);
        xtrackGainSpinBox->setObjectName(QString::fromUtf8("xtrackGainSpinBox"));
        xtrackGainSpinBox->setDecimals(3);
        xtrackGainSpinBox->setMinimum(-10000);
        xtrackGainSpinBox->setMaximum(10000);

        verticalLayout_29->addWidget(xtrackGainSpinBox);

        xtrackEntryAngleSpinBox = new QDoubleSpinBox(groupBox_11);
        xtrackEntryAngleSpinBox->setObjectName(QString::fromUtf8("xtrackEntryAngleSpinBox"));
        xtrackEntryAngleSpinBox->setDecimals(3);
        xtrackEntryAngleSpinBox->setMinimum(-10000);
        xtrackEntryAngleSpinBox->setMaximum(10000);

        verticalLayout_29->addWidget(xtrackEntryAngleSpinBox);


        horizontalLayout_11->addLayout(verticalLayout_29);


        verticalLayout_27->addLayout(horizontalLayout_11);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_27->addItem(verticalSpacer);


        gridLayout->addWidget(groupBox_11, 0, 1, 1, 1);

        groupBox_8 = new QGroupBox(gridLayoutWidget);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        verticalLayout_21 = new QVBoxLayout(groupBox_8);
        verticalLayout_21->setObjectName(QString::fromUtf8("verticalLayout_21"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        label_30 = new QLabel(groupBox_8);
        label_30->setObjectName(QString::fromUtf8("label_30"));

        verticalLayout_15->addWidget(label_30);

        label_31 = new QLabel(groupBox_8);
        label_31->setObjectName(QString::fromUtf8("label_31"));

        verticalLayout_15->addWidget(label_31);

        label_32 = new QLabel(groupBox_8);
        label_32->setObjectName(QString::fromUtf8("label_32"));

        verticalLayout_15->addWidget(label_32);

        label_33 = new QLabel(groupBox_8);
        label_33->setObjectName(QString::fromUtf8("label_33"));

        verticalLayout_15->addWidget(label_33);


        horizontalLayout_8->addLayout(verticalLayout_15);

        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        sonarTriggerSpinBox = new QDoubleSpinBox(groupBox_8);
        sonarTriggerSpinBox->setObjectName(QString::fromUtf8("sonarTriggerSpinBox"));
        sonarTriggerSpinBox->setDecimals(3);
        sonarTriggerSpinBox->setMinimum(-10000);
        sonarTriggerSpinBox->setMaximum(10000);

        verticalLayout_16->addWidget(sonarTriggerSpinBox);

        sonarTurnAngleSpinBox = new QDoubleSpinBox(groupBox_8);
        sonarTurnAngleSpinBox->setObjectName(QString::fromUtf8("sonarTurnAngleSpinBox"));
        sonarTurnAngleSpinBox->setDecimals(3);
        sonarTurnAngleSpinBox->setMinimum(-10000);
        sonarTurnAngleSpinBox->setMaximum(10000);

        verticalLayout_16->addWidget(sonarTurnAngleSpinBox);

        sonarTurnTimeSpinBox = new QDoubleSpinBox(groupBox_8);
        sonarTurnTimeSpinBox->setObjectName(QString::fromUtf8("sonarTurnTimeSpinBox"));
        sonarTurnTimeSpinBox->setDecimals(3);
        sonarTurnTimeSpinBox->setMinimum(-10000);
        sonarTurnTimeSpinBox->setMaximum(10000);

        verticalLayout_16->addWidget(sonarTurnTimeSpinBox);

        sonaeDebounceSpinBox = new QDoubleSpinBox(groupBox_8);
        sonaeDebounceSpinBox->setObjectName(QString::fromUtf8("sonaeDebounceSpinBox"));
        sonaeDebounceSpinBox->setMinimum(-10000);
        sonaeDebounceSpinBox->setMaximum(10000);

        verticalLayout_16->addWidget(sonaeDebounceSpinBox);


        horizontalLayout_8->addLayout(verticalLayout_16);


        verticalLayout_21->addLayout(horizontalLayout_8);


        gridLayout->addWidget(groupBox_8, 2, 1, 1, 1);

        groupBox_6 = new QGroupBox(gridLayoutWidget);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        verticalLayout_19 = new QVBoxLayout(groupBox_6);
        verticalLayout_19->setObjectName(QString::fromUtf8("verticalLayout_19"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        label_22 = new QLabel(groupBox_6);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        verticalLayout_11->addWidget(label_22);

        label_23 = new QLabel(groupBox_6);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        verticalLayout_11->addWidget(label_23);

        label_24 = new QLabel(groupBox_6);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        verticalLayout_11->addWidget(label_24);

        label_25 = new QLabel(groupBox_6);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        verticalLayout_11->addWidget(label_25);


        horizontalLayout_6->addLayout(verticalLayout_11);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        roverCruiseSpinBox = new QDoubleSpinBox(groupBox_6);
        roverCruiseSpinBox->setObjectName(QString::fromUtf8("roverCruiseSpinBox"));
        roverCruiseSpinBox->setDecimals(3);
        roverCruiseSpinBox->setMinimum(-10000);
        roverCruiseSpinBox->setMaximum(10000);

        verticalLayout_12->addWidget(roverCruiseSpinBox);

        roverTurnSpeedSpinBox = new QDoubleSpinBox(groupBox_6);
        roverTurnSpeedSpinBox->setObjectName(QString::fromUtf8("roverTurnSpeedSpinBox"));
        roverTurnSpeedSpinBox->setDecimals(3);
        roverTurnSpeedSpinBox->setMinimum(-10000);
        roverTurnSpeedSpinBox->setMaximum(10000);

        verticalLayout_12->addWidget(roverTurnSpeedSpinBox);

        roverTurnDistSpinBox = new QDoubleSpinBox(groupBox_6);
        roverTurnDistSpinBox->setObjectName(QString::fromUtf8("roverTurnDistSpinBox"));
        roverTurnDistSpinBox->setDecimals(3);
        roverTurnDistSpinBox->setMinimum(-10000);
        roverTurnDistSpinBox->setMaximum(10000);

        verticalLayout_12->addWidget(roverTurnDistSpinBox);

        roverWPRadiusSpinBox = new QDoubleSpinBox(groupBox_6);
        roverWPRadiusSpinBox->setObjectName(QString::fromUtf8("roverWPRadiusSpinBox"));
        roverWPRadiusSpinBox->setMinimum(-10000);
        roverWPRadiusSpinBox->setMaximum(10000);

        verticalLayout_12->addWidget(roverWPRadiusSpinBox);


        horizontalLayout_6->addLayout(verticalLayout_12);


        verticalLayout_19->addLayout(horizontalLayout_6);


        gridLayout->addWidget(groupBox_6, 1, 2, 1, 1);

        refreshPushButton = new QPushButton(ArduRoverPidConfig);
        refreshPushButton->setObjectName(QString::fromUtf8("refreshPushButton"));
        refreshPushButton->setGeometry(QRect(300, 540, 91, 23));
        writePushButton = new QPushButton(ArduRoverPidConfig);
        writePushButton->setObjectName(QString::fromUtf8("writePushButton"));
        writePushButton->setGeometry(QRect(200, 540, 75, 23));

        retranslateUi(ArduRoverPidConfig);

        QMetaObject::connectSlotsByName(ArduRoverPidConfig);
    } // setupUi

    void retranslateUi(QWidget *ArduRoverPidConfig)
    {
        ArduRoverPidConfig->setWindowTitle(QApplication::translate("ArduRoverPidConfig", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ArduRoverPidConfig", "<h2>ArduRover Pids</h2>", 0, QApplication::UnicodeUTF8));
        groupBox_5->setTitle(QApplication::translate("ArduRoverPidConfig", "Steer 2 Servo", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("ArduRoverPidConfig", "P", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("ArduRoverPidConfig", "I", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("ArduRoverPidConfig", "D", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("ArduRoverPidConfig", "INT_MAX", 0, QApplication::UnicodeUTF8));
        groupBox_7->setTitle(QApplication::translate("ArduRoverPidConfig", "Speed 2 Throttle", 0, QApplication::UnicodeUTF8));
        label_26->setText(QApplication::translate("ArduRoverPidConfig", "P", 0, QApplication::UnicodeUTF8));
        label_27->setText(QApplication::translate("ArduRoverPidConfig", "I", 0, QApplication::UnicodeUTF8));
        label_28->setText(QApplication::translate("ArduRoverPidConfig", "D", 0, QApplication::UnicodeUTF8));
        label_29->setText(QApplication::translate("ArduRoverPidConfig", "INT_MAX", 0, QApplication::UnicodeUTF8));
        groupBox_9->setTitle(QApplication::translate("ArduRoverPidConfig", "Heading 2 Steer", 0, QApplication::UnicodeUTF8));
        label_34->setText(QApplication::translate("ArduRoverPidConfig", "P", 0, QApplication::UnicodeUTF8));
        label_35->setText(QApplication::translate("ArduRoverPidConfig", "I", 0, QApplication::UnicodeUTF8));
        label_36->setText(QApplication::translate("ArduRoverPidConfig", "D", 0, QApplication::UnicodeUTF8));
        label_37->setText(QApplication::translate("ArduRoverPidConfig", "INT_MAX", 0, QApplication::UnicodeUTF8));
        groupBox_10->setTitle(QApplication::translate("ArduRoverPidConfig", "Throttle 0-100%", 0, QApplication::UnicodeUTF8));
        label_38->setText(QApplication::translate("ArduRoverPidConfig", "Cruise", 0, QApplication::UnicodeUTF8));
        label_39->setText(QApplication::translate("ArduRoverPidConfig", "Min", 0, QApplication::UnicodeUTF8));
        label_40->setText(QApplication::translate("ArduRoverPidConfig", "Max", 0, QApplication::UnicodeUTF8));
        label_41->setText(QApplication::translate("ArduRoverPidConfig", "FS Value", 0, QApplication::UnicodeUTF8));
        groupBox_11->setTitle(QApplication::translate("ArduRoverPidConfig", "Xtrack Pids", 0, QApplication::UnicodeUTF8));
        label_42->setText(QApplication::translate("ArduRoverPidConfig", "Gain (cm)", 0, QApplication::UnicodeUTF8));
        label_43->setText(QApplication::translate("ArduRoverPidConfig", "Entry Angle", 0, QApplication::UnicodeUTF8));
        groupBox_8->setTitle(QApplication::translate("ArduRoverPidConfig", "Sonar", 0, QApplication::UnicodeUTF8));
        label_30->setText(QApplication::translate("ArduRoverPidConfig", "Trigger cm", 0, QApplication::UnicodeUTF8));
        label_31->setText(QApplication::translate("ArduRoverPidConfig", "Turn Angle", 0, QApplication::UnicodeUTF8));
        label_32->setText(QApplication::translate("ArduRoverPidConfig", "Turn Time", 0, QApplication::UnicodeUTF8));
        label_33->setText(QApplication::translate("ArduRoverPidConfig", "Debounce", 0, QApplication::UnicodeUTF8));
        groupBox_6->setTitle(QApplication::translate("ArduRoverPidConfig", "Rover", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("ArduRoverPidConfig", "Cruise Speed", 0, QApplication::UnicodeUTF8));
        label_23->setText(QApplication::translate("ArduRoverPidConfig", "Turn Speed", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("ArduRoverPidConfig", "Turn Dist", 0, QApplication::UnicodeUTF8));
        label_25->setText(QApplication::translate("ArduRoverPidConfig", "WP Radius", 0, QApplication::UnicodeUTF8));
        refreshPushButton->setText(QApplication::translate("ArduRoverPidConfig", "Refresh Params", 0, QApplication::UnicodeUTF8));
        writePushButton->setText(QApplication::translate("ArduRoverPidConfig", "Write Params", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ArduRoverPidConfig: public Ui_ArduRoverPidConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ARDUROVERPIDCONFIG_H
