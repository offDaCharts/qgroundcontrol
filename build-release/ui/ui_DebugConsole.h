/********************************************************************************
** Form generated from reading UI file 'DebugConsole.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEBUGCONSOLE_H
#define UI_DEBUGCONSOLE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DebugConsole
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *linkComboBox;
    QLabel *downArrow;
    QLabel *downSpeedLabel;
    QLabel *upArrow;
    QLabel *upSpeedLabel;
    QCheckBox *mavlinkCheckBox;
    QCheckBox *hexCheckBox;
    QCheckBox *holdCheckBox;
    QSpacerItem *horizontalSpacer_2;
    QPlainTextEdit *receiveText;
    QLineEdit *sentText;
    QHBoxLayout *horizontalLayout;
    QComboBox *specialComboBox;
    QPushButton *addSymbolButton;
    QCheckBox *specialCheckBox;
    QPushButton *transmitButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *holdButton;
    QPushButton *clearButton;
    QPushButton *connectButton;
    QLineEdit *sendText;

    void setupUi(QWidget *DebugConsole)
    {
        if (DebugConsole->objectName().isEmpty())
            DebugConsole->setObjectName(QString::fromUtf8("DebugConsole"));
        DebugConsole->resize(570, 211);
        gridLayout = new QGridLayout(DebugConsole);
        gridLayout->setContentsMargins(6, 6, 6, 6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(6);
        gridLayout->setVerticalSpacing(4);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        linkComboBox = new QComboBox(DebugConsole);
        linkComboBox->setObjectName(QString::fromUtf8("linkComboBox"));
        linkComboBox->setMaximumSize(QSize(130, 16777215));

        horizontalLayout_2->addWidget(linkComboBox);

        downArrow = new QLabel(DebugConsole);
        downArrow->setObjectName(QString::fromUtf8("downArrow"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(downArrow->sizePolicy().hasHeightForWidth());
        downArrow->setSizePolicy(sizePolicy);
        downArrow->setMinimumSize(QSize(12, 16));
        downArrow->setMaximumSize(QSize(12, 16));
        downArrow->setBaseSize(QSize(12, 16));
        downArrow->setAutoFillBackground(false);
        downArrow->setPixmap(QPixmap(QString::fromUtf8(":/files/images/actions/go-down.svg")));
        downArrow->setScaledContents(true);

        horizontalLayout_2->addWidget(downArrow);

        downSpeedLabel = new QLabel(DebugConsole);
        downSpeedLabel->setObjectName(QString::fromUtf8("downSpeedLabel"));

        horizontalLayout_2->addWidget(downSpeedLabel);

        upArrow = new QLabel(DebugConsole);
        upArrow->setObjectName(QString::fromUtf8("upArrow"));
        upArrow->setMaximumSize(QSize(12, 16));
        upArrow->setPixmap(QPixmap(QString::fromUtf8(":/files/images/actions/go-up.svg")));
        upArrow->setScaledContents(true);

        horizontalLayout_2->addWidget(upArrow);

        upSpeedLabel = new QLabel(DebugConsole);
        upSpeedLabel->setObjectName(QString::fromUtf8("upSpeedLabel"));

        horizontalLayout_2->addWidget(upSpeedLabel);

        mavlinkCheckBox = new QCheckBox(DebugConsole);
        mavlinkCheckBox->setObjectName(QString::fromUtf8("mavlinkCheckBox"));

        horizontalLayout_2->addWidget(mavlinkCheckBox);

        hexCheckBox = new QCheckBox(DebugConsole);
        hexCheckBox->setObjectName(QString::fromUtf8("hexCheckBox"));

        horizontalLayout_2->addWidget(hexCheckBox);

        holdCheckBox = new QCheckBox(DebugConsole);
        holdCheckBox->setObjectName(QString::fromUtf8("holdCheckBox"));

        horizontalLayout_2->addWidget(holdCheckBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        horizontalLayout_2->setStretch(0, 10);

        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 2);

        receiveText = new QPlainTextEdit(DebugConsole);
        receiveText->setObjectName(QString::fromUtf8("receiveText"));
        receiveText->setMinimumSize(QSize(300, 50));
        receiveText->setReadOnly(true);
        receiveText->setTabStopWidth(60);

        gridLayout->addWidget(receiveText, 1, 0, 1, 2);

        sentText = new QLineEdit(DebugConsole);
        sentText->setObjectName(QString::fromUtf8("sentText"));
        sentText->setReadOnly(true);

        gridLayout->addWidget(sentText, 2, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(5);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        specialComboBox = new QComboBox(DebugConsole);
        specialComboBox->setObjectName(QString::fromUtf8("specialComboBox"));
        specialComboBox->setMaximumSize(QSize(100, 16777215));
        specialComboBox->setMaxVisibleItems(10);
        specialComboBox->setSizeAdjustPolicy(QComboBox::AdjustToContentsOnFirstShow);
        specialComboBox->setMinimumContentsLength(1);

        horizontalLayout->addWidget(specialComboBox);

        addSymbolButton = new QPushButton(DebugConsole);
        addSymbolButton->setObjectName(QString::fromUtf8("addSymbolButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/files/images/actions/list-add.svg"), QSize(), QIcon::Normal, QIcon::Off);
        addSymbolButton->setIcon(icon);

        horizontalLayout->addWidget(addSymbolButton);

        specialCheckBox = new QCheckBox(DebugConsole);
        specialCheckBox->setObjectName(QString::fromUtf8("specialCheckBox"));

        horizontalLayout->addWidget(specialCheckBox);

        transmitButton = new QPushButton(DebugConsole);
        transmitButton->setObjectName(QString::fromUtf8("transmitButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/files/images/devices/network-wireless.svg"), QSize(), QIcon::Normal, QIcon::Off);
        transmitButton->setIcon(icon1);

        horizontalLayout->addWidget(transmitButton);

        horizontalSpacer = new QSpacerItem(5, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        holdButton = new QPushButton(DebugConsole);
        holdButton->setObjectName(QString::fromUtf8("holdButton"));
        holdButton->setCheckable(true);

        horizontalLayout->addWidget(holdButton);

        clearButton = new QPushButton(DebugConsole);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));

        horizontalLayout->addWidget(clearButton);

        connectButton = new QPushButton(DebugConsole);
        connectButton->setObjectName(QString::fromUtf8("connectButton"));

        horizontalLayout->addWidget(connectButton);

        horizontalLayout->setStretch(0, 100);
        horizontalLayout->setStretch(3, 1);
        horizontalLayout->setStretch(4, 10);
        horizontalLayout->setStretch(5, 1);
        horizontalLayout->setStretch(6, 1);
        horizontalLayout->setStretch(7, 1);

        gridLayout->addLayout(horizontalLayout, 4, 1, 1, 1);

        sendText = new QLineEdit(DebugConsole);
        sendText->setObjectName(QString::fromUtf8("sendText"));
        sendText->setMinimumSize(QSize(80, 0));

        gridLayout->addWidget(sendText, 3, 0, 1, 2);


        retranslateUi(DebugConsole);
        QObject::connect(clearButton, SIGNAL(clicked()), receiveText, SLOT(clear()));

        QMetaObject::connectSlotsByName(DebugConsole);
    } // setupUi

    void retranslateUi(QWidget *DebugConsole)
    {
        DebugConsole->setWindowTitle(QApplication::translate("DebugConsole", "Form", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        linkComboBox->setToolTip(QApplication::translate("DebugConsole", "Select the link to monitor", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        downArrow->setText(QString());
        downSpeedLabel->setText(QApplication::translate("DebugConsole", "00.0 kB/s", 0, QApplication::UnicodeUTF8));
        upArrow->setText(QString());
        upSpeedLabel->setText(QApplication::translate("DebugConsole", "00.0 kB/s", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mavlinkCheckBox->setToolTip(QApplication::translate("DebugConsole", "Ignore MAVLINK protocol messages in display", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        mavlinkCheckBox->setStatusTip(QApplication::translate("DebugConsole", "Ignore MAVLINK protocol messages in display", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        mavlinkCheckBox->setText(QApplication::translate("DebugConsole", "Hide MAVLink", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        hexCheckBox->setToolTip(QApplication::translate("DebugConsole", "Display and enter bytes in HEX representation (e.g. 0xAA)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        hexCheckBox->setStatusTip(QApplication::translate("DebugConsole", "Display and enter bytes in HEX representation (e.g. 0xAA)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        hexCheckBox->setText(QApplication::translate("DebugConsole", "HEX", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        holdCheckBox->setToolTip(QApplication::translate("DebugConsole", "Saves CPU ressources, automatically set view to hold if data rate is too high to prevent fast scrolling", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        holdCheckBox->setStatusTip(QApplication::translate("DebugConsole", "Saves CPU ressources, automatically set view to hold if data rate is too high to prevent fast scrolling", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        holdCheckBox->setWhatsThis(QApplication::translate("DebugConsole", "Enable auto hold to lower the CPU consumption", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        holdCheckBox->setText(QApplication::translate("DebugConsole", "Auto Hold", 0, QApplication::UnicodeUTF8));
        sentText->setText(QApplication::translate("DebugConsole", "Enter data/text below to send", 0, QApplication::UnicodeUTF8));
        specialComboBox->clear();
        specialComboBox->insertItems(0, QStringList()
         << QApplication::translate("DebugConsole", "Add..", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DebugConsole", "CR+LF", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DebugConsole", "LF", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DebugConsole", "FF", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DebugConsole", "CR", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DebugConsole", "TAB", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DebugConsole", "ESC", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DebugConsole", "~", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DebugConsole", "<Space>", 0, QApplication::UnicodeUTF8)
        );
        addSymbolButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        specialCheckBox->setToolTip(QApplication::translate("DebugConsole", "Automatically send special char at end of message", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        specialCheckBox->setText(QApplication::translate("DebugConsole", "Auto-Add", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        transmitButton->setToolTip(QApplication::translate("DebugConsole", "Send the ASCII text or HEX values over the link", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        transmitButton->setText(QApplication::translate("DebugConsole", "Send", 0, QApplication::UnicodeUTF8));
        holdButton->setText(QApplication::translate("DebugConsole", "Hold", 0, QApplication::UnicodeUTF8));
        clearButton->setText(QApplication::translate("DebugConsole", "Clear", 0, QApplication::UnicodeUTF8));
        connectButton->setText(QApplication::translate("DebugConsole", "Disconn.", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        sendText->setToolTip(QApplication::translate("DebugConsole", "Type the bytes to send here, use 0xAA format for HEX (Check HEX checkbox above)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class DebugConsole: public Ui_DebugConsole {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEBUGCONSOLE_H
