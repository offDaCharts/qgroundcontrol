/********************************************************************************
** Form generated from reading UI file 'SonarConfig.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SONARCONFIG_H
#define UI_SONARCONFIG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SonarConfig
{
public:
    QLabel *label;
    QLabel *label_2;
    QCheckBox *enableCheckBox;
    QComboBox *sonarTypeComboBox;

    void setupUi(QWidget *SonarConfig)
    {
        if (SonarConfig->objectName().isEmpty())
            SonarConfig->setObjectName(QString::fromUtf8("SonarConfig"));
        SonarConfig->resize(651, 432);
        label = new QLabel(SonarConfig);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 20, 131, 31));
        label->setScaledContents(false);
        label_2 = new QLabel(SonarConfig);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 60, 91, 81));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/files/images/devices/AC-0004-11-2.jpg")));
        label_2->setScaledContents(true);
        enableCheckBox = new QCheckBox(SonarConfig);
        enableCheckBox->setObjectName(QString::fromUtf8("enableCheckBox"));
        enableCheckBox->setGeometry(QRect(140, 60, 70, 17));
        sonarTypeComboBox = new QComboBox(SonarConfig);
        sonarTypeComboBox->setObjectName(QString::fromUtf8("sonarTypeComboBox"));
        sonarTypeComboBox->setGeometry(QRect(150, 100, 171, 22));

        retranslateUi(SonarConfig);

        QMetaObject::connectSlotsByName(SonarConfig);
    } // setupUi

    void retranslateUi(QWidget *SonarConfig)
    {
        SonarConfig->setWindowTitle(QApplication::translate("SonarConfig", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("SonarConfig", "<h2>Sonar</h2>", 0, QApplication::UnicodeUTF8));
        label_2->setText(QString());
        enableCheckBox->setText(QApplication::translate("SonarConfig", "Enable", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SonarConfig: public Ui_SonarConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SONARCONFIG_H
