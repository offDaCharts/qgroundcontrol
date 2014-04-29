/********************************************************************************
** Form generated from reading UI file 'QGCActionButton.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCACTIONBUTTON_H
#define UI_QGCACTIONBUTTON_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QGCActionButton
{
public:
    QGridLayout *gridLayout;
    QLabel *nameLabel;
    QComboBox *editActionComboBox;
    QPushButton *editActionsRefreshButton;
    QPushButton *editFinishButton;
    QLineEdit *editButtonName;
    QLineEdit *editNameLabel;
    QPushButton *actionButton;

    void setupUi(QWidget *QGCActionButton)
    {
        if (QGCActionButton->objectName().isEmpty())
            QGCActionButton->setObjectName(QString::fromUtf8("QGCActionButton"));
        QGCActionButton->resize(400, 111);
        gridLayout = new QGridLayout(QGCActionButton);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(6, 3, 6, 3);
        nameLabel = new QLabel(QGCActionButton);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));
        nameLabel->setMinimumSize(QSize(50, 0));
        nameLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(nameLabel, 1, 0, 1, 2);

        editActionComboBox = new QComboBox(QGCActionButton);
        editActionComboBox->setObjectName(QString::fromUtf8("editActionComboBox"));

        gridLayout->addWidget(editActionComboBox, 2, 0, 1, 1);

        editActionsRefreshButton = new QPushButton(QGCActionButton);
        editActionsRefreshButton->setObjectName(QString::fromUtf8("editActionsRefreshButton"));

        gridLayout->addWidget(editActionsRefreshButton, 2, 1, 1, 1);

        editFinishButton = new QPushButton(QGCActionButton);
        editFinishButton->setObjectName(QString::fromUtf8("editFinishButton"));

        gridLayout->addWidget(editFinishButton, 2, 2, 1, 1);

        editButtonName = new QLineEdit(QGCActionButton);
        editButtonName->setObjectName(QString::fromUtf8("editButtonName"));

        gridLayout->addWidget(editButtonName, 0, 2, 1, 1);

        editNameLabel = new QLineEdit(QGCActionButton);
        editNameLabel->setObjectName(QString::fromUtf8("editNameLabel"));

        gridLayout->addWidget(editNameLabel, 0, 0, 1, 2);

        actionButton = new QPushButton(QGCActionButton);
        actionButton->setObjectName(QString::fromUtf8("actionButton"));
        actionButton->setMinimumSize(QSize(30, 0));

        gridLayout->addWidget(actionButton, 1, 2, 1, 1);

        gridLayout->setColumnStretch(0, 100);
        gridLayout->setColumnStretch(1, 100);
        gridLayout->setColumnStretch(2, 50);

        retranslateUi(QGCActionButton);
        QObject::connect(editNameLabel, SIGNAL(textChanged(QString)), nameLabel, SLOT(setText(QString)));

        QMetaObject::connectSlotsByName(QGCActionButton);
    } // setupUi

    void retranslateUi(QWidget *QGCActionButton)
    {
        QGCActionButton->setWindowTitle(QApplication::translate("QGCActionButton", "Form", 0, QApplication::UnicodeUTF8));
        nameLabel->setText(QApplication::translate("QGCActionButton", "Description", 0, QApplication::UnicodeUTF8));
        editActionsRefreshButton->setText(QApplication::translate("QGCActionButton", "Refresh Actions", 0, QApplication::UnicodeUTF8));
        editFinishButton->setText(QApplication::translate("QGCActionButton", "Done", 0, QApplication::UnicodeUTF8));
        editButtonName->setPlaceholderText(QApplication::translate("QGCActionButton", "Button name", 0, QApplication::UnicodeUTF8));
        editNameLabel->setPlaceholderText(QApplication::translate("QGCActionButton", "Description", 0, QApplication::UnicodeUTF8));
        actionButton->setText(QApplication::translate("QGCActionButton", "Button name", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QGCActionButton: public Ui_QGCActionButton {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCACTIONBUTTON_H
