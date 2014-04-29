/********************************************************************************
** Form generated from reading UI file 'QGCUDPLinkConfiguration.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCUDPLINKCONFIGURATION_H
#define UI_QGCUDPLINKCONFIGURATION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFormLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QGCUDPLinkConfiguration
{
public:
    QFormLayout *formLayout;
    QLabel *portLabel;
    QSpinBox *portSpinBox;
    QLabel *label;
    QPushButton *addIPButton;

    void setupUi(QWidget *QGCUDPLinkConfiguration)
    {
        if (QGCUDPLinkConfiguration->objectName().isEmpty())
            QGCUDPLinkConfiguration->setObjectName(QString::fromUtf8("QGCUDPLinkConfiguration"));
        QGCUDPLinkConfiguration->resize(400, 300);
        formLayout = new QFormLayout(QGCUDPLinkConfiguration);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        portLabel = new QLabel(QGCUDPLinkConfiguration);
        portLabel->setObjectName(QString::fromUtf8("portLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, portLabel);

        portSpinBox = new QSpinBox(QGCUDPLinkConfiguration);
        portSpinBox->setObjectName(QString::fromUtf8("portSpinBox"));
        portSpinBox->setMinimum(3000);
        portSpinBox->setMaximum(100000);

        formLayout->setWidget(0, QFormLayout::FieldRole, portSpinBox);

        label = new QLabel(QGCUDPLinkConfiguration);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        addIPButton = new QPushButton(QGCUDPLinkConfiguration);
        addIPButton->setObjectName(QString::fromUtf8("addIPButton"));

        formLayout->setWidget(1, QFormLayout::FieldRole, addIPButton);


        retranslateUi(QGCUDPLinkConfiguration);

        QMetaObject::connectSlotsByName(QGCUDPLinkConfiguration);
    } // setupUi

    void retranslateUi(QWidget *QGCUDPLinkConfiguration)
    {
        QGCUDPLinkConfiguration->setWindowTitle(QApplication::translate("QGCUDPLinkConfiguration", "Form", 0, QApplication::UnicodeUTF8));
        portLabel->setText(QApplication::translate("QGCUDPLinkConfiguration", "UDP Port", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QGCUDPLinkConfiguration", "Add remote communication target", 0, QApplication::UnicodeUTF8));
        addIPButton->setText(QApplication::translate("QGCUDPLinkConfiguration", "Add IP", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QGCUDPLinkConfiguration: public Ui_QGCUDPLinkConfiguration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCUDPLINKCONFIGURATION_H
