/********************************************************************************
** Form generated from reading UI file 'BatteryMonitorConfig.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BATTERYMONITORCONFIG_H
#define UI_BATTERYMONITORCONFIG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BatteryMonitorConfig
{
public:
    QLabel *label;
    QLabel *label_2;
    QCheckBox *alertOnLowCheckBox;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_9;
    QLabel *label_8;
    QLabel *label_10;
    QLabel *label_11;
    QVBoxLayout *verticalLayout;
    QLineEdit *measuredVoltsLineEdit;
    QLineEdit *calcVoltsLineEdit;
    QLineEdit *calcDividerLineEdit;
    QLineEdit *ampsPerVoltsLineEdit;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QVBoxLayout *verticalLayout_3;
    QComboBox *monitorComboBox;
    QComboBox *sensorComboBox;
    QComboBox *apmVerComboBox;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_13;
    QLineEdit *battCapacityLineEdit;
    QLabel *label_12;

    void setupUi(QWidget *BatteryMonitorConfig)
    {
        if (BatteryMonitorConfig->objectName().isEmpty())
            BatteryMonitorConfig->setObjectName(QString::fromUtf8("BatteryMonitorConfig"));
        BatteryMonitorConfig->resize(745, 494);
        label = new QLabel(BatteryMonitorConfig);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 20, 141, 31));
        label->setScaledContents(false);
        label_2 = new QLabel(BatteryMonitorConfig);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 70, 141, 51));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/files/images/devices/BR-APMPWRDEAN-2.jpg")));
        label_2->setScaledContents(true);
        alertOnLowCheckBox = new QCheckBox(BatteryMonitorConfig);
        alertOnLowCheckBox->setObjectName(QString::fromUtf8("alertOnLowCheckBox"));
        alertOnLowCheckBox->setGeometry(QRect(480, 120, 91, 17));
        groupBox = new QGroupBox(BatteryMonitorConfig);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(160, 170, 241, 141));
        horizontalLayout_2 = new QHBoxLayout(groupBox);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        verticalLayout_2->addWidget(label_9);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout_2->addWidget(label_8);

        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        verticalLayout_2->addWidget(label_10);

        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        verticalLayout_2->addWidget(label_11);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        measuredVoltsLineEdit = new QLineEdit(groupBox);
        measuredVoltsLineEdit->setObjectName(QString::fromUtf8("measuredVoltsLineEdit"));
        measuredVoltsLineEdit->setReadOnly(false);

        verticalLayout->addWidget(measuredVoltsLineEdit);

        calcVoltsLineEdit = new QLineEdit(groupBox);
        calcVoltsLineEdit->setObjectName(QString::fromUtf8("calcVoltsLineEdit"));
        calcVoltsLineEdit->setReadOnly(false);

        verticalLayout->addWidget(calcVoltsLineEdit);

        calcDividerLineEdit = new QLineEdit(groupBox);
        calcDividerLineEdit->setObjectName(QString::fromUtf8("calcDividerLineEdit"));
        calcDividerLineEdit->setReadOnly(false);

        verticalLayout->addWidget(calcDividerLineEdit);

        ampsPerVoltsLineEdit = new QLineEdit(groupBox);
        ampsPerVoltsLineEdit->setObjectName(QString::fromUtf8("ampsPerVoltsLineEdit"));
        ampsPerVoltsLineEdit->setReadOnly(false);

        verticalLayout->addWidget(ampsPerVoltsLineEdit);


        horizontalLayout->addLayout(verticalLayout);


        horizontalLayout_2->addLayout(horizontalLayout);

        horizontalLayoutWidget_2 = new QWidget(BatteryMonitorConfig);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(160, 70, 281, 91));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_3 = new QLabel(horizontalLayoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_4->addWidget(label_3);

        label_4 = new QLabel(horizontalLayoutWidget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_4->addWidget(label_4);

        label_5 = new QLabel(horizontalLayoutWidget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_4->addWidget(label_5);


        horizontalLayout_3->addLayout(verticalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        monitorComboBox = new QComboBox(horizontalLayoutWidget_2);
        monitorComboBox->setObjectName(QString::fromUtf8("monitorComboBox"));

        verticalLayout_3->addWidget(monitorComboBox);

        sensorComboBox = new QComboBox(horizontalLayoutWidget_2);
        sensorComboBox->setObjectName(QString::fromUtf8("sensorComboBox"));

        verticalLayout_3->addWidget(sensorComboBox);

        apmVerComboBox = new QComboBox(horizontalLayoutWidget_2);
        apmVerComboBox->setObjectName(QString::fromUtf8("apmVerComboBox"));

        verticalLayout_3->addWidget(apmVerComboBox);


        horizontalLayout_3->addLayout(verticalLayout_3);

        horizontalLayout_3->setStretch(1, 1);
        horizontalLayoutWidget_3 = new QWidget(BatteryMonitorConfig);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(470, 70, 195, 41));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(horizontalLayoutWidget_3);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        horizontalLayout_4->addWidget(label_13);

        battCapacityLineEdit = new QLineEdit(horizontalLayoutWidget_3);
        battCapacityLineEdit->setObjectName(QString::fromUtf8("battCapacityLineEdit"));

        horizontalLayout_4->addWidget(battCapacityLineEdit);

        label_12 = new QLabel(horizontalLayoutWidget_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_4->addWidget(label_12);


        retranslateUi(BatteryMonitorConfig);

        QMetaObject::connectSlotsByName(BatteryMonitorConfig);
    } // setupUi

    void retranslateUi(QWidget *BatteryMonitorConfig)
    {
        BatteryMonitorConfig->setWindowTitle(QApplication::translate("BatteryMonitorConfig", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("BatteryMonitorConfig", "<h2>Battery Monitor</h2>", 0, QApplication::UnicodeUTF8));
        label_2->setText(QString());
        alertOnLowCheckBox->setText(QApplication::translate("BatteryMonitorConfig", "Alert On Low", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("BatteryMonitorConfig", "Calibration", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("BatteryMonitorConfig", "1. Measured battery voltage:", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("BatteryMonitorConfig", "2. Battery voltage (Calc'ed):", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("BatteryMonitorConfig", "3. Voltage divider (Calc'ed):", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("BatteryMonitorConfig", "4. Amperes per volt:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("BatteryMonitorConfig", "Monitor", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("BatteryMonitorConfig", "Sensor", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("BatteryMonitorConfig", "APM Version", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("BatteryMonitorConfig", "Battery Capacity:", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("BatteryMonitorConfig", "mAh", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class BatteryMonitorConfig: public Ui_BatteryMonitorConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BATTERYMONITORCONFIG_H
