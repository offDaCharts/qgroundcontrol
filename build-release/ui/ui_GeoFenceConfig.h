/********************************************************************************
** Form generated from reading UI file 'GeoFenceConfig.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GEOFENCECONFIG_H
#define UI_GEOFENCECONFIG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GeoFenceConfig
{
public:
    QLabel *label;

    void setupUi(QWidget *GeoFenceConfig)
    {
        if (GeoFenceConfig->objectName().isEmpty())
            GeoFenceConfig->setObjectName(QString::fromUtf8("GeoFenceConfig"));
        GeoFenceConfig->resize(400, 300);
        label = new QLabel(GeoFenceConfig);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 20, 141, 51));

        retranslateUi(GeoFenceConfig);

        QMetaObject::connectSlotsByName(GeoFenceConfig);
    } // setupUi

    void retranslateUi(QWidget *GeoFenceConfig)
    {
        GeoFenceConfig->setWindowTitle(QApplication::translate("GeoFenceConfig", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("GeoFenceConfig", "<h2>Geo Fence</h2>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class GeoFenceConfig: public Ui_GeoFenceConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GEOFENCECONFIG_H
