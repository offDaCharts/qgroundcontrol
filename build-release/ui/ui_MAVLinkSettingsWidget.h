/********************************************************************************
** Form generated from reading UI file 'MAVLinkSettingsWidget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAVLINKSETTINGSWIDGET_H
#define UI_MAVLINKSETTINGSWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MAVLinkSettingsWidget
{
public:
    QGridLayout *gridLayout;
    QCheckBox *heartbeatCheckBox;
    QCheckBox *loggingCheckBox;
    QSpacerItem *logFileSpacer;
    QCheckBox *versionCheckBox;
    QSpacerItem *versionSpacer;
    QLabel *versionLabel;
    QLabel *logFileLabel;
    QPushButton *logFileButton;
    QSpinBox *systemIdSpinBox;
    QLabel *systemIdLabel;
    QSpacerItem *multiplexingFilterSpacer;
    QLineEdit *multiplexingFilterLineEdit;
    QCheckBox *multiplexingFilterCheckBox;
    QCheckBox *multiplexingCheckBox;
    QCheckBox *paramGuardCheckBox;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QLabel *paramRetransmissionLabel;
    QLabel *paramRewriteLabel;
    QSpinBox *paramRetransmissionSpinBox;
    QSpinBox *paramRewriteSpinBox;
    QCheckBox *actionGuardCheckBox;
    QSpacerItem *horizontalSpacer_3;
    QLabel *actionRetransmissionLabel;
    QSpinBox *actionRetransmissionSpinBox;
    QFrame *line;
    QCheckBox *droneOSCheckBox;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *droneOSLineEdit;
    QComboBox *droneOSComboBox;

    void setupUi(QWidget *MAVLinkSettingsWidget)
    {
        if (MAVLinkSettingsWidget->objectName().isEmpty())
            MAVLinkSettingsWidget->setObjectName(QString::fromUtf8("MAVLinkSettingsWidget"));
        MAVLinkSettingsWidget->resize(431, 530);
        gridLayout = new QGridLayout(MAVLinkSettingsWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        heartbeatCheckBox = new QCheckBox(MAVLinkSettingsWidget);
        heartbeatCheckBox->setObjectName(QString::fromUtf8("heartbeatCheckBox"));

        gridLayout->addWidget(heartbeatCheckBox, 1, 0, 1, 3);

        loggingCheckBox = new QCheckBox(MAVLinkSettingsWidget);
        loggingCheckBox->setObjectName(QString::fromUtf8("loggingCheckBox"));

        gridLayout->addWidget(loggingCheckBox, 6, 0, 1, 3);

        logFileSpacer = new QSpacerItem(8, 0, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        gridLayout->addItem(logFileSpacer, 8, 0, 1, 1);

        versionCheckBox = new QCheckBox(MAVLinkSettingsWidget);
        versionCheckBox->setObjectName(QString::fromUtf8("versionCheckBox"));

        gridLayout->addWidget(versionCheckBox, 9, 0, 1, 3);

        versionSpacer = new QSpacerItem(8, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(versionSpacer, 10, 0, 1, 1);

        versionLabel = new QLabel(MAVLinkSettingsWidget);
        versionLabel->setObjectName(QString::fromUtf8("versionLabel"));

        gridLayout->addWidget(versionLabel, 10, 1, 1, 2);

        logFileLabel = new QLabel(MAVLinkSettingsWidget);
        logFileLabel->setObjectName(QString::fromUtf8("logFileLabel"));

        gridLayout->addWidget(logFileLabel, 8, 1, 1, 1);

        logFileButton = new QPushButton(MAVLinkSettingsWidget);
        logFileButton->setObjectName(QString::fromUtf8("logFileButton"));

        gridLayout->addWidget(logFileButton, 8, 2, 1, 1);

        systemIdSpinBox = new QSpinBox(MAVLinkSettingsWidget);
        systemIdSpinBox->setObjectName(QString::fromUtf8("systemIdSpinBox"));
        systemIdSpinBox->setMinimum(1);
        systemIdSpinBox->setMaximum(255);

        gridLayout->addWidget(systemIdSpinBox, 0, 2, 1, 1);

        systemIdLabel = new QLabel(MAVLinkSettingsWidget);
        systemIdLabel->setObjectName(QString::fromUtf8("systemIdLabel"));

        gridLayout->addWidget(systemIdLabel, 0, 0, 1, 2);

        multiplexingFilterSpacer = new QSpacerItem(8, 0, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        gridLayout->addItem(multiplexingFilterSpacer, 5, 0, 1, 1);

        multiplexingFilterLineEdit = new QLineEdit(MAVLinkSettingsWidget);
        multiplexingFilterLineEdit->setObjectName(QString::fromUtf8("multiplexingFilterLineEdit"));

        gridLayout->addWidget(multiplexingFilterLineEdit, 5, 1, 1, 2);

        multiplexingFilterCheckBox = new QCheckBox(MAVLinkSettingsWidget);
        multiplexingFilterCheckBox->setObjectName(QString::fromUtf8("multiplexingFilterCheckBox"));

        gridLayout->addWidget(multiplexingFilterCheckBox, 4, 0, 1, 3);

        multiplexingCheckBox = new QCheckBox(MAVLinkSettingsWidget);
        multiplexingCheckBox->setObjectName(QString::fromUtf8("multiplexingCheckBox"));

        gridLayout->addWidget(multiplexingCheckBox, 3, 0, 1, 3);

        paramGuardCheckBox = new QCheckBox(MAVLinkSettingsWidget);
        paramGuardCheckBox->setObjectName(QString::fromUtf8("paramGuardCheckBox"));

        gridLayout->addWidget(paramGuardCheckBox, 11, 0, 1, 3);

        horizontalSpacer = new QSpacerItem(8, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 12, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(8, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 13, 0, 1, 1);

        paramRetransmissionLabel = new QLabel(MAVLinkSettingsWidget);
        paramRetransmissionLabel->setObjectName(QString::fromUtf8("paramRetransmissionLabel"));

        gridLayout->addWidget(paramRetransmissionLabel, 12, 1, 1, 1);

        paramRewriteLabel = new QLabel(MAVLinkSettingsWidget);
        paramRewriteLabel->setObjectName(QString::fromUtf8("paramRewriteLabel"));

        gridLayout->addWidget(paramRewriteLabel, 13, 1, 1, 1);

        paramRetransmissionSpinBox = new QSpinBox(MAVLinkSettingsWidget);
        paramRetransmissionSpinBox->setObjectName(QString::fromUtf8("paramRetransmissionSpinBox"));
        paramRetransmissionSpinBox->setMinimum(50);
        paramRetransmissionSpinBox->setMaximum(60000);
        paramRetransmissionSpinBox->setSingleStep(50);
        paramRetransmissionSpinBox->setValue(50);

        gridLayout->addWidget(paramRetransmissionSpinBox, 12, 2, 1, 1);

        paramRewriteSpinBox = new QSpinBox(MAVLinkSettingsWidget);
        paramRewriteSpinBox->setObjectName(QString::fromUtf8("paramRewriteSpinBox"));
        paramRewriteSpinBox->setMinimum(50);
        paramRewriteSpinBox->setMaximum(60000);
        paramRewriteSpinBox->setSingleStep(50);

        gridLayout->addWidget(paramRewriteSpinBox, 13, 2, 1, 1);

        actionGuardCheckBox = new QCheckBox(MAVLinkSettingsWidget);
        actionGuardCheckBox->setObjectName(QString::fromUtf8("actionGuardCheckBox"));

        gridLayout->addWidget(actionGuardCheckBox, 14, 0, 1, 3);

        horizontalSpacer_3 = new QSpacerItem(8, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 15, 0, 1, 1);

        actionRetransmissionLabel = new QLabel(MAVLinkSettingsWidget);
        actionRetransmissionLabel->setObjectName(QString::fromUtf8("actionRetransmissionLabel"));

        gridLayout->addWidget(actionRetransmissionLabel, 15, 1, 1, 1);

        actionRetransmissionSpinBox = new QSpinBox(MAVLinkSettingsWidget);
        actionRetransmissionSpinBox->setObjectName(QString::fromUtf8("actionRetransmissionSpinBox"));
        actionRetransmissionSpinBox->setMinimum(20);
        actionRetransmissionSpinBox->setMaximum(1000);
        actionRetransmissionSpinBox->setSingleStep(10);

        gridLayout->addWidget(actionRetransmissionSpinBox, 15, 2, 1, 1);

        line = new QFrame(MAVLinkSettingsWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setMinimumSize(QSize(0, 0));
        line->setMidLineWidth(0);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 16, 0, 1, 3);

        droneOSCheckBox = new QCheckBox(MAVLinkSettingsWidget);
        droneOSCheckBox->setObjectName(QString::fromUtf8("droneOSCheckBox"));

        gridLayout->addWidget(droneOSCheckBox, 17, 0, 1, 3);

        horizontalSpacer_4 = new QSpacerItem(8, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 18, 0, 1, 1);

        droneOSLineEdit = new QLineEdit(MAVLinkSettingsWidget);
        droneOSLineEdit->setObjectName(QString::fromUtf8("droneOSLineEdit"));
        droneOSLineEdit->setMaxLength(32);

        gridLayout->addWidget(droneOSLineEdit, 18, 1, 1, 2);

        droneOSComboBox = new QComboBox(MAVLinkSettingsWidget);
        droneOSComboBox->setObjectName(QString::fromUtf8("droneOSComboBox"));
        droneOSComboBox->setEditable(true);

        gridLayout->addWidget(droneOSComboBox, 19, 1, 1, 2);

        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 100);
        gridLayout->setColumnStretch(2, 1);

        retranslateUi(MAVLinkSettingsWidget);

        QMetaObject::connectSlotsByName(MAVLinkSettingsWidget);
    } // setupUi

    void retranslateUi(QWidget *MAVLinkSettingsWidget)
    {
        MAVLinkSettingsWidget->setWindowTitle(QApplication::translate("MAVLinkSettingsWidget", "Form", 0, QApplication::UnicodeUTF8));
        heartbeatCheckBox->setText(QApplication::translate("MAVLinkSettingsWidget", "Emit heartbeat", 0, QApplication::UnicodeUTF8));
        loggingCheckBox->setText(QApplication::translate("MAVLinkSettingsWidget", "Log all MAVLink packets", 0, QApplication::UnicodeUTF8));
        versionCheckBox->setText(QApplication::translate("MAVLinkSettingsWidget", "Only accept MAVs with same protocol version", 0, QApplication::UnicodeUTF8));
        versionLabel->setText(QApplication::translate("MAVLinkSettingsWidget", "MAVLINK_VERSION: ", 0, QApplication::UnicodeUTF8));
        logFileLabel->setText(QApplication::translate("MAVLinkSettingsWidget", "Logfile name", 0, QApplication::UnicodeUTF8));
        logFileButton->setText(QApplication::translate("MAVLinkSettingsWidget", "Select..", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        systemIdSpinBox->setToolTip(QApplication::translate("MAVLinkSettingsWidget", "Set the groundstation number", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        systemIdSpinBox->setStatusTip(QApplication::translate("MAVLinkSettingsWidget", "Set the groundstation number", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_TOOLTIP
        systemIdLabel->setToolTip(QApplication::translate("MAVLinkSettingsWidget", "The system ID is the number the MAV associates with this computer", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        systemIdLabel->setStatusTip(QApplication::translate("MAVLinkSettingsWidget", "The system ID is the number the MAV associates with this computer", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        systemIdLabel->setText(QApplication::translate("MAVLinkSettingsWidget", "Groundstation MAVLink System ID", 0, QApplication::UnicodeUTF8));
        multiplexingFilterLineEdit->setText(QApplication::translate("MAVLinkSettingsWidget", "Enter a comma-separated list of allowed packets", 0, QApplication::UnicodeUTF8));
        multiplexingFilterCheckBox->setText(QApplication::translate("MAVLinkSettingsWidget", "Filter multiplexed packets: Only forward selected IDs", 0, QApplication::UnicodeUTF8));
        multiplexingCheckBox->setText(QApplication::translate("MAVLinkSettingsWidget", "Enable Multiplexing: Forward packets to all other links", 0, QApplication::UnicodeUTF8));
        paramGuardCheckBox->setText(QApplication::translate("MAVLinkSettingsWidget", "Enable retransmission of parameter read/write requests", 0, QApplication::UnicodeUTF8));
        paramRetransmissionLabel->setText(QApplication::translate("MAVLinkSettingsWidget", "Read request retransmission timeout", 0, QApplication::UnicodeUTF8));
        paramRewriteLabel->setText(QApplication::translate("MAVLinkSettingsWidget", "Write request retransmission timeout", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        paramRetransmissionSpinBox->setToolTip(QApplication::translate("MAVLinkSettingsWidget", "Time in milliseconds after which a not acknowledged read request is sent again.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        paramRetransmissionSpinBox->setStatusTip(QApplication::translate("MAVLinkSettingsWidget", "Time in milliseconds after which a not acknowledged read request is sent again.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        paramRetransmissionSpinBox->setSuffix(QApplication::translate("MAVLinkSettingsWidget", " ms", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        paramRewriteSpinBox->setToolTip(QApplication::translate("MAVLinkSettingsWidget", "Time in milliseconds after which a not acknowledged write request is sent again.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        paramRewriteSpinBox->setStatusTip(QApplication::translate("MAVLinkSettingsWidget", "Time in milliseconds after which a not acknowledged write request is sent again.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        paramRewriteSpinBox->setSuffix(QApplication::translate("MAVLinkSettingsWidget", " ms", 0, QApplication::UnicodeUTF8));
        actionGuardCheckBox->setText(QApplication::translate("MAVLinkSettingsWidget", "Enable retransmission of actions / commands", 0, QApplication::UnicodeUTF8));
        actionRetransmissionLabel->setText(QApplication::translate("MAVLinkSettingsWidget", "Action request retransmission timeout", 0, QApplication::UnicodeUTF8));
        actionRetransmissionSpinBox->setSuffix(QApplication::translate("MAVLinkSettingsWidget", " ms", 0, QApplication::UnicodeUTF8));
        droneOSCheckBox->setText(QApplication::translate("MAVLinkSettingsWidget", "Forward MAVLink packets of all links to http://droneos.com", 0, QApplication::UnicodeUTF8));
        droneOSLineEdit->setText(QApplication::translate("MAVLinkSettingsWidget", "Enter your DroneOS API Token/Key", 0, QApplication::UnicodeUTF8));
        droneOSComboBox->clear();
        droneOSComboBox->insertItems(0, QStringList()
         << QApplication::translate("MAVLinkSettingsWidget", "mavlink.droneos.com:14555", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MAVLinkSettingsWidget", "localhost:14555", 0, QApplication::UnicodeUTF8)
        );
    } // retranslateUi

};

namespace Ui {
    class MAVLinkSettingsWidget: public Ui_MAVLinkSettingsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAVLINKSETTINGSWIDGET_H
