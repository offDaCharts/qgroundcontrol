/********************************************************************************
** Form generated from reading UI file 'QGCPX4SensorCalibration.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCPX4SENSORCALIBRATION_H
#define UI_QGCPX4SENSORCALIBRATION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QGCPX4SensorCalibration
{
public:
    QGridLayout *gridLayout;
    QPlainTextEdit *textView;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout_2;
    QLabel *accelLabel;
    QLabel *gyroLabel;
    QPushButton *gyroButton;
    QPushButton *magButton;
    QPushButton *accelButton;
    QPushButton *diffPressureButton;
    QLabel *diffPressureLabel;
    QLabel *magLabel;
    QProgressBar *progressBar;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *autopilotLabel;
    QComboBox *autopilotComboBox;
    QLabel *iconLabel;
    QLabel *instructionLabel;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QLabel *gpsLabel;
    QComboBox *magComboBox;

    void setupUi(QWidget *QGCPX4SensorCalibration)
    {
        if (QGCPX4SensorCalibration->objectName().isEmpty())
            QGCPX4SensorCalibration->setObjectName(QString::fromUtf8("QGCPX4SensorCalibration"));
        QGCPX4SensorCalibration->resize(659, 603);
        QGCPX4SensorCalibration->setStyleSheet(QString::fromUtf8("QPushButton#magButton {\n"
"   background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #73D95D, stop: 1 #18A154);\n"
"    border-radius: 8px;\n"
"    min-height: 25px;\n"
"    max-height: 30px;\n"
"    min-width: 60px;\n"
"    max-width: 140px;\n"
"	margin: 5px;\n"
"    border: 2px solid #465158;\n"
"}\n"
"\n"
"QPushButton#gyroButton, QPushButton#accelButton, QPushButton#diffPressureButton {\n"
"   background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #D3795D, stop: 1 #A81154);\n"
"    border-radius: 8px;\n"
"    min-height: 25px;\n"
"    max-height: 30px;\n"
"    min-width: 60px;\n"
"    max-width: 140px;\n"
"	margin: 5px;\n"
"    border: 2px solid #465158;\n"
"}"));
        gridLayout = new QGridLayout(QGCPX4SensorCalibration);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        textView = new QPlainTextEdit(QGCPX4SensorCalibration);
        textView->setObjectName(QString::fromUtf8("textView"));

        gridLayout->addWidget(textView, 3, 0, 1, 2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 6, 2, 1, 1);

        verticalSpacer = new QSpacerItem(498, 5, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 5, 0, 1, 4);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        accelLabel = new QLabel(QGCPX4SensorCalibration);
        accelLabel->setObjectName(QString::fromUtf8("accelLabel"));
        accelLabel->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(accelLabel, 0, 2, 1, 1);

        gyroLabel = new QLabel(QGCPX4SensorCalibration);
        gyroLabel->setObjectName(QString::fromUtf8("gyroLabel"));
        gyroLabel->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(gyroLabel, 0, 1, 1, 1);

        gyroButton = new QPushButton(QGCPX4SensorCalibration);
        gyroButton->setObjectName(QString::fromUtf8("gyroButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/files/images/px4/calibration/arrows.png"), QSize(), QIcon::Normal, QIcon::Off);
        gyroButton->setIcon(icon);

        gridLayout_2->addWidget(gyroButton, 1, 1, 1, 1);

        magButton = new QPushButton(QGCPX4SensorCalibration);
        magButton->setObjectName(QString::fromUtf8("magButton"));
        magButton->setIcon(icon);

        gridLayout_2->addWidget(magButton, 1, 0, 1, 1);

        accelButton = new QPushButton(QGCPX4SensorCalibration);
        accelButton->setObjectName(QString::fromUtf8("accelButton"));
        accelButton->setIcon(icon);

        gridLayout_2->addWidget(accelButton, 1, 2, 1, 1);

        diffPressureButton = new QPushButton(QGCPX4SensorCalibration);
        diffPressureButton->setObjectName(QString::fromUtf8("diffPressureButton"));
        diffPressureButton->setIcon(icon);

        gridLayout_2->addWidget(diffPressureButton, 1, 3, 1, 1);

        diffPressureLabel = new QLabel(QGCPX4SensorCalibration);
        diffPressureLabel->setObjectName(QString::fromUtf8("diffPressureLabel"));
        diffPressureLabel->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(diffPressureLabel, 0, 3, 1, 1);

        magLabel = new QLabel(QGCPX4SensorCalibration);
        magLabel->setObjectName(QString::fromUtf8("magLabel"));
        magLabel->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(magLabel, 0, 0, 1, 1);


        gridLayout->addLayout(gridLayout_2, 6, 0, 1, 2);

        progressBar = new QProgressBar(QGCPX4SensorCalibration);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(24);

        gridLayout->addWidget(progressBar, 2, 0, 1, 2);

        groupBox_2 = new QGroupBox(QGCPX4SensorCalibration);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        autopilotLabel = new QLabel(groupBox_2);
        autopilotLabel->setObjectName(QString::fromUtf8("autopilotLabel"));
        autopilotLabel->setMinimumSize(QSize(0, 250));

        verticalLayout_2->addWidget(autopilotLabel);

        autopilotComboBox = new QComboBox(groupBox_2);
        autopilotComboBox->setObjectName(QString::fromUtf8("autopilotComboBox"));

        verticalLayout_2->addWidget(autopilotComboBox);


        gridLayout->addWidget(groupBox_2, 0, 2, 1, 2);

        iconLabel = new QLabel(QGCPX4SensorCalibration);
        iconLabel->setObjectName(QString::fromUtf8("iconLabel"));

        gridLayout->addWidget(iconLabel, 0, 0, 2, 2);

        instructionLabel = new QLabel(QGCPX4SensorCalibration);
        instructionLabel->setObjectName(QString::fromUtf8("instructionLabel"));

        gridLayout->addWidget(instructionLabel, 4, 0, 1, 2);

        groupBox = new QGroupBox(QGCPX4SensorCalibration);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gpsLabel = new QLabel(groupBox);
        gpsLabel->setObjectName(QString::fromUtf8("gpsLabel"));
        gpsLabel->setMinimumSize(QSize(150, 120));

        verticalLayout->addWidget(gpsLabel);

        magComboBox = new QComboBox(groupBox);
        magComboBox->setObjectName(QString::fromUtf8("magComboBox"));

        verticalLayout->addWidget(magComboBox);


        gridLayout->addWidget(groupBox, 1, 2, 4, 2);

        gridLayout->setRowStretch(0, 20);
        gridLayout->setColumnStretch(0, 30);

        retranslateUi(QGCPX4SensorCalibration);

        QMetaObject::connectSlotsByName(QGCPX4SensorCalibration);
    } // setupUi

    void retranslateUi(QWidget *QGCPX4SensorCalibration)
    {
        QGCPX4SensorCalibration->setWindowTitle(QApplication::translate("QGCPX4SensorCalibration", "Form", 0, QApplication::UnicodeUTF8));
        accelLabel->setText(QString());
        gyroLabel->setText(QString());
        gyroButton->setText(QApplication::translate("QGCPX4SensorCalibration", "Gyroscope", 0, QApplication::UnicodeUTF8));
        magButton->setText(QApplication::translate("QGCPX4SensorCalibration", "Magnetometer", 0, QApplication::UnicodeUTF8));
        accelButton->setText(QApplication::translate("QGCPX4SensorCalibration", "Accelerometer", 0, QApplication::UnicodeUTF8));
        diffPressureButton->setText(QApplication::translate("QGCPX4SensorCalibration", "Diff. pressure", 0, QApplication::UnicodeUTF8));
        diffPressureLabel->setText(QString());
        magLabel->setText(QString());
        groupBox_2->setTitle(QApplication::translate("QGCPX4SensorCalibration", "Autopilot Orientation", 0, QApplication::UnicodeUTF8));
        autopilotLabel->setText(QString());
        iconLabel->setText(QString());
        instructionLabel->setText(QString());
        groupBox->setTitle(QApplication::translate("QGCPX4SensorCalibration", "Magnetometer Orientation", 0, QApplication::UnicodeUTF8));
        gpsLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QGCPX4SensorCalibration: public Ui_QGCPX4SensorCalibration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCPX4SENSORCALIBRATION_H
