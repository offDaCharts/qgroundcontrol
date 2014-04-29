/********************************************************************************
** Form generated from reading UI file 'CameraGimbalConfig.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAMERAGIMBALCONFIG_H
#define UI_CAMERAGIMBALCONFIG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CameraGimbalConfig
{
public:
    QLabel *label;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_9;
    QCheckBox *tiltReverseCheckBox;
    QLabel *label_8;
    QLabel *label_7;
    QLabel *label_11;
    QLabel *label_10;
    QComboBox *tiltChannelComboBox;
    QLabel *label_6;
    QCheckBox *tiltStabilizeCheckBox;
    QLabel *label_2;
    QSpinBox *tiltServoMinSpinBox;
    QSpinBox *tiltServoMaxSpinBox;
    QSpinBox *tiltAngleMinSpinBox;
    QSpinBox *tiltAngleMaxSpinBox;
    QComboBox *tiltInputChannelComboBox;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLabel *label_14;
    QLabel *label_15;
    QComboBox *rollInputChannelComboBox;
    QLabel *label_16;
    QCheckBox *rollReverseCheckBox;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QComboBox *rollChannelComboBox;
    QLabel *label_21;
    QCheckBox *rollStabilizeCheckBox;
    QLabel *label_3;
    QSpinBox *rollServoMinSpinBox;
    QSpinBox *rollServoMaxSpinBox;
    QSpinBox *rollAngleMinSpinBox;
    QSpinBox *rollAngleMaxSpinBox;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QLabel *label_22;
    QLabel *label_23;
    QComboBox *panInputChannelComboBox;
    QLabel *label_24;
    QCheckBox *panReverseCheckBox;
    QLabel *label_25;
    QLabel *label_26;
    QLabel *label_27;
    QLabel *label_28;
    QComboBox *panChannelComboBox;
    QLabel *label_29;
    QCheckBox *panStabilizeCheckBox;
    QLabel *label_4;
    QSpinBox *panServoMinSpinBox;
    QSpinBox *panAngleMinSpinBox;
    QSpinBox *panAngleMaxSpinBox;
    QSpinBox *panServoMaxSpinBox;
    QWidget *gridLayoutWidget_4;
    QGridLayout *gridLayout_4;
    QLabel *label_5;
    QLabel *label_39;
    QLabel *label_31;
    QLabel *label_32;
    QLabel *label_34;
    QLabel *label_35;
    QLabel *label_36;
    QLabel *label_37;
    QComboBox *shutterChannelComboBox;
    QLabel *label_38;
    QLabel *label_40;
    QSpinBox *shutterPushedSpinBox;
    QSpinBox *shutterNotPushedSpinBox;
    QSpinBox *shutterDurationSpinBox;
    QSpinBox *shutterServoMinSpinBox;
    QSpinBox *shutterServoMaxSpinBox;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_33;
    QLabel *label_41;
    QLabel *label_30;
    QVBoxLayout *verticalLayout_2;
    QSpinBox *retractXSpinBox;
    QSpinBox *retractYSpinBox;
    QSpinBox *retractZSpinBox;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_42;
    QLabel *label_43;
    QLabel *label_44;
    QVBoxLayout *verticalLayout_6;
    QSpinBox *neutralXSpinBox;
    QSpinBox *neutralYSpinBox;
    QSpinBox *neutralZSpinBox;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_45;
    QLabel *label_46;
    QLabel *label_47;
    QVBoxLayout *verticalLayout_9;
    QSpinBox *controlXSpinBox;
    QSpinBox *controlYSpinBox;
    QSpinBox *controlZSpinBox;

    void setupUi(QWidget *CameraGimbalConfig)
    {
        if (CameraGimbalConfig->objectName().isEmpty())
            CameraGimbalConfig->setObjectName(QString::fromUtf8("CameraGimbalConfig"));
        CameraGimbalConfig->resize(959, 813);
        label = new QLabel(CameraGimbalConfig);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 20, 131, 31));
        label->setScaledContents(false);
        gridLayoutWidget = new QWidget(CameraGimbalConfig);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(30, 60, 541, 151));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(gridLayoutWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_12, 2, 5, 1, 1);

        label_13 = new QLabel(gridLayoutWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_13, 3, 5, 1, 1);

        label_9 = new QLabel(gridLayoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 1, 7, 1, 1);

        tiltReverseCheckBox = new QCheckBox(gridLayoutWidget);
        tiltReverseCheckBox->setObjectName(QString::fromUtf8("tiltReverseCheckBox"));

        gridLayout->addWidget(tiltReverseCheckBox, 4, 4, 1, 1);

        label_8 = new QLabel(gridLayoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 1, 5, 1, 2);

        label_7 = new QLabel(gridLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 1, 3, 1, 2);

        label_11 = new QLabel(gridLayoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_11, 3, 3, 1, 1);

        label_10 = new QLabel(gridLayoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_10, 2, 3, 1, 1);

        tiltChannelComboBox = new QComboBox(gridLayoutWidget);
        tiltChannelComboBox->setObjectName(QString::fromUtf8("tiltChannelComboBox"));

        gridLayout->addWidget(tiltChannelComboBox, 0, 2, 1, 1);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_6, 0, 1, 1, 1);

        tiltStabilizeCheckBox = new QCheckBox(gridLayoutWidget);
        tiltStabilizeCheckBox->setObjectName(QString::fromUtf8("tiltStabilizeCheckBox"));

        gridLayout->addWidget(tiltStabilizeCheckBox, 0, 3, 1, 2);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(250, 120));
        label_2->setMaximumSize(QSize(250, 120));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/files/images/devices/cameraGimalPitch1.png")));
        label_2->setScaledContents(true);

        gridLayout->addWidget(label_2, 1, 1, 4, 2);

        tiltServoMinSpinBox = new QSpinBox(gridLayoutWidget);
        tiltServoMinSpinBox->setObjectName(QString::fromUtf8("tiltServoMinSpinBox"));
        tiltServoMinSpinBox->setMaximum(3000);
        tiltServoMinSpinBox->setValue(1000);

        gridLayout->addWidget(tiltServoMinSpinBox, 2, 4, 1, 1);

        tiltServoMaxSpinBox = new QSpinBox(gridLayoutWidget);
        tiltServoMaxSpinBox->setObjectName(QString::fromUtf8("tiltServoMaxSpinBox"));
        tiltServoMaxSpinBox->setMaximum(3000);
        tiltServoMaxSpinBox->setValue(2000);

        gridLayout->addWidget(tiltServoMaxSpinBox, 3, 4, 1, 1);

        tiltAngleMinSpinBox = new QSpinBox(gridLayoutWidget);
        tiltAngleMinSpinBox->setObjectName(QString::fromUtf8("tiltAngleMinSpinBox"));
        tiltAngleMinSpinBox->setMinimum(-100);
        tiltAngleMinSpinBox->setMaximum(100);
        tiltAngleMinSpinBox->setValue(100);

        gridLayout->addWidget(tiltAngleMinSpinBox, 2, 6, 1, 1);

        tiltAngleMaxSpinBox = new QSpinBox(gridLayoutWidget);
        tiltAngleMaxSpinBox->setObjectName(QString::fromUtf8("tiltAngleMaxSpinBox"));
        tiltAngleMaxSpinBox->setMaximum(100);
        tiltAngleMaxSpinBox->setValue(0);

        gridLayout->addWidget(tiltAngleMaxSpinBox, 3, 6, 1, 1);

        tiltInputChannelComboBox = new QComboBox(gridLayoutWidget);
        tiltInputChannelComboBox->setObjectName(QString::fromUtf8("tiltInputChannelComboBox"));

        gridLayout->addWidget(tiltInputChannelComboBox, 2, 7, 1, 1);

        gridLayoutWidget_2 = new QWidget(CameraGimbalConfig);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(30, 230, 541, 149));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_14 = new QLabel(gridLayoutWidget_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_14, 2, 5, 1, 1);

        label_15 = new QLabel(gridLayoutWidget_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_15, 3, 5, 1, 1);

        rollInputChannelComboBox = new QComboBox(gridLayoutWidget_2);
        rollInputChannelComboBox->setObjectName(QString::fromUtf8("rollInputChannelComboBox"));

        gridLayout_2->addWidget(rollInputChannelComboBox, 2, 7, 1, 1);

        label_16 = new QLabel(gridLayoutWidget_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_2->addWidget(label_16, 1, 7, 1, 1);

        rollReverseCheckBox = new QCheckBox(gridLayoutWidget_2);
        rollReverseCheckBox->setObjectName(QString::fromUtf8("rollReverseCheckBox"));

        gridLayout_2->addWidget(rollReverseCheckBox, 4, 4, 1, 1);

        label_17 = new QLabel(gridLayoutWidget_2);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout_2->addWidget(label_17, 1, 5, 1, 2);

        label_18 = new QLabel(gridLayoutWidget_2);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout_2->addWidget(label_18, 1, 3, 1, 2);

        label_19 = new QLabel(gridLayoutWidget_2);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_19, 3, 3, 1, 1);

        label_20 = new QLabel(gridLayoutWidget_2);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_20, 2, 3, 1, 1);

        rollChannelComboBox = new QComboBox(gridLayoutWidget_2);
        rollChannelComboBox->setObjectName(QString::fromUtf8("rollChannelComboBox"));

        gridLayout_2->addWidget(rollChannelComboBox, 0, 2, 1, 1);

        label_21 = new QLabel(gridLayoutWidget_2);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_21, 0, 1, 1, 1);

        rollStabilizeCheckBox = new QCheckBox(gridLayoutWidget_2);
        rollStabilizeCheckBox->setObjectName(QString::fromUtf8("rollStabilizeCheckBox"));

        gridLayout_2->addWidget(rollStabilizeCheckBox, 0, 3, 1, 2);

        label_3 = new QLabel(gridLayoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(250, 120));
        label_3->setMaximumSize(QSize(250, 120));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/files/images/devices/cameraGimalRoll1.png")));
        label_3->setScaledContents(true);

        gridLayout_2->addWidget(label_3, 1, 1, 4, 2);

        rollServoMinSpinBox = new QSpinBox(gridLayoutWidget_2);
        rollServoMinSpinBox->setObjectName(QString::fromUtf8("rollServoMinSpinBox"));
        rollServoMinSpinBox->setMaximum(3000);
        rollServoMinSpinBox->setValue(1000);

        gridLayout_2->addWidget(rollServoMinSpinBox, 2, 4, 1, 1);

        rollServoMaxSpinBox = new QSpinBox(gridLayoutWidget_2);
        rollServoMaxSpinBox->setObjectName(QString::fromUtf8("rollServoMaxSpinBox"));
        rollServoMaxSpinBox->setMaximum(3000);
        rollServoMaxSpinBox->setValue(2000);

        gridLayout_2->addWidget(rollServoMaxSpinBox, 3, 4, 1, 1);

        rollAngleMinSpinBox = new QSpinBox(gridLayoutWidget_2);
        rollAngleMinSpinBox->setObjectName(QString::fromUtf8("rollAngleMinSpinBox"));
        rollAngleMinSpinBox->setMinimum(-100);
        rollAngleMinSpinBox->setMaximum(100);
        rollAngleMinSpinBox->setValue(100);

        gridLayout_2->addWidget(rollAngleMinSpinBox, 2, 6, 1, 1);

        rollAngleMaxSpinBox = new QSpinBox(gridLayoutWidget_2);
        rollAngleMaxSpinBox->setObjectName(QString::fromUtf8("rollAngleMaxSpinBox"));
        rollAngleMaxSpinBox->setMinimum(-100);
        rollAngleMaxSpinBox->setMaximum(100);
        rollAngleMaxSpinBox->setValue(100);

        gridLayout_2->addWidget(rollAngleMaxSpinBox, 3, 6, 1, 1);

        gridLayoutWidget_3 = new QWidget(CameraGimbalConfig);
        gridLayoutWidget_3->setObjectName(QString::fromUtf8("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(30, 390, 541, 149));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_22 = new QLabel(gridLayoutWidget_3);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_22, 2, 5, 1, 1);

        label_23 = new QLabel(gridLayoutWidget_3);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_23, 3, 5, 1, 1);

        panInputChannelComboBox = new QComboBox(gridLayoutWidget_3);
        panInputChannelComboBox->setObjectName(QString::fromUtf8("panInputChannelComboBox"));

        gridLayout_3->addWidget(panInputChannelComboBox, 2, 7, 1, 1);

        label_24 = new QLabel(gridLayoutWidget_3);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        gridLayout_3->addWidget(label_24, 1, 7, 1, 1);

        panReverseCheckBox = new QCheckBox(gridLayoutWidget_3);
        panReverseCheckBox->setObjectName(QString::fromUtf8("panReverseCheckBox"));

        gridLayout_3->addWidget(panReverseCheckBox, 4, 4, 1, 1);

        label_25 = new QLabel(gridLayoutWidget_3);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        gridLayout_3->addWidget(label_25, 1, 5, 1, 2);

        label_26 = new QLabel(gridLayoutWidget_3);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        gridLayout_3->addWidget(label_26, 1, 3, 1, 2);

        label_27 = new QLabel(gridLayoutWidget_3);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_27, 3, 3, 1, 1);

        label_28 = new QLabel(gridLayoutWidget_3);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_28, 2, 3, 1, 1);

        panChannelComboBox = new QComboBox(gridLayoutWidget_3);
        panChannelComboBox->setObjectName(QString::fromUtf8("panChannelComboBox"));

        gridLayout_3->addWidget(panChannelComboBox, 0, 2, 1, 1);

        label_29 = new QLabel(gridLayoutWidget_3);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_29, 0, 1, 1, 1);

        panStabilizeCheckBox = new QCheckBox(gridLayoutWidget_3);
        panStabilizeCheckBox->setObjectName(QString::fromUtf8("panStabilizeCheckBox"));

        gridLayout_3->addWidget(panStabilizeCheckBox, 0, 3, 1, 2);

        label_4 = new QLabel(gridLayoutWidget_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(250, 120));
        label_4->setMaximumSize(QSize(250, 120));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/files/images/devices/cameraGimalYaw.png")));
        label_4->setScaledContents(true);

        gridLayout_3->addWidget(label_4, 1, 0, 4, 3);

        panServoMinSpinBox = new QSpinBox(gridLayoutWidget_3);
        panServoMinSpinBox->setObjectName(QString::fromUtf8("panServoMinSpinBox"));
        panServoMinSpinBox->setMaximum(3000);
        panServoMinSpinBox->setValue(1000);

        gridLayout_3->addWidget(panServoMinSpinBox, 2, 4, 1, 1);

        panAngleMinSpinBox = new QSpinBox(gridLayoutWidget_3);
        panAngleMinSpinBox->setObjectName(QString::fromUtf8("panAngleMinSpinBox"));
        panAngleMinSpinBox->setMinimum(-100);
        panAngleMinSpinBox->setMaximum(100);
        panAngleMinSpinBox->setValue(100);

        gridLayout_3->addWidget(panAngleMinSpinBox, 2, 6, 1, 1);

        panAngleMaxSpinBox = new QSpinBox(gridLayoutWidget_3);
        panAngleMaxSpinBox->setObjectName(QString::fromUtf8("panAngleMaxSpinBox"));
        panAngleMaxSpinBox->setMinimum(-100);
        panAngleMaxSpinBox->setMaximum(100);
        panAngleMaxSpinBox->setValue(100);

        gridLayout_3->addWidget(panAngleMaxSpinBox, 3, 6, 1, 1);

        panServoMaxSpinBox = new QSpinBox(gridLayoutWidget_3);
        panServoMaxSpinBox->setObjectName(QString::fromUtf8("panServoMaxSpinBox"));
        panServoMaxSpinBox->setMaximum(3000);
        panServoMaxSpinBox->setValue(2000);

        gridLayout_3->addWidget(panServoMaxSpinBox, 3, 4, 1, 1);

        gridLayoutWidget_4 = new QWidget(CameraGimbalConfig);
        gridLayoutWidget_4->setObjectName(QString::fromUtf8("gridLayoutWidget_4"));
        gridLayoutWidget_4->setGeometry(QRect(30, 550, 541, 181));
        gridLayout_4 = new QGridLayout(gridLayoutWidget_4);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(gridLayoutWidget_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(250, 120));
        label_5->setMaximumSize(QSize(250, 120));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/files/images/devices/Shutter.png")));
        label_5->setScaledContents(true);

        gridLayout_4->addWidget(label_5, 1, 1, 4, 2);

        label_39 = new QLabel(gridLayoutWidget_4);
        label_39->setObjectName(QString::fromUtf8("label_39"));
        label_39->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_39, 4, 5, 1, 1);

        label_31 = new QLabel(gridLayoutWidget_4);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_31, 2, 5, 1, 1);

        label_32 = new QLabel(gridLayoutWidget_4);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_32, 3, 5, 1, 1);

        label_34 = new QLabel(gridLayoutWidget_4);
        label_34->setObjectName(QString::fromUtf8("label_34"));

        gridLayout_4->addWidget(label_34, 1, 5, 1, 2);

        label_35 = new QLabel(gridLayoutWidget_4);
        label_35->setObjectName(QString::fromUtf8("label_35"));

        gridLayout_4->addWidget(label_35, 1, 3, 1, 2);

        label_36 = new QLabel(gridLayoutWidget_4);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        label_36->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_36, 3, 3, 1, 1);

        label_37 = new QLabel(gridLayoutWidget_4);
        label_37->setObjectName(QString::fromUtf8("label_37"));
        label_37->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_37, 2, 3, 1, 1);

        shutterChannelComboBox = new QComboBox(gridLayoutWidget_4);
        shutterChannelComboBox->setObjectName(QString::fromUtf8("shutterChannelComboBox"));

        gridLayout_4->addWidget(shutterChannelComboBox, 0, 2, 1, 1);

        label_38 = new QLabel(gridLayoutWidget_4);
        label_38->setObjectName(QString::fromUtf8("label_38"));
        label_38->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_38, 0, 1, 1, 1);

        label_40 = new QLabel(gridLayoutWidget_4);
        label_40->setObjectName(QString::fromUtf8("label_40"));
        label_40->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_40, 5, 1, 1, 6);

        shutterPushedSpinBox = new QSpinBox(gridLayoutWidget_4);
        shutterPushedSpinBox->setObjectName(QString::fromUtf8("shutterPushedSpinBox"));
        shutterPushedSpinBox->setMaximum(3000);
        shutterPushedSpinBox->setValue(1000);

        gridLayout_4->addWidget(shutterPushedSpinBox, 2, 6, 1, 1);

        shutterNotPushedSpinBox = new QSpinBox(gridLayoutWidget_4);
        shutterNotPushedSpinBox->setObjectName(QString::fromUtf8("shutterNotPushedSpinBox"));
        shutterNotPushedSpinBox->setMaximum(3000);
        shutterNotPushedSpinBox->setValue(2000);

        gridLayout_4->addWidget(shutterNotPushedSpinBox, 3, 6, 1, 1);

        shutterDurationSpinBox = new QSpinBox(gridLayoutWidget_4);
        shutterDurationSpinBox->setObjectName(QString::fromUtf8("shutterDurationSpinBox"));
        shutterDurationSpinBox->setMaximum(100);
        shutterDurationSpinBox->setValue(20);

        gridLayout_4->addWidget(shutterDurationSpinBox, 4, 6, 1, 1);

        shutterServoMinSpinBox = new QSpinBox(gridLayoutWidget_4);
        shutterServoMinSpinBox->setObjectName(QString::fromUtf8("shutterServoMinSpinBox"));
        shutterServoMinSpinBox->setMaximum(3000);
        shutterServoMinSpinBox->setValue(1000);

        gridLayout_4->addWidget(shutterServoMinSpinBox, 2, 4, 1, 1);

        shutterServoMaxSpinBox = new QSpinBox(gridLayoutWidget_4);
        shutterServoMaxSpinBox->setObjectName(QString::fromUtf8("shutterServoMaxSpinBox"));
        shutterServoMaxSpinBox->setMaximum(3000);
        shutterServoMaxSpinBox->setValue(2000);

        gridLayout_4->addWidget(shutterServoMaxSpinBox, 3, 4, 1, 1);

        groupBox = new QGroupBox(CameraGimbalConfig);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(590, 60, 171, 131));
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_33 = new QLabel(groupBox);
        label_33->setObjectName(QString::fromUtf8("label_33"));

        verticalLayout->addWidget(label_33);

        label_41 = new QLabel(groupBox);
        label_41->setObjectName(QString::fromUtf8("label_41"));

        verticalLayout->addWidget(label_41);

        label_30 = new QLabel(groupBox);
        label_30->setObjectName(QString::fromUtf8("label_30"));

        verticalLayout->addWidget(label_30);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        retractXSpinBox = new QSpinBox(groupBox);
        retractXSpinBox->setObjectName(QString::fromUtf8("retractXSpinBox"));
        retractXSpinBox->setMinimum(-180);
        retractXSpinBox->setMaximum(180);

        verticalLayout_2->addWidget(retractXSpinBox);

        retractYSpinBox = new QSpinBox(groupBox);
        retractYSpinBox->setObjectName(QString::fromUtf8("retractYSpinBox"));
        retractYSpinBox->setMinimum(-180);
        retractYSpinBox->setMaximum(180);

        verticalLayout_2->addWidget(retractYSpinBox);

        retractZSpinBox = new QSpinBox(groupBox);
        retractZSpinBox->setObjectName(QString::fromUtf8("retractZSpinBox"));
        retractZSpinBox->setMinimum(-180);
        retractZSpinBox->setMaximum(180);

        verticalLayout_2->addWidget(retractZSpinBox);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

        groupBox_2 = new QGroupBox(CameraGimbalConfig);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(590, 210, 171, 131));
        verticalLayout_4 = new QVBoxLayout(groupBox_2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_42 = new QLabel(groupBox_2);
        label_42->setObjectName(QString::fromUtf8("label_42"));

        verticalLayout_5->addWidget(label_42);

        label_43 = new QLabel(groupBox_2);
        label_43->setObjectName(QString::fromUtf8("label_43"));

        verticalLayout_5->addWidget(label_43);

        label_44 = new QLabel(groupBox_2);
        label_44->setObjectName(QString::fromUtf8("label_44"));

        verticalLayout_5->addWidget(label_44);


        horizontalLayout_2->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        neutralXSpinBox = new QSpinBox(groupBox_2);
        neutralXSpinBox->setObjectName(QString::fromUtf8("neutralXSpinBox"));
        neutralXSpinBox->setMinimum(-180);
        neutralXSpinBox->setMaximum(180);

        verticalLayout_6->addWidget(neutralXSpinBox);

        neutralYSpinBox = new QSpinBox(groupBox_2);
        neutralYSpinBox->setObjectName(QString::fromUtf8("neutralYSpinBox"));
        neutralYSpinBox->setMinimum(-180);
        neutralYSpinBox->setMaximum(180);

        verticalLayout_6->addWidget(neutralYSpinBox);

        neutralZSpinBox = new QSpinBox(groupBox_2);
        neutralZSpinBox->setObjectName(QString::fromUtf8("neutralZSpinBox"));
        neutralZSpinBox->setMinimum(-180);
        neutralZSpinBox->setMaximum(180);

        verticalLayout_6->addWidget(neutralZSpinBox);


        horizontalLayout_2->addLayout(verticalLayout_6);


        verticalLayout_4->addLayout(horizontalLayout_2);

        groupBox_3 = new QGroupBox(CameraGimbalConfig);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(590, 360, 171, 131));
        verticalLayout_7 = new QVBoxLayout(groupBox_3);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        label_45 = new QLabel(groupBox_3);
        label_45->setObjectName(QString::fromUtf8("label_45"));

        verticalLayout_8->addWidget(label_45);

        label_46 = new QLabel(groupBox_3);
        label_46->setObjectName(QString::fromUtf8("label_46"));

        verticalLayout_8->addWidget(label_46);

        label_47 = new QLabel(groupBox_3);
        label_47->setObjectName(QString::fromUtf8("label_47"));

        verticalLayout_8->addWidget(label_47);


        horizontalLayout_3->addLayout(verticalLayout_8);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        controlXSpinBox = new QSpinBox(groupBox_3);
        controlXSpinBox->setObjectName(QString::fromUtf8("controlXSpinBox"));
        controlXSpinBox->setMinimum(-180);
        controlXSpinBox->setMaximum(180);

        verticalLayout_9->addWidget(controlXSpinBox);

        controlYSpinBox = new QSpinBox(groupBox_3);
        controlYSpinBox->setObjectName(QString::fromUtf8("controlYSpinBox"));
        controlYSpinBox->setMinimum(-180);
        controlYSpinBox->setMaximum(180);

        verticalLayout_9->addWidget(controlYSpinBox);

        controlZSpinBox = new QSpinBox(groupBox_3);
        controlZSpinBox->setObjectName(QString::fromUtf8("controlZSpinBox"));
        controlZSpinBox->setMinimum(-180);
        controlZSpinBox->setMaximum(180);

        verticalLayout_9->addWidget(controlZSpinBox);


        horizontalLayout_3->addLayout(verticalLayout_9);


        verticalLayout_7->addLayout(horizontalLayout_3);


        retranslateUi(CameraGimbalConfig);

        QMetaObject::connectSlotsByName(CameraGimbalConfig);
    } // setupUi

    void retranslateUi(QWidget *CameraGimbalConfig)
    {
        CameraGimbalConfig->setWindowTitle(QApplication::translate("CameraGimbalConfig", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CameraGimbalConfig", "<h2>Camera Gimbal</h2>", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("CameraGimbalConfig", "Min", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("CameraGimbalConfig", "Max", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("CameraGimbalConfig", "<h3>Input Ch</h3>", 0, QApplication::UnicodeUTF8));
        tiltReverseCheckBox->setText(QApplication::translate("CameraGimbalConfig", "Reverse", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("CameraGimbalConfig", "<h3>Angle Limits</h3>", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("CameraGimbalConfig", "<h3>Servo Limits</h3>", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("CameraGimbalConfig", "Max", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("CameraGimbalConfig", "Min", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("CameraGimbalConfig", "<h2>Tilt</h2>", 0, QApplication::UnicodeUTF8));
        tiltStabilizeCheckBox->setText(QApplication::translate("CameraGimbalConfig", "Stabilize Tilt", 0, QApplication::UnicodeUTF8));
        label_2->setText(QString());
        label_14->setText(QApplication::translate("CameraGimbalConfig", "Min", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("CameraGimbalConfig", "Max", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("CameraGimbalConfig", "<h3>Input Ch</h3>", 0, QApplication::UnicodeUTF8));
        rollReverseCheckBox->setText(QApplication::translate("CameraGimbalConfig", "Reverse", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("CameraGimbalConfig", "<h3>Angle Limits</h3>", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("CameraGimbalConfig", "<h3>Servo Limits</h3>", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("CameraGimbalConfig", "Max", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("CameraGimbalConfig", "Min", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("CameraGimbalConfig", "<h2>Roll</h2>", 0, QApplication::UnicodeUTF8));
        rollStabilizeCheckBox->setText(QApplication::translate("CameraGimbalConfig", "Stabilize Roll", 0, QApplication::UnicodeUTF8));
        label_3->setText(QString());
        label_22->setText(QApplication::translate("CameraGimbalConfig", "Min", 0, QApplication::UnicodeUTF8));
        label_23->setText(QApplication::translate("CameraGimbalConfig", "Max", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("CameraGimbalConfig", "<h3>Input Ch</h3>", 0, QApplication::UnicodeUTF8));
        panReverseCheckBox->setText(QApplication::translate("CameraGimbalConfig", "Reverse", 0, QApplication::UnicodeUTF8));
        label_25->setText(QApplication::translate("CameraGimbalConfig", "<h3>Angle Limits</h3>", 0, QApplication::UnicodeUTF8));
        label_26->setText(QApplication::translate("CameraGimbalConfig", "<h3>Servo Limits</h3>", 0, QApplication::UnicodeUTF8));
        label_27->setText(QApplication::translate("CameraGimbalConfig", "Max", 0, QApplication::UnicodeUTF8));
        label_28->setText(QApplication::translate("CameraGimbalConfig", "Min", 0, QApplication::UnicodeUTF8));
        label_29->setText(QApplication::translate("CameraGimbalConfig", "<h2>Pan</h2>", 0, QApplication::UnicodeUTF8));
        panStabilizeCheckBox->setText(QApplication::translate("CameraGimbalConfig", "Stabilize Pan", 0, QApplication::UnicodeUTF8));
        label_4->setText(QString());
        label_5->setText(QString());
        label_39->setText(QApplication::translate("CameraGimbalConfig", "Duration\n"
"(1/10th sec)", 0, QApplication::UnicodeUTF8));
        label_31->setText(QApplication::translate("CameraGimbalConfig", "Pushed", 0, QApplication::UnicodeUTF8));
        label_32->setText(QApplication::translate("CameraGimbalConfig", "Not Pushed", 0, QApplication::UnicodeUTF8));
        label_34->setText(QApplication::translate("CameraGimbalConfig", "<h3>Shutter</h3>", 0, QApplication::UnicodeUTF8));
        label_35->setText(QApplication::translate("CameraGimbalConfig", "<h3>Servo Limits</h3>", 0, QApplication::UnicodeUTF8));
        label_36->setText(QApplication::translate("CameraGimbalConfig", "Max", 0, QApplication::UnicodeUTF8));
        label_37->setText(QApplication::translate("CameraGimbalConfig", "Min", 0, QApplication::UnicodeUTF8));
        label_38->setText(QApplication::translate("CameraGimbalConfig", "<h2>Shutter</h2>", 0, QApplication::UnicodeUTF8));
        label_40->setText(QApplication::translate("CameraGimbalConfig", "<h2>Please set the Ch7 Option to Camera Trigger</h2>", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("CameraGimbalConfig", "Retract Angles", 0, QApplication::UnicodeUTF8));
        label_33->setText(QApplication::translate("CameraGimbalConfig", "X", 0, QApplication::UnicodeUTF8));
        label_41->setText(QApplication::translate("CameraGimbalConfig", "Y", 0, QApplication::UnicodeUTF8));
        label_30->setText(QApplication::translate("CameraGimbalConfig", "Z", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("CameraGimbalConfig", "Neutral Angles", 0, QApplication::UnicodeUTF8));
        label_42->setText(QApplication::translate("CameraGimbalConfig", "X", 0, QApplication::UnicodeUTF8));
        label_43->setText(QApplication::translate("CameraGimbalConfig", "Y", 0, QApplication::UnicodeUTF8));
        label_44->setText(QApplication::translate("CameraGimbalConfig", "Z", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("CameraGimbalConfig", "Control Angles", 0, QApplication::UnicodeUTF8));
        label_45->setText(QApplication::translate("CameraGimbalConfig", "X", 0, QApplication::UnicodeUTF8));
        label_46->setText(QApplication::translate("CameraGimbalConfig", "Y", 0, QApplication::UnicodeUTF8));
        label_47->setText(QApplication::translate("CameraGimbalConfig", "Z", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CameraGimbalConfig: public Ui_CameraGimbalConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAMERAGIMBALCONFIG_H
