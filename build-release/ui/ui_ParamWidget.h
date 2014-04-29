/********************************************************************************
** Form generated from reading UI file 'ParamWidget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARAMWIDGET_H
#define UI_PARAMWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ParamWidget
{
public:
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *titleLabel;
    QLabel *descriptionLabel;
    QHBoxLayout *horizontalLayout;
    QSpinBox *intSpinBox;
    QDoubleSpinBox *doubleSpinBox;
    QSlider *valueSlider;
    QComboBox *valueComboBox;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *ParamWidget)
    {
        if (ParamWidget->objectName().isEmpty())
            ParamWidget->setObjectName(QString::fromUtf8("ParamWidget"));
        ParamWidget->resize(619, 207);
        horizontalLayout_2 = new QHBoxLayout(ParamWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        titleLabel = new QLabel(ParamWidget);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));

        verticalLayout->addWidget(titleLabel);

        descriptionLabel = new QLabel(ParamWidget);
        descriptionLabel->setObjectName(QString::fromUtf8("descriptionLabel"));
        descriptionLabel->setWordWrap(true);

        verticalLayout->addWidget(descriptionLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        intSpinBox = new QSpinBox(ParamWidget);
        intSpinBox->setObjectName(QString::fromUtf8("intSpinBox"));

        horizontalLayout->addWidget(intSpinBox);

        doubleSpinBox = new QDoubleSpinBox(ParamWidget);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));

        horizontalLayout->addWidget(doubleSpinBox);

        valueSlider = new QSlider(ParamWidget);
        valueSlider->setObjectName(QString::fromUtf8("valueSlider"));
        valueSlider->setMaximum(100);
        valueSlider->setValue(0);
        valueSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(valueSlider);

        valueComboBox = new QComboBox(ParamWidget);
        valueComboBox->setObjectName(QString::fromUtf8("valueComboBox"));

        horizontalLayout->addWidget(valueComboBox);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        retranslateUi(ParamWidget);

        QMetaObject::connectSlotsByName(ParamWidget);
    } // setupUi

    void retranslateUi(QWidget *ParamWidget)
    {
        ParamWidget->setWindowTitle(QApplication::translate("ParamWidget", "Form", 0, QApplication::UnicodeUTF8));
        titleLabel->setText(QApplication::translate("ParamWidget", "TextLabel", 0, QApplication::UnicodeUTF8));
        descriptionLabel->setText(QApplication::translate("ParamWidget", "TextLabel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ParamWidget: public Ui_ParamWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARAMWIDGET_H
