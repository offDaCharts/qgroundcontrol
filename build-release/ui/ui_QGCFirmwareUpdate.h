/********************************************************************************
** Form generated from reading UI file 'QGCFirmwareUpdate.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCFIRMWAREUPDATE_H
#define UI_QGCFIRMWAREUPDATE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QGCFirmwareUpdate
{
public:
    QGridLayout *gridLayout;
    QComboBox *autopilotComboBox;
    QWidget *widget;

    void setupUi(QWidget *QGCFirmwareUpdate)
    {
        if (QGCFirmwareUpdate->objectName().isEmpty())
            QGCFirmwareUpdate->setObjectName(QString::fromUtf8("QGCFirmwareUpdate"));
        QGCFirmwareUpdate->resize(596, 343);
        gridLayout = new QGridLayout(QGCFirmwareUpdate);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        autopilotComboBox = new QComboBox(QGCFirmwareUpdate);
        autopilotComboBox->setObjectName(QString::fromUtf8("autopilotComboBox"));

        gridLayout->addWidget(autopilotComboBox, 0, 0, 1, 1);

        widget = new QWidget(QGCFirmwareUpdate);
        widget->setObjectName(QString::fromUtf8("widget"));

        gridLayout->addWidget(widget, 1, 0, 1, 1);


        retranslateUi(QGCFirmwareUpdate);

        QMetaObject::connectSlotsByName(QGCFirmwareUpdate);
    } // setupUi

    void retranslateUi(QWidget *QGCFirmwareUpdate)
    {
        QGCFirmwareUpdate->setWindowTitle(QApplication::translate("QGCFirmwareUpdate", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QGCFirmwareUpdate: public Ui_QGCFirmwareUpdate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCFIRMWAREUPDATE_H
