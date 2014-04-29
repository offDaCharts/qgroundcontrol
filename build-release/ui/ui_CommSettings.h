/********************************************************************************
** Form generated from reading UI file 'CommSettings.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMMSETTINGS_H
#define UI_COMMSETTINGS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QScrollArea>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_commSettings
{
public:
    QAction *actionDelete;
    QAction *actionConnect;
    QAction *actionClose;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QComboBox *linkType;
    QGroupBox *linkGroupBox;
    QHBoxLayout *horizontalLayout_2;
    QScrollArea *linkScrollArea;
    QWidget *scrollAreaWidgetContents;
    QCheckBox *advCheckBox;
    QGroupBox *protocolTypeGroupBox;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QComboBox *connectionType;
    QLabel *label_5;
    QCheckBox *advancedOptionsCheckBox;
    QFrame *line;
    QGroupBox *protocolGroupBox;
    QHBoxLayout *horizontalLayout_3;
    QScrollArea *protocolScrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *connectButton;
    QPushButton *deleteButton;
    QPushButton *closeButton;
    QLabel *connectionStatusLabel;

    void setupUi(QWidget *commSettings)
    {
        if (commSettings->objectName().isEmpty())
            commSettings->setObjectName(QString::fromUtf8("commSettings"));
        commSettings->resize(324, 475);
        actionDelete = new QAction(commSettings);
        actionDelete->setObjectName(QString::fromUtf8("actionDelete"));
        actionConnect = new QAction(commSettings);
        actionConnect->setObjectName(QString::fromUtf8("actionConnect"));
        actionClose = new QAction(commSettings);
        actionClose->setObjectName(QString::fromUtf8("actionClose"));
        verticalLayout_2 = new QVBoxLayout(commSettings);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label = new QLabel(commSettings);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_4->addWidget(label);

        linkType = new QComboBox(commSettings);
        linkType->setObjectName(QString::fromUtf8("linkType"));

        horizontalLayout_4->addWidget(linkType);


        verticalLayout_2->addLayout(horizontalLayout_4);

        linkGroupBox = new QGroupBox(commSettings);
        linkGroupBox->setObjectName(QString::fromUtf8("linkGroupBox"));
        horizontalLayout_2 = new QHBoxLayout(linkGroupBox);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        linkScrollArea = new QScrollArea(linkGroupBox);
        linkScrollArea->setObjectName(QString::fromUtf8("linkScrollArea"));
        linkScrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 298, 90));
        linkScrollArea->setWidget(scrollAreaWidgetContents);

        horizontalLayout_2->addWidget(linkScrollArea);


        verticalLayout_2->addWidget(linkGroupBox);

        advCheckBox = new QCheckBox(commSettings);
        advCheckBox->setObjectName(QString::fromUtf8("advCheckBox"));

        verticalLayout_2->addWidget(advCheckBox);

        protocolTypeGroupBox = new QGroupBox(commSettings);
        protocolTypeGroupBox->setObjectName(QString::fromUtf8("protocolTypeGroupBox"));
        verticalLayout = new QVBoxLayout(protocolTypeGroupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        connectionType = new QComboBox(protocolTypeGroupBox);
        connectionType->setObjectName(QString::fromUtf8("connectionType"));

        gridLayout->addWidget(connectionType, 0, 1, 1, 1);

        label_5 = new QLabel(protocolTypeGroupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 0, 0, 1, 1);

        advancedOptionsCheckBox = new QCheckBox(protocolTypeGroupBox);
        advancedOptionsCheckBox->setObjectName(QString::fromUtf8("advancedOptionsCheckBox"));

        gridLayout->addWidget(advancedOptionsCheckBox, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);


        verticalLayout_2->addWidget(protocolTypeGroupBox);

        line = new QFrame(commSettings);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line);

        protocolGroupBox = new QGroupBox(commSettings);
        protocolGroupBox->setObjectName(QString::fromUtf8("protocolGroupBox"));
        horizontalLayout_3 = new QHBoxLayout(protocolGroupBox);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        protocolScrollArea = new QScrollArea(protocolGroupBox);
        protocolScrollArea->setObjectName(QString::fromUtf8("protocolScrollArea"));
        protocolScrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 298, 90));
        protocolScrollArea->setWidget(scrollAreaWidgetContents_2);

        horizontalLayout_3->addWidget(protocolScrollArea);


        verticalLayout_2->addWidget(protocolGroupBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(12);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        connectButton = new QPushButton(commSettings);
        connectButton->setObjectName(QString::fromUtf8("connectButton"));
        connectButton->setCheckable(false);

        horizontalLayout->addWidget(connectButton);

        deleteButton = new QPushButton(commSettings);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));

        horizontalLayout->addWidget(deleteButton);

        closeButton = new QPushButton(commSettings);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setDefault(true);

        horizontalLayout->addWidget(closeButton);


        verticalLayout_2->addLayout(horizontalLayout);

        connectionStatusLabel = new QLabel(commSettings);
        connectionStatusLabel->setObjectName(QString::fromUtf8("connectionStatusLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(connectionStatusLabel->sizePolicy().hasHeightForWidth());
        connectionStatusLabel->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(connectionStatusLabel);

        line->raise();
        linkGroupBox->raise();
        protocolGroupBox->raise();
        connectionStatusLabel->raise();
        advCheckBox->raise();
        protocolTypeGroupBox->raise();
        linkType->raise();
        label->raise();
#ifndef QT_NO_SHORTCUT
        label->setBuddy(linkType);
        label_5->setBuddy(connectionType);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(linkType, linkScrollArea);
        QWidget::setTabOrder(linkScrollArea, advCheckBox);
        QWidget::setTabOrder(advCheckBox, connectionType);
        QWidget::setTabOrder(connectionType, advancedOptionsCheckBox);
        QWidget::setTabOrder(advancedOptionsCheckBox, protocolScrollArea);
        QWidget::setTabOrder(protocolScrollArea, connectButton);
        QWidget::setTabOrder(connectButton, deleteButton);
        QWidget::setTabOrder(deleteButton, closeButton);

        retranslateUi(commSettings);
        QObject::connect(actionClose, SIGNAL(triggered()), commSettings, SLOT(close()));

        connectionType->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(commSettings);
    } // setupUi

    void retranslateUi(QWidget *commSettings)
    {
        commSettings->setWindowTitle(QApplication::translate("commSettings", "Form", 0, QApplication::UnicodeUTF8));
        actionDelete->setText(QApplication::translate("commSettings", "Delete", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionDelete->setToolTip(QApplication::translate("commSettings", "Delete this link", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionConnect->setText(QApplication::translate("commSettings", "Connect", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionConnect->setToolTip(QApplication::translate("commSettings", "Connect this link", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionClose->setText(QApplication::translate("commSettings", "Close", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionClose->setToolTip(QApplication::translate("commSettings", "Close the configuration window", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("commSettings", "Link &Type:", 0, QApplication::UnicodeUTF8));
        linkGroupBox->setTitle(QApplication::translate("commSettings", "Link", 0, QApplication::UnicodeUTF8));
        advCheckBox->setText(QApplication::translate("commSettings", "&Show Advanced Protocol Options", 0, QApplication::UnicodeUTF8));
        protocolTypeGroupBox->setTitle(QApplication::translate("commSettings", "GroupBox", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("commSettings", "&Protocol:", 0, QApplication::UnicodeUTF8));
        advancedOptionsCheckBox->setText(QApplication::translate("commSettings", "&Advanced Options", 0, QApplication::UnicodeUTF8));
        protocolGroupBox->setTitle(QApplication::translate("commSettings", "Protocol", 0, QApplication::UnicodeUTF8));
        connectButton->setText(QApplication::translate("commSettings", "Connect", 0, QApplication::UnicodeUTF8));
        deleteButton->setText(QApplication::translate("commSettings", "Delete Link", 0, QApplication::UnicodeUTF8));
        closeButton->setText(QApplication::translate("commSettings", "Close", 0, QApplication::UnicodeUTF8));
        connectionStatusLabel->setText(QApplication::translate("commSettings", "Disconnected", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class commSettings: public Ui_commSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMMSETTINGS_H
