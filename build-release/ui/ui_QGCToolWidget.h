/********************************************************************************
** Form generated from reading UI file 'QGCToolWidget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCTOOLWIDGET_H
#define UI_QGCTOOLWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QGCToolWidget
{
public:
    QVBoxLayout *toolLayout;
    QLabel *hintLabel;

    void setupUi(QWidget *QGCToolWidget)
    {
        if (QGCToolWidget->objectName().isEmpty())
            QGCToolWidget->setObjectName(QString::fromUtf8("QGCToolWidget"));
        QGCToolWidget->resize(400, 300);
        toolLayout = new QVBoxLayout(QGCToolWidget);
        toolLayout->setSpacing(0);
        toolLayout->setObjectName(QString::fromUtf8("toolLayout"));
        toolLayout->setContentsMargins(6, 0, 6, 0);
        hintLabel = new QLabel(QGCToolWidget);
        hintLabel->setObjectName(QString::fromUtf8("hintLabel"));

        toolLayout->addWidget(hintLabel);


        retranslateUi(QGCToolWidget);

        QMetaObject::connectSlotsByName(QGCToolWidget);
    } // setupUi

    void retranslateUi(QWidget *QGCToolWidget)
    {
        QGCToolWidget->setWindowTitle(QApplication::translate("QGCToolWidget", "Form", 0, QApplication::UnicodeUTF8));
        hintLabel->setText(QApplication::translate("QGCToolWidget", "Right-click into the widget to customize", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QGCToolWidget: public Ui_QGCToolWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCTOOLWIDGET_H
