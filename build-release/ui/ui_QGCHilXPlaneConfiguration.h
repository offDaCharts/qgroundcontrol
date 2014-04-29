/********************************************************************************
** Form generated from reading UI file 'QGCHilXPlaneConfiguration.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCHILXPLANECONFIGURATION_H
#define UI_QGCHILXPLANECONFIGURATION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QGCHilXPlaneConfiguration
{
public:
    QGridLayout *gridLayout;
    QPushButton *startButton;
    QComboBox *airframeComboBox;
    QPushButton *setHomeButton;
    QComboBox *hostComboBox;
    QLabel *hostLabel;
    QLabel *label;
    QCheckBox *sensorHilCheckBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QGCHilXPlaneConfiguration)
    {
        if (QGCHilXPlaneConfiguration->objectName().isEmpty())
            QGCHilXPlaneConfiguration->setObjectName(QString::fromUtf8("QGCHilXPlaneConfiguration"));
        QGCHilXPlaneConfiguration->resize(570, 238);
        gridLayout = new QGridLayout(QGCHilXPlaneConfiguration);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        startButton = new QPushButton(QGCHilXPlaneConfiguration);
        startButton->setObjectName(QString::fromUtf8("startButton"));

        gridLayout->addWidget(startButton, 3, 0, 1, 2);

        airframeComboBox = new QComboBox(QGCHilXPlaneConfiguration);
        airframeComboBox->setObjectName(QString::fromUtf8("airframeComboBox"));
        airframeComboBox->setEditable(true);

        gridLayout->addWidget(airframeComboBox, 0, 1, 1, 3);

        setHomeButton = new QPushButton(QGCHilXPlaneConfiguration);
        setHomeButton->setObjectName(QString::fromUtf8("setHomeButton"));

        gridLayout->addWidget(setHomeButton, 3, 2, 1, 2);

        hostComboBox = new QComboBox(QGCHilXPlaneConfiguration);
        hostComboBox->setObjectName(QString::fromUtf8("hostComboBox"));
        hostComboBox->setEditable(true);

        gridLayout->addWidget(hostComboBox, 1, 1, 1, 3);

        hostLabel = new QLabel(QGCHilXPlaneConfiguration);
        hostLabel->setObjectName(QString::fromUtf8("hostLabel"));

        gridLayout->addWidget(hostLabel, 1, 0, 1, 1);

        label = new QLabel(QGCHilXPlaneConfiguration);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        sensorHilCheckBox = new QCheckBox(QGCHilXPlaneConfiguration);
        sensorHilCheckBox->setObjectName(QString::fromUtf8("sensorHilCheckBox"));

        gridLayout->addWidget(sensorHilCheckBox, 4, 0, 1, 4);

        verticalSpacer = new QSpacerItem(20, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 5, 0, 1, 4);

        gridLayout->setRowStretch(5, 100);
        gridLayout->setColumnStretch(0, 20);
        gridLayout->setColumnStretch(1, 40);
        gridLayout->setColumnStretch(2, 40);
        gridLayout->setColumnStretch(3, 20);

        retranslateUi(QGCHilXPlaneConfiguration);

        QMetaObject::connectSlotsByName(QGCHilXPlaneConfiguration);
    } // setupUi

    void retranslateUi(QWidget *QGCHilXPlaneConfiguration)
    {
        QGCHilXPlaneConfiguration->setWindowTitle(QApplication::translate("QGCHilXPlaneConfiguration", "Form", 0, QApplication::UnicodeUTF8));
        startButton->setText(QApplication::translate("QGCHilXPlaneConfiguration", "Start", 0, QApplication::UnicodeUTF8));
        airframeComboBox->clear();
        airframeComboBox->insertItems(0, QStringList()
         << QApplication::translate("QGCHilXPlaneConfiguration", "X-Plane default", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QGCHilXPlaneConfiguration", "QRO_X/MK", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QGCHilXPlaneConfiguration", "QRO_X/Ardrone", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QGCHilXPlaneConfiguration", "QRO_X/PWM", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QGCHilXPlaneConfiguration", "Unlimited", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QGCHilXPlaneConfiguration", "Twinjet", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QGCHilXPlaneConfiguration", "Early Bird", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QGCHilXPlaneConfiguration", "Reno Racer", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QGCHilXPlaneConfiguration", "Slowstick", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QGCHilXPlaneConfiguration", "Tiny", 0, QApplication::UnicodeUTF8)
        );
        setHomeButton->setText(QApplication::translate("QGCHilXPlaneConfiguration", "Set HOME", 0, QApplication::UnicodeUTF8));
        hostComboBox->clear();
        hostComboBox->insertItems(0, QStringList()
         << QApplication::translate("QGCHilXPlaneConfiguration", "127.0.0.1:49000", 0, QApplication::UnicodeUTF8)
        );
        hostLabel->setText(QApplication::translate("QGCHilXPlaneConfiguration", "Host", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QGCHilXPlaneConfiguration", "Airframe", 0, QApplication::UnicodeUTF8));
        sensorHilCheckBox->setText(QApplication::translate("QGCHilXPlaneConfiguration", "Enable sensor level HIL", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QGCHilXPlaneConfiguration: public Ui_QGCHilXPlaneConfiguration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCHILXPLANECONFIGURATION_H
