/********************************************************************************
** Form generated from reading UI file 'WaypointList.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WAYPOINTLIST_H
#define UI_WAYPOINTLIST_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QScrollArea>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WaypointList
{
public:
    QAction *actionAddWaypoint;
    QAction *actionTransmit;
    QAction *actionRead;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *editTab;
    QGridLayout *gridLayout_2;
    QToolButton *addButton;
    QPushButton *loadButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *saveButton;
    QLabel *statusLabel;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QWidget *editableListWidget;
    QPushButton *readButton;
    QPushButton *transmitButton;
    QToolButton *clearWPListButton;
    QToolButton *positionAddButton;
    QWidget *viewTab;
    QGridLayout *gridLayout_3;
    QScrollArea *readOnlyScrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout;
    QWidget *viewOnlyListWidget;
    QLabel *viewStatusLabel;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *refreshButton;

    void setupUi(QWidget *WaypointList)
    {
        if (WaypointList->objectName().isEmpty())
            WaypointList->setObjectName(QString::fromUtf8("WaypointList"));
        WaypointList->resize(854, 398);
        WaypointList->setMinimumSize(QSize(100, 120));
        actionAddWaypoint = new QAction(WaypointList);
        actionAddWaypoint->setObjectName(QString::fromUtf8("actionAddWaypoint"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/files/images/actions/list-add.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionAddWaypoint->setIcon(icon);
        actionTransmit = new QAction(WaypointList);
        actionTransmit->setObjectName(QString::fromUtf8("actionTransmit"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/files/images/devices/network-wireless.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionTransmit->setIcon(icon1);
        actionRead = new QAction(WaypointList);
        actionRead->setObjectName(QString::fromUtf8("actionRead"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/files/images/status/software-update-available.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionRead->setIcon(icon2);
        gridLayout = new QGridLayout(WaypointList);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 8, 0, 0);
        tabWidget = new QTabWidget(WaypointList);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setEnabled(true);
        editTab = new QWidget();
        editTab->setObjectName(QString::fromUtf8("editTab"));
        gridLayout_2 = new QGridLayout(editTab);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(6, 0, 6, 6);
        addButton = new QToolButton(editTab);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setIcon(icon);

        gridLayout_2->addWidget(addButton, 1, 6, 1, 1);

        loadButton = new QPushButton(editTab);
        loadButton->setObjectName(QString::fromUtf8("loadButton"));

        gridLayout_2->addWidget(loadButton, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(127, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 3, 1, 1);

        saveButton = new QPushButton(editTab);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));

        gridLayout_2->addWidget(saveButton, 1, 0, 1, 1);

        statusLabel = new QLabel(editTab);
        statusLabel->setObjectName(QString::fromUtf8("statusLabel"));

        gridLayout_2->addWidget(statusLabel, 1, 2, 1, 1);

        scrollArea = new QScrollArea(editTab);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 834, 325));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        editableListWidget = new QWidget(scrollAreaWidgetContents);
        editableListWidget->setObjectName(QString::fromUtf8("editableListWidget"));

        verticalLayout_2->addWidget(editableListWidget);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_2->addWidget(scrollArea, 0, 0, 1, 10);

        readButton = new QPushButton(editTab);
        readButton->setObjectName(QString::fromUtf8("readButton"));
        readButton->setEnabled(false);
        readButton->setIcon(icon2);

        gridLayout_2->addWidget(readButton, 1, 8, 1, 1);

        transmitButton = new QPushButton(editTab);
        transmitButton->setObjectName(QString::fromUtf8("transmitButton"));
        transmitButton->setEnabled(false);
        transmitButton->setIcon(icon1);

        gridLayout_2->addWidget(transmitButton, 1, 9, 1, 1);

        clearWPListButton = new QToolButton(editTab);
        clearWPListButton->setObjectName(QString::fromUtf8("clearWPListButton"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/files/images/actions/process-stop.svg"), QSize(), QIcon::Normal, QIcon::Off);
        clearWPListButton->setIcon(icon3);

        gridLayout_2->addWidget(clearWPListButton, 1, 7, 1, 1);

        positionAddButton = new QToolButton(editTab);
        positionAddButton->setObjectName(QString::fromUtf8("positionAddButton"));
        positionAddButton->setEnabled(false);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/files/images/actions/go-bottom.svg"), QSize(), QIcon::Normal, QIcon::Off);
        positionAddButton->setIcon(icon4);

        gridLayout_2->addWidget(positionAddButton, 1, 5, 1, 1);

        tabWidget->addTab(editTab, QString());
        viewTab = new QWidget();
        viewTab->setObjectName(QString::fromUtf8("viewTab"));
        gridLayout_3 = new QGridLayout(viewTab);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(6, 0, 6, 6);
        readOnlyScrollArea = new QScrollArea(viewTab);
        readOnlyScrollArea->setObjectName(QString::fromUtf8("readOnlyScrollArea"));
        readOnlyScrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 834, 323));
        scrollAreaWidgetContents_2->setAutoFillBackground(true);
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        viewOnlyListWidget = new QWidget(scrollAreaWidgetContents_2);
        viewOnlyListWidget->setObjectName(QString::fromUtf8("viewOnlyListWidget"));
        viewOnlyListWidget->setEnabled(true);
        viewOnlyListWidget->setMaximumSize(QSize(16777215, 16777215));

        verticalLayout->addWidget(viewOnlyListWidget);

        readOnlyScrollArea->setWidget(scrollAreaWidgetContents_2);

        gridLayout_3->addWidget(readOnlyScrollArea, 0, 0, 1, 3);

        viewStatusLabel = new QLabel(viewTab);
        viewStatusLabel->setObjectName(QString::fromUtf8("viewStatusLabel"));

        gridLayout_3->addWidget(viewStatusLabel, 1, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(714, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 1, 1, 1, 1);

        refreshButton = new QPushButton(viewTab);
        refreshButton->setObjectName(QString::fromUtf8("refreshButton"));
        refreshButton->setEnabled(false);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/files/images/actions/go-jump.svg"), QSize(), QIcon::Normal, QIcon::Off);
        refreshButton->setIcon(icon5);

        gridLayout_3->addWidget(refreshButton, 1, 2, 1, 1);

        tabWidget->addTab(viewTab, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);


        retranslateUi(WaypointList);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(WaypointList);
    } // setupUi

    void retranslateUi(QWidget *WaypointList)
    {
        WaypointList->setWindowTitle(QApplication::translate("WaypointList", "Form", 0, QApplication::UnicodeUTF8));
        actionAddWaypoint->setText(QApplication::translate("WaypointList", "Add Waypoint", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionAddWaypoint->setToolTip(QApplication::translate("WaypointList", "Add a new waypoint to the end of the list", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionTransmit->setText(QApplication::translate("WaypointList", "Transmit", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionTransmit->setToolTip(QApplication::translate("WaypointList", "Transmit waypoints to unmanned system", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionRead->setText(QApplication::translate("WaypointList", "Read", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        addButton->setToolTip(QApplication::translate("WaypointList", "Add a new waypoint to this list. Transmit via write to the MAV.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        addButton->setStatusTip(QApplication::translate("WaypointList", "Add a new waypoint to this list. Transmit via write to the MAV.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        addButton->setWhatsThis(QApplication::translate("WaypointList", "Add a new waypoint to this list. Transmit via write to the MAV.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        addButton->setText(QApplication::translate("WaypointList", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        loadButton->setToolTip(QApplication::translate("WaypointList", "Load waypoints from a file on the local harddisk. Does not load the waypoints on the MAV.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        loadButton->setStatusTip(QApplication::translate("WaypointList", "Load waypoints from a file on the local harddisk. Does not load the waypoints on the MAV.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        loadButton->setWhatsThis(QApplication::translate("WaypointList", "Load waypoints from a file on the local harddisk. Does not load the waypoints on the MAV.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        loadButton->setText(QApplication::translate("WaypointList", "Load WPs", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        saveButton->setToolTip(QApplication::translate("WaypointList", "Save waypoints to a file on the local harddisk. Does not save them on the MAV.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        saveButton->setStatusTip(QApplication::translate("WaypointList", "Save waypoints to a file on the local harddisk. Does not save them on the MAV.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        saveButton->setWhatsThis(QApplication::translate("WaypointList", "Save waypoints to a file on the local harddisk. Does not save them on the MAV.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        saveButton->setText(QApplication::translate("WaypointList", "Save WPs", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        statusLabel->setToolTip(QApplication::translate("WaypointList", "The current waypoint transmission status", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        statusLabel->setStatusTip(QApplication::translate("WaypointList", "The current waypoint transmission status", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        statusLabel->setWhatsThis(QApplication::translate("WaypointList", "The current waypoint transmission status", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        statusLabel->setText(QApplication::translate("WaypointList", "Please add first waypoint.", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        editableListWidget->setToolTip(QApplication::translate("WaypointList", "Waypoint list. The list is empty until you issue a read command or add waypoints.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        editableListWidget->setStatusTip(QApplication::translate("WaypointList", "Waypoint list. The list is empty until you issue a read command or add waypoints.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        editableListWidget->setWhatsThis(QApplication::translate("WaypointList", "Waypoint list. The list is empty until you issue a read command or add waypoints.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        readButton->setToolTip(QApplication::translate("WaypointList", "Read all waypoints from the MAV. Clears the list on this computer.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        readButton->setStatusTip(QApplication::translate("WaypointList", "Read all waypoints from the MAV. Clears the list on this computer.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        readButton->setWhatsThis(QApplication::translate("WaypointList", "Read all waypoints from the MAV. Clears the list on this computer.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        readButton->setText(QApplication::translate("WaypointList", "Get", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        transmitButton->setToolTip(QApplication::translate("WaypointList", "Transmit all waypoints on this list to the MAV.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        transmitButton->setStatusTip(QApplication::translate("WaypointList", "Transmit all waypoints on this list to the MAV.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        transmitButton->setWhatsThis(QApplication::translate("WaypointList", "Transmit all waypoints on this list to the MAV.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        transmitButton->setText(QApplication::translate("WaypointList", "Set", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        clearWPListButton->setToolTip(QApplication::translate("WaypointList", "Delete all waypoints from this list. You have to click write to clear the list on the MAV as well.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        clearWPListButton->setStatusTip(QApplication::translate("WaypointList", "Delete all waypoints from this list. You have to click write to clear the list on the MAV as well.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        clearWPListButton->setWhatsThis(QApplication::translate("WaypointList", "Delete all waypoints from this list. You have to click write to clear the list on the MAV as well.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        clearWPListButton->setText(QApplication::translate("WaypointList", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        positionAddButton->setToolTip(QApplication::translate("WaypointList", "Set the current vehicle position as new waypoint", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        positionAddButton->setStatusTip(QApplication::translate("WaypointList", "Set the current vehicle position as new waypoint", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        positionAddButton->setWhatsThis(QApplication::translate("WaypointList", "Set the current vehicle position as new waypoint", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        positionAddButton->setText(QApplication::translate("WaypointList", "...", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(editTab), QApplication::translate("WaypointList", "Edit Waypoints", 0, QApplication::UnicodeUTF8));
        viewStatusLabel->setText(QString());
#ifndef QT_NO_TOOLTIP
        refreshButton->setToolTip(QApplication::translate("WaypointList", "Read all waypoints from the MAV and display in View tab..", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        refreshButton->setStatusTip(QApplication::translate("WaypointList", "Read all waypoints from the MAV and display in View tab..", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        refreshButton->setWhatsThis(QApplication::translate("WaypointList", "Read all waypoints from the MAV and display in View tab.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        refreshButton->setText(QApplication::translate("WaypointList", "Refresh", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(viewTab), QApplication::translate("WaypointList", "Onboard Waypoints", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class WaypointList: public Ui_WaypointList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WAYPOINTLIST_H
