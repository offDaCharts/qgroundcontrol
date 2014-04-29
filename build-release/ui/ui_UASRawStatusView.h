/********************************************************************************
** Form generated from reading UI file 'UASRawStatusView.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UASRAWSTATUSVIEW_H
#define UI_UASRAWSTATUSVIEW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UASRawStatusView
{
public:
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidget;

    void setupUi(QWidget *UASRawStatusView)
    {
        if (UASRawStatusView->objectName().isEmpty())
            UASRawStatusView->setObjectName(QString::fromUtf8("UASRawStatusView"));
        UASRawStatusView->resize(400, 300);
        verticalLayout = new QVBoxLayout(UASRawStatusView);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tableWidget = new QTableWidget(UASRawStatusView);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        verticalLayout->addWidget(tableWidget);


        retranslateUi(UASRawStatusView);

        QMetaObject::connectSlotsByName(UASRawStatusView);
    } // setupUi

    void retranslateUi(QWidget *UASRawStatusView)
    {
        UASRawStatusView->setWindowTitle(QApplication::translate("UASRawStatusView", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class UASRawStatusView: public Ui_UASRawStatusView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UASRAWSTATUSVIEW_H
