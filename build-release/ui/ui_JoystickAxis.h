/********************************************************************************
** Form generated from reading UI file 'JoystickAxis.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JOYSTICKAXIS_H
#define UI_JOYSTICKAXIS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QProgressBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_JoystickAxis
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QComboBox *comboBox;
    QCheckBox *rangeCheckBox;
    QProgressBar *progressBar;
    QCheckBox *invertedCheckBox;

    void setupUi(QWidget *JoystickAxis)
    {
        if (JoystickAxis->objectName().isEmpty())
            JoystickAxis->setObjectName(QString::fromUtf8("JoystickAxis"));
        JoystickAxis->resize(80, 200);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(JoystickAxis->sizePolicy().hasHeightForWidth());
        JoystickAxis->setSizePolicy(sizePolicy);
        JoystickAxis->setMinimumSize(QSize(40, 200));
        verticalLayout = new QVBoxLayout(JoystickAxis);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        verticalLayout->setContentsMargins(1, 2, 1, 2);
        label = new QLabel(JoystickAxis);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        comboBox = new QComboBox(JoystickAxis);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(comboBox);

        rangeCheckBox = new QCheckBox(JoystickAxis);
        rangeCheckBox->setObjectName(QString::fromUtf8("rangeCheckBox"));

        verticalLayout->addWidget(rangeCheckBox);

        progressBar = new QProgressBar(JoystickAxis);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(progressBar->sizePolicy().hasHeightForWidth());
        progressBar->setSizePolicy(sizePolicy2);
        progressBar->setMinimumSize(QSize(0, 100));
        progressBar->setMinimum(-100);
        progressBar->setValue(0);
        progressBar->setAlignment(Qt::AlignCenter);
        progressBar->setTextVisible(true);
        progressBar->setOrientation(Qt::Vertical);
        progressBar->setTextDirection(QProgressBar::TopToBottom);

        verticalLayout->addWidget(progressBar);

        invertedCheckBox = new QCheckBox(JoystickAxis);
        invertedCheckBox->setObjectName(QString::fromUtf8("invertedCheckBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(invertedCheckBox->sizePolicy().hasHeightForWidth());
        invertedCheckBox->setSizePolicy(sizePolicy3);
        invertedCheckBox->setMinimumSize(QSize(0, 25));

        verticalLayout->addWidget(invertedCheckBox);


        retranslateUi(JoystickAxis);

        QMetaObject::connectSlotsByName(JoystickAxis);
    } // setupUi

    void retranslateUi(QWidget *JoystickAxis)
    {
        JoystickAxis->setWindowTitle(QApplication::translate("JoystickAxis", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("JoystickAxis", "--", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("JoystickAxis", "Yaw", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("JoystickAxis", "Pitch", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("JoystickAxis", "Roll", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("JoystickAxis", "Throttle", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        comboBox->setToolTip(QApplication::translate("JoystickAxis", "Specify what property of the UAS this axis should command", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        rangeCheckBox->setText(QApplication::translate("JoystickAxis", "Half range", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        progressBar->setToolTip(QApplication::translate("JoystickAxis", "Only use the positive values from this axis for control", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        progressBar->setFormat(QApplication::translate("JoystickAxis", "%v", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        invertedCheckBox->setToolTip(QApplication::translate("JoystickAxis", "Reverse the values for this axis", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        invertedCheckBox->setText(QApplication::translate("JoystickAxis", "Inverted", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class JoystickAxis: public Ui_JoystickAxis {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JOYSTICKAXIS_H
