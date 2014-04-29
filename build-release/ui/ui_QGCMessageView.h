/********************************************************************************
** Form generated from reading UI file 'QGCMessageView.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCMESSAGEVIEW_H
#define UI_QGCMESSAGEVIEW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QGCMessageView
{
public:
    QHBoxLayout *horizontalLayout;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QWidget *QGCMessageView)
    {
        if (QGCMessageView->objectName().isEmpty())
            QGCMessageView->setObjectName(QString::fromUtf8("QGCMessageView"));
        QGCMessageView->resize(248, 249);
        QGCMessageView->setContextMenuPolicy(Qt::NoContextMenu);
        horizontalLayout = new QHBoxLayout(QGCMessageView);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 8, 0, 0);
        plainTextEdit = new QPlainTextEdit(QGCMessageView);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setContextMenuPolicy(Qt::ActionsContextMenu);
        plainTextEdit->setAcceptDrops(false);
        plainTextEdit->setUndoRedoEnabled(false);
        plainTextEdit->setReadOnly(true);
        plainTextEdit->setPlainText(QString::fromUtf8(""));

        horizontalLayout->addWidget(plainTextEdit);


        retranslateUi(QGCMessageView);

        QMetaObject::connectSlotsByName(QGCMessageView);
    } // setupUi

    void retranslateUi(QWidget *QGCMessageView)
    {
        QGCMessageView->setWindowTitle(QApplication::translate("QGCMessageView", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QGCMessageView: public Ui_QGCMessageView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCMESSAGEVIEW_H
