/********************************************************************************
** Form generated from reading UI file 'QGCHilConfiguration.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCHILCONFIGURATION_H
#define UI_QGCHILCONFIGURATION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QGCHilConfiguration
{
public:
    QGridLayout *gridLayout;
    QLabel *simLabel;
    QComboBox *simComboBox;
    QVBoxLayout *simulatorConfigurationLayout;
    QLabel *statusLabel;

    void setupUi(QWidget *QGCHilConfiguration)
    {
        if (QGCHilConfiguration->objectName().isEmpty())
            QGCHilConfiguration->setObjectName(QString::fromUtf8("QGCHilConfiguration"));
        QGCHilConfiguration->resize(366, 301);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QGCHilConfiguration->sizePolicy().hasHeightForWidth());
        QGCHilConfiguration->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(QGCHilConfiguration);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        simLabel = new QLabel(QGCHilConfiguration);
        simLabel->setObjectName(QString::fromUtf8("simLabel"));

        gridLayout->addWidget(simLabel, 0, 0, 1, 1);

        simComboBox = new QComboBox(QGCHilConfiguration);
        simComboBox->setObjectName(QString::fromUtf8("simComboBox"));
        simComboBox->setEditable(true);

        gridLayout->addWidget(simComboBox, 0, 1, 1, 1);

        simulatorConfigurationLayout = new QVBoxLayout();
        simulatorConfigurationLayout->setSpacing(0);
        simulatorConfigurationLayout->setObjectName(QString::fromUtf8("simulatorConfigurationLayout"));

        gridLayout->addLayout(simulatorConfigurationLayout, 1, 0, 1, 2);

        statusLabel = new QLabel(QGCHilConfiguration);
        statusLabel->setObjectName(QString::fromUtf8("statusLabel"));

        gridLayout->addWidget(statusLabel, 2, 0, 1, 2);

        gridLayout->setRowStretch(0, 1);
        gridLayout->setRowStretch(1, 100);
        gridLayout->setRowStretch(2, 1);
        gridLayout->setColumnStretch(0, 40);

        retranslateUi(QGCHilConfiguration);

        QMetaObject::connectSlotsByName(QGCHilConfiguration);
    } // setupUi

    void retranslateUi(QWidget *QGCHilConfiguration)
    {
        QGCHilConfiguration->setWindowTitle(QApplication::translate("QGCHilConfiguration", "Form", 0, QApplication::UnicodeUTF8));
        simLabel->setText(QApplication::translate("QGCHilConfiguration", "Simulator", 0, QApplication::UnicodeUTF8));
        simComboBox->clear();
        simComboBox->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("QGCHilConfiguration", "Flightgear", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QGCHilConfiguration", "X-Plane 10", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QGCHilConfiguration", "X-Plane 9", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QGCHilConfiguration", "JSBSim", 0, QApplication::UnicodeUTF8)
        );
        statusLabel->setText(QApplication::translate("QGCHilConfiguration", "No simulator active..", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QGCHilConfiguration: public Ui_QGCHilConfiguration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCHILCONFIGURATION_H
