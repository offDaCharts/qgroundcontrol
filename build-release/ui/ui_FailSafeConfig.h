/********************************************************************************
** Form generated from reading UI file 'FailSafeConfig.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FAILSAFECONFIG_H
#define UI_FAILSAFECONFIG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "ui/designer/QGCRadioChannelDisplay.h"

QT_BEGIN_NAMESPACE

class Ui_FailSafeConfig
{
public:
    QLabel *label;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QGCRadioChannelDisplay *radio1In;
    QGCRadioChannelDisplay *radio2In;
    QGCRadioChannelDisplay *radio3In;
    QGCRadioChannelDisplay *radio4In;
    QGCRadioChannelDisplay *radio5In;
    QGCRadioChannelDisplay *radio6In;
    QGCRadioChannelDisplay *radio7In;
    QGCRadioChannelDisplay *radio8In;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QGCRadioChannelDisplay *radio1Out;
    QGCRadioChannelDisplay *radio2Out;
    QGCRadioChannelDisplay *radio3Out;
    QGCRadioChannelDisplay *radio4Out;
    QGCRadioChannelDisplay *radio5Out;
    QGCRadioChannelDisplay *radio6Out;
    QGCRadioChannelDisplay *radio7Out;
    QGCRadioChannelDisplay *radio8Out;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QLabel *modeLabel;
    QLabel *armedLabel;
    QLabel *gpsLabel;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *throttleCheckBox;
    QComboBox *throttleFailSafeComboBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QSpinBox *throttlePwmSpinBox;
    QCheckBox *throttleActionCheckBox;
    QCheckBox *gcsCheckBox;
    QCheckBox *fsShortCheckBox;
    QCheckBox *fsLongCheckBox;
    QCheckBox *batteryFailCheckBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label_6;
    QDoubleSpinBox *batteryVoltSpinBox;

    void setupUi(QWidget *FailSafeConfig)
    {
        if (FailSafeConfig->objectName().isEmpty())
            FailSafeConfig->setObjectName(QString::fromUtf8("FailSafeConfig"));
        FailSafeConfig->resize(822, 536);
        label = new QLabel(FailSafeConfig);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 20, 141, 31));
        verticalLayoutWidget = new QWidget(FailSafeConfig);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 70, 252, 441));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        radio1In = new QGCRadioChannelDisplay(verticalLayoutWidget);
        radio1In->setObjectName(QString::fromUtf8("radio1In"));
        radio1In->setMinimumSize(QSize(250, 40));
        radio1In->setMaximumSize(QSize(250, 40));

        verticalLayout->addWidget(radio1In);

        radio2In = new QGCRadioChannelDisplay(verticalLayoutWidget);
        radio2In->setObjectName(QString::fromUtf8("radio2In"));
        radio2In->setMinimumSize(QSize(250, 40));
        radio2In->setMaximumSize(QSize(250, 40));

        verticalLayout->addWidget(radio2In);

        radio3In = new QGCRadioChannelDisplay(verticalLayoutWidget);
        radio3In->setObjectName(QString::fromUtf8("radio3In"));
        radio3In->setMinimumSize(QSize(250, 40));
        radio3In->setMaximumSize(QSize(250, 40));

        verticalLayout->addWidget(radio3In);

        radio4In = new QGCRadioChannelDisplay(verticalLayoutWidget);
        radio4In->setObjectName(QString::fromUtf8("radio4In"));
        radio4In->setMinimumSize(QSize(250, 40));
        radio4In->setMaximumSize(QSize(250, 40));

        verticalLayout->addWidget(radio4In);

        radio5In = new QGCRadioChannelDisplay(verticalLayoutWidget);
        radio5In->setObjectName(QString::fromUtf8("radio5In"));
        radio5In->setMinimumSize(QSize(250, 40));
        radio5In->setMaximumSize(QSize(250, 40));

        verticalLayout->addWidget(radio5In);

        radio6In = new QGCRadioChannelDisplay(verticalLayoutWidget);
        radio6In->setObjectName(QString::fromUtf8("radio6In"));
        radio6In->setMinimumSize(QSize(250, 40));
        radio6In->setMaximumSize(QSize(250, 40));

        verticalLayout->addWidget(radio6In);

        radio7In = new QGCRadioChannelDisplay(verticalLayoutWidget);
        radio7In->setObjectName(QString::fromUtf8("radio7In"));
        radio7In->setMinimumSize(QSize(250, 40));
        radio7In->setMaximumSize(QSize(250, 40));

        verticalLayout->addWidget(radio7In);

        radio8In = new QGCRadioChannelDisplay(verticalLayoutWidget);
        radio8In->setObjectName(QString::fromUtf8("radio8In"));
        radio8In->setMinimumSize(QSize(250, 40));
        radio8In->setMaximumSize(QSize(250, 40));

        verticalLayout->addWidget(radio8In);

        verticalLayoutWidget_2 = new QWidget(FailSafeConfig);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(300, 70, 252, 441));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        radio1Out = new QGCRadioChannelDisplay(verticalLayoutWidget_2);
        radio1Out->setObjectName(QString::fromUtf8("radio1Out"));
        radio1Out->setMinimumSize(QSize(250, 40));
        radio1Out->setMaximumSize(QSize(250, 40));

        verticalLayout_2->addWidget(radio1Out);

        radio2Out = new QGCRadioChannelDisplay(verticalLayoutWidget_2);
        radio2Out->setObjectName(QString::fromUtf8("radio2Out"));
        radio2Out->setMinimumSize(QSize(250, 40));
        radio2Out->setMaximumSize(QSize(250, 40));

        verticalLayout_2->addWidget(radio2Out);

        radio3Out = new QGCRadioChannelDisplay(verticalLayoutWidget_2);
        radio3Out->setObjectName(QString::fromUtf8("radio3Out"));
        radio3Out->setMinimumSize(QSize(250, 40));
        radio3Out->setMaximumSize(QSize(250, 40));

        verticalLayout_2->addWidget(radio3Out);

        radio4Out = new QGCRadioChannelDisplay(verticalLayoutWidget_2);
        radio4Out->setObjectName(QString::fromUtf8("radio4Out"));
        radio4Out->setMinimumSize(QSize(250, 40));
        radio4Out->setMaximumSize(QSize(250, 40));

        verticalLayout_2->addWidget(radio4Out);

        radio5Out = new QGCRadioChannelDisplay(verticalLayoutWidget_2);
        radio5Out->setObjectName(QString::fromUtf8("radio5Out"));
        radio5Out->setMinimumSize(QSize(250, 40));
        radio5Out->setMaximumSize(QSize(250, 40));

        verticalLayout_2->addWidget(radio5Out);

        radio6Out = new QGCRadioChannelDisplay(verticalLayoutWidget_2);
        radio6Out->setObjectName(QString::fromUtf8("radio6Out"));
        radio6Out->setMinimumSize(QSize(250, 40));
        radio6Out->setMaximumSize(QSize(250, 40));

        verticalLayout_2->addWidget(radio6Out);

        radio7Out = new QGCRadioChannelDisplay(verticalLayoutWidget_2);
        radio7Out->setObjectName(QString::fromUtf8("radio7Out"));
        radio7Out->setMinimumSize(QSize(250, 40));
        radio7Out->setMaximumSize(QSize(250, 40));

        verticalLayout_2->addWidget(radio7Out);

        radio8Out = new QGCRadioChannelDisplay(verticalLayoutWidget_2);
        radio8Out->setObjectName(QString::fromUtf8("radio8Out"));
        radio8Out->setMinimumSize(QSize(250, 40));
        radio8Out->setMaximumSize(QSize(250, 40));

        verticalLayout_2->addWidget(radio8Out);

        groupBox = new QGroupBox(FailSafeConfig);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(570, 60, 181, 181));
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        modeLabel = new QLabel(groupBox);
        modeLabel->setObjectName(QString::fromUtf8("modeLabel"));

        verticalLayout_3->addWidget(modeLabel);

        armedLabel = new QLabel(groupBox);
        armedLabel->setObjectName(QString::fromUtf8("armedLabel"));

        verticalLayout_3->addWidget(armedLabel);

        gpsLabel = new QLabel(groupBox);
        gpsLabel->setObjectName(QString::fromUtf8("gpsLabel"));

        verticalLayout_3->addWidget(gpsLabel);

        groupBox_2 = new QGroupBox(FailSafeConfig);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(570, 250, 161, 261));
        verticalLayout_4 = new QVBoxLayout(groupBox_2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        throttleCheckBox = new QCheckBox(groupBox_2);
        throttleCheckBox->setObjectName(QString::fromUtf8("throttleCheckBox"));

        verticalLayout_4->addWidget(throttleCheckBox);

        throttleFailSafeComboBox = new QComboBox(groupBox_2);
        throttleFailSafeComboBox->setObjectName(QString::fromUtf8("throttleFailSafeComboBox"));

        verticalLayout_4->addWidget(throttleFailSafeComboBox);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_2->addWidget(label_5);

        throttlePwmSpinBox = new QSpinBox(groupBox_2);
        throttlePwmSpinBox->setObjectName(QString::fromUtf8("throttlePwmSpinBox"));
        throttlePwmSpinBox->setMaximum(3000);

        horizontalLayout_2->addWidget(throttlePwmSpinBox);


        verticalLayout_4->addLayout(horizontalLayout_2);

        throttleActionCheckBox = new QCheckBox(groupBox_2);
        throttleActionCheckBox->setObjectName(QString::fromUtf8("throttleActionCheckBox"));

        verticalLayout_4->addWidget(throttleActionCheckBox);

        gcsCheckBox = new QCheckBox(groupBox_2);
        gcsCheckBox->setObjectName(QString::fromUtf8("gcsCheckBox"));

        verticalLayout_4->addWidget(gcsCheckBox);

        fsShortCheckBox = new QCheckBox(groupBox_2);
        fsShortCheckBox->setObjectName(QString::fromUtf8("fsShortCheckBox"));

        verticalLayout_4->addWidget(fsShortCheckBox);

        fsLongCheckBox = new QCheckBox(groupBox_2);
        fsLongCheckBox->setObjectName(QString::fromUtf8("fsLongCheckBox"));

        verticalLayout_4->addWidget(fsLongCheckBox);

        batteryFailCheckBox = new QCheckBox(groupBox_2);
        batteryFailCheckBox->setObjectName(QString::fromUtf8("batteryFailCheckBox"));

        verticalLayout_4->addWidget(batteryFailCheckBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout->addWidget(label_6);

        batteryVoltSpinBox = new QDoubleSpinBox(groupBox_2);
        batteryVoltSpinBox->setObjectName(QString::fromUtf8("batteryVoltSpinBox"));
        batteryVoltSpinBox->setMaximum(100);

        horizontalLayout->addWidget(batteryVoltSpinBox);


        verticalLayout_4->addLayout(horizontalLayout);


        retranslateUi(FailSafeConfig);

        QMetaObject::connectSlotsByName(FailSafeConfig);
    } // setupUi

    void retranslateUi(QWidget *FailSafeConfig)
    {
        FailSafeConfig->setWindowTitle(QApplication::translate("FailSafeConfig", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("FailSafeConfig", "<h2>Fail Safe</h2>", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("FailSafeConfig", "Status", 0, QApplication::UnicodeUTF8));
        modeLabel->setText(QApplication::translate("FailSafeConfig", "TextLabel", 0, QApplication::UnicodeUTF8));
        armedLabel->setText(QApplication::translate("FailSafeConfig", "TextLabel", 0, QApplication::UnicodeUTF8));
        gpsLabel->setText(QApplication::translate("FailSafeConfig", "TextLabel", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("FailSafeConfig", "Failsafe Options", 0, QApplication::UnicodeUTF8));
        throttleCheckBox->setText(QApplication::translate("FailSafeConfig", "Throttle FailSafe", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("FailSafeConfig", "FS Pwm", 0, QApplication::UnicodeUTF8));
        throttleActionCheckBox->setText(QApplication::translate("FailSafeConfig", "Throttle FailSafe Action", 0, QApplication::UnicodeUTF8));
        gcsCheckBox->setText(QApplication::translate("FailSafeConfig", "GCS FailSafe", 0, QApplication::UnicodeUTF8));
        fsShortCheckBox->setText(QApplication::translate("FailSafeConfig", "FailSafe Short (1 sec)", 0, QApplication::UnicodeUTF8));
        fsLongCheckBox->setText(QApplication::translate("FailSafeConfig", "FailSafe Long (20 sec)", 0, QApplication::UnicodeUTF8));
        batteryFailCheckBox->setText(QApplication::translate("FailSafeConfig", "Battery Failsafe", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("FailSafeConfig", "Low Battery", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FailSafeConfig: public Ui_FailSafeConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FAILSAFECONFIG_H
