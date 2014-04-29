/********************************************************************************
** Form generated from reading UI file 'AdvParameterList.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADVPARAMETERLIST_H
#define UI_ADVPARAMETERLIST_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdvParameterList
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTableWidget *tableWidget;

    void setupUi(QWidget *AdvParameterList)
    {
        if (AdvParameterList->objectName().isEmpty())
            AdvParameterList->setObjectName(QString::fromUtf8("AdvParameterList"));
        AdvParameterList->resize(666, 497);
        verticalLayout = new QVBoxLayout(AdvParameterList);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(AdvParameterList);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        tableWidget = new QTableWidget(AdvParameterList);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        verticalLayout->addWidget(tableWidget);


        retranslateUi(AdvParameterList);

        QMetaObject::connectSlotsByName(AdvParameterList);
    } // setupUi

    void retranslateUi(QWidget *AdvParameterList)
    {
        AdvParameterList->setWindowTitle(QApplication::translate("AdvParameterList", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("AdvParameterList", "<h2>Full Parameter List</h2>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AdvParameterList: public Ui_AdvParameterList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADVPARAMETERLIST_H
