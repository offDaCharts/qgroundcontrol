/********************************************************************************
** Form generated from reading UI file 'QGCConfigView.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCCONFIGVIEW_H
#define UI_QGCCONFIGVIEW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QGCConfigView
{
public:
    QGridLayout *gridLayout;
    QLabel *waitingLabel;

    void setupUi(QWidget *QGCConfigView)
    {
        if (QGCConfigView->objectName().isEmpty())
            QGCConfigView->setObjectName(QString::fromUtf8("QGCConfigView"));
        QGCConfigView->resize(400, 300);
        gridLayout = new QGridLayout(QGCConfigView);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        waitingLabel = new QLabel(QGCConfigView);
        waitingLabel->setObjectName(QString::fromUtf8("waitingLabel"));

        gridLayout->addWidget(waitingLabel, 0, 0, 1, 1);


        retranslateUi(QGCConfigView);

        QMetaObject::connectSlotsByName(QGCConfigView);
    } // setupUi

    void retranslateUi(QWidget *QGCConfigView)
    {
        QGCConfigView->setWindowTitle(QApplication::translate("QGCConfigView", "Form", 0, QApplication::UnicodeUTF8));
        waitingLabel->setText(QApplication::translate("QGCConfigView", "Waiting for connection...", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QGCConfigView: public Ui_QGCConfigView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCCONFIGVIEW_H
