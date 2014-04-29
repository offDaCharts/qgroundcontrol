/********************************************************************************
** Form generated from reading UI file 'QGCMissionDoStartSearch.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCMISSIONDOSTARTSEARCH_H
#define UI_QGCMISSIONDOSTARTSEARCH_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QGCMissionDoStartSearch
{
public:
    QHBoxLayout *horizontalLayout;
    QDoubleSpinBox *param1SpinBox;
    QDoubleSpinBox *param2SpinBox;

    void setupUi(QWidget *QGCMissionDoStartSearch)
    {
        if (QGCMissionDoStartSearch->objectName().isEmpty())
            QGCMissionDoStartSearch->setObjectName(QString::fromUtf8("QGCMissionDoStartSearch"));
        QGCMissionDoStartSearch->resize(482, 27);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QGCMissionDoStartSearch->sizePolicy().hasHeightForWidth());
        QGCMissionDoStartSearch->setSizePolicy(sizePolicy);
        QGCMissionDoStartSearch->setMinimumSize(QSize(0, 0));
        horizontalLayout = new QHBoxLayout(QGCMissionDoStartSearch);
        horizontalLayout->setSpacing(5);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        param1SpinBox = new QDoubleSpinBox(QGCMissionDoStartSearch);
        param1SpinBox->setObjectName(QString::fromUtf8("param1SpinBox"));
        param1SpinBox->setKeyboardTracking(false);
        param1SpinBox->setDecimals(3);
        param1SpinBox->setMinimum(0);
        param1SpinBox->setMaximum(100);
        param1SpinBox->setSingleStep(0.1);

        horizontalLayout->addWidget(param1SpinBox);

        param2SpinBox = new QDoubleSpinBox(QGCMissionDoStartSearch);
        param2SpinBox->setObjectName(QString::fromUtf8("param2SpinBox"));
        param2SpinBox->setKeyboardTracking(false);
        param2SpinBox->setDecimals(0);
        param2SpinBox->setMinimum(0);
        param2SpinBox->setMaximum(2.14748e+09);

        horizontalLayout->addWidget(param2SpinBox);

        horizontalLayout->setStretch(0, 10);
        horizontalLayout->setStretch(1, 10);

        retranslateUi(QGCMissionDoStartSearch);

        QMetaObject::connectSlotsByName(QGCMissionDoStartSearch);
    } // setupUi

    void retranslateUi(QWidget *QGCMissionDoStartSearch)
    {
        QGCMissionDoStartSearch->setWindowTitle(QApplication::translate("QGCMissionDoStartSearch", "Form", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        param1SpinBox->setToolTip(QApplication::translate("QGCMissionDoStartSearch", "Minimal required detection confidence", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        param1SpinBox->setStatusTip(QApplication::translate("QGCMissionDoStartSearch", "Minimal required detection confidence", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        param1SpinBox->setPrefix(QApplication::translate("QGCMissionDoStartSearch", "Conf: ", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        param2SpinBox->setToolTip(QApplication::translate("QGCMissionDoStartSearch", "Required number of detections", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        param2SpinBox->setStatusTip(QApplication::translate("QGCMissionDoStartSearch", "Required number of detections", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        param2SpinBox->setPrefix(QApplication::translate("QGCMissionDoStartSearch", "#det: ", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QGCMissionDoStartSearch: public Ui_QGCMissionDoStartSearch {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCMISSIONDOSTARTSEARCH_H
