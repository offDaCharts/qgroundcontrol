/********************************************************************************
** Form generated from reading UI file 'QGCPX4MulticopterConfig.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCPX4MULTICOPTERCONFIG_H
#define UI_QGCPX4MULTICOPTERCONFIG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSlider>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QGCPX4MulticopterConfig
{
public:
    QSlider *horizontalSlider;
    QSlider *horizontalSlider_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;

    void setupUi(QWidget *QGCPX4MulticopterConfig)
    {
        if (QGCPX4MulticopterConfig->objectName().isEmpty())
            QGCPX4MulticopterConfig->setObjectName(QString::fromUtf8("QGCPX4MulticopterConfig"));
        QGCPX4MulticopterConfig->resize(605, 449);
        horizontalSlider = new QSlider(QGCPX4MulticopterConfig);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(130, 150, 341, 22));
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider_2 = new QSlider(QGCPX4MulticopterConfig);
        horizontalSlider_2->setObjectName(QString::fromUtf8("horizontalSlider_2"));
        horizontalSlider_2->setGeometry(QRect(130, 400, 351, 22));
        horizontalSlider_2->setOrientation(Qt::Horizontal);
        label = new QLabel(QGCPX4MulticopterConfig);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 160, 62, 16));
        label_2 = new QLabel(QGCPX4MulticopterConfig);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(510, 160, 62, 16));
        label_3 = new QLabel(QGCPX4MulticopterConfig);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 400, 62, 16));
        label_4 = new QLabel(QGCPX4MulticopterConfig);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(520, 400, 62, 16));
        label_5 = new QLabel(QGCPX4MulticopterConfig);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 10, 62, 16));
        label_6 = new QLabel(QGCPX4MulticopterConfig);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(30, 200, 62, 16));

        retranslateUi(QGCPX4MulticopterConfig);

        QMetaObject::connectSlotsByName(QGCPX4MulticopterConfig);
    } // setupUi

    void retranslateUi(QWidget *QGCPX4MulticopterConfig)
    {
        QGCPX4MulticopterConfig->setWindowTitle(QApplication::translate("QGCPX4MulticopterConfig", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QGCPX4MulticopterConfig", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("QGCPX4MulticopterConfig", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("QGCPX4MulticopterConfig", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("QGCPX4MulticopterConfig", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("QGCPX4MulticopterConfig", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("QGCPX4MulticopterConfig", "TextLabel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QGCPX4MulticopterConfig: public Ui_QGCPX4MulticopterConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCPX4MULTICOPTERCONFIG_H
