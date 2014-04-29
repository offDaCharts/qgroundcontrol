/********************************************************************************
** Form generated from reading UI file 'QGCMAVLinkMessageSender.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCMAVLINKMESSAGESENDER_H
#define UI_QGCMAVLINKMESSAGESENDER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QTreeWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QGCMAVLinkMessageSender
{
public:
    QGridLayout *gridLayout;
    QTreeWidget *treeWidget;
    QSpinBox *messageIdSpinBox;
    QPushButton *sendButton;

    void setupUi(QWidget *QGCMAVLinkMessageSender)
    {
        if (QGCMAVLinkMessageSender->objectName().isEmpty())
            QGCMAVLinkMessageSender->setObjectName(QString::fromUtf8("QGCMAVLinkMessageSender"));
        QGCMAVLinkMessageSender->resize(400, 300);
        gridLayout = new QGridLayout(QGCMAVLinkMessageSender);
        gridLayout->setContentsMargins(6, 6, 6, 6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        treeWidget = new QTreeWidget(QGCMAVLinkMessageSender);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));

        gridLayout->addWidget(treeWidget, 0, 0, 1, 2);

        messageIdSpinBox = new QSpinBox(QGCMAVLinkMessageSender);
        messageIdSpinBox->setObjectName(QString::fromUtf8("messageIdSpinBox"));

        gridLayout->addWidget(messageIdSpinBox, 1, 0, 1, 1);

        sendButton = new QPushButton(QGCMAVLinkMessageSender);
        sendButton->setObjectName(QString::fromUtf8("sendButton"));

        gridLayout->addWidget(sendButton, 1, 1, 1, 1);


        retranslateUi(QGCMAVLinkMessageSender);

        QMetaObject::connectSlotsByName(QGCMAVLinkMessageSender);
    } // setupUi

    void retranslateUi(QWidget *QGCMAVLinkMessageSender)
    {
        QGCMAVLinkMessageSender->setWindowTitle(QApplication::translate("QGCMAVLinkMessageSender", "Form", 0, QApplication::UnicodeUTF8));
        sendButton->setText(QApplication::translate("QGCMAVLinkMessageSender", "Send Message", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QGCMAVLinkMessageSender: public Ui_QGCMAVLinkMessageSender {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCMAVLINKMESSAGESENDER_H
