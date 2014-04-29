/********************************************************************************
** Form generated from reading UI file 'QGCPX4AirframeConfig.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCPX4AIRFRAMECONFIG_H
#define UI_QGCPX4AIRFRAMECONFIG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QScrollArea>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QGCPX4AirframeConfig
{
public:
    QGridLayout *gridLayout_2;
    QCheckBox *defaultGainsCheckBox;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *planePushButton;
    QComboBox *planeComboBox;
    QLabel *label;
    QVBoxLayout *verticalLayout_2;
    QPushButton *flyingWingPushButton;
    QComboBox *flyingWingComboBox;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_3;
    QPushButton *quadXPushButton;
    QComboBox *quadXComboBox;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_4;
    QPushButton *quadPlusPushButton;
    QComboBox *quadPlusComboBox;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_5;
    QPushButton *hexaXPushButton;
    QComboBox *hexaXComboBox;
    QLabel *label_5;
    QVBoxLayout *verticalLayout_6;
    QPushButton *hexaPlusPushButton;
    QComboBox *hexaPlusComboBox;
    QLabel *label_6;
    QVBoxLayout *verticalLayout_7;
    QPushButton *octoXPushButton;
    QComboBox *octoXComboBox;
    QLabel *label_7;
    QVBoxLayout *verticalLayout_8;
    QPushButton *octoPlusPushButton;
    QComboBox *octoPlusComboBox;
    QLabel *label_8;
    QVBoxLayout *verticalLayout_9;
    QPushButton *hPushButton;
    QComboBox *hComboBox;
    QLabel *label_9;
    QVBoxLayout *verticalLayout_10;
    QPushButton *simPushButton;
    QComboBox *simComboBox;
    QLabel *label_10;
    QPushButton *applyButton;
    QLabel *statusLabel;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *QGCPX4AirframeConfig)
    {
        if (QGCPX4AirframeConfig->objectName().isEmpty())
            QGCPX4AirframeConfig->setObjectName(QString::fromUtf8("QGCPX4AirframeConfig"));
        QGCPX4AirframeConfig->resize(803, 416);
        gridLayout_2 = new QGridLayout(QGCPX4AirframeConfig);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        defaultGainsCheckBox = new QCheckBox(QGCPX4AirframeConfig);
        defaultGainsCheckBox->setObjectName(QString::fromUtf8("defaultGainsCheckBox"));
        defaultGainsCheckBox->setChecked(true);

        gridLayout_2->addWidget(defaultGainsCheckBox, 1, 2, 1, 1);

        scrollArea = new QScrollArea(QGCPX4AirframeConfig);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setBaseSize(QSize(0, 0));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, -282, 762, 638));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        planePushButton = new QPushButton(scrollAreaWidgetContents);
        planePushButton->setObjectName(QString::fromUtf8("planePushButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/files/images/px4/airframes/plane_aert.png"), QSize(), QIcon::Normal, QIcon::Off);
        planePushButton->setIcon(icon);
        planePushButton->setIconSize(QSize(120, 120));
        planePushButton->setCheckable(true);

        verticalLayout->addWidget(planePushButton);

        planeComboBox = new QComboBox(scrollAreaWidgetContents);
        planeComboBox->setObjectName(QString::fromUtf8("planeComboBox"));

        verticalLayout->addWidget(planeComboBox);

        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        flyingWingPushButton = new QPushButton(scrollAreaWidgetContents);
        flyingWingPushButton->setObjectName(QString::fromUtf8("flyingWingPushButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/files/images/px4/airframes/flying_wing.png"), QSize(), QIcon::Normal, QIcon::Off);
        flyingWingPushButton->setIcon(icon1);
        flyingWingPushButton->setIconSize(QSize(120, 120));
        flyingWingPushButton->setCheckable(true);

        verticalLayout_2->addWidget(flyingWingPushButton);

        flyingWingComboBox = new QComboBox(scrollAreaWidgetContents);
        flyingWingComboBox->setObjectName(QString::fromUtf8("flyingWingComboBox"));

        verticalLayout_2->addWidget(flyingWingComboBox);

        label_2 = new QLabel(scrollAreaWidgetContents);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);


        gridLayout->addLayout(verticalLayout_2, 0, 1, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        quadXPushButton = new QPushButton(scrollAreaWidgetContents);
        quadXPushButton->setObjectName(QString::fromUtf8("quadXPushButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/files/images/px4/airframes/quad_x.png"), QSize(), QIcon::Normal, QIcon::Off);
        quadXPushButton->setIcon(icon2);
        quadXPushButton->setIconSize(QSize(120, 120));
        quadXPushButton->setCheckable(true);

        verticalLayout_3->addWidget(quadXPushButton);

        quadXComboBox = new QComboBox(scrollAreaWidgetContents);
        quadXComboBox->setObjectName(QString::fromUtf8("quadXComboBox"));

        verticalLayout_3->addWidget(quadXComboBox);

        label_3 = new QLabel(scrollAreaWidgetContents);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_3->addWidget(label_3);


        gridLayout->addLayout(verticalLayout_3, 0, 2, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        quadPlusPushButton = new QPushButton(scrollAreaWidgetContents);
        quadPlusPushButton->setObjectName(QString::fromUtf8("quadPlusPushButton"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/files/images/px4/airframes/quad_+.png"), QSize(), QIcon::Normal, QIcon::Off);
        quadPlusPushButton->setIcon(icon3);
        quadPlusPushButton->setIconSize(QSize(120, 120));
        quadPlusPushButton->setCheckable(true);

        verticalLayout_4->addWidget(quadPlusPushButton);

        quadPlusComboBox = new QComboBox(scrollAreaWidgetContents);
        quadPlusComboBox->setObjectName(QString::fromUtf8("quadPlusComboBox"));

        verticalLayout_4->addWidget(quadPlusComboBox);

        label_4 = new QLabel(scrollAreaWidgetContents);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_4->addWidget(label_4);


        gridLayout->addLayout(verticalLayout_4, 0, 3, 1, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        hexaXPushButton = new QPushButton(scrollAreaWidgetContents);
        hexaXPushButton->setObjectName(QString::fromUtf8("hexaXPushButton"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/files/images/px4/airframes/hexa_x.png"), QSize(), QIcon::Normal, QIcon::Off);
        hexaXPushButton->setIcon(icon4);
        hexaXPushButton->setIconSize(QSize(120, 120));
        hexaXPushButton->setCheckable(true);

        verticalLayout_5->addWidget(hexaXPushButton);

        hexaXComboBox = new QComboBox(scrollAreaWidgetContents);
        hexaXComboBox->setObjectName(QString::fromUtf8("hexaXComboBox"));

        verticalLayout_5->addWidget(hexaXComboBox);

        label_5 = new QLabel(scrollAreaWidgetContents);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_5->addWidget(label_5);


        gridLayout->addLayout(verticalLayout_5, 1, 0, 1, 1);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        hexaPlusPushButton = new QPushButton(scrollAreaWidgetContents);
        hexaPlusPushButton->setObjectName(QString::fromUtf8("hexaPlusPushButton"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/files/images/px4/airframes/hexa_+.png"), QSize(), QIcon::Normal, QIcon::Off);
        hexaPlusPushButton->setIcon(icon5);
        hexaPlusPushButton->setIconSize(QSize(120, 120));
        hexaPlusPushButton->setCheckable(true);

        verticalLayout_6->addWidget(hexaPlusPushButton);

        hexaPlusComboBox = new QComboBox(scrollAreaWidgetContents);
        hexaPlusComboBox->setObjectName(QString::fromUtf8("hexaPlusComboBox"));

        verticalLayout_6->addWidget(hexaPlusComboBox);

        label_6 = new QLabel(scrollAreaWidgetContents);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_6->addWidget(label_6);


        gridLayout->addLayout(verticalLayout_6, 1, 1, 1, 1);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        octoXPushButton = new QPushButton(scrollAreaWidgetContents);
        octoXPushButton->setObjectName(QString::fromUtf8("octoXPushButton"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/files/images/px4/airframes/octo_x.png"), QSize(), QIcon::Normal, QIcon::Off);
        octoXPushButton->setIcon(icon6);
        octoXPushButton->setIconSize(QSize(120, 120));
        octoXPushButton->setCheckable(true);

        verticalLayout_7->addWidget(octoXPushButton);

        octoXComboBox = new QComboBox(scrollAreaWidgetContents);
        octoXComboBox->setObjectName(QString::fromUtf8("octoXComboBox"));

        verticalLayout_7->addWidget(octoXComboBox);

        label_7 = new QLabel(scrollAreaWidgetContents);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_7->addWidget(label_7);


        gridLayout->addLayout(verticalLayout_7, 1, 2, 1, 1);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        octoPlusPushButton = new QPushButton(scrollAreaWidgetContents);
        octoPlusPushButton->setObjectName(QString::fromUtf8("octoPlusPushButton"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/files/images/px4/airframes/octo_+.png"), QSize(), QIcon::Normal, QIcon::Off);
        octoPlusPushButton->setIcon(icon7);
        octoPlusPushButton->setIconSize(QSize(120, 120));
        octoPlusPushButton->setCheckable(true);

        verticalLayout_8->addWidget(octoPlusPushButton);

        octoPlusComboBox = new QComboBox(scrollAreaWidgetContents);
        octoPlusComboBox->setObjectName(QString::fromUtf8("octoPlusComboBox"));

        verticalLayout_8->addWidget(octoPlusComboBox);

        label_8 = new QLabel(scrollAreaWidgetContents);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout_8->addWidget(label_8);


        gridLayout->addLayout(verticalLayout_8, 1, 3, 1, 1);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        hPushButton = new QPushButton(scrollAreaWidgetContents);
        hPushButton->setObjectName(QString::fromUtf8("hPushButton"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/files/images/px4/airframes/quad_h.png"), QSize(), QIcon::Normal, QIcon::Off);
        hPushButton->setIcon(icon8);
        hPushButton->setIconSize(QSize(120, 120));
        hPushButton->setCheckable(true);

        verticalLayout_9->addWidget(hPushButton);

        hComboBox = new QComboBox(scrollAreaWidgetContents);
        hComboBox->setObjectName(QString::fromUtf8("hComboBox"));

        verticalLayout_9->addWidget(hComboBox);

        label_9 = new QLabel(scrollAreaWidgetContents);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        verticalLayout_9->addWidget(label_9);


        gridLayout->addLayout(verticalLayout_9, 2, 0, 1, 1);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        simPushButton = new QPushButton(scrollAreaWidgetContents);
        simPushButton->setObjectName(QString::fromUtf8("simPushButton"));

        verticalLayout_10->addWidget(simPushButton);

        simComboBox = new QComboBox(scrollAreaWidgetContents);
        simComboBox->setObjectName(QString::fromUtf8("simComboBox"));

        verticalLayout_10->addWidget(simComboBox);

        label_10 = new QLabel(scrollAreaWidgetContents);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        verticalLayout_10->addWidget(label_10);


        gridLayout->addLayout(verticalLayout_10, 2, 1, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_2->addWidget(scrollArea, 0, 0, 1, 4);

        applyButton = new QPushButton(QGCPX4AirframeConfig);
        applyButton->setObjectName(QString::fromUtf8("applyButton"));

        gridLayout_2->addWidget(applyButton, 1, 3, 1, 1);

        statusLabel = new QLabel(QGCPX4AirframeConfig);
        statusLabel->setObjectName(QString::fromUtf8("statusLabel"));

        gridLayout_2->addWidget(statusLabel, 1, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 1, 1, 1);


        retranslateUi(QGCPX4AirframeConfig);

        QMetaObject::connectSlotsByName(QGCPX4AirframeConfig);
    } // setupUi

    void retranslateUi(QWidget *QGCPX4AirframeConfig)
    {
        QGCPX4AirframeConfig->setWindowTitle(QApplication::translate("QGCPX4AirframeConfig", "Form", 0, QApplication::UnicodeUTF8));
        defaultGainsCheckBox->setText(QApplication::translate("QGCPX4AirframeConfig", "Set default airframe settings", 0, QApplication::UnicodeUTF8));
        planePushButton->setText(QString());
        label->setText(QApplication::translate("QGCPX4AirframeConfig", "Standard Plane", 0, QApplication::UnicodeUTF8));
        flyingWingPushButton->setText(QString());
        label_2->setText(QApplication::translate("QGCPX4AirframeConfig", "Flying Wing", 0, QApplication::UnicodeUTF8));
        quadXPushButton->setText(QString());
        label_3->setText(QApplication::translate("QGCPX4AirframeConfig", "Quadrotor X", 0, QApplication::UnicodeUTF8));
        quadPlusPushButton->setText(QString());
        label_4->setText(QApplication::translate("QGCPX4AirframeConfig", "Quadrotor +", 0, QApplication::UnicodeUTF8));
        hexaXPushButton->setText(QString());
        label_5->setText(QApplication::translate("QGCPX4AirframeConfig", "Hexarotor X", 0, QApplication::UnicodeUTF8));
        hexaPlusPushButton->setText(QString());
        label_6->setText(QApplication::translate("QGCPX4AirframeConfig", "Hexarotor +", 0, QApplication::UnicodeUTF8));
        octoXPushButton->setText(QString());
        label_7->setText(QApplication::translate("QGCPX4AirframeConfig", "Octorotor X", 0, QApplication::UnicodeUTF8));
        octoPlusPushButton->setText(QString());
        label_8->setText(QApplication::translate("QGCPX4AirframeConfig", "Octorotor +", 0, QApplication::UnicodeUTF8));
        hPushButton->setText(QString());
        label_9->setText(QApplication::translate("QGCPX4AirframeConfig", "H Frame", 0, QApplication::UnicodeUTF8));
        simPushButton->setText(QApplication::translate("QGCPX4AirframeConfig", "Simulation Setup", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("QGCPX4AirframeConfig", "Simulation / Experimental", 0, QApplication::UnicodeUTF8));
        applyButton->setText(QApplication::translate("QGCPX4AirframeConfig", "Apply and Restart", 0, QApplication::UnicodeUTF8));
        statusLabel->setText(QApplication::translate("QGCPX4AirframeConfig", "No changes values", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QGCPX4AirframeConfig: public Ui_QGCPX4AirframeConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCPX4AIRFRAMECONFIG_H
