/********************************************************************************
** Form generated from reading UI file 'QGCMissionDoJump.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCMISSIONDOJUMP_H
#define UI_QGCMISSIONDOJUMP_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QGCMissionDoJump
{
public:
    QHBoxLayout *horizontalLayout;
    QDoubleSpinBox *param1SpinBox;
    QDoubleSpinBox *param2SpinBox;

    void setupUi(QWidget *QGCMissionDoJump)
    {
        if (QGCMissionDoJump->objectName().isEmpty())
            QGCMissionDoJump->setObjectName(QString::fromUtf8("QGCMissionDoJump"));
        QGCMissionDoJump->resize(448, 37);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QGCMissionDoJump->sizePolicy().hasHeightForWidth());
        QGCMissionDoJump->setSizePolicy(sizePolicy);
        QGCMissionDoJump->setMinimumSize(QSize(0, 0));
        QGCMissionDoJump->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout = new QHBoxLayout(QGCMissionDoJump);
        horizontalLayout->setSpacing(5);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        param1SpinBox = new QDoubleSpinBox(QGCMissionDoJump);
        param1SpinBox->setObjectName(QString::fromUtf8("param1SpinBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(param1SpinBox->sizePolicy().hasHeightForWidth());
        param1SpinBox->setSizePolicy(sizePolicy1);
        param1SpinBox->setFocusPolicy(Qt::WheelFocus);
        param1SpinBox->setWrapping(false);
        param1SpinBox->setFrame(true);
        param1SpinBox->setAccelerated(true);
        param1SpinBox->setKeyboardTracking(false);
        param1SpinBox->setDecimals(0);
        param1SpinBox->setMinimum(0);
        param1SpinBox->setMaximum(10000);
        param1SpinBox->setSingleStep(1);

        horizontalLayout->addWidget(param1SpinBox);

        param2SpinBox = new QDoubleSpinBox(QGCMissionDoJump);
        param2SpinBox->setObjectName(QString::fromUtf8("param2SpinBox"));
        sizePolicy1.setHeightForWidth(param2SpinBox->sizePolicy().hasHeightForWidth());
        param2SpinBox->setSizePolicy(sizePolicy1);
        param2SpinBox->setFocusPolicy(Qt::WheelFocus);
        param2SpinBox->setKeyboardTracking(false);
        param2SpinBox->setDecimals(0);
        param2SpinBox->setMinimum(0);
        param2SpinBox->setMaximum(10000);
        param2SpinBox->setSingleStep(1);
        param2SpinBox->setValue(1);

        horizontalLayout->addWidget(param2SpinBox);


        retranslateUi(QGCMissionDoJump);

        QMetaObject::connectSlotsByName(QGCMissionDoJump);
    } // setupUi

    void retranslateUi(QWidget *QGCMissionDoJump)
    {
        QGCMissionDoJump->setWindowTitle(QApplication::translate("QGCMissionDoJump", "Form", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        param1SpinBox->setToolTip(QApplication::translate("QGCMissionDoJump", "Mission element ID to jump to", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        param1SpinBox->setStatusTip(QApplication::translate("QGCMissionDoJump", "Mission element ID to jump to", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        param1SpinBox->setPrefix(QApplication::translate("QGCMissionDoJump", "Jump to index ", 0, QApplication::UnicodeUTF8));
        param1SpinBox->setSuffix(QString());
#ifndef QT_NO_TOOLTIP
        param2SpinBox->setToolTip(QApplication::translate("QGCMissionDoJump", "Maximal number of jumps", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        param2SpinBox->setStatusTip(QApplication::translate("QGCMissionDoJump", "Maximal number of jumps", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        param2SpinBox->setPrefix(QString());
        param2SpinBox->setSuffix(QApplication::translate("QGCMissionDoJump", " time(s)", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QGCMissionDoJump: public Ui_QGCMissionDoJump {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCMISSIONDOJUMP_H
