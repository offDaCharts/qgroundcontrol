/********************************************************************************
** Form generated from reading UI file 'FrameTypeConfig.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRAMETYPECONFIG_H
#define UI_FRAMETYPECONFIG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FrameTypeConfig
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QRadioButton *plusRadioButton;
    QRadioButton *xRadioButton;
    QRadioButton *vRadioButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *FrameTypeConfig)
    {
        if (FrameTypeConfig->objectName().isEmpty())
            FrameTypeConfig->setObjectName(QString::fromUtf8("FrameTypeConfig"));
        FrameTypeConfig->resize(553, 497);
        verticalLayout_2 = new QVBoxLayout(FrameTypeConfig);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(FrameTypeConfig);
        label->setObjectName(QString::fromUtf8("label"));
        label->setScaledContents(false);

        verticalLayout_2->addWidget(label);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        plusRadioButton = new QRadioButton(FrameTypeConfig);
        plusRadioButton->setObjectName(QString::fromUtf8("plusRadioButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/files/images/mavs/frames_plus.png"), QSize(), QIcon::Normal, QIcon::Off);
        plusRadioButton->setIcon(icon);
        plusRadioButton->setIconSize(QSize(300, 150));

        verticalLayout->addWidget(plusRadioButton);

        xRadioButton = new QRadioButton(FrameTypeConfig);
        xRadioButton->setObjectName(QString::fromUtf8("xRadioButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/files/images/mavs/frames_x.png"), QSize(), QIcon::Normal, QIcon::Off);
        xRadioButton->setIcon(icon1);
        xRadioButton->setIconSize(QSize(300, 150));

        verticalLayout->addWidget(xRadioButton);

        vRadioButton = new QRadioButton(FrameTypeConfig);
        vRadioButton->setObjectName(QString::fromUtf8("vRadioButton"));
        vRadioButton->setLayoutDirection(Qt::LeftToRight);
        vRadioButton->setAutoFillBackground(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/files/images/mavs/frames-05.png"), QSize(), QIcon::Normal, QIcon::Off);
        vRadioButton->setIcon(icon2);
        vRadioButton->setIconSize(QSize(300, 120));

        verticalLayout->addWidget(vRadioButton);


        verticalLayout_2->addLayout(verticalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        retranslateUi(FrameTypeConfig);

        QMetaObject::connectSlotsByName(FrameTypeConfig);
    } // setupUi

    void retranslateUi(QWidget *FrameTypeConfig)
    {
        FrameTypeConfig->setWindowTitle(QApplication::translate("FrameTypeConfig", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("FrameTypeConfig", "<h2>Frame Setup</h2>", 0, QApplication::UnicodeUTF8));
        plusRadioButton->setText(QApplication::translate("FrameTypeConfig", "'Plus' Style", 0, QApplication::UnicodeUTF8));
        xRadioButton->setText(QApplication::translate("FrameTypeConfig", "'X' Style", 0, QApplication::UnicodeUTF8));
        vRadioButton->setText(QApplication::translate("FrameTypeConfig", "'V' Style", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FrameTypeConfig: public Ui_FrameTypeConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRAMETYPECONFIG_H
