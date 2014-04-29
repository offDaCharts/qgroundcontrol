/********************************************************************************
** Form generated from reading UI file 'QGCWelcomeMainWindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCWELCOMEMAINWINDOW_H
#define UI_QGCWELCOMEMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QGCWelcomeMainWindow
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *QGCWelcomeMainWindow)
    {
        if (QGCWelcomeMainWindow->objectName().isEmpty())
            QGCWelcomeMainWindow->setObjectName(QString::fromUtf8("QGCWelcomeMainWindow"));
        QGCWelcomeMainWindow->resize(800, 600);
        menubar = new QMenuBar(QGCWelcomeMainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        QGCWelcomeMainWindow->setMenuBar(menubar);
        centralwidget = new QWidget(QGCWelcomeMainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        QGCWelcomeMainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(QGCWelcomeMainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        QGCWelcomeMainWindow->setStatusBar(statusbar);

        retranslateUi(QGCWelcomeMainWindow);

        QMetaObject::connectSlotsByName(QGCWelcomeMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *QGCWelcomeMainWindow)
    {
        QGCWelcomeMainWindow->setWindowTitle(QApplication::translate("QGCWelcomeMainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QGCWelcomeMainWindow: public Ui_QGCWelcomeMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCWELCOMEMAINWINDOW_H
