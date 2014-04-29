/********************************************************************************
** Form generated from reading UI file 'QGCViewModeSelection.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCVIEWMODESELECTION_H
#define UI_QGCVIEWMODESELECTION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QGCViewModeSelection
{
public:
    QGridLayout *gridLayout_2;
    QCheckBox *notAgainCheckBox;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QWidget *viewModeWidget;
    QGridLayout *gridLayout;
    QPushButton *viewModeAR;
    QLabel *label_3;
    QLabel *label_2;
    QPushButton *viewModeAPM;
    QLabel *label_4;
    QPushButton *viewModePX4;
    QPushButton *viewModeGeneric;
    QLabel *label;
    QLabel *viewModeHintLabel;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QGCViewModeSelection)
    {
        if (QGCViewModeSelection->objectName().isEmpty())
            QGCViewModeSelection->setObjectName(QString::fromUtf8("QGCViewModeSelection"));
        QGCViewModeSelection->resize(750, 409);
        gridLayout_2 = new QGridLayout(QGCViewModeSelection);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        notAgainCheckBox = new QCheckBox(QGCViewModeSelection);
        notAgainCheckBox->setObjectName(QString::fromUtf8("notAgainCheckBox"));

        gridLayout_2->addWidget(notAgainCheckBox, 3, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(47, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 2, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(46, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 2, 2, 1, 1);

        viewModeWidget = new QWidget(QGCViewModeSelection);
        viewModeWidget->setObjectName(QString::fromUtf8("viewModeWidget"));
        gridLayout = new QGridLayout(viewModeWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        viewModeAR = new QPushButton(viewModeWidget);
        viewModeAR->setObjectName(QString::fromUtf8("viewModeAR"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/files/images/actions/qgroundcontrol-wifi.svg"), QSize(), QIcon::Normal, QIcon::Off);
        viewModeAR->setIcon(icon);
        viewModeAR->setIconSize(QSize(120, 120));

        gridLayout->addWidget(viewModeAR, 1, 1, 1, 1);

        label_3 = new QLabel(viewModeWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 3, 1, 1);

        label_2 = new QLabel(viewModeWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 2, 1, 1);

        viewModeAPM = new QPushButton(viewModeWidget);
        viewModeAPM->setObjectName(QString::fromUtf8("viewModeAPM"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/files/images/actions/qgroundcontrol-apm.svg"), QSize(), QIcon::Normal, QIcon::Off);
        viewModeAPM->setIcon(icon1);
        viewModeAPM->setIconSize(QSize(120, 120));

        gridLayout->addWidget(viewModeAPM, 1, 3, 1, 1);

        label_4 = new QLabel(viewModeWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 2, 1, 1, 1);

        viewModePX4 = new QPushButton(viewModeWidget);
        viewModePX4->setObjectName(QString::fromUtf8("viewModePX4"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/files/images/actions/qgroundcontrol-px4.svg"), QSize(), QIcon::Normal, QIcon::Off);
        viewModePX4->setIcon(icon2);
        viewModePX4->setIconSize(QSize(120, 120));

        gridLayout->addWidget(viewModePX4, 1, 2, 1, 1);

        viewModeGeneric = new QPushButton(viewModeWidget);
        viewModeGeneric->setObjectName(QString::fromUtf8("viewModeGeneric"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/files/images/actions/qgroundcontrol-generic.svg"), QSize(), QIcon::Normal, QIcon::Off);
        viewModeGeneric->setIcon(icon3);
        viewModeGeneric->setIconSize(QSize(120, 120));

        gridLayout->addWidget(viewModeGeneric, 1, 0, 1, 1);

        label = new QLabel(viewModeWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 2, 0, 1, 1);


        gridLayout_2->addWidget(viewModeWidget, 2, 1, 1, 1);

        viewModeHintLabel = new QLabel(QGCViewModeSelection);
        viewModeHintLabel->setObjectName(QString::fromUtf8("viewModeHintLabel"));

        gridLayout_2->addWidget(viewModeHintLabel, 1, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 76, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 5, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 76, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 0, 1, 1, 1);


        retranslateUi(QGCViewModeSelection);

        QMetaObject::connectSlotsByName(QGCViewModeSelection);
    } // setupUi

    void retranslateUi(QWidget *QGCViewModeSelection)
    {
        QGCViewModeSelection->setWindowTitle(QApplication::translate("QGCViewModeSelection", "Form", 0, QApplication::UnicodeUTF8));
        notAgainCheckBox->setText(QApplication::translate("QGCViewModeSelection", "Do not ask again on next startup. The selection can be changed any time in the preferences.", 0, QApplication::UnicodeUTF8));
        viewModeAR->setText(QString());
        label_3->setText(QApplication::translate("QGCViewModeSelection", "APM Autopilot", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("QGCViewModeSelection", "PX4 Autopilot", 0, QApplication::UnicodeUTF8));
        viewModeAPM->setText(QString());
        label_4->setText(QApplication::translate("QGCViewModeSelection", "WiFi / UDP", 0, QApplication::UnicodeUTF8));
        viewModePX4->setText(QString());
        viewModeGeneric->setText(QString());
        label->setText(QApplication::translate("QGCViewModeSelection", "Radio / Serial Link", 0, QApplication::UnicodeUTF8));
        viewModeHintLabel->setText(QApplication::translate("QGCViewModeSelection", "Please select the connection or autopilot you want to use QGroundControl with.", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QGCViewModeSelection: public Ui_QGCViewModeSelection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCVIEWMODESELECTION_H
