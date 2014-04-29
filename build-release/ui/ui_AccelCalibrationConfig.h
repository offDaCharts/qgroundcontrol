/********************************************************************************
** Form generated from reading UI file 'AccelCalibrationConfig.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCELCALIBRATIONCONFIG_H
#define UI_ACCELCALIBRATIONCONFIG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AccelCalibrationConfig
{
public:
    QLabel *label;
    QPushButton *calibrateAccelButton;
    QLabel *outputLabel;

    void setupUi(QWidget *AccelCalibrationConfig)
    {
        if (AccelCalibrationConfig->objectName().isEmpty())
            AccelCalibrationConfig->setObjectName(QString::fromUtf8("AccelCalibrationConfig"));
        AccelCalibrationConfig->resize(576, 354);
        label = new QLabel(AccelCalibrationConfig);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 0, 231, 31));
        label->setScaledContents(false);
        calibrateAccelButton = new QPushButton(AccelCalibrationConfig);
        calibrateAccelButton->setObjectName(QString::fromUtf8("calibrateAccelButton"));
        calibrateAccelButton->setGeometry(QRect(70, 160, 111, 41));
        outputLabel = new QLabel(AccelCalibrationConfig);
        outputLabel->setObjectName(QString::fromUtf8("outputLabel"));
        outputLabel->setGeometry(QRect(20, 50, 311, 101));

        retranslateUi(AccelCalibrationConfig);

        QMetaObject::connectSlotsByName(AccelCalibrationConfig);
    } // setupUi

    void retranslateUi(QWidget *AccelCalibrationConfig)
    {
        AccelCalibrationConfig->setWindowTitle(QApplication::translate("AccelCalibrationConfig", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("AccelCalibrationConfig", "<h2>Accelerometer Calibration</h2>", 0, QApplication::UnicodeUTF8));
        calibrateAccelButton->setText(QApplication::translate("AccelCalibrationConfig", "Calibrate\n"
"Accelerometer", 0, QApplication::UnicodeUTF8));
        outputLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AccelCalibrationConfig: public Ui_AccelCalibrationConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCELCALIBRATIONCONFIG_H
