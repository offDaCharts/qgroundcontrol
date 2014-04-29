/********************************************************************************
** Form generated from reading UI file 'QGCComboBox.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCCOMBOBOX_H
#define UI_QGCCOMBOBOX_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QGCComboBox
{
public:
    QGridLayout *gridLayout;
    QLabel *nameLabel;
    QToolButton *infoLabel;
    QLineEdit *editNameLabel;
    QLineEdit *editItemNameLabel;
    QSpinBox *editItemValueSpinBox;
    QComboBox *editOptionComboBox;
    QLabel *itemNameLabel;
    QComboBox *editSelectComponentComboBox;
    QPushButton *editAddItemButton;
    QPushButton *editRemoveItemButton;
    QLabel *itemValueLabel;
    QComboBox *editSelectParamComboBox;
    QFrame *editLine1;
    QPushButton *readButton;
    QPushButton *editDoneButton;
    QPushButton *writeButton;
    QCheckBox *editInfoCheckBox;
    QFrame *editLine2;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QLabel *editStatusLabel;
    QPushButton *editRefreshParamsButton;
    QLabel *imageLabel;

    void setupUi(QWidget *QGCComboBox)
    {
        if (QGCComboBox->objectName().isEmpty())
            QGCComboBox->setObjectName(QString::fromUtf8("QGCComboBox"));
        QGCComboBox->resize(789, 244);
        QGCComboBox->setLayoutDirection(Qt::LeftToRight);
        gridLayout = new QGridLayout(QGCComboBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(6);
        gridLayout->setVerticalSpacing(12);
        gridLayout->setContentsMargins(6, 3, 6, 3);
        nameLabel = new QLabel(QGCComboBox);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));
        nameLabel->setMinimumSize(QSize(60, 0));
        nameLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(nameLabel, 4, 7, 1, 1);

        infoLabel = new QToolButton(QGCComboBox);
        infoLabel->setObjectName(QString::fromUtf8("infoLabel"));
        infoLabel->setLayoutDirection(Qt::LeftToRight);
        infoLabel->setPopupMode(QToolButton::DelayedPopup);
        infoLabel->setToolButtonStyle(Qt::ToolButtonIconOnly);
        infoLabel->setAutoRaise(false);
        infoLabel->setArrowType(Qt::NoArrow);

        gridLayout->addWidget(infoLabel, 4, 8, 1, 1);

        editNameLabel = new QLineEdit(QGCComboBox);
        editNameLabel->setObjectName(QString::fromUtf8("editNameLabel"));

        gridLayout->addWidget(editNameLabel, 1, 9, 1, 1);

        editItemNameLabel = new QLineEdit(QGCComboBox);
        editItemNameLabel->setObjectName(QString::fromUtf8("editItemNameLabel"));

        gridLayout->addWidget(editItemNameLabel, 7, 9, 1, 1);

        editItemValueSpinBox = new QSpinBox(QGCComboBox);
        editItemValueSpinBox->setObjectName(QString::fromUtf8("editItemValueSpinBox"));

        gridLayout->addWidget(editItemValueSpinBox, 7, 7, 1, 1);

        editOptionComboBox = new QComboBox(QGCComboBox);
        editOptionComboBox->setObjectName(QString::fromUtf8("editOptionComboBox"));

        gridLayout->addWidget(editOptionComboBox, 4, 9, 1, 1);

        itemNameLabel = new QLabel(QGCComboBox);
        itemNameLabel->setObjectName(QString::fromUtf8("itemNameLabel"));
        itemNameLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(itemNameLabel, 7, 8, 1, 1);

        editSelectComponentComboBox = new QComboBox(QGCComboBox);
        editSelectComponentComboBox->setObjectName(QString::fromUtf8("editSelectComponentComboBox"));
        editSelectComponentComboBox->setEnabled(false);

        gridLayout->addWidget(editSelectComponentComboBox, 8, 8, 1, 1);

        editAddItemButton = new QPushButton(QGCComboBox);
        editAddItemButton->setObjectName(QString::fromUtf8("editAddItemButton"));

        gridLayout->addWidget(editAddItemButton, 7, 10, 1, 1);

        editRemoveItemButton = new QPushButton(QGCComboBox);
        editRemoveItemButton->setObjectName(QString::fromUtf8("editRemoveItemButton"));

        gridLayout->addWidget(editRemoveItemButton, 7, 11, 1, 1);

        itemValueLabel = new QLabel(QGCComboBox);
        itemValueLabel->setObjectName(QString::fromUtf8("itemValueLabel"));
        itemValueLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(itemValueLabel, 7, 6, 1, 1);

        editSelectParamComboBox = new QComboBox(QGCComboBox);
        editSelectParamComboBox->setObjectName(QString::fromUtf8("editSelectParamComboBox"));
        editSelectParamComboBox->setEnabled(false);

        gridLayout->addWidget(editSelectParamComboBox, 8, 9, 1, 1);

        editLine1 = new QFrame(QGCComboBox);
        editLine1->setObjectName(QString::fromUtf8("editLine1"));
        editLine1->setMinimumSize(QSize(0, 0));
        editLine1->setFrameShape(QFrame::HLine);
        editLine1->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(editLine1, 0, 0, 1, 12);

        readButton = new QPushButton(QGCComboBox);
        readButton->setObjectName(QString::fromUtf8("readButton"));
        readButton->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(readButton, 4, 11, 1, 1);

        editDoneButton = new QPushButton(QGCComboBox);
        editDoneButton->setObjectName(QString::fromUtf8("editDoneButton"));

        gridLayout->addWidget(editDoneButton, 11, 11, 1, 1);

        writeButton = new QPushButton(QGCComboBox);
        writeButton->setObjectName(QString::fromUtf8("writeButton"));
        writeButton->setMinimumSize(QSize(0, 0));
        writeButton->setMaximumSize(QSize(16777215, 16777215));

        gridLayout->addWidget(writeButton, 4, 10, 1, 1);

        editInfoCheckBox = new QCheckBox(QGCComboBox);
        editInfoCheckBox->setObjectName(QString::fromUtf8("editInfoCheckBox"));
        editInfoCheckBox->setChecked(true);

        gridLayout->addWidget(editInfoCheckBox, 8, 10, 1, 1);

        editLine2 = new QFrame(QGCComboBox);
        editLine2->setObjectName(QString::fromUtf8("editLine2"));
        editLine2->setMinimumSize(QSize(0, 0));
        editLine2->setFrameShape(QFrame::HLine);
        editLine2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(editLine2, 13, 0, 1, 12);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 12, 2, 1, 10);

        horizontalSpacer = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 4, 0, 1, 3);

        editStatusLabel = new QLabel(QGCComboBox);
        editStatusLabel->setObjectName(QString::fromUtf8("editStatusLabel"));

        gridLayout->addWidget(editStatusLabel, 11, 3, 1, 7);

        editRefreshParamsButton = new QPushButton(QGCComboBox);
        editRefreshParamsButton->setObjectName(QString::fromUtf8("editRefreshParamsButton"));
        editRefreshParamsButton->setEnabled(true);

        gridLayout->addWidget(editRefreshParamsButton, 8, 11, 1, 1);

        imageLabel = new QLabel(QGCComboBox);
        imageLabel->setObjectName(QString::fromUtf8("imageLabel"));
        imageLabel->setMaximumSize(QSize(16777215, 150));
        imageLabel->setScaledContents(true);

        gridLayout->addWidget(imageLabel, 3, 0, 1, 12);

        gridLayout->setColumnStretch(0, 10);

        retranslateUi(QGCComboBox);

        QMetaObject::connectSlotsByName(QGCComboBox);
    } // setupUi

    void retranslateUi(QWidget *QGCComboBox)
    {
        QGCComboBox->setWindowTitle(QApplication::translate("QGCComboBox", "Form", 0, QApplication::UnicodeUTF8));
        nameLabel->setText(QApplication::translate("QGCComboBox", "Name", 0, QApplication::UnicodeUTF8));
        infoLabel->setText(QApplication::translate("QGCComboBox", "?", 0, QApplication::UnicodeUTF8));
        editNameLabel->setPlaceholderText(QApplication::translate("QGCComboBox", "Parameter Name", 0, QApplication::UnicodeUTF8));
        itemNameLabel->setText(QApplication::translate("QGCComboBox", "Name", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        editSelectComponentComboBox->setToolTip(QApplication::translate("QGCComboBox", "Select component", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        editSelectComponentComboBox->setStatusTip(QApplication::translate("QGCComboBox", "Select component", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        editAddItemButton->setText(QApplication::translate("QGCComboBox", "Add Item", 0, QApplication::UnicodeUTF8));
        editRemoveItemButton->setText(QApplication::translate("QGCComboBox", "Delete Item", 0, QApplication::UnicodeUTF8));
        itemValueLabel->setText(QApplication::translate("QGCComboBox", "Value", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        editSelectParamComboBox->setToolTip(QApplication::translate("QGCComboBox", "Select parameter", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        editSelectParamComboBox->setStatusTip(QApplication::translate("QGCComboBox", "Select parameter", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_TOOLTIP
        readButton->setToolTip(QApplication::translate("QGCComboBox", "Read the current parameter value on the system", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        readButton->setStatusTip(QApplication::translate("QGCComboBox", "Read the current parameter value on the system", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        readButton->setText(QApplication::translate("QGCComboBox", "Get", 0, QApplication::UnicodeUTF8));
        editDoneButton->setText(QApplication::translate("QGCComboBox", "Done", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        writeButton->setToolTip(QApplication::translate("QGCComboBox", "Transmit the current slider value to the system", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        writeButton->setStatusTip(QApplication::translate("QGCComboBox", "Transmit the current slider value to the system", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        writeButton->setText(QApplication::translate("QGCComboBox", "Set", 0, QApplication::UnicodeUTF8));
        editInfoCheckBox->setText(QApplication::translate("QGCComboBox", "Show Info", 0, QApplication::UnicodeUTF8));
        editStatusLabel->setText(QApplication::translate("QGCComboBox", "Please click first on refresh to update selection menus..", 0, QApplication::UnicodeUTF8));
        editRefreshParamsButton->setText(QApplication::translate("QGCComboBox", "Refresh", 0, QApplication::UnicodeUTF8));
        imageLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QGCComboBox: public Ui_QGCComboBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCCOMBOBOX_H
