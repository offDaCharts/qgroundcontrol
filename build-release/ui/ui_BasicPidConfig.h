/********************************************************************************
** Form generated from reading UI file 'BasicPidConfig.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BASICPIDCONFIG_H
#define UI_BASICPIDCONFIG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BasicPidConfig
{
public:
    QLabel *label;

    void setupUi(QWidget *BasicPidConfig)
    {
        if (BasicPidConfig->objectName().isEmpty())
            BasicPidConfig->setObjectName(QString::fromUtf8("BasicPidConfig"));
        BasicPidConfig->resize(400, 300);
        label = new QLabel(BasicPidConfig);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 20, 141, 31));

        retranslateUi(BasicPidConfig);

        QMetaObject::connectSlotsByName(BasicPidConfig);
    } // setupUi

    void retranslateUi(QWidget *BasicPidConfig)
    {
        BasicPidConfig->setWindowTitle(QApplication::translate("BasicPidConfig", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("BasicPidConfig", "<h2> Basic Pids</h2>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class BasicPidConfig: public Ui_BasicPidConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BASICPIDCONFIG_H
