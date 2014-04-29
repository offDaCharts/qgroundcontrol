/********************************************************************************
** Form generated from reading UI file 'AirspeedConfig.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AIRSPEEDCONFIG_H
#define UI_AIRSPEEDCONFIG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AirspeedConfig
{
public:
    QLabel *label;
    QLabel *label_2;
    QCheckBox *enableCheckBox;
    QCheckBox *useAirspeedCheckBox;

    void setupUi(QWidget *AirspeedConfig)
    {
        if (AirspeedConfig->objectName().isEmpty())
            AirspeedConfig->setObjectName(QString::fromUtf8("AirspeedConfig"));
        AirspeedConfig->resize(400, 300);
        label = new QLabel(AirspeedConfig);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 20, 131, 31));
        label->setScaledContents(false);
        label_2 = new QLabel(AirspeedConfig);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 60, 71, 71));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/files/images/devices/BR-0004-03-2.jpg")));
        label_2->setScaledContents(true);
        enableCheckBox = new QCheckBox(AirspeedConfig);
        enableCheckBox->setObjectName(QString::fromUtf8("enableCheckBox"));
        enableCheckBox->setGeometry(QRect(110, 70, 70, 17));
        useAirspeedCheckBox = new QCheckBox(AirspeedConfig);
        useAirspeedCheckBox->setObjectName(QString::fromUtf8("useAirspeedCheckBox"));
        useAirspeedCheckBox->setGeometry(QRect(110, 100, 91, 17));

        retranslateUi(AirspeedConfig);

        QMetaObject::connectSlotsByName(AirspeedConfig);
    } // setupUi

    void retranslateUi(QWidget *AirspeedConfig)
    {
        AirspeedConfig->setWindowTitle(QApplication::translate("AirspeedConfig", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("AirspeedConfig", "<h2>Airspeed</h2>", 0, QApplication::UnicodeUTF8));
        label_2->setText(QString());
        enableCheckBox->setText(QApplication::translate("AirspeedConfig", "Enable", 0, QApplication::UnicodeUTF8));
        useAirspeedCheckBox->setText(QApplication::translate("AirspeedConfig", "Use Airspeed", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AirspeedConfig: public Ui_AirspeedConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AIRSPEEDCONFIG_H
