/********************************************************************************
** Form generated from reading UI file 'JoystickWidget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JOYSTICKWIDGET_H
#define UI_JOYSTICKWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_JoystickWidget
{
public:
    QVBoxLayout *verticalLayout;
    QCheckBox *enableCheckBox;
    QComboBox *joystickNameComboBox;
    QFrame *joystickFrame;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QGroupBox *buttonBox;
    QVBoxLayout *buttonLayout;
    QGroupBox *axesBox;
    QHBoxLayout *axesLayout;
    QLabel *statusLabel;
    QDialogButtonBox *dialogButtonsBox;

    void setupUi(QDialog *JoystickWidget)
    {
        if (JoystickWidget->objectName().isEmpty())
            JoystickWidget->setObjectName(QString::fromUtf8("JoystickWidget"));
        JoystickWidget->resize(368, 274);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(JoystickWidget->sizePolicy().hasHeightForWidth());
        JoystickWidget->setSizePolicy(sizePolicy);
        JoystickWidget->setMinimumSize(QSize(368, 274));
        verticalLayout = new QVBoxLayout(JoystickWidget);
        verticalLayout->setSpacing(8);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetFixedSize);
        verticalLayout->setContentsMargins(8, 8, 8, 8);
        enableCheckBox = new QCheckBox(JoystickWidget);
        enableCheckBox->setObjectName(QString::fromUtf8("enableCheckBox"));
        enableCheckBox->setEnabled(true);

        verticalLayout->addWidget(enableCheckBox);

        joystickNameComboBox = new QComboBox(JoystickWidget);
        joystickNameComboBox->setObjectName(QString::fromUtf8("joystickNameComboBox"));
        joystickNameComboBox->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(joystickNameComboBox->sizePolicy().hasHeightForWidth());
        joystickNameComboBox->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(joystickNameComboBox);

        joystickFrame = new QFrame(JoystickWidget);
        joystickFrame->setObjectName(QString::fromUtf8("joystickFrame"));
        joystickFrame->setEnabled(false);
        joystickFrame->setFrameShape(QFrame::StyledPanel);
        joystickFrame->setFrameShadow(QFrame::Sunken);
        verticalLayout_2 = new QVBoxLayout(joystickFrame);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetMinimumSize);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        buttonBox = new QGroupBox(joystickFrame);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy2);
        buttonBox->setMinimumSize(QSize(100, 0));
        buttonBox->setMaximumSize(QSize(16777215, 16777215));
        buttonBox->setAlignment(Qt::AlignCenter);
        buttonBox->setFlat(false);
        buttonLayout = new QVBoxLayout(buttonBox);
        buttonLayout->setSpacing(1);
        buttonLayout->setObjectName(QString::fromUtf8("buttonLayout"));
        buttonLayout->setSizeConstraint(QLayout::SetMinimumSize);
        buttonLayout->setContentsMargins(3, 3, 3, 3);

        horizontalLayout->addWidget(buttonBox);

        axesBox = new QGroupBox(joystickFrame);
        axesBox->setObjectName(QString::fromUtf8("axesBox"));
        sizePolicy2.setHeightForWidth(axesBox->sizePolicy().hasHeightForWidth());
        axesBox->setSizePolicy(sizePolicy2);
        axesBox->setMinimumSize(QSize(100, 0));
        axesBox->setAlignment(Qt::AlignCenter);
        axesLayout = new QHBoxLayout(axesBox);
        axesLayout->setObjectName(QString::fromUtf8("axesLayout"));
        axesLayout->setSizeConstraint(QLayout::SetMinimumSize);

        horizontalLayout->addWidget(axesBox);


        verticalLayout_2->addLayout(horizontalLayout);

        statusLabel = new QLabel(joystickFrame);
        statusLabel->setObjectName(QString::fromUtf8("statusLabel"));

        verticalLayout_2->addWidget(statusLabel);


        verticalLayout->addWidget(joystickFrame);

        dialogButtonsBox = new QDialogButtonBox(JoystickWidget);
        dialogButtonsBox->setObjectName(QString::fromUtf8("dialogButtonsBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(dialogButtonsBox->sizePolicy().hasHeightForWidth());
        dialogButtonsBox->setSizePolicy(sizePolicy3);
        dialogButtonsBox->setMinimumSize(QSize(50, 0));
        dialogButtonsBox->setMaximumSize(QSize(16777215, 16777215));
        dialogButtonsBox->setOrientation(Qt::Horizontal);
        dialogButtonsBox->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout->addWidget(dialogButtonsBox);


        retranslateUi(JoystickWidget);
        QObject::connect(dialogButtonsBox, SIGNAL(accepted()), JoystickWidget, SLOT(accept()));

        QMetaObject::connectSlotsByName(JoystickWidget);
    } // setupUi

    void retranslateUi(QDialog *JoystickWidget)
    {
        JoystickWidget->setWindowTitle(QApplication::translate("JoystickWidget", "Joystick Settings", 0, QApplication::UnicodeUTF8));
        enableCheckBox->setText(QApplication::translate("JoystickWidget", "Enable joysticks", 0, QApplication::UnicodeUTF8));
        buttonBox->setTitle(QApplication::translate("JoystickWidget", "Buttons", 0, QApplication::UnicodeUTF8));
        axesBox->setTitle(QApplication::translate("JoystickWidget", "Axes", 0, QApplication::UnicodeUTF8));
        statusLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class JoystickWidget: public Ui_JoystickWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JOYSTICKWIDGET_H
