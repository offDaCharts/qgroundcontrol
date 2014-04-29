/********************************************************************************
** Form generated from reading UI file 'QGCGoogleEarthView.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCGOOGLEEARTHVIEW_H
#define UI_QGCGOOGLEEARTHVIEW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QGCGoogleEarthView
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *webViewLayout;
    QPushButton *goHomeButton;
    QPushButton *setHomeButton;
    QPushButton *editButton;
    QCheckBox *trailCheckbox;
    QFrame *line;
    QComboBox *camDistanceComboBox;
    QSlider *camDistanceSlider;
    QCheckBox *followAirplaneCheckbox;
    QPushButton *changeViewButton;
    QFrame *line_2;
    QPushButton *clearTrailsButton;
    QPushButton *resetButton;
    QSpacerItem *horizontalSpacer;
    QCheckBox *atmosphereCheckBox;
    QCheckBox *daylightCheckBox;
    QPushButton *toLatLonButton;

    void setupUi(QWidget *QGCGoogleEarthView)
    {
        if (QGCGoogleEarthView->objectName().isEmpty())
            QGCGoogleEarthView->setObjectName(QString::fromUtf8("QGCGoogleEarthView"));
        QGCGoogleEarthView->resize(1409, 302);
        gridLayout = new QGridLayout(QGCGoogleEarthView);
        gridLayout->setContentsMargins(2, 2, 2, 2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(4);
        gridLayout->setVerticalSpacing(2);
        webViewLayout = new QVBoxLayout();
        webViewLayout->setObjectName(QString::fromUtf8("webViewLayout"));

        gridLayout->addLayout(webViewLayout, 0, 0, 1, 18);

        goHomeButton = new QPushButton(QGCGoogleEarthView);
        goHomeButton->setObjectName(QString::fromUtf8("goHomeButton"));

        gridLayout->addWidget(goHomeButton, 1, 1, 1, 1);

        setHomeButton = new QPushButton(QGCGoogleEarthView);
        setHomeButton->setObjectName(QString::fromUtf8("setHomeButton"));
        setHomeButton->setCheckable(true);

        gridLayout->addWidget(setHomeButton, 1, 3, 1, 1);

        editButton = new QPushButton(QGCGoogleEarthView);
        editButton->setObjectName(QString::fromUtf8("editButton"));
        editButton->setCheckable(true);

        gridLayout->addWidget(editButton, 1, 2, 1, 1);

        trailCheckbox = new QCheckBox(QGCGoogleEarthView);
        trailCheckbox->setObjectName(QString::fromUtf8("trailCheckbox"));

        gridLayout->addWidget(trailCheckbox, 1, 4, 1, 1);

        line = new QFrame(QGCGoogleEarthView);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 1, 5, 1, 1);

        camDistanceComboBox = new QComboBox(QGCGoogleEarthView);
        camDistanceComboBox->setObjectName(QString::fromUtf8("camDistanceComboBox"));

        gridLayout->addWidget(camDistanceComboBox, 1, 6, 1, 1);

        camDistanceSlider = new QSlider(QGCGoogleEarthView);
        camDistanceSlider->setObjectName(QString::fromUtf8("camDistanceSlider"));
        camDistanceSlider->setMinimum(100);
        camDistanceSlider->setMaximum(20000);
        camDistanceSlider->setValue(3000);
        camDistanceSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(camDistanceSlider, 1, 7, 1, 1);

        followAirplaneCheckbox = new QCheckBox(QGCGoogleEarthView);
        followAirplaneCheckbox->setObjectName(QString::fromUtf8("followAirplaneCheckbox"));

        gridLayout->addWidget(followAirplaneCheckbox, 1, 8, 1, 1);

        changeViewButton = new QPushButton(QGCGoogleEarthView);
        changeViewButton->setObjectName(QString::fromUtf8("changeViewButton"));

        gridLayout->addWidget(changeViewButton, 1, 9, 1, 1);

        line_2 = new QFrame(QGCGoogleEarthView);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 1, 10, 1, 1);

        clearTrailsButton = new QPushButton(QGCGoogleEarthView);
        clearTrailsButton->setObjectName(QString::fromUtf8("clearTrailsButton"));

        gridLayout->addWidget(clearTrailsButton, 1, 11, 1, 1);

        resetButton = new QPushButton(QGCGoogleEarthView);
        resetButton->setObjectName(QString::fromUtf8("resetButton"));

        gridLayout->addWidget(resetButton, 1, 12, 1, 1);

        horizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 13, 1, 1);

        atmosphereCheckBox = new QCheckBox(QGCGoogleEarthView);
        atmosphereCheckBox->setObjectName(QString::fromUtf8("atmosphereCheckBox"));

        gridLayout->addWidget(atmosphereCheckBox, 1, 14, 1, 1);

        daylightCheckBox = new QCheckBox(QGCGoogleEarthView);
        daylightCheckBox->setObjectName(QString::fromUtf8("daylightCheckBox"));

        gridLayout->addWidget(daylightCheckBox, 1, 15, 1, 1);

        toLatLonButton = new QPushButton(QGCGoogleEarthView);
        toLatLonButton->setObjectName(QString::fromUtf8("toLatLonButton"));

        gridLayout->addWidget(toLatLonButton, 1, 0, 1, 1);

        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 10);
        gridLayout->setColumnStretch(2, 10);
        gridLayout->setColumnStretch(3, 10);
        gridLayout->setColumnStretch(4, 10);
        gridLayout->setColumnStretch(5, 5);
        gridLayout->setColumnStretch(6, 10);
        gridLayout->setColumnStretch(7, 1000);
        gridLayout->setColumnStretch(8, 10);
        gridLayout->setColumnStretch(9, 10);
        gridLayout->setColumnStretch(10, 10);
        gridLayout->setColumnStretch(11, 10);
        gridLayout->setColumnStretch(12, 10);
        gridLayout->setColumnStretch(13, 5);
        gridLayout->setColumnStretch(14, 2);
        gridLayout->setColumnStretch(15, 2);

        retranslateUi(QGCGoogleEarthView);

        QMetaObject::connectSlotsByName(QGCGoogleEarthView);
    } // setupUi

    void retranslateUi(QWidget *QGCGoogleEarthView)
    {
        QGCGoogleEarthView->setWindowTitle(QApplication::translate("QGCGoogleEarthView", "Form", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        goHomeButton->setToolTip(QApplication::translate("QGCGoogleEarthView", "Go to home location", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        goHomeButton->setStatusTip(QApplication::translate("QGCGoogleEarthView", "Go to home location", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        goHomeButton->setWhatsThis(QApplication::translate("QGCGoogleEarthView", "Go to home location", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        goHomeButton->setText(QApplication::translate("QGCGoogleEarthView", "Home", 0, QApplication::UnicodeUTF8));
        setHomeButton->setText(QApplication::translate("QGCGoogleEarthView", "Set Home", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        editButton->setToolTip(QApplication::translate("QGCGoogleEarthView", "Enable waypoint and home location edit mode", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        editButton->setStatusTip(QApplication::translate("QGCGoogleEarthView", "Enable waypoint and home location edit mode", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        editButton->setText(QApplication::translate("QGCGoogleEarthView", "Edit", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        trailCheckbox->setToolTip(QApplication::translate("QGCGoogleEarthView", "Show MAV trajectories", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        trailCheckbox->setStatusTip(QApplication::translate("QGCGoogleEarthView", "Show MAV trajectories", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        trailCheckbox->setWhatsThis(QApplication::translate("QGCGoogleEarthView", "Show MAV trajectories", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        trailCheckbox->setText(QApplication::translate("QGCGoogleEarthView", "Trails", 0, QApplication::UnicodeUTF8));
        camDistanceComboBox->clear();
        camDistanceComboBox->insertItems(0, QStringList()
         << QApplication::translate("QGCGoogleEarthView", "MAV Distance", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QGCGoogleEarthView", "Ground Distance", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        camDistanceComboBox->setToolTip(QApplication::translate("QGCGoogleEarthView", "Select the MAV to chase", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        camDistanceComboBox->setStatusTip(QApplication::translate("QGCGoogleEarthView", "Select the MAV to chase", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        camDistanceComboBox->setWhatsThis(QApplication::translate("QGCGoogleEarthView", "Select the MAV to chase", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        camDistanceSlider->setToolTip(QApplication::translate("QGCGoogleEarthView", "Distance of the chase camera to the MAV", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        camDistanceSlider->setStatusTip(QApplication::translate("QGCGoogleEarthView", "Distance of the chase camera to the MAV", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        camDistanceSlider->setWhatsThis(QApplication::translate("QGCGoogleEarthView", "Distance of the chase camera to the MAV", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        followAirplaneCheckbox->setToolTip(QApplication::translate("QGCGoogleEarthView", "Chase the MAV", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        followAirplaneCheckbox->setStatusTip(QApplication::translate("QGCGoogleEarthView", "Chase the MAV", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        followAirplaneCheckbox->setWhatsThis(QApplication::translate("QGCGoogleEarthView", "Chase the MAV", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        followAirplaneCheckbox->setText(QApplication::translate("QGCGoogleEarthView", "Follow", 0, QApplication::UnicodeUTF8));
        changeViewButton->setText(QApplication::translate("QGCGoogleEarthView", "Overhead", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        clearTrailsButton->setToolTip(QApplication::translate("QGCGoogleEarthView", "Delete all waypoints", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        clearTrailsButton->setStatusTip(QApplication::translate("QGCGoogleEarthView", "Delete all waypoints", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        clearTrailsButton->setWhatsThis(QApplication::translate("QGCGoogleEarthView", "Delete all waypoints", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        clearTrailsButton->setText(QApplication::translate("QGCGoogleEarthView", "Clear Trails", 0, QApplication::UnicodeUTF8));
        resetButton->setText(QApplication::translate("QGCGoogleEarthView", "Reset", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        atmosphereCheckBox->setToolTip(QApplication::translate("QGCGoogleEarthView", "Enable the atmosphere visualization. Not recommended for mission execution, only for visualization", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        atmosphereCheckBox->setStatusTip(QApplication::translate("QGCGoogleEarthView", "Enable the atmosphere visualization. Not recommended for mission execution, only for visualization", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        atmosphereCheckBox->setText(QApplication::translate("QGCGoogleEarthView", "Sky", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        daylightCheckBox->setToolTip(QApplication::translate("QGCGoogleEarthView", "Enable day/night light. Not recommended for mission execution, only for visualization.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        daylightCheckBox->setStatusTip(QApplication::translate("QGCGoogleEarthView", "Enable day/night light. Not recommended for mission execution, only for visualization.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        daylightCheckBox->setText(QApplication::translate("QGCGoogleEarthView", "Day/Night", 0, QApplication::UnicodeUTF8));
        toLatLonButton->setText(QApplication::translate("QGCGoogleEarthView", "Lat/Lon", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QGCGoogleEarthView: public Ui_QGCGoogleEarthView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCGOOGLEEARTHVIEW_H
