/********************************************************************************
** Form generated from reading UI file 'UASControlParameters.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UASCONTROLPARAMETERS_H
#define UI_UASCONTROLPARAMETERS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UASControlParameters
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_2;
    QLabel *lbMode;
    QSpacerItem *horizontalSpacer;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QDoubleSpinBox *sbHeight;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QDoubleSpinBox *sbAirSpeed;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QDoubleSpinBox *sbTurnRate;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *btSetCommands;
    QPushButton *btGetCommands;
    QSpacerItem *verticalSpacer;
    QWidget *tab_2;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout;
    QCheckBox *cxdle_c;
    QCheckBox *cxdr_c;
    QCheckBox *cxdt_c;
    QCheckBox *cxdla_c;
    QPushButton *btSetCtrl;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *UASControlParameters)
    {
        if (UASControlParameters->objectName().isEmpty())
            UASControlParameters->setObjectName(QString::fromUtf8("UASControlParameters"));
        UASControlParameters->resize(204, 246);
        UASControlParameters->setMinimumSize(QSize(200, 150));
        UASControlParameters->setMaximumSize(QSize(267, 16777215));
        gridLayout = new QGridLayout(UASControlParameters);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        lbMode = new QLabel(UASControlParameters);
        lbMode->setObjectName(QString::fromUtf8("lbMode"));
        lbMode->setMinimumSize(QSize(100, 0));
        lbMode->setMaximumSize(QSize(16777215, 16777215));
        lbMode->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(lbMode);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout_5, 0, 0, 1, 1);

        tabWidget = new QTabWidget(UASControlParameters);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setStyleSheet(QString::fromUtf8(""));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_2 = new QGridLayout(tab);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        sbHeight = new QDoubleSpinBox(tab);
        sbHeight->setObjectName(QString::fromUtf8("sbHeight"));
        sbHeight->setMaximum(1500);

        horizontalLayout->addWidget(sbHeight);


        gridLayout_2->addLayout(horizontalLayout, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        sbAirSpeed = new QDoubleSpinBox(tab);
        sbAirSpeed->setObjectName(QString::fromUtf8("sbAirSpeed"));
        sbAirSpeed->setMaximum(500);

        horizontalLayout_3->addWidget(sbAirSpeed);


        gridLayout_2->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_4 = new QLabel(tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_2->addWidget(label_4);

        sbTurnRate = new QDoubleSpinBox(tab);
        sbTurnRate->setObjectName(QString::fromUtf8("sbTurnRate"));
        sbTurnRate->setMaximum(180);

        horizontalLayout_2->addWidget(sbTurnRate);


        gridLayout_2->addLayout(horizontalLayout_2, 3, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        btSetCommands = new QPushButton(tab);
        btSetCommands->setObjectName(QString::fromUtf8("btSetCommands"));

        horizontalLayout_4->addWidget(btSetCommands);

        btGetCommands = new QPushButton(tab);
        btGetCommands->setObjectName(QString::fromUtf8("btGetCommands"));

        horizontalLayout_4->addWidget(btGetCommands);


        gridLayout_2->addLayout(horizontalLayout_4, 4, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 27, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 5, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_3 = new QGridLayout(tab_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        cxdle_c = new QCheckBox(tab_2);
        cxdle_c->setObjectName(QString::fromUtf8("cxdle_c"));

        verticalLayout->addWidget(cxdle_c);

        cxdr_c = new QCheckBox(tab_2);
        cxdr_c->setObjectName(QString::fromUtf8("cxdr_c"));

        verticalLayout->addWidget(cxdr_c);

        cxdt_c = new QCheckBox(tab_2);
        cxdt_c->setObjectName(QString::fromUtf8("cxdt_c"));

        verticalLayout->addWidget(cxdt_c);

        cxdla_c = new QCheckBox(tab_2);
        cxdla_c->setObjectName(QString::fromUtf8("cxdla_c"));

        verticalLayout->addWidget(cxdla_c);


        gridLayout_3->addLayout(verticalLayout, 0, 0, 1, 1);

        btSetCtrl = new QPushButton(tab_2);
        btSetCtrl->setObjectName(QString::fromUtf8("btSetCtrl"));

        gridLayout_3->addWidget(btSetCtrl, 1, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 26, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_2, 2, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());

        gridLayout->addWidget(tabWidget, 1, 0, 1, 1);


        retranslateUi(UASControlParameters);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(UASControlParameters);
    } // setupUi

    void retranslateUi(QWidget *UASControlParameters)
    {
        UASControlParameters->setWindowTitle(QApplication::translate("UASControlParameters", "Form", 0, QApplication::UnicodeUTF8));
        lbMode->setText(QApplication::translate("UASControlParameters", "----", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("UASControlParameters", "Height (m)", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("UASControlParameters", "Airspeed (m/s)", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("UASControlParameters", "Turn Rate (rad/s)", 0, QApplication::UnicodeUTF8));
        btSetCommands->setText(QApplication::translate("UASControlParameters", "Set", 0, QApplication::UnicodeUTF8));
        btGetCommands->setText(QApplication::translate("UASControlParameters", "Get", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("UASControlParameters", "Commands", 0, QApplication::UnicodeUTF8));
        cxdle_c->setText(QApplication::translate("UASControlParameters", "Elevator", 0, QApplication::UnicodeUTF8));
        cxdr_c->setText(QApplication::translate("UASControlParameters", "Rudder", 0, QApplication::UnicodeUTF8));
        cxdt_c->setText(QApplication::translate("UASControlParameters", "Throttle", 0, QApplication::UnicodeUTF8));
        cxdla_c->setText(QApplication::translate("UASControlParameters", "Ailerons", 0, QApplication::UnicodeUTF8));
        btSetCtrl->setText(QApplication::translate("UASControlParameters", "Set", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("UASControlParameters", "Passthrough", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class UASControlParameters: public Ui_UASControlParameters {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UASCONTROLPARAMETERS_H
