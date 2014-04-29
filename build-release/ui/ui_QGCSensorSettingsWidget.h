/********************************************************************************
** Form generated from reading UI file 'QGCSensorSettingsWidget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCSENSORSETTINGSWIDGET_H
#define UI_QGCSENSORSETTINGSWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QGCSensorSettingsWidget
{
public:
    QGridLayout *gridLayout_4;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout;
    QPushButton *rcCalButton;
    QPushButton *magCalButton;
    QPushButton *gyroCalButton;
    QPushButton *pressureCalButton;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QSpinBox *spinBox_rawSensor;
    QLabel *label;
    QSpinBox *spinBox_extended;
    QSpinBox *spinBox_position;
    QSpinBox *spinBox_controller;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QSpinBox *spinBox_rc;
    QSpinBox *spinBox_extra1;
    QSpinBox *spinBox_extra2;
    QSpinBox *spinBox_extra3;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;

    void setupUi(QWidget *QGCSensorSettingsWidget)
    {
        if (QGCSensorSettingsWidget->objectName().isEmpty())
            QGCSensorSettingsWidget->setObjectName(QString::fromUtf8("QGCSensorSettingsWidget"));
        QGCSensorSettingsWidget->resize(307, 221);
        gridLayout_4 = new QGridLayout(QGCSensorSettingsWidget);
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        groupBox_3 = new QGroupBox(QGCSensorSettingsWidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout = new QGridLayout(groupBox_3);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(12);
        gridLayout->setVerticalSpacing(6);
        gridLayout->setContentsMargins(6, 2, 6, 2);
        rcCalButton = new QPushButton(groupBox_3);
        rcCalButton->setObjectName(QString::fromUtf8("rcCalButton"));

        gridLayout->addWidget(rcCalButton, 0, 0, 1, 1);

        magCalButton = new QPushButton(groupBox_3);
        magCalButton->setObjectName(QString::fromUtf8("magCalButton"));

        gridLayout->addWidget(magCalButton, 0, 1, 1, 1);

        gyroCalButton = new QPushButton(groupBox_3);
        gyroCalButton->setObjectName(QString::fromUtf8("gyroCalButton"));

        gridLayout->addWidget(gyroCalButton, 1, 1, 1, 1);

        pressureCalButton = new QPushButton(groupBox_3);
        pressureCalButton->setObjectName(QString::fromUtf8("pressureCalButton"));

        gridLayout->addWidget(pressureCalButton, 1, 0, 1, 1);

        gridLayout->setColumnStretch(0, 100);
        gridLayout->setColumnStretch(1, 100);

        gridLayout_4->addWidget(groupBox_3, 1, 0, 1, 1);

        groupBox = new QGroupBox(QGCSensorSettingsWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(5);
        gridLayout_2->setVerticalSpacing(2);
        gridLayout_2->setContentsMargins(6, 2, 6, 2);
        spinBox_rawSensor = new QSpinBox(groupBox);
        spinBox_rawSensor->setObjectName(QString::fromUtf8("spinBox_rawSensor"));
        spinBox_rawSensor->setMaximum(10000);

        gridLayout_2->addWidget(spinBox_rawSensor, 0, 0, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 1, 1, 1);

        spinBox_extended = new QSpinBox(groupBox);
        spinBox_extended->setObjectName(QString::fromUtf8("spinBox_extended"));
        spinBox_extended->setMaximum(10000);

        gridLayout_2->addWidget(spinBox_extended, 1, 0, 1, 1);

        spinBox_position = new QSpinBox(groupBox);
        spinBox_position->setObjectName(QString::fromUtf8("spinBox_position"));
        spinBox_position->setMaximum(10000);

        gridLayout_2->addWidget(spinBox_position, 4, 0, 1, 1);

        spinBox_controller = new QSpinBox(groupBox);
        spinBox_controller->setObjectName(QString::fromUtf8("spinBox_controller"));
        spinBox_controller->setMaximum(10000);

        gridLayout_2->addWidget(spinBox_controller, 5, 0, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 1, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 4, 1, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 5, 1, 1, 1);

        spinBox_rc = new QSpinBox(groupBox);
        spinBox_rc->setObjectName(QString::fromUtf8("spinBox_rc"));
        spinBox_rc->setMaximum(10000);

        gridLayout_2->addWidget(spinBox_rc, 0, 2, 1, 1);

        spinBox_extra1 = new QSpinBox(groupBox);
        spinBox_extra1->setObjectName(QString::fromUtf8("spinBox_extra1"));
        spinBox_extra1->setMaximum(10000);

        gridLayout_2->addWidget(spinBox_extra1, 1, 2, 1, 1);

        spinBox_extra2 = new QSpinBox(groupBox);
        spinBox_extra2->setObjectName(QString::fromUtf8("spinBox_extra2"));
        spinBox_extra2->setMaximum(10000);

        gridLayout_2->addWidget(spinBox_extra2, 4, 2, 1, 1);

        spinBox_extra3 = new QSpinBox(groupBox);
        spinBox_extra3->setObjectName(QString::fromUtf8("spinBox_extra3"));
        spinBox_extra3->setMaximum(10000);

        gridLayout_2->addWidget(spinBox_extra3, 5, 2, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 0, 3, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 1, 3, 1, 1);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_2->addWidget(label_7, 4, 3, 1, 1);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_2->addWidget(label_8, 5, 3, 1, 1);


        gridLayout_4->addWidget(groupBox, 0, 0, 1, 1);

        gridLayout_4->setRowStretch(0, 10);

        retranslateUi(QGCSensorSettingsWidget);

        QMetaObject::connectSlotsByName(QGCSensorSettingsWidget);
    } // setupUi

    void retranslateUi(QWidget *QGCSensorSettingsWidget)
    {
        QGCSensorSettingsWidget->setWindowTitle(QApplication::translate("QGCSensorSettingsWidget", "Form", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("QGCSensorSettingsWidget", "Calibration Wizards", 0, QApplication::UnicodeUTF8));
        rcCalButton->setText(QApplication::translate("QGCSensorSettingsWidget", "RC Cal.", 0, QApplication::UnicodeUTF8));
        magCalButton->setText(QApplication::translate("QGCSensorSettingsWidget", "Mag. Cal.", 0, QApplication::UnicodeUTF8));
        gyroCalButton->setText(QApplication::translate("QGCSensorSettingsWidget", "Gyro Cal.", 0, QApplication::UnicodeUTF8));
        pressureCalButton->setText(QApplication::translate("QGCSensorSettingsWidget", "Pressure Cal.", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("QGCSensorSettingsWidget", "Data Stream Rates (Hz)", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QGCSensorSettingsWidget", "Raw Sensor", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("QGCSensorSettingsWidget", "Ext. Status", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("QGCSensorSettingsWidget", "Position", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("QGCSensorSettingsWidget", "Raw Contr.", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("QGCSensorSettingsWidget", "RC Chan.", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("QGCSensorSettingsWidget", "Extra 1", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("QGCSensorSettingsWidget", "Extra 2", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("QGCSensorSettingsWidget", "Extra 3", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QGCSensorSettingsWidget: public Ui_QGCSensorSettingsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCSENSORSETTINGSWIDGET_H
