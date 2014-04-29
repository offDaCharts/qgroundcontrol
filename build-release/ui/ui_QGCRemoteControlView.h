/********************************************************************************
** Form generated from reading UI file 'QGCRemoteControlView.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCREMOTECONTROLVIEW_H
#define UI_QGCREMOTECONTROLVIEW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QGCRemoteControlView
{
public:

    void setupUi(QWidget *QGCRemoteControlView)
    {
        if (QGCRemoteControlView->objectName().isEmpty())
            QGCRemoteControlView->setObjectName(QString::fromUtf8("QGCRemoteControlView"));
        QGCRemoteControlView->resize(155, 106);

        retranslateUi(QGCRemoteControlView);

        QMetaObject::connectSlotsByName(QGCRemoteControlView);
    } // setupUi

    void retranslateUi(QWidget *QGCRemoteControlView)
    {
        QGCRemoteControlView->setWindowTitle(QApplication::translate("QGCRemoteControlView", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QGCRemoteControlView: public Ui_QGCRemoteControlView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCREMOTECONTROLVIEW_H
