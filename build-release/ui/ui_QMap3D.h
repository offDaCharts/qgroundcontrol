/********************************************************************************
** Form generated from reading UI file 'QMap3D.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMAP3D_H
#define UI_QMAP3D_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>
#include "QOSGWidget.h"

QT_BEGIN_NAMESPACE

class Ui_QMap3D
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButton_map;
    ViewerQOSG *graphicsView;
    QPushButton *pushButton_vehicle;

    void setupUi(QWidget *QMap3D)
    {
        if (QMap3D->objectName().isEmpty())
            QMap3D->setObjectName(QString::fromUtf8("QMap3D"));
        QMap3D->resize(548, 211);
        gridLayout = new QGridLayout(QMap3D);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_map = new QPushButton(QMap3D);
        pushButton_map->setObjectName(QString::fromUtf8("pushButton_map"));

        gridLayout->addWidget(pushButton_map, 1, 0, 1, 1);

        graphicsView = new ViewerQOSG(QMap3D);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));

        gridLayout->addWidget(graphicsView, 0, 0, 1, 2);

        pushButton_vehicle = new QPushButton(QMap3D);
        pushButton_vehicle->setObjectName(QString::fromUtf8("pushButton_vehicle"));

        gridLayout->addWidget(pushButton_vehicle, 1, 1, 1, 1);


        retranslateUi(QMap3D);

        QMetaObject::connectSlotsByName(QMap3D);
    } // setupUi

    void retranslateUi(QWidget *QMap3D)
    {
        QMap3D->setWindowTitle(QApplication::translate("QMap3D", "Form", 0, QApplication::UnicodeUTF8));
        pushButton_map->setText(QApplication::translate("QMap3D", "Map", 0, QApplication::UnicodeUTF8));
        pushButton_vehicle->setText(QApplication::translate("QMap3D", "Vehicle", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QMap3D: public Ui_QMap3D {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMAP3D_H
