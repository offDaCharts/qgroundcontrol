/********************************************************************************
** Form generated from reading UI file 'QGCMAVLinkLogPlayer.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCMAVLINKLOGPLAYER_H
#define UI_QGCMAVLINKLOGPLAYER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QGCMAVLinkLogPlayer
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *logStatsLabel;
    QToolButton *playButton;
    QSlider *positionSlider;
    QLabel *speedLabel;
    QSlider *speedSlider;
    QLabel *logFileNameLabel;
    QPushButton *selectFileButton;

    void setupUi(QWidget *QGCMAVLinkLogPlayer)
    {
        if (QGCMAVLinkLogPlayer->objectName().isEmpty())
            QGCMAVLinkLogPlayer->setObjectName(QString::fromUtf8("QGCMAVLinkLogPlayer"));
        QGCMAVLinkLogPlayer->resize(789, 38);
        horizontalLayout = new QHBoxLayout(QGCMAVLinkLogPlayer);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(12, 0, 4, 0);
        logStatsLabel = new QLabel(QGCMAVLinkLogPlayer);
        logStatsLabel->setObjectName(QString::fromUtf8("logStatsLabel"));

        horizontalLayout->addWidget(logStatsLabel);

        playButton = new QToolButton(QGCMAVLinkLogPlayer);
        playButton->setObjectName(QString::fromUtf8("playButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/files/images/actions/media-playback-start.svg"), QSize(), QIcon::Normal, QIcon::Off);
        playButton->setIcon(icon);
        playButton->setCheckable(true);

        horizontalLayout->addWidget(playButton);

        positionSlider = new QSlider(QGCMAVLinkLogPlayer);
        positionSlider->setObjectName(QString::fromUtf8("positionSlider"));
        positionSlider->setMaximum(10000);
        positionSlider->setPageStep(100);
        positionSlider->setTracking(false);
        positionSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(positionSlider);

        speedLabel = new QLabel(QGCMAVLinkLogPlayer);
        speedLabel->setObjectName(QString::fromUtf8("speedLabel"));

        horizontalLayout->addWidget(speedLabel);

        speedSlider = new QSlider(QGCMAVLinkLogPlayer);
        speedSlider->setObjectName(QString::fromUtf8("speedSlider"));
        speedSlider->setMinimum(1);
        speedSlider->setMaximum(100);
        speedSlider->setValue(50);
        speedSlider->setSliderPosition(50);
        speedSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(speedSlider);

        logFileNameLabel = new QLabel(QGCMAVLinkLogPlayer);
        logFileNameLabel->setObjectName(QString::fromUtf8("logFileNameLabel"));

        horizontalLayout->addWidget(logFileNameLabel);

        selectFileButton = new QPushButton(QGCMAVLinkLogPlayer);
        selectFileButton->setObjectName(QString::fromUtf8("selectFileButton"));

        horizontalLayout->addWidget(selectFileButton);


        retranslateUi(QGCMAVLinkLogPlayer);

        QMetaObject::connectSlotsByName(QGCMAVLinkLogPlayer);
    } // setupUi

    void retranslateUi(QWidget *QGCMAVLinkLogPlayer)
    {
        QGCMAVLinkLogPlayer->setWindowTitle(QApplication::translate("QGCMAVLinkLogPlayer", "Form", 0, QApplication::UnicodeUTF8));
        logStatsLabel->setText(QApplication::translate("QGCMAVLinkLogPlayer", "No logfile selected..", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        playButton->setToolTip(QApplication::translate("QGCMAVLinkLogPlayer", "Start to replay the logfile", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        playButton->setStatusTip(QApplication::translate("QGCMAVLinkLogPlayer", "Start to replay the logfile", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        playButton->setWhatsThis(QApplication::translate("QGCMAVLinkLogPlayer", "Start to replay the logfile", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        playButton->setText(QApplication::translate("QGCMAVLinkLogPlayer", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        speedLabel->setToolTip(QApplication::translate("QGCMAVLinkLogPlayer", "Current replay speed", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        speedLabel->setStatusTip(QApplication::translate("QGCMAVLinkLogPlayer", "Current replay speed", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        speedLabel->setWhatsThis(QApplication::translate("QGCMAVLinkLogPlayer", "Current replay speed", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        speedLabel->setText(QApplication::translate("QGCMAVLinkLogPlayer", "Speed", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        speedSlider->setToolTip(QApplication::translate("QGCMAVLinkLogPlayer", "Set the replay speed", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        speedSlider->setStatusTip(QApplication::translate("QGCMAVLinkLogPlayer", "Set the replay speed", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        speedSlider->setWhatsThis(QApplication::translate("QGCMAVLinkLogPlayer", "Set the replay speed", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        logFileNameLabel->setText(QApplication::translate("QGCMAVLinkLogPlayer", "-", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        selectFileButton->setToolTip(QApplication::translate("QGCMAVLinkLogPlayer", "Select the logfile to replay", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        selectFileButton->setStatusTip(QApplication::translate("QGCMAVLinkLogPlayer", "Select the logfile to replay", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        selectFileButton->setWhatsThis(QApplication::translate("QGCMAVLinkLogPlayer", "Select the logfile to replay", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        selectFileButton->setText(QApplication::translate("QGCMAVLinkLogPlayer", "Replay Logfile", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QGCMAVLinkLogPlayer: public Ui_QGCMAVLinkLogPlayer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCMAVLINKLOGPLAYER_H
