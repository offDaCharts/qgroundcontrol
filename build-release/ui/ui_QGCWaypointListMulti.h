/********************************************************************************
** Form generated from reading UI file 'QGCWaypointListMulti.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCWAYPOINTLISTMULTI_H
#define UI_QGCWAYPOINTLISTMULTI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QStackedWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QGCWaypointListMulti
{
public:
    QHBoxLayout *horizontalLayout;
    QStackedWidget *stackedWidget;

    void setupUi(QWidget *QGCWaypointListMulti)
    {
        if (QGCWaypointListMulti->objectName().isEmpty())
            QGCWaypointListMulti->setObjectName(QString::fromUtf8("QGCWaypointListMulti"));
        QGCWaypointListMulti->resize(400, 300);
        horizontalLayout = new QHBoxLayout(QGCWaypointListMulti);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        stackedWidget = new QStackedWidget(QGCWaypointListMulti);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));

        horizontalLayout->addWidget(stackedWidget);


        retranslateUi(QGCWaypointListMulti);

        QMetaObject::connectSlotsByName(QGCWaypointListMulti);
    } // setupUi

    void retranslateUi(QWidget *QGCWaypointListMulti)
    {
        QGCWaypointListMulti->setWindowTitle(QApplication::translate("QGCWaypointListMulti", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QGCWaypointListMulti: public Ui_QGCWaypointListMulti {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCWAYPOINTLISTMULTI_H
