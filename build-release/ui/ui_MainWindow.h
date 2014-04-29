/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QAction *actionLiftoff;
    QAction *actionLand;
    QAction *actionEmergency_Land;
    QAction *actionEmergency_Kill;
    QAction *actionAdd_Link;
    QAction *actionConfiguration;
    QAction *actionJoystickSettings;
    QAction *actionSimulate;
    QAction *actionShow_Slugs_View;
    QAction *actionJoystick_Settings;
    QAction *actionOnline_Documentation;
    QAction *actionProject_Roadmap_2;
    QAction *actionDeveloper_Credits;
    QAction *actionMissionView;
    QAction *actionEngineersView;
    QAction *actionMavlinkView;
    QAction *actionFlightView;
    QAction *actionNewCustomWidget;
    QAction *actionMuteAudioOutput;
    QAction *actionUnconnectedView;
    QAction *actionShutdownMAV;
    QAction *actionSettings;
    QAction *actionFullscreen;
    QAction *actionNormal;
    QAction *actionLoadCustomWidgetFile;
    QAction *actionFirmwareUpdateView;
    QAction *actionSimulation_View;
    QAction *actionHardwareConfig;
    QAction *actionAdvanced_Mode;
    QAction *actionSimulationView;
    QAction *actionSoftwareConfig;
    QAction *actionTerminalView;
    QAction *actionGoogleEarthView;
    QAction *actionLocal3DView;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuMGround;
    QMenu *menuNetwork;
    QMenu *menuTools;
    QMenu *menuHelp;
    QMenu *menuPerspectives;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1024, 600);
        MainWindow->setMinimumSize(QSize(1024, 600));
        MainWindow->setBaseSize(QSize(1100, 800));
        MainWindow->setMouseTracking(false);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/files/images/actions/system-log-out.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon);
        actionLiftoff = new QAction(MainWindow);
        actionLiftoff->setObjectName(QString::fromUtf8("actionLiftoff"));
        actionLiftoff->setEnabled(true);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/files/images/control/launch.svg"), QSize(), QIcon::Normal, QIcon::Off);
        icon1.addFile(QString::fromUtf8(":/files/images/control/launch.svg"), QSize(), QIcon::Normal, QIcon::On);
        actionLiftoff->setIcon(icon1);
        actionLand = new QAction(MainWindow);
        actionLand->setObjectName(QString::fromUtf8("actionLand"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/files/images/control/land.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionLand->setIcon(icon2);
        actionEmergency_Land = new QAction(MainWindow);
        actionEmergency_Land->setObjectName(QString::fromUtf8("actionEmergency_Land"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/files/images/actions/process-stop.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionEmergency_Land->setIcon(icon3);
        actionEmergency_Kill = new QAction(MainWindow);
        actionEmergency_Kill->setObjectName(QString::fromUtf8("actionEmergency_Kill"));
        actionEmergency_Kill->setIcon(icon3);
        actionAdd_Link = new QAction(MainWindow);
        actionAdd_Link->setObjectName(QString::fromUtf8("actionAdd_Link"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/files/images/actions/list-add.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionAdd_Link->setIcon(icon4);
        actionConfiguration = new QAction(MainWindow);
        actionConfiguration->setObjectName(QString::fromUtf8("actionConfiguration"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/files/images/categories/applications-system.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionConfiguration->setIcon(icon5);
        actionJoystickSettings = new QAction(MainWindow);
        actionJoystickSettings->setObjectName(QString::fromUtf8("actionJoystickSettings"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/files/images/devices/input-gaming.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionJoystickSettings->setIcon(icon6);
        actionJoystickSettings->setVisible(true);
        actionSimulate = new QAction(MainWindow);
        actionSimulate->setObjectName(QString::fromUtf8("actionSimulate"));
        actionSimulate->setCheckable(true);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/files/images/control/launch.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionSimulate->setIcon(icon7);
        actionShow_Slugs_View = new QAction(MainWindow);
        actionShow_Slugs_View->setObjectName(QString::fromUtf8("actionShow_Slugs_View"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/files/images/contrib/slugs.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionShow_Slugs_View->setIcon(icon8);
        actionJoystick_Settings = new QAction(MainWindow);
        actionJoystick_Settings->setObjectName(QString::fromUtf8("actionJoystick_Settings"));
        actionJoystick_Settings->setIcon(icon6);
        actionJoystick_Settings->setVisible(false);
        actionOnline_Documentation = new QAction(MainWindow);
        actionOnline_Documentation->setObjectName(QString::fromUtf8("actionOnline_Documentation"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/files/images/apps/utilities-system-monitor.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionOnline_Documentation->setIcon(icon9);
        actionProject_Roadmap_2 = new QAction(MainWindow);
        actionProject_Roadmap_2->setObjectName(QString::fromUtf8("actionProject_Roadmap_2"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/files/images/status/software-update-available.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionProject_Roadmap_2->setIcon(icon10);
        actionDeveloper_Credits = new QAction(MainWindow);
        actionDeveloper_Credits->setObjectName(QString::fromUtf8("actionDeveloper_Credits"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/files/images/categories/preferences-system.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionDeveloper_Credits->setIcon(icon11);
        actionMissionView = new QAction(MainWindow);
        actionMissionView->setObjectName(QString::fromUtf8("actionMissionView"));
        actionMissionView->setCheckable(true);
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/files/images/categories/applications-internet.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionMissionView->setIcon(icon12);
        actionEngineersView = new QAction(MainWindow);
        actionEngineersView->setObjectName(QString::fromUtf8("actionEngineersView"));
        actionEngineersView->setCheckable(true);
        actionEngineersView->setIcon(icon9);
        actionMavlinkView = new QAction(MainWindow);
        actionMavlinkView->setObjectName(QString::fromUtf8("actionMavlinkView"));
        actionMavlinkView->setCheckable(true);
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/files/images/devices/network-wired.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionMavlinkView->setIcon(icon13);
        actionFlightView = new QAction(MainWindow);
        actionFlightView->setObjectName(QString::fromUtf8("actionFlightView"));
        actionFlightView->setCheckable(true);
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/files/images/status/network-wireless-encrypted.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionFlightView->setIcon(icon14);
        actionNewCustomWidget = new QAction(MainWindow);
        actionNewCustomWidget->setObjectName(QString::fromUtf8("actionNewCustomWidget"));
        actionNewCustomWidget->setIcon(icon9);
        actionMuteAudioOutput = new QAction(MainWindow);
        actionMuteAudioOutput->setObjectName(QString::fromUtf8("actionMuteAudioOutput"));
        actionMuteAudioOutput->setCheckable(true);
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/files/images/status/audio-volume-high.svg"), QSize(), QIcon::Normal, QIcon::Off);
        icon15.addFile(QString::fromUtf8(":/files/images/status/audio-volume-muted.svg"), QSize(), QIcon::Normal, QIcon::On);
        icon15.addFile(QString::fromUtf8(":/files/images/status/audio-volume-muted.svg"), QSize(), QIcon::Active, QIcon::On);
        icon15.addFile(QString::fromUtf8(":/files/images/status/audio-volume-high.svg"), QSize(), QIcon::Selected, QIcon::Off);
        icon15.addFile(QString::fromUtf8(":/files/images/status/audio-volume-muted.svg"), QSize(), QIcon::Selected, QIcon::On);
        actionMuteAudioOutput->setIcon(icon15);
        actionUnconnectedView = new QAction(MainWindow);
        actionUnconnectedView->setObjectName(QString::fromUtf8("actionUnconnectedView"));
        actionUnconnectedView->setCheckable(true);
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/files/images/devices/network-wireless.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionUnconnectedView->setIcon(icon16);
        actionShutdownMAV = new QAction(MainWindow);
        actionShutdownMAV->setObjectName(QString::fromUtf8("actionShutdownMAV"));
        actionShutdownMAV->setIcon(icon);
        actionSettings = new QAction(MainWindow);
        actionSettings->setObjectName(QString::fromUtf8("actionSettings"));
        actionFullscreen = new QAction(MainWindow);
        actionFullscreen->setObjectName(QString::fromUtf8("actionFullscreen"));
        actionNormal = new QAction(MainWindow);
        actionNormal->setObjectName(QString::fromUtf8("actionNormal"));
        actionLoadCustomWidgetFile = new QAction(MainWindow);
        actionLoadCustomWidgetFile->setObjectName(QString::fromUtf8("actionLoadCustomWidgetFile"));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/files/images/status/folder-drag-accept.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionLoadCustomWidgetFile->setIcon(icon17);
        actionFirmwareUpdateView = new QAction(MainWindow);
        actionFirmwareUpdateView->setObjectName(QString::fromUtf8("actionFirmwareUpdateView"));
        actionFirmwareUpdateView->setIcon(icon10);
        actionSimulation_View = new QAction(MainWindow);
        actionSimulation_View->setObjectName(QString::fromUtf8("actionSimulation_View"));
        actionSimulation_View->setCheckable(true);
        actionSimulation_View->setIcon(icon7);
        actionHardwareConfig = new QAction(MainWindow);
        actionHardwareConfig->setObjectName(QString::fromUtf8("actionHardwareConfig"));
        actionHardwareConfig->setCheckable(true);
        actionHardwareConfig->setIcon(icon11);
        actionAdvanced_Mode = new QAction(MainWindow);
        actionAdvanced_Mode->setObjectName(QString::fromUtf8("actionAdvanced_Mode"));
        actionAdvanced_Mode->setCheckable(true);
        actionSimulationView = new QAction(MainWindow);
        actionSimulationView->setObjectName(QString::fromUtf8("actionSimulationView"));
        actionSimulationView->setCheckable(true);
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/files/images/apps/accessories-calculator.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionSimulationView->setIcon(icon18);
        actionSoftwareConfig = new QAction(MainWindow);
        actionSoftwareConfig->setObjectName(QString::fromUtf8("actionSoftwareConfig"));
        actionSoftwareConfig->setCheckable(true);
        actionSoftwareConfig->setIcon(icon5);
        actionTerminalView = new QAction(MainWindow);
        actionTerminalView->setObjectName(QString::fromUtf8("actionTerminalView"));
        actionTerminalView->setCheckable(true);
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/files/images/apps/utilities-terminal.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionTerminalView->setIcon(icon19);
        actionGoogleEarthView = new QAction(MainWindow);
        actionGoogleEarthView->setObjectName(QString::fromUtf8("actionGoogleEarthView"));
        actionLocal3DView = new QAction(MainWindow);
        actionLocal3DView->setObjectName(QString::fromUtf8("actionLocal3DView"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        centralWidget->setMinimumSize(QSize(200, 150));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1024, 22));
        menuMGround = new QMenu(menuBar);
        menuMGround->setObjectName(QString::fromUtf8("menuMGround"));
        menuNetwork = new QMenu(menuBar);
        menuNetwork->setObjectName(QString::fromUtf8("menuNetwork"));
        menuTools = new QMenu(menuBar);
        menuTools->setObjectName(QString::fromUtf8("menuTools"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuPerspectives = new QMenu(menuBar);
        menuPerspectives->setObjectName(QString::fromUtf8("menuPerspectives"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuMGround->menuAction());
        menuBar->addAction(menuNetwork->menuAction());
        menuBar->addAction(menuPerspectives->menuAction());
        menuBar->addAction(menuTools->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuMGround->addAction(actionJoystick_Settings);
        menuMGround->addAction(actionSimulate);
        menuMGround->addSeparator();
        menuMGround->addAction(actionMuteAudioOutput);
        menuMGround->addAction(actionJoystickSettings);
        menuMGround->addAction(actionSettings);
        menuMGround->addAction(actionAdvanced_Mode);
        menuMGround->addSeparator();
        menuMGround->addAction(actionExit);
        menuNetwork->addAction(actionAdd_Link);
        menuNetwork->addSeparator();
        menuTools->addAction(actionNewCustomWidget);
        menuTools->addAction(actionLoadCustomWidgetFile);
        menuTools->addSeparator();
        menuHelp->addAction(actionOnline_Documentation);
        menuHelp->addAction(actionProject_Roadmap_2);
        menuHelp->addAction(actionDeveloper_Credits);
        menuPerspectives->addAction(actionMissionView);
        menuPerspectives->addAction(actionFlightView);
        menuPerspectives->addAction(actionHardwareConfig);
        menuPerspectives->addAction(actionSoftwareConfig);
        menuPerspectives->addAction(actionTerminalView);
        menuPerspectives->addAction(actionEngineersView);
        menuPerspectives->addAction(actionSimulationView);
        menuPerspectives->addAction(actionGoogleEarthView);
        menuPerspectives->addAction(actionLocal3DView);
        menuPerspectives->addSeparator();
        menuPerspectives->addAction(actionFirmwareUpdateView);
        menuPerspectives->addAction(actionMavlinkView);
        menuPerspectives->addAction(actionUnconnectedView);
        menuPerspectives->addSeparator();
        menuPerspectives->addAction(actionFullscreen);
        menuPerspectives->addAction(actionNormal);

        retranslateUi(MainWindow);
        QObject::connect(actionExit, SIGNAL(triggered()), MainWindow, SLOT(close()));
        QObject::connect(actionFullscreen, SIGNAL(triggered()), MainWindow, SLOT(showFullScreen()));
        QObject::connect(actionNormal, SIGNAL(triggered()), MainWindow, SLOT(showNormal()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MGMainWindow", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", 0, QApplication::UnicodeUTF8));
        actionExit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
        actionLiftoff->setText(QApplication::translate("MainWindow", "Liftoff", 0, QApplication::UnicodeUTF8));
        actionLand->setText(QApplication::translate("MainWindow", "Land", 0, QApplication::UnicodeUTF8));
        actionEmergency_Land->setText(QApplication::translate("MainWindow", "Emergency Land", 0, QApplication::UnicodeUTF8));
        actionEmergency_Land->setShortcut(QApplication::translate("MainWindow", "Ctrl+E", 0, QApplication::UnicodeUTF8));
        actionEmergency_Kill->setText(QApplication::translate("MainWindow", "Kill UAS", 0, QApplication::UnicodeUTF8));
        actionEmergency_Kill->setShortcut(QApplication::translate("MainWindow", "Ctrl+K", 0, QApplication::UnicodeUTF8));
        actionAdd_Link->setText(QApplication::translate("MainWindow", "Add Link", 0, QApplication::UnicodeUTF8));
        actionConfiguration->setText(QApplication::translate("MainWindow", "Preferences", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionConfiguration->setToolTip(QApplication::translate("MainWindow", "Open UAS Preferences", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionJoystickSettings->setText(QApplication::translate("MainWindow", "Joystick Configuration", 0, QApplication::UnicodeUTF8));
        actionSimulate->setText(QApplication::translate("MainWindow", "Simulate", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSimulate->setToolTip(QApplication::translate("MainWindow", "Simulate one vehicle to test and evaluate this application", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionShow_Slugs_View->setText(QApplication::translate("MainWindow", "Show Slugs View", 0, QApplication::UnicodeUTF8));
        actionJoystick_Settings->setText(QApplication::translate("MainWindow", "Joystick Settings", 0, QApplication::UnicodeUTF8));
        actionOnline_Documentation->setText(QApplication::translate("MainWindow", "Online Documentation", 0, QApplication::UnicodeUTF8));
        actionProject_Roadmap_2->setText(QApplication::translate("MainWindow", "Project Roadmap", 0, QApplication::UnicodeUTF8));
        actionDeveloper_Credits->setText(QApplication::translate("MainWindow", "Developer Credits", 0, QApplication::UnicodeUTF8));
        actionMissionView->setText(QApplication::translate("MainWindow", "Mission", 0, QApplication::UnicodeUTF8));
        actionMissionView->setShortcut(QApplication::translate("MainWindow", "Meta+O", 0, QApplication::UnicodeUTF8));
        actionEngineersView->setText(QApplication::translate("MainWindow", "Plot", 0, QApplication::UnicodeUTF8));
        actionEngineersView->setShortcut(QApplication::translate("MainWindow", "Meta+E", 0, QApplication::UnicodeUTF8));
        actionMavlinkView->setText(QApplication::translate("MainWindow", "Mavlink", 0, QApplication::UnicodeUTF8));
        actionMavlinkView->setShortcut(QApplication::translate("MainWindow", "Meta+M", 0, QApplication::UnicodeUTF8));
        actionFlightView->setText(QApplication::translate("MainWindow", "Flight", 0, QApplication::UnicodeUTF8));
        actionFlightView->setShortcut(QApplication::translate("MainWindow", "Meta+P", 0, QApplication::UnicodeUTF8));
        actionNewCustomWidget->setText(QApplication::translate("MainWindow", "New Custom Widget", 0, QApplication::UnicodeUTF8));
        actionMuteAudioOutput->setText(QApplication::translate("MainWindow", "Mute Audio Output", 0, QApplication::UnicodeUTF8));
        actionUnconnectedView->setText(QApplication::translate("MainWindow", "Unconnected", 0, QApplication::UnicodeUTF8));
        actionUnconnectedView->setShortcut(QApplication::translate("MainWindow", "Meta+U", 0, QApplication::UnicodeUTF8));
        actionShutdownMAV->setText(QApplication::translate("MainWindow", "Shutdown MAV", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionShutdownMAV->setToolTip(QApplication::translate("MainWindow", "Shutdown the onboard computer - works not during flight", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionShutdownMAV->setStatusTip(QApplication::translate("MainWindow", "Shutdown the onboard computer - works not during flight", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionSettings->setText(QApplication::translate("MainWindow", "Settings", 0, QApplication::UnicodeUTF8));
        actionFullscreen->setText(QApplication::translate("MainWindow", "Fullscreen", 0, QApplication::UnicodeUTF8));
        actionFullscreen->setShortcut(QApplication::translate("MainWindow", "Meta+Return", 0, QApplication::UnicodeUTF8));
        actionNormal->setText(QApplication::translate("MainWindow", "Normal", 0, QApplication::UnicodeUTF8));
        actionNormal->setShortcut(QApplication::translate("MainWindow", "Esc", 0, QApplication::UnicodeUTF8));
        actionLoadCustomWidgetFile->setText(QApplication::translate("MainWindow", "Load Custom Widget File", 0, QApplication::UnicodeUTF8));
        actionFirmwareUpdateView->setText(QApplication::translate("MainWindow", "Firmware Update", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionFirmwareUpdateView->setToolTip(QApplication::translate("MainWindow", "Update the firmware of one of the connected autopilots", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionSimulation_View->setText(QApplication::translate("MainWindow", "Simulation", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSimulation_View->setToolTip(QApplication::translate("MainWindow", "Open the simulation view", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionHardwareConfig->setText(QApplication::translate("MainWindow", "Hardware", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionHardwareConfig->setToolTip(QApplication::translate("MainWindow", "Configuration options of the vehicle.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionAdvanced_Mode->setText(QApplication::translate("MainWindow", "Advanced Mode", 0, QApplication::UnicodeUTF8));
        actionSimulationView->setText(QApplication::translate("MainWindow", "Simulation", 0, QApplication::UnicodeUTF8));
        actionSoftwareConfig->setText(QApplication::translate("MainWindow", "Software", 0, QApplication::UnicodeUTF8));
        actionTerminalView->setText(QApplication::translate("MainWindow", "Terminal", 0, QApplication::UnicodeUTF8));
        actionGoogleEarthView->setText(QApplication::translate("MainWindow", "Google Earth", 0, QApplication::UnicodeUTF8));
        actionLocal3DView->setText(QApplication::translate("MainWindow", "Local 3D View", 0, QApplication::UnicodeUTF8));
        menuMGround->setTitle(QApplication::translate("MainWindow", "File", 0, QApplication::UnicodeUTF8));
        menuNetwork->setTitle(QApplication::translate("MainWindow", "Communication", 0, QApplication::UnicodeUTF8));
        menuTools->setTitle(QApplication::translate("MainWindow", "Tool Widgets", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0, QApplication::UnicodeUTF8));
        menuPerspectives->setTitle(QApplication::translate("MainWindow", "Perspectives", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
