/********************************************************************************
** Form generated from reading UI file 'QGCTabbedInfoView.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCTABBEDINFOVIEW_H
#define UI_QGCTABBEDINFOVIEW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QGCTabbedInfoView
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;

    void setupUi(QWidget *QGCTabbedInfoView)
    {
        if (QGCTabbedInfoView->objectName().isEmpty())
            QGCTabbedInfoView->setObjectName(QString::fromUtf8("QGCTabbedInfoView"));
        QGCTabbedInfoView->resize(571, 457);
        verticalLayout = new QVBoxLayout(QGCTabbedInfoView);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(QGCTabbedInfoView);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));

        verticalLayout->addWidget(tabWidget);


        retranslateUi(QGCTabbedInfoView);

        tabWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(QGCTabbedInfoView);
    } // setupUi

    void retranslateUi(QWidget *QGCTabbedInfoView)
    {
        QGCTabbedInfoView->setWindowTitle(QApplication::translate("QGCTabbedInfoView", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QGCTabbedInfoView: public Ui_QGCTabbedInfoView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCTABBEDINFOVIEW_H
