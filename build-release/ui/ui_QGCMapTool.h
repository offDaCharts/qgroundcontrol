/********************************************************************************
** Form generated from reading UI file 'QGCMapTool.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCMAPTOOL_H
#define UI_QGCMAPTOOL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QSlider>
#include <QtGui/QWidget>
#include "QGCMapToolBar.h"
#include "QGCMapWidget.h"

QT_BEGIN_NAMESPACE

class Ui_QGCMapTool
{
public:
    QGridLayout *gridLayout;
    QGCMapWidget *map;
    QSlider *zoomSlider;
    QGCMapToolBar *toolBar;

    void setupUi(QWidget *QGCMapTool)
    {
        if (QGCMapTool->objectName().isEmpty())
            QGCMapTool->setObjectName(QString::fromUtf8("QGCMapTool"));
        QGCMapTool->resize(261, 206);
        gridLayout = new QGridLayout(QGCMapTool);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(3);
        gridLayout->setVerticalSpacing(0);
        map = new QGCMapWidget(QGCMapTool);
        map->setObjectName(QString::fromUtf8("map"));

        gridLayout->addWidget(map, 0, 0, 1, 1);

        zoomSlider = new QSlider(QGCMapTool);
        zoomSlider->setObjectName(QString::fromUtf8("zoomSlider"));
        zoomSlider->setMaximum(60);
        zoomSlider->setOrientation(Qt::Vertical);

        gridLayout->addWidget(zoomSlider, 0, 1, 2, 1);

        toolBar = new QGCMapToolBar(QGCMapTool);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));

        gridLayout->addWidget(toolBar, 1, 0, 1, 1);

        gridLayout->setRowStretch(0, 100);
        gridLayout->setRowStretch(1, 1);

        retranslateUi(QGCMapTool);

        QMetaObject::connectSlotsByName(QGCMapTool);
    } // setupUi

    void retranslateUi(QWidget *QGCMapTool)
    {
        QGCMapTool->setWindowTitle(QApplication::translate("QGCMapTool", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QGCMapTool: public Ui_QGCMapTool {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCMAPTOOL_H
