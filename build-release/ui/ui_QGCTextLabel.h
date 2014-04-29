/********************************************************************************
** Form generated from reading UI file 'QGCTextLabel.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCTEXTLABEL_H
#define UI_QGCTEXTLABEL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QGCTextLabel
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *editLine1;
    QHBoxLayout *horizontalLayout;
    QLineEdit *editNameLabel;
    QCheckBox *isMavCommand;
    QHBoxLayout *horizontalLayout_2;
    QLabel *nameLabel;
    QLabel *textLabel;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *editFinishButton;
    QFrame *editLine2;

    void setupUi(QWidget *QGCTextLabel)
    {
        if (QGCTextLabel->objectName().isEmpty())
            QGCTextLabel->setObjectName(QString::fromUtf8("QGCTextLabel"));
        QGCTextLabel->resize(554, 107);
        verticalLayout = new QVBoxLayout(QGCTextLabel);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        editLine1 = new QFrame(QGCTextLabel);
        editLine1->setObjectName(QString::fromUtf8("editLine1"));
        editLine1->setMinimumSize(QSize(0, 0));
        editLine1->setFrameShape(QFrame::HLine);
        editLine1->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(editLine1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        editNameLabel = new QLineEdit(QGCTextLabel);
        editNameLabel->setObjectName(QString::fromUtf8("editNameLabel"));

        horizontalLayout->addWidget(editNameLabel);

        isMavCommand = new QCheckBox(QGCTextLabel);
        isMavCommand->setObjectName(QString::fromUtf8("isMavCommand"));

        horizontalLayout->addWidget(isMavCommand);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        nameLabel = new QLabel(QGCTextLabel);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));
        nameLabel->setMinimumSize(QSize(50, 0));
        nameLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(nameLabel);

        textLabel = new QLabel(QGCTextLabel);
        textLabel->setObjectName(QString::fromUtf8("textLabel"));

        horizontalLayout_2->addWidget(textLabel);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        editFinishButton = new QPushButton(QGCTextLabel);
        editFinishButton->setObjectName(QString::fromUtf8("editFinishButton"));

        horizontalLayout_3->addWidget(editFinishButton);


        verticalLayout->addLayout(horizontalLayout_3);

        editLine2 = new QFrame(QGCTextLabel);
        editLine2->setObjectName(QString::fromUtf8("editLine2"));
        editLine2->setMinimumSize(QSize(0, 0));
        editLine2->setFrameShape(QFrame::HLine);
        editLine2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(editLine2);


        retranslateUi(QGCTextLabel);
        QObject::connect(editNameLabel, SIGNAL(textChanged(QString)), nameLabel, SLOT(setText(QString)));
        QObject::connect(editNameLabel, SIGNAL(returnPressed()), editFinishButton, SLOT(animateClick()));

        QMetaObject::connectSlotsByName(QGCTextLabel);
    } // setupUi

    void retranslateUi(QWidget *QGCTextLabel)
    {
        QGCTextLabel->setWindowTitle(QApplication::translate("QGCTextLabel", "Form", 0, QApplication::UnicodeUTF8));
        editNameLabel->setText(QString());
        editNameLabel->setPlaceholderText(QApplication::translate("QGCTextLabel", "Label Description", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        isMavCommand->setToolTip(QApplication::translate("QGCTextLabel", "This is only for advanced use, and allows a label to display the results of a Command Button.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        isMavCommand->setText(QApplication::translate("QGCTextLabel", "Mav Command", 0, QApplication::UnicodeUTF8));
        nameLabel->setText(QApplication::translate("QGCTextLabel", "Text Label", 0, QApplication::UnicodeUTF8));
        textLabel->setText(QApplication::translate("QGCTextLabel", "mav result", 0, QApplication::UnicodeUTF8));
        editFinishButton->setText(QApplication::translate("QGCTextLabel", "Done", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QGCTextLabel: public Ui_QGCTextLabel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCTEXTLABEL_H
