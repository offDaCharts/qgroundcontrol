/********************************************************************************
** Form generated from reading UI file 'Radio3DRConfig.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RADIO3DRCONFIG_H
#define UI_RADIO3DRCONFIG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Radio3DRConfig
{
public:
    QLabel *label;

    void setupUi(QWidget *Radio3DRConfig)
    {
        if (Radio3DRConfig->objectName().isEmpty())
            Radio3DRConfig->setObjectName(QString::fromUtf8("Radio3DRConfig"));
        Radio3DRConfig->resize(400, 300);
        label = new QLabel(Radio3DRConfig);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 20, 131, 31));
        label->setScaledContents(false);

        retranslateUi(Radio3DRConfig);

        QMetaObject::connectSlotsByName(Radio3DRConfig);
    } // setupUi

    void retranslateUi(QWidget *Radio3DRConfig)
    {
        Radio3DRConfig->setWindowTitle(QApplication::translate("Radio3DRConfig", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Radio3DRConfig", "<h2>3DR Radio</h2>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Radio3DRConfig: public Ui_Radio3DRConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RADIO3DRCONFIG_H
