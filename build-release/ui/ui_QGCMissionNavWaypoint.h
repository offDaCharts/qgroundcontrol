/********************************************************************************
** Form generated from reading UI file 'QGCMissionNavWaypoint.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCMISSIONNAVWAYPOINT_H
#define UI_QGCMISSIONNAVWAYPOINT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QGCMissionNavWaypoint
{
public:
    QHBoxLayout *horizontalLayout;
    QDoubleSpinBox *posNSpinBox;
    QDoubleSpinBox *posESpinBox;
    QDoubleSpinBox *posDSpinBox;
    QDoubleSpinBox *latSpinBox;
    QDoubleSpinBox *lonSpinBox;
    QDoubleSpinBox *altSpinBox;
    QDoubleSpinBox *yawSpinBox;
    QDoubleSpinBox *acceptanceSpinBox;
    QDoubleSpinBox *holdTimeSpinBox;

    void setupUi(QWidget *QGCMissionNavWaypoint)
    {
        if (QGCMissionNavWaypoint->objectName().isEmpty())
            QGCMissionNavWaypoint->setObjectName(QString::fromUtf8("QGCMissionNavWaypoint"));
        QGCMissionNavWaypoint->resize(2208, 37);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QGCMissionNavWaypoint->sizePolicy().hasHeightForWidth());
        QGCMissionNavWaypoint->setSizePolicy(sizePolicy);
        QGCMissionNavWaypoint->setMinimumSize(QSize(0, 0));
        QGCMissionNavWaypoint->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout = new QHBoxLayout(QGCMissionNavWaypoint);
        horizontalLayout->setSpacing(5);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        posNSpinBox = new QDoubleSpinBox(QGCMissionNavWaypoint);
        posNSpinBox->setObjectName(QString::fromUtf8("posNSpinBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(posNSpinBox->sizePolicy().hasHeightForWidth());
        posNSpinBox->setSizePolicy(sizePolicy1);
        posNSpinBox->setFocusPolicy(Qt::WheelFocus);
        posNSpinBox->setWrapping(false);
        posNSpinBox->setFrame(true);
        posNSpinBox->setAccelerated(true);
        posNSpinBox->setKeyboardTracking(false);
        posNSpinBox->setMinimum(-10000);
        posNSpinBox->setMaximum(10000);
        posNSpinBox->setSingleStep(0.05);

        horizontalLayout->addWidget(posNSpinBox);

        posESpinBox = new QDoubleSpinBox(QGCMissionNavWaypoint);
        posESpinBox->setObjectName(QString::fromUtf8("posESpinBox"));
        sizePolicy1.setHeightForWidth(posESpinBox->sizePolicy().hasHeightForWidth());
        posESpinBox->setSizePolicy(sizePolicy1);
        posESpinBox->setFocusPolicy(Qt::WheelFocus);
        posESpinBox->setKeyboardTracking(false);
        posESpinBox->setMinimum(-10000);
        posESpinBox->setMaximum(10000);
        posESpinBox->setSingleStep(0.05);
        posESpinBox->setValue(0);

        horizontalLayout->addWidget(posESpinBox);

        posDSpinBox = new QDoubleSpinBox(QGCMissionNavWaypoint);
        posDSpinBox->setObjectName(QString::fromUtf8("posDSpinBox"));
        sizePolicy1.setHeightForWidth(posDSpinBox->sizePolicy().hasHeightForWidth());
        posDSpinBox->setSizePolicy(sizePolicy1);
        posDSpinBox->setFocusPolicy(Qt::WheelFocus);
        posDSpinBox->setKeyboardTracking(false);
        posDSpinBox->setMinimum(-10000);
        posDSpinBox->setMaximum(10000);
        posDSpinBox->setSingleStep(0.05);

        horizontalLayout->addWidget(posDSpinBox);

        latSpinBox = new QDoubleSpinBox(QGCMissionNavWaypoint);
        latSpinBox->setObjectName(QString::fromUtf8("latSpinBox"));
        sizePolicy1.setHeightForWidth(latSpinBox->sizePolicy().hasHeightForWidth());
        latSpinBox->setSizePolicy(sizePolicy1);
        latSpinBox->setFocusPolicy(Qt::WheelFocus);
        latSpinBox->setKeyboardTracking(false);
        latSpinBox->setDecimals(7);
        latSpinBox->setMinimum(-90);
        latSpinBox->setMaximum(90);
        latSpinBox->setSingleStep(1e-05);

        horizontalLayout->addWidget(latSpinBox);

        lonSpinBox = new QDoubleSpinBox(QGCMissionNavWaypoint);
        lonSpinBox->setObjectName(QString::fromUtf8("lonSpinBox"));
        sizePolicy1.setHeightForWidth(lonSpinBox->sizePolicy().hasHeightForWidth());
        lonSpinBox->setSizePolicy(sizePolicy1);
        lonSpinBox->setFocusPolicy(Qt::WheelFocus);
        lonSpinBox->setKeyboardTracking(false);
        lonSpinBox->setDecimals(7);
        lonSpinBox->setMinimum(-180);
        lonSpinBox->setMaximum(180);
        lonSpinBox->setSingleStep(1e-05);

        horizontalLayout->addWidget(lonSpinBox);

        altSpinBox = new QDoubleSpinBox(QGCMissionNavWaypoint);
        altSpinBox->setObjectName(QString::fromUtf8("altSpinBox"));
        sizePolicy1.setHeightForWidth(altSpinBox->sizePolicy().hasHeightForWidth());
        altSpinBox->setSizePolicy(sizePolicy1);
        altSpinBox->setKeyboardTracking(false);
        altSpinBox->setDecimals(2);
        altSpinBox->setMinimum(-100000);
        altSpinBox->setMaximum(100000);

        horizontalLayout->addWidget(altSpinBox);

        yawSpinBox = new QDoubleSpinBox(QGCMissionNavWaypoint);
        yawSpinBox->setObjectName(QString::fromUtf8("yawSpinBox"));
        sizePolicy1.setHeightForWidth(yawSpinBox->sizePolicy().hasHeightForWidth());
        yawSpinBox->setSizePolicy(sizePolicy1);
        yawSpinBox->setFocusPolicy(Qt::StrongFocus);
        yawSpinBox->setWrapping(true);
        yawSpinBox->setKeyboardTracking(false);
        yawSpinBox->setDecimals(0);
        yawSpinBox->setMinimum(-180);
        yawSpinBox->setMaximum(180);

        horizontalLayout->addWidget(yawSpinBox);

        acceptanceSpinBox = new QDoubleSpinBox(QGCMissionNavWaypoint);
        acceptanceSpinBox->setObjectName(QString::fromUtf8("acceptanceSpinBox"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(acceptanceSpinBox->sizePolicy().hasHeightForWidth());
        acceptanceSpinBox->setSizePolicy(sizePolicy2);
        acceptanceSpinBox->setKeyboardTracking(false);
        acceptanceSpinBox->setValue(0.2);

        horizontalLayout->addWidget(acceptanceSpinBox);

        holdTimeSpinBox = new QDoubleSpinBox(QGCMissionNavWaypoint);
        holdTimeSpinBox->setObjectName(QString::fromUtf8("holdTimeSpinBox"));
        sizePolicy2.setHeightForWidth(holdTimeSpinBox->sizePolicy().hasHeightForWidth());
        holdTimeSpinBox->setSizePolicy(sizePolicy2);
        holdTimeSpinBox->setKeyboardTracking(false);
        holdTimeSpinBox->setMaximum(9999.99);

        horizontalLayout->addWidget(holdTimeSpinBox);


        retranslateUi(QGCMissionNavWaypoint);

        QMetaObject::connectSlotsByName(QGCMissionNavWaypoint);
    } // setupUi

    void retranslateUi(QWidget *QGCMissionNavWaypoint)
    {
        QGCMissionNavWaypoint->setWindowTitle(QApplication::translate("QGCMissionNavWaypoint", "Form", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        posNSpinBox->setToolTip(QApplication::translate("QGCMissionNavWaypoint", "Position X coordinate", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        posNSpinBox->setStatusTip(QApplication::translate("QGCMissionNavWaypoint", "Position X corrdinate", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        posNSpinBox->setPrefix(QApplication::translate("QGCMissionNavWaypoint", "N ", 0, QApplication::UnicodeUTF8));
        posNSpinBox->setSuffix(QApplication::translate("QGCMissionNavWaypoint", " m", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        posESpinBox->setToolTip(QApplication::translate("QGCMissionNavWaypoint", "Position Y/Longitude coordinate", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        posESpinBox->setStatusTip(QApplication::translate("QGCMissionNavWaypoint", "Position Y/Longitude coordinate", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        posESpinBox->setPrefix(QApplication::translate("QGCMissionNavWaypoint", "E ", 0, QApplication::UnicodeUTF8));
        posESpinBox->setSuffix(QApplication::translate("QGCMissionNavWaypoint", " m", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        posDSpinBox->setToolTip(QApplication::translate("QGCMissionNavWaypoint", "Position Z coordinate (local frame, negative)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        posDSpinBox->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        posDSpinBox->setPrefix(QApplication::translate("QGCMissionNavWaypoint", "D ", 0, QApplication::UnicodeUTF8));
        posDSpinBox->setSuffix(QApplication::translate("QGCMissionNavWaypoint", " m", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        latSpinBox->setToolTip(QApplication::translate("QGCMissionNavWaypoint", "Latitude in degrees", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        latSpinBox->setStatusTip(QApplication::translate("QGCMissionNavWaypoint", "Latitude in degrees", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        latSpinBox->setPrefix(QApplication::translate("QGCMissionNavWaypoint", "lat ", 0, QApplication::UnicodeUTF8));
        latSpinBox->setSuffix(QApplication::translate("QGCMissionNavWaypoint", "\302\260", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        lonSpinBox->setToolTip(QApplication::translate("QGCMissionNavWaypoint", "Longitude in degrees", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        lonSpinBox->setStatusTip(QApplication::translate("QGCMissionNavWaypoint", "Longitude in degrees", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        lonSpinBox->setPrefix(QApplication::translate("QGCMissionNavWaypoint", "lon ", 0, QApplication::UnicodeUTF8));
        lonSpinBox->setSuffix(QApplication::translate("QGCMissionNavWaypoint", "\302\260", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        altSpinBox->setToolTip(QApplication::translate("QGCMissionNavWaypoint", "Altitude in meters", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        altSpinBox->setStatusTip(QApplication::translate("QGCMissionNavWaypoint", "Altitude in meters", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        altSpinBox->setPrefix(QApplication::translate("QGCMissionNavWaypoint", "alt ", 0, QApplication::UnicodeUTF8));
        altSpinBox->setSuffix(QApplication::translate("QGCMissionNavWaypoint", "m", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        yawSpinBox->setToolTip(QApplication::translate("QGCMissionNavWaypoint", "Rotary wing only: Desired yaw angle at waypoint", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        yawSpinBox->setStatusTip(QApplication::translate("QGCMissionNavWaypoint", "Rotary wing only: Desired yaw angle at waypoint", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        yawSpinBox->setPrefix(QString());
        yawSpinBox->setSuffix(QApplication::translate("QGCMissionNavWaypoint", "\302\260", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        acceptanceSpinBox->setToolTip(QApplication::translate("QGCMissionNavWaypoint", "Uncertainty radius in meters\n"
"where to accept this waypoint as reached", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        acceptanceSpinBox->setStatusTip(QApplication::translate("QGCMissionNavWaypoint", "Uncertainty radius in meters where to accept this waypoint as reached", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        acceptanceSpinBox->setSuffix(QApplication::translate("QGCMissionNavWaypoint", " m", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        holdTimeSpinBox->setToolTip(QApplication::translate("QGCMissionNavWaypoint", "Time to stay/loiter at this position before advancing", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        holdTimeSpinBox->setStatusTip(QApplication::translate("QGCMissionNavWaypoint", "Time to stay/loiter at this position before advancing", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        holdTimeSpinBox->setSuffix(QApplication::translate("QGCMissionNavWaypoint", " s", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QGCMissionNavWaypoint: public Ui_QGCMissionNavWaypoint {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCMISSIONNAVWAYPOINT_H
