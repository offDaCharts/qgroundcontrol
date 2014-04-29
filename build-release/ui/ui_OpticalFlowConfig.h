/********************************************************************************
** Form generated from reading UI file 'OpticalFlowConfig.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTICALFLOWCONFIG_H
#define UI_OPTICALFLOWCONFIG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OpticalFlowConfig
{
public:
    QLabel *label;
    QCheckBox *enableCheckBox;
    QLabel *label_2;

    void setupUi(QWidget *OpticalFlowConfig)
    {
        if (OpticalFlowConfig->objectName().isEmpty())
            OpticalFlowConfig->setObjectName(QString::fromUtf8("OpticalFlowConfig"));
        OpticalFlowConfig->resize(400, 300);
        label = new QLabel(OpticalFlowConfig);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 20, 131, 31));
        label->setScaledContents(false);
        enableCheckBox = new QCheckBox(OpticalFlowConfig);
        enableCheckBox->setObjectName(QString::fromUtf8("enableCheckBox"));
        enableCheckBox->setGeometry(QRect(100, 60, 70, 17));
        label_2 = new QLabel(OpticalFlowConfig);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 60, 81, 71));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/files/images/devices/BR-0016-01-3T.jpg")));
        label_2->setScaledContents(true);

        retranslateUi(OpticalFlowConfig);

        QMetaObject::connectSlotsByName(OpticalFlowConfig);
    } // setupUi

    void retranslateUi(QWidget *OpticalFlowConfig)
    {
        OpticalFlowConfig->setWindowTitle(QApplication::translate("OpticalFlowConfig", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("OpticalFlowConfig", "<h2>Optical Flow</h2>", 0, QApplication::UnicodeUTF8));
        enableCheckBox->setText(QApplication::translate("OpticalFlowConfig", "Enable", 0, QApplication::UnicodeUTF8));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class OpticalFlowConfig: public Ui_OpticalFlowConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTICALFLOWCONFIG_H
