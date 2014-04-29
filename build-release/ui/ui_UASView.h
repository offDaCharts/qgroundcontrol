/********************************************************************************
** Form generated from reading UI file 'UASView.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UASVIEW_H
#define UI_UASVIEW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UASView
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *typeLabel;
    QHBoxLayout *horizontalLayout_3;
    QLabel *heartBeatLabel;
    QProgressBar *batteryBar;
    QHBoxLayout *horizontalLayout_2;
    QLabel *waypointLabel;
    QPushButton *liftoffButton;
    QPushButton *abortButton;
    QPushButton *haltButton;
    QPushButton *continueButton;
    QPushButton *landButton;
    QPushButton *killButton;
    QPushButton *shutdownButton;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QLabel *nameLabel;
    QHBoxLayout *horizontalLayout_4;
    QLabel *timeRemainingLabel;
    QLabel *timeElapsedLabel;
    QHBoxLayout *horizontalLayout_5;
    QLabel *groundDistanceLabel;
    QLabel *speedLabel;
    QLabel *stateLabel;
    QVBoxLayout *verticalLayout_4;
    QLabel *modeLabel;
    QLabel *positionLabel;
    QProgressBar *thrustBar;
    QLabel *navLabel;
    QLabel *statusTextLabel;

    void setupUi(QWidget *UASView)
    {
        if (UASView->objectName().isEmpty())
            UASView->setObjectName(QString::fromUtf8("UASView"));
        UASView->resize(360, 155);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(UASView->sizePolicy().hasHeightForWidth());
        UASView->setSizePolicy(sizePolicy);
        UASView->setMinimumSize(QSize(260, 0));
        UASView->setMaximumSize(QSize(360, 16777215));
        UASView->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(UASView);
        verticalLayout->setContentsMargins(5, 5, 5, 5);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(-1, 0, -1, -1);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, 0, -1, -1);
        typeLabel = new QLabel(UASView);
        typeLabel->setObjectName(QString::fromUtf8("typeLabel"));
        typeLabel->setPixmap(QPixmap(QString::fromUtf8(":/files/images/mavs/unknown.svg")));

        verticalLayout_2->addWidget(typeLabel);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 0, -1, -1);
        heartBeatLabel = new QLabel(UASView);
        heartBeatLabel->setObjectName(QString::fromUtf8("heartBeatLabel"));

        horizontalLayout_3->addWidget(heartBeatLabel);

        batteryBar = new QProgressBar(UASView);
        batteryBar->setObjectName(QString::fromUtf8("batteryBar"));
        batteryBar->setMinimumSize(QSize(18, 0));
        batteryBar->setMaximumSize(QSize(18, 40));
        QFont font;
        batteryBar->setFont(font);
        batteryBar->setValue(0);
        batteryBar->setTextVisible(false);
        batteryBar->setOrientation(Qt::Vertical);

        horizontalLayout_3->addWidget(batteryBar);


        verticalLayout_2->addLayout(horizontalLayout_3);


        gridLayout->addLayout(verticalLayout_2, 1, 0, 2, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, -1, -1);
        waypointLabel = new QLabel(UASView);
        waypointLabel->setObjectName(QString::fromUtf8("waypointLabel"));
        QFont font1;
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        waypointLabel->setFont(font1);
        waypointLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        horizontalLayout_2->addWidget(waypointLabel);

        liftoffButton = new QPushButton(UASView);
        liftoffButton->setObjectName(QString::fromUtf8("liftoffButton"));
        liftoffButton->setMinimumSize(QSize(26, 22));
        liftoffButton->setMaximumSize(QSize(38, 22));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/files/images/control/launch.svg"), QSize(), QIcon::Normal, QIcon::Off);
        liftoffButton->setIcon(icon);

        horizontalLayout_2->addWidget(liftoffButton);

        abortButton = new QPushButton(UASView);
        abortButton->setObjectName(QString::fromUtf8("abortButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(abortButton->sizePolicy().hasHeightForWidth());
        abortButton->setSizePolicy(sizePolicy1);
        abortButton->setMinimumSize(QSize(26, 22));
        abortButton->setMaximumSize(QSize(38, 22));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/files/images/actions/media-playback-stop.svg"), QSize(), QIcon::Normal, QIcon::Off);
        abortButton->setIcon(icon1);

        horizontalLayout_2->addWidget(abortButton);

        haltButton = new QPushButton(UASView);
        haltButton->setObjectName(QString::fromUtf8("haltButton"));
        haltButton->setMinimumSize(QSize(26, 22));
        haltButton->setMaximumSize(QSize(38, 22));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/files/images/actions/media-playback-pause.svg"), QSize(), QIcon::Normal, QIcon::Off);
        haltButton->setIcon(icon2);

        horizontalLayout_2->addWidget(haltButton);

        continueButton = new QPushButton(UASView);
        continueButton->setObjectName(QString::fromUtf8("continueButton"));
        continueButton->setMinimumSize(QSize(26, 22));
        continueButton->setMaximumSize(QSize(38, 22));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/files/images/actions/media-playback-start.svg"), QSize(), QIcon::Normal, QIcon::Off);
        continueButton->setIcon(icon3);

        horizontalLayout_2->addWidget(continueButton);

        landButton = new QPushButton(UASView);
        landButton->setObjectName(QString::fromUtf8("landButton"));
        landButton->setMinimumSize(QSize(26, 22));
        landButton->setMaximumSize(QSize(38, 22));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/files/images/control/land.svg"), QSize(), QIcon::Normal, QIcon::Off);
        landButton->setIcon(icon4);

        horizontalLayout_2->addWidget(landButton);

        killButton = new QPushButton(UASView);
        killButton->setObjectName(QString::fromUtf8("killButton"));
        killButton->setMinimumSize(QSize(26, 22));
        killButton->setMaximumSize(QSize(38, 22));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/files/images/actions/process-stop.svg"), QSize(), QIcon::Normal, QIcon::Off);
        killButton->setIcon(icon5);

        horizontalLayout_2->addWidget(killButton);

        shutdownButton = new QPushButton(UASView);
        shutdownButton->setObjectName(QString::fromUtf8("shutdownButton"));
        shutdownButton->setMaximumSize(QSize(38, 22));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/files/images/actions/system-log-out.svg"), QSize(), QIcon::Normal, QIcon::Off);
        shutdownButton->setIcon(icon6);

        horizontalLayout_2->addWidget(shutdownButton);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(4);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMinimumSize);

        horizontalLayout_2->addLayout(horizontalLayout);


        gridLayout->addLayout(horizontalLayout_2, 2, 1, 1, 2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        nameLabel = new QLabel(UASView);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));
        nameLabel->setMaximumSize(QSize(16777215, 16));
        QFont font2;
        font2.setBold(true);
        font2.setItalic(false);
        font2.setWeight(75);
        nameLabel->setFont(font2);

        verticalLayout_3->addWidget(nameLabel);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        timeRemainingLabel = new QLabel(UASView);
        timeRemainingLabel->setObjectName(QString::fromUtf8("timeRemainingLabel"));
        timeRemainingLabel->setFont(font1);
        timeRemainingLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(timeRemainingLabel);

        timeElapsedLabel = new QLabel(UASView);
        timeElapsedLabel->setObjectName(QString::fromUtf8("timeElapsedLabel"));
        timeElapsedLabel->setFont(font1);
        timeElapsedLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(timeElapsedLabel);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        groundDistanceLabel = new QLabel(UASView);
        groundDistanceLabel->setObjectName(QString::fromUtf8("groundDistanceLabel"));
        groundDistanceLabel->setFont(font1);
        groundDistanceLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(groundDistanceLabel);

        speedLabel = new QLabel(UASView);
        speedLabel->setObjectName(QString::fromUtf8("speedLabel"));
        speedLabel->setFont(font1);
        speedLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(speedLabel);


        verticalLayout_3->addLayout(horizontalLayout_5);

        stateLabel = new QLabel(UASView);
        stateLabel->setObjectName(QString::fromUtf8("stateLabel"));
        stateLabel->setMaximumSize(QSize(16777215, 12));
        stateLabel->setFont(font1);

        verticalLayout_3->addWidget(stateLabel);


        gridLayout->addLayout(verticalLayout_3, 1, 1, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        modeLabel = new QLabel(UASView);
        modeLabel->setObjectName(QString::fromUtf8("modeLabel"));
        modeLabel->setMaximumSize(QSize(16777215, 16));
        modeLabel->setFont(font1);
        modeLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_4->addWidget(modeLabel);

        positionLabel = new QLabel(UASView);
        positionLabel->setObjectName(QString::fromUtf8("positionLabel"));
        positionLabel->setMinimumSize(QSize(0, 12));
        positionLabel->setMaximumSize(QSize(16777215, 12));
        positionLabel->setFont(font1);

        verticalLayout_4->addWidget(positionLabel);

        thrustBar = new QProgressBar(UASView);
        thrustBar->setObjectName(QString::fromUtf8("thrustBar"));
        thrustBar->setFont(font);
        thrustBar->setValue(0);

        verticalLayout_4->addWidget(thrustBar);

        navLabel = new QLabel(UASView);
        navLabel->setObjectName(QString::fromUtf8("navLabel"));
        navLabel->setFont(font1);

        verticalLayout_4->addWidget(navLabel);


        gridLayout->addLayout(verticalLayout_4, 1, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);

        statusTextLabel = new QLabel(UASView);
        statusTextLabel->setObjectName(QString::fromUtf8("statusTextLabel"));

        verticalLayout->addWidget(statusTextLabel);


        retranslateUi(UASView);

        QMetaObject::connectSlotsByName(UASView);
    } // setupUi

    void retranslateUi(QWidget *UASView)
    {
        UASView->setWindowTitle(QApplication::translate("UASView", "Form", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        typeLabel->setToolTip(QApplication::translate("UASView", "System type", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        typeLabel->setStatusTip(QApplication::translate("UASView", "System type", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        typeLabel->setWhatsThis(QApplication::translate("UASView", "System type", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        typeLabel->setText(QString());
#ifndef QT_NO_TOOLTIP
        heartBeatLabel->setToolTip(QApplication::translate("UASView", "Heartbeat", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        heartBeatLabel->setText(QString());
#ifndef QT_NO_TOOLTIP
        batteryBar->setToolTip(QApplication::translate("UASView", "Battery Fuel", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        batteryBar->setStatusTip(QApplication::translate("UASView", "Battery Fuel", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_TOOLTIP
        waypointLabel->setToolTip(QApplication::translate("UASView", "Current Waypoint", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        waypointLabel->setStatusTip(QApplication::translate("UASView", "Current Waypoint", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        waypointLabel->setText(QApplication::translate("UASView", "---", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        liftoffButton->setToolTip(QApplication::translate("UASView", "Liftoff / Launch", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        liftoffButton->setStatusTip(QApplication::translate("UASView", "Liftoff / Launch", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        liftoffButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        abortButton->setToolTip(QApplication::translate("UASView", "Emergency land system at closest possible site", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        abortButton->setStatusTip(QApplication::translate("UASView", "Emergency land system at closest possible site", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        abortButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        haltButton->setToolTip(QApplication::translate("UASView", "Loiter / Wait at current position", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        haltButton->setStatusTip(QApplication::translate("UASView", "Loiter / Wait at current position", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        haltButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        continueButton->setToolTip(QApplication::translate("UASView", "Continue flightplan", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        continueButton->setStatusTip(QApplication::translate("UASView", "Continue flightplan", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        continueButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        landButton->setToolTip(QApplication::translate("UASView", "Fly straight to landing location", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        landButton->setStatusTip(QApplication::translate("UASView", "Fly straight to landing location", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        landButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        killButton->setToolTip(QApplication::translate("UASView", "Kill immediately all onboard power", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        killButton->setStatusTip(QApplication::translate("UASView", "Kill immediately all onboard power", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        killButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        shutdownButton->setToolTip(QApplication::translate("UASView", "Only in standby mode: Power off system", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        shutdownButton->setStatusTip(QApplication::translate("UASView", "Only in standby mode: Power off system", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        shutdownButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        nameLabel->setToolTip(QApplication::translate("UASView", "System Name", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        nameLabel->setStatusTip(QApplication::translate("UASView", "System Name", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        nameLabel->setText(QApplication::translate("UASView", "UAS001", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        timeRemainingLabel->setToolTip(QApplication::translate("UASView", "Remaining flight time", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        timeRemainingLabel->setStatusTip(QApplication::translate("UASView", "Remaining flight time", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        timeRemainingLabel->setText(QApplication::translate("UASView", "00:00:00", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        timeElapsedLabel->setToolTip(QApplication::translate("UASView", "Uptime", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        timeElapsedLabel->setStatusTip(QApplication::translate("UASView", "Uptime", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        timeElapsedLabel->setText(QApplication::translate("UASView", "00:00:00", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        groundDistanceLabel->setToolTip(QApplication::translate("UASView", "Altitude", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        groundDistanceLabel->setStatusTip(QApplication::translate("UASView", "Altitude", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        groundDistanceLabel->setText(QApplication::translate("UASView", "00.00 m", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        speedLabel->setToolTip(QApplication::translate("UASView", "Ground Speed", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        speedLabel->setStatusTip(QApplication::translate("UASView", "Ground Speed", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        speedLabel->setText(QApplication::translate("UASView", "00.0 m/s", 0, QApplication::UnicodeUTF8));
        stateLabel->setText(QApplication::translate("UASView", "STATE", 0, QApplication::UnicodeUTF8));
        modeLabel->setText(QApplication::translate("UASView", "MODE", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        positionLabel->setToolTip(QApplication::translate("UASView", "Current Position", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        positionLabel->setStatusTip(QApplication::translate("UASView", "Current Position", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        positionLabel->setText(QApplication::translate("UASView", "00.0  00.0  00.0 m", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        thrustBar->setToolTip(QApplication::translate("UASView", "Current throttle", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        thrustBar->setStatusTip(QApplication::translate("UASView", "Current throttle", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        thrustBar->setFormat(QApplication::translate("UASView", "throttle %p%", 0, QApplication::UnicodeUTF8));
        navLabel->setText(QApplication::translate("UASView", "NAV", 0, QApplication::UnicodeUTF8));
        statusTextLabel->setText(QApplication::translate("UASView", "Waiting for first status update..", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class UASView: public Ui_UASView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UASVIEW_H
