/********************************************************************************
** Form generated from reading UI file 'QGCParamSlider.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCPARAMSLIDER_H
#define UI_QGCPARAMSLIDER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QGCParamSlider
{
public:
    QGridLayout *gridLayout;
    QSpinBox *intValueSpinBox;
    QComboBox *editSelectParamComboBox;
    QFrame *editLine1;
    QSlider *valueSlider;
    QPushButton *editDoneButton;
    QFrame *editLine2;
    QCheckBox *editInfoCheckBox;
    QSpacerItem *horizontalSpacer;
    QPushButton *editRefreshParamsButton;
    QSpacerItem *verticalSpacer;
    QPushButton *readButton;
    QComboBox *editSelectComponentComboBox;
    QLineEdit *editNameLabel;
    QLabel *editStatusLabel;
    QPushButton *writeButton;
    QDoubleSpinBox *doubleValueSpinBox;
    QDoubleSpinBox *editMinSpinBox;
    QDoubleSpinBox *editMaxSpinBox;
    QLabel *nameLabel;
    QToolButton *infoLabel;

    void setupUi(QWidget *QGCParamSlider)
    {
        if (QGCParamSlider->objectName().isEmpty())
            QGCParamSlider->setObjectName(QString::fromUtf8("QGCParamSlider"));
        QGCParamSlider->resize(789, 244);
        gridLayout = new QGridLayout(QGCParamSlider);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(6);
        gridLayout->setVerticalSpacing(12);
        gridLayout->setContentsMargins(6, 3, 6, 3);
        intValueSpinBox = new QSpinBox(QGCParamSlider);
        intValueSpinBox->setObjectName(QString::fromUtf8("intValueSpinBox"));
        intValueSpinBox->setMinimum(-999999999);
        intValueSpinBox->setMaximum(999999999);

        gridLayout->addWidget(intValueSpinBox, 2, 6, 1, 1);

        editSelectParamComboBox = new QComboBox(QGCParamSlider);
        editSelectParamComboBox->setObjectName(QString::fromUtf8("editSelectParamComboBox"));
        editSelectParamComboBox->setEnabled(false);

        gridLayout->addWidget(editSelectParamComboBox, 3, 6, 1, 3);

        editLine1 = new QFrame(QGCParamSlider);
        editLine1->setObjectName(QString::fromUtf8("editLine1"));
        editLine1->setMinimumSize(QSize(0, 0));
        editLine1->setFrameShape(QFrame::HLine);
        editLine1->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(editLine1, 0, 0, 1, 11);

        valueSlider = new QSlider(QGCParamSlider);
        valueSlider->setObjectName(QString::fromUtf8("valueSlider"));
        valueSlider->setMinimumSize(QSize(60, 0));
        valueSlider->setMaximumSize(QSize(250, 16777215));
        valueSlider->setMaximum(1000000);
        valueSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(valueSlider, 2, 7, 1, 2);

        editDoneButton = new QPushButton(QGCParamSlider);
        editDoneButton->setObjectName(QString::fromUtf8("editDoneButton"));

        gridLayout->addWidget(editDoneButton, 4, 10, 1, 1);

        editLine2 = new QFrame(QGCParamSlider);
        editLine2->setObjectName(QString::fromUtf8("editLine2"));
        editLine2->setMinimumSize(QSize(0, 0));
        editLine2->setFrameShape(QFrame::HLine);
        editLine2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(editLine2, 6, 0, 1, 11);

        editInfoCheckBox = new QCheckBox(QGCParamSlider);
        editInfoCheckBox->setObjectName(QString::fromUtf8("editInfoCheckBox"));
        editInfoCheckBox->setChecked(true);

        gridLayout->addWidget(editInfoCheckBox, 3, 9, 1, 1);

        horizontalSpacer = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 0, 1, 1);

        editRefreshParamsButton = new QPushButton(QGCParamSlider);
        editRefreshParamsButton->setObjectName(QString::fromUtf8("editRefreshParamsButton"));
        editRefreshParamsButton->setEnabled(true);

        gridLayout->addWidget(editRefreshParamsButton, 3, 10, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 5, 2, 1, 9);

        readButton = new QPushButton(QGCParamSlider);
        readButton->setObjectName(QString::fromUtf8("readButton"));
        readButton->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(readButton, 2, 10, 1, 1);

        editSelectComponentComboBox = new QComboBox(QGCParamSlider);
        editSelectComponentComboBox->setObjectName(QString::fromUtf8("editSelectComponentComboBox"));
        editSelectComponentComboBox->setEnabled(false);

        gridLayout->addWidget(editSelectComponentComboBox, 3, 1, 1, 5);

        editNameLabel = new QLineEdit(QGCParamSlider);
        editNameLabel->setObjectName(QString::fromUtf8("editNameLabel"));

        gridLayout->addWidget(editNameLabel, 1, 1, 1, 7);

        editStatusLabel = new QLabel(QGCParamSlider);
        editStatusLabel->setObjectName(QString::fromUtf8("editStatusLabel"));

        gridLayout->addWidget(editStatusLabel, 4, 1, 1, 8);

        writeButton = new QPushButton(QGCParamSlider);
        writeButton->setObjectName(QString::fromUtf8("writeButton"));
        writeButton->setMinimumSize(QSize(0, 0));
        writeButton->setMaximumSize(QSize(16777215, 16777215));

        gridLayout->addWidget(writeButton, 2, 9, 1, 1);

        doubleValueSpinBox = new QDoubleSpinBox(QGCParamSlider);
        doubleValueSpinBox->setObjectName(QString::fromUtf8("doubleValueSpinBox"));
        doubleValueSpinBox->setMinimum(-1e+09);
        doubleValueSpinBox->setMaximum(1e+09);

        gridLayout->addWidget(doubleValueSpinBox, 2, 4, 1, 1);

        editMinSpinBox = new QDoubleSpinBox(QGCParamSlider);
        editMinSpinBox->setObjectName(QString::fromUtf8("editMinSpinBox"));
        editMinSpinBox->setMinimum(-1e+09);
        editMinSpinBox->setMaximum(1e+09);

        gridLayout->addWidget(editMinSpinBox, 1, 8, 1, 1);

        editMaxSpinBox = new QDoubleSpinBox(QGCParamSlider);
        editMaxSpinBox->setObjectName(QString::fromUtf8("editMaxSpinBox"));
        editMaxSpinBox->setMinimum(-1e+09);
        editMaxSpinBox->setMaximum(1e+09);

        gridLayout->addWidget(editMaxSpinBox, 1, 9, 1, 2);

        nameLabel = new QLabel(QGCParamSlider);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));
        nameLabel->setMinimumSize(QSize(60, 0));
        nameLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(nameLabel, 2, 2, 1, 1);

        infoLabel = new QToolButton(QGCParamSlider);
        infoLabel->setObjectName(QString::fromUtf8("infoLabel"));

        gridLayout->addWidget(infoLabel, 2, 3, 1, 1);

        gridLayout->setColumnStretch(0, 10);

        retranslateUi(QGCParamSlider);

        QMetaObject::connectSlotsByName(QGCParamSlider);
    } // setupUi

    void retranslateUi(QWidget *QGCParamSlider)
    {
        QGCParamSlider->setWindowTitle(QApplication::translate("QGCParamSlider", "Form", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        editSelectParamComboBox->setToolTip(QApplication::translate("QGCParamSlider", "Select parameter", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        editSelectParamComboBox->setStatusTip(QApplication::translate("QGCParamSlider", "Select parameter", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        editDoneButton->setText(QApplication::translate("QGCParamSlider", "Done", 0, QApplication::UnicodeUTF8));
        editInfoCheckBox->setText(QApplication::translate("QGCParamSlider", "Show Info", 0, QApplication::UnicodeUTF8));
        editRefreshParamsButton->setText(QApplication::translate("QGCParamSlider", "Refresh", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        readButton->setToolTip(QApplication::translate("QGCParamSlider", "Read the current parameter value on the system", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        readButton->setStatusTip(QApplication::translate("QGCParamSlider", "Read the current parameter value on the system", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        readButton->setText(QApplication::translate("QGCParamSlider", "Get", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        editSelectComponentComboBox->setToolTip(QApplication::translate("QGCParamSlider", "Select component", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        editSelectComponentComboBox->setStatusTip(QApplication::translate("QGCParamSlider", "Select component", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        editNameLabel->setPlaceholderText(QApplication::translate("QGCParamSlider", "Parameter Name / Label", 0, QApplication::UnicodeUTF8));
        editStatusLabel->setText(QApplication::translate("QGCParamSlider", "Please click first on refresh to update selection menus..", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        writeButton->setToolTip(QApplication::translate("QGCParamSlider", "Transmit the current slider value to the system", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        writeButton->setStatusTip(QApplication::translate("QGCParamSlider", "Transmit the current slider value to the system", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        writeButton->setText(QApplication::translate("QGCParamSlider", "Set", 0, QApplication::UnicodeUTF8));
        editMinSpinBox->setPrefix(QApplication::translate("QGCParamSlider", "MIN: ", 0, QApplication::UnicodeUTF8));
        editMaxSpinBox->setPrefix(QApplication::translate("QGCParamSlider", "MAX: ", 0, QApplication::UnicodeUTF8));
        nameLabel->setText(QApplication::translate("QGCParamSlider", "Name", 0, QApplication::UnicodeUTF8));
        infoLabel->setText(QApplication::translate("QGCParamSlider", "?", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QGCParamSlider: public Ui_QGCParamSlider {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCPARAMSLIDER_H
