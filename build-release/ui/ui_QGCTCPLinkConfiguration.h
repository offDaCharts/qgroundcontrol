/********************************************************************************
** Form generated from reading UI file 'QGCTCPLinkConfiguration.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCTCPLINKCONFIGURATION_H
#define UI_QGCTCPLINKCONFIGURATION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFormLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpinBox>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QGCTCPLinkConfiguration
{
public:
    QFormLayout *formLayout;
    QLabel *portLabel;
    QSpinBox *portSpinBox;
    QLabel *label;
    QLineEdit *hostAddressLineEdit;

    void setupUi(QWidget *QGCTCPLinkConfiguration)
    {
        if (QGCTCPLinkConfiguration->objectName().isEmpty())
            QGCTCPLinkConfiguration->setObjectName(QString::fromUtf8("QGCTCPLinkConfiguration"));
        QGCTCPLinkConfiguration->resize(400, 300);
        formLayout = new QFormLayout(QGCTCPLinkConfiguration);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::FieldsStayAtSizeHint);
        portLabel = new QLabel(QGCTCPLinkConfiguration);
        portLabel->setObjectName(QString::fromUtf8("portLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, portLabel);

        portSpinBox = new QSpinBox(QGCTCPLinkConfiguration);
        portSpinBox->setObjectName(QString::fromUtf8("portSpinBox"));
        portSpinBox->setMinimum(3000);
        portSpinBox->setMaximum(100000);

        formLayout->setWidget(0, QFormLayout::FieldRole, portSpinBox);

        label = new QLabel(QGCTCPLinkConfiguration);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        hostAddressLineEdit = new QLineEdit(QGCTCPLinkConfiguration);
        hostAddressLineEdit->setObjectName(QString::fromUtf8("hostAddressLineEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, hostAddressLineEdit);


        retranslateUi(QGCTCPLinkConfiguration);

        QMetaObject::connectSlotsByName(QGCTCPLinkConfiguration);
    } // setupUi

    void retranslateUi(QWidget *QGCTCPLinkConfiguration)
    {
        QGCTCPLinkConfiguration->setWindowTitle(QApplication::translate("QGCTCPLinkConfiguration", "Form", 0, QApplication::UnicodeUTF8));
        portLabel->setText(QApplication::translate("QGCTCPLinkConfiguration", "TCP Port", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QGCTCPLinkConfiguration", "Host Address", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QGCTCPLinkConfiguration: public Ui_QGCTCPLinkConfiguration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCTCPLINKCONFIGURATION_H
