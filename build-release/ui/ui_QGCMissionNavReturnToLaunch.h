/********************************************************************************
** Form generated from reading UI file 'QGCMissionNavReturnToLaunch.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCMISSIONNAVRETURNTOLAUNCH_H
#define UI_QGCMISSIONNAVRETURNTOLAUNCH_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QGCMissionNavReturnToLaunch
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *noParamLabel;

    void setupUi(QWidget *QGCMissionNavReturnToLaunch)
    {
        if (QGCMissionNavReturnToLaunch->objectName().isEmpty())
            QGCMissionNavReturnToLaunch->setObjectName(QString::fromUtf8("QGCMissionNavReturnToLaunch"));
        QGCMissionNavReturnToLaunch->resize(258, 37);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QGCMissionNavReturnToLaunch->sizePolicy().hasHeightForWidth());
        QGCMissionNavReturnToLaunch->setSizePolicy(sizePolicy);
        QGCMissionNavReturnToLaunch->setMinimumSize(QSize(0, 0));
        QGCMissionNavReturnToLaunch->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout = new QHBoxLayout(QGCMissionNavReturnToLaunch);
        horizontalLayout->setSpacing(5);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        noParamLabel = new QLabel(QGCMissionNavReturnToLaunch);
        noParamLabel->setObjectName(QString::fromUtf8("noParamLabel"));
        noParamLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(noParamLabel);


        retranslateUi(QGCMissionNavReturnToLaunch);

        QMetaObject::connectSlotsByName(QGCMissionNavReturnToLaunch);
    } // setupUi

    void retranslateUi(QWidget *QGCMissionNavReturnToLaunch)
    {
        QGCMissionNavReturnToLaunch->setWindowTitle(QApplication::translate("QGCMissionNavReturnToLaunch", "Form", 0, QApplication::UnicodeUTF8));
        noParamLabel->setText(QApplication::translate("QGCMissionNavReturnToLaunch", "No Parameters", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QGCMissionNavReturnToLaunch: public Ui_QGCMissionNavReturnToLaunch {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCMISSIONNAVRETURNTOLAUNCH_H
