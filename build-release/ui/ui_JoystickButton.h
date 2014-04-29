/********************************************************************************
** Form generated from reading UI file 'JoystickButton.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JOYSTICKBUTTON_H
#define UI_JOYSTICKBUTTON_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_JoystickButton
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *joystickButtonLabel;
    QComboBox *joystickAction;

    void setupUi(QWidget *JoystickButton)
    {
        if (JoystickButton->objectName().isEmpty())
            JoystickButton->setObjectName(QString::fromUtf8("JoystickButton"));
        JoystickButton->resize(125, 29);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(JoystickButton->sizePolicy().hasHeightForWidth());
        JoystickButton->setSizePolicy(sizePolicy);
        JoystickButton->setMinimumSize(QSize(50, 0));
        horizontalLayout = new QHBoxLayout(JoystickButton);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        horizontalLayout->setContentsMargins(2, 1, 2, 1);
        joystickButtonLabel = new QLabel(JoystickButton);
        joystickButtonLabel->setObjectName(QString::fromUtf8("joystickButtonLabel"));
        sizePolicy.setHeightForWidth(joystickButtonLabel->sizePolicy().hasHeightForWidth());
        joystickButtonLabel->setSizePolicy(sizePolicy);
        joystickButtonLabel->setMinimumSize(QSize(20, 0));
        joystickButtonLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(joystickButtonLabel);

        joystickAction = new QComboBox(JoystickButton);
        joystickAction->setObjectName(QString::fromUtf8("joystickAction"));
        joystickAction->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(joystickAction->sizePolicy().hasHeightForWidth());
        joystickAction->setSizePolicy(sizePolicy1);
        joystickAction->setMinimumSize(QSize(60, 0));
        joystickAction->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout->addWidget(joystickAction);


        retranslateUi(JoystickButton);

        QMetaObject::connectSlotsByName(JoystickButton);
    } // setupUi

    void retranslateUi(QWidget *JoystickButton)
    {
        JoystickButton->setWindowTitle(QApplication::translate("JoystickButton", "Form", 0, QApplication::UnicodeUTF8));
        joystickButtonLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class JoystickButton: public Ui_JoystickButton {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JOYSTICKBUTTON_H
