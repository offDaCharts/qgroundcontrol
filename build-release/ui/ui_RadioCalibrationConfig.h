/********************************************************************************
** Form generated from reading UI file 'RadioCalibrationConfig.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RADIOCALIBRATIONCONFIG_H
#define UI_RADIOCALIBRATIONCONFIG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "ui/designer/QGCRadioChannelDisplay.h"

QT_BEGIN_NAMESPACE

class Ui_RadioCalibrationConfig
{
public:
    QLabel *label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_15;
    QHBoxLayout *horizontalLayout_10;
    QGCRadioChannelDisplay *rollWidget;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_13;
    QSpacerItem *horizontalSpacer_12;
    QGCRadioChannelDisplay *pitchWidget;
    QSpacerItem *horizontalSpacer_11;
    QGCRadioChannelDisplay *throttleWidget;
    QSpacerItem *horizontalSpacer_10;
    QVBoxLayout *verticalLayout_6;
    QGCRadioChannelDisplay *radio5Widget;
    QGCRadioChannelDisplay *radio6Widget;
    QGCRadioChannelDisplay *radio7Widget;
    QGCRadioChannelDisplay *radio8Widget;
    QHBoxLayout *horizontalLayout_12;
    QGCRadioChannelDisplay *yawWidget;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *calibrateButton;

    void setupUi(QWidget *RadioCalibrationConfig)
    {
        if (RadioCalibrationConfig->objectName().isEmpty())
            RadioCalibrationConfig->setObjectName(QString::fromUtf8("RadioCalibrationConfig"));
        RadioCalibrationConfig->resize(771, 389);
        label = new QLabel(RadioCalibrationConfig);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 171, 31));
        label->setScaledContents(false);
        layoutWidget = new QWidget(RadioCalibrationConfig);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 50, 716, 300));
        verticalLayout_15 = new QVBoxLayout(layoutWidget);
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        verticalLayout_15->setSizeConstraint(QLayout::SetMinAndMaxSize);
        verticalLayout_15->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        rollWidget = new QGCRadioChannelDisplay(layoutWidget);
        rollWidget->setObjectName(QString::fromUtf8("rollWidget"));
        rollWidget->setMinimumSize(QSize(250, 40));
        rollWidget->setMaximumSize(QSize(250, 40));

        horizontalLayout_10->addWidget(rollWidget);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_6);


        verticalLayout_15->addLayout(horizontalLayout_10);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_12);

        pitchWidget = new QGCRadioChannelDisplay(layoutWidget);
        pitchWidget->setObjectName(QString::fromUtf8("pitchWidget"));
        pitchWidget->setMinimumSize(QSize(50, 200));
        pitchWidget->setMaximumSize(QSize(50, 200));

        horizontalLayout_13->addWidget(pitchWidget);

        horizontalSpacer_11 = new QSpacerItem(250, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_11);

        throttleWidget = new QGCRadioChannelDisplay(layoutWidget);
        throttleWidget->setObjectName(QString::fromUtf8("throttleWidget"));
        throttleWidget->setMinimumSize(QSize(50, 200));
        throttleWidget->setMaximumSize(QSize(50, 200));

        horizontalLayout_13->addWidget(throttleWidget);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_10);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        radio5Widget = new QGCRadioChannelDisplay(layoutWidget);
        radio5Widget->setObjectName(QString::fromUtf8("radio5Widget"));
        radio5Widget->setMinimumSize(QSize(250, 40));
        radio5Widget->setMaximumSize(QSize(250, 40));

        verticalLayout_6->addWidget(radio5Widget);

        radio6Widget = new QGCRadioChannelDisplay(layoutWidget);
        radio6Widget->setObjectName(QString::fromUtf8("radio6Widget"));
        radio6Widget->setMinimumSize(QSize(250, 40));
        radio6Widget->setMaximumSize(QSize(250, 40));

        verticalLayout_6->addWidget(radio6Widget);

        radio7Widget = new QGCRadioChannelDisplay(layoutWidget);
        radio7Widget->setObjectName(QString::fromUtf8("radio7Widget"));
        radio7Widget->setMinimumSize(QSize(250, 40));
        radio7Widget->setMaximumSize(QSize(250, 40));

        verticalLayout_6->addWidget(radio7Widget);

        radio8Widget = new QGCRadioChannelDisplay(layoutWidget);
        radio8Widget->setObjectName(QString::fromUtf8("radio8Widget"));
        radio8Widget->setMinimumSize(QSize(250, 40));
        radio8Widget->setMaximumSize(QSize(250, 40));

        verticalLayout_6->addWidget(radio8Widget);


        horizontalLayout_13->addLayout(verticalLayout_6);

        horizontalLayout_13->setStretch(0, 2);
        horizontalLayout_13->setStretch(1, 1);
        horizontalLayout_13->setStretch(2, 2);
        horizontalLayout_13->setStretch(3, 2);
        horizontalLayout_13->setStretch(4, 2);

        verticalLayout_15->addLayout(horizontalLayout_13);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        yawWidget = new QGCRadioChannelDisplay(layoutWidget);
        yawWidget->setObjectName(QString::fromUtf8("yawWidget"));
        yawWidget->setMinimumSize(QSize(250, 40));
        yawWidget->setMaximumSize(QSize(250, 40));

        horizontalLayout_12->addWidget(yawWidget);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_7);


        verticalLayout_15->addLayout(horizontalLayout_12);

        calibrateButton = new QPushButton(RadioCalibrationConfig);
        calibrateButton->setObjectName(QString::fromUtf8("calibrateButton"));
        calibrateButton->setGeometry(QRect(20, 360, 91, 23));

        retranslateUi(RadioCalibrationConfig);

        QMetaObject::connectSlotsByName(RadioCalibrationConfig);
    } // setupUi

    void retranslateUi(QWidget *RadioCalibrationConfig)
    {
        RadioCalibrationConfig->setWindowTitle(QApplication::translate("RadioCalibrationConfig", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("RadioCalibrationConfig", "<h2>Radio Calibration</h2>", 0, QApplication::UnicodeUTF8));
        calibrateButton->setText(QApplication::translate("RadioCalibrationConfig", "Calibrate", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class RadioCalibrationConfig: public Ui_RadioCalibrationConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RADIOCALIBRATIONCONFIG_H
