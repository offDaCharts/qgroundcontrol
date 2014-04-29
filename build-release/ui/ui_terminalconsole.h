/********************************************************************************
** Form generated from reading UI file 'terminalconsole.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TERMINALCONSOLE_H
#define UI_TERMINALCONSOLE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TerminalConsole
{
public:
    QHBoxLayout *horizontalLayout;
    QGroupBox *terminalGroupBox;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QPushButton *connectButton;
    QPushButton *disconnectButton;
    QSpacerItem *verticalSpacer_2;
    QComboBox *linkComboBox;
    QComboBox *baudComboBox;
    QComboBox *consoleModeBox;
    QSpacerItem *verticalSpacer;
    QPushButton *settingsButton;
    QPushButton *clearButton;

    void setupUi(QWidget *TerminalConsole)
    {
        if (TerminalConsole->objectName().isEmpty())
            TerminalConsole->setObjectName(QString::fromUtf8("TerminalConsole"));
        TerminalConsole->resize(889, 531);
        horizontalLayout = new QHBoxLayout(TerminalConsole);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        terminalGroupBox = new QGroupBox(TerminalConsole);
        terminalGroupBox->setObjectName(QString::fromUtf8("terminalGroupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(terminalGroupBox->sizePolicy().hasHeightForWidth());
        terminalGroupBox->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(terminalGroupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));

        horizontalLayout->addWidget(terminalGroupBox);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMinAndMaxSize);
        connectButton = new QPushButton(TerminalConsole);
        connectButton->setObjectName(QString::fromUtf8("connectButton"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(100);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(connectButton->sizePolicy().hasHeightForWidth());
        connectButton->setSizePolicy(sizePolicy1);
        connectButton->setMinimumSize(QSize(131, 0));

        verticalLayout->addWidget(connectButton, 0, Qt::AlignRight|Qt::AlignVCenter);

        disconnectButton = new QPushButton(TerminalConsole);
        disconnectButton->setObjectName(QString::fromUtf8("disconnectButton"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(disconnectButton->sizePolicy().hasHeightForWidth());
        disconnectButton->setSizePolicy(sizePolicy2);
        disconnectButton->setMinimumSize(QSize(131, 0));

        verticalLayout->addWidget(disconnectButton, 0, Qt::AlignRight);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        linkComboBox = new QComboBox(TerminalConsole);
        linkComboBox->setObjectName(QString::fromUtf8("linkComboBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(linkComboBox->sizePolicy().hasHeightForWidth());
        linkComboBox->setSizePolicy(sizePolicy3);
        linkComboBox->setMinimumSize(QSize(123, 0));
        linkComboBox->setMaximumSize(QSize(220, 32));

        verticalLayout->addWidget(linkComboBox, 0, Qt::AlignRight);

        baudComboBox = new QComboBox(TerminalConsole);
        baudComboBox->setObjectName(QString::fromUtf8("baudComboBox"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(baudComboBox->sizePolicy().hasHeightForWidth());
        baudComboBox->setSizePolicy(sizePolicy4);
        baudComboBox->setMinimumSize(QSize(123, 0));

        verticalLayout->addWidget(baudComboBox, 0, Qt::AlignRight);

        consoleModeBox = new QComboBox(TerminalConsole);
        consoleModeBox->setObjectName(QString::fromUtf8("consoleModeBox"));
        sizePolicy4.setHeightForWidth(consoleModeBox->sizePolicy().hasHeightForWidth());
        consoleModeBox->setSizePolicy(sizePolicy4);
        consoleModeBox->setMinimumSize(QSize(123, 0));

        verticalLayout->addWidget(consoleModeBox, 0, Qt::AlignRight);

        verticalSpacer = new QSpacerItem(91, 23, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        settingsButton = new QPushButton(TerminalConsole);
        settingsButton->setObjectName(QString::fromUtf8("settingsButton"));

        verticalLayout->addWidget(settingsButton);

        clearButton = new QPushButton(TerminalConsole);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));

        verticalLayout->addWidget(clearButton);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(TerminalConsole);

        QMetaObject::connectSlotsByName(TerminalConsole);
    } // setupUi

    void retranslateUi(QWidget *TerminalConsole)
    {
        TerminalConsole->setWindowTitle(QApplication::translate("TerminalConsole", "Form", 0, QApplication::UnicodeUTF8));
        terminalGroupBox->setTitle(QApplication::translate("TerminalConsole", "Terminal Output", 0, QApplication::UnicodeUTF8));
        connectButton->setText(QApplication::translate("TerminalConsole", "CONNECT", 0, QApplication::UnicodeUTF8));
        disconnectButton->setText(QApplication::translate("TerminalConsole", "DISCONNECT", 0, QApplication::UnicodeUTF8));
        settingsButton->setText(QApplication::translate("TerminalConsole", "Adv. Settings", 0, QApplication::UnicodeUTF8));
        clearButton->setText(QApplication::translate("TerminalConsole", "Clear", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TerminalConsole: public Ui_TerminalConsole {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TERMINALCONSOLE_H
