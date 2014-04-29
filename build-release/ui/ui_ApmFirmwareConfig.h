/********************************************************************************
** Form generated from reading UI file 'ApmFirmwareConfig.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APMFIRMWARECONFIG_H
#define UI_APMFIRMWARECONFIG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QTextBrowser>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ApmFirmwareConfig
{
public:
    QLabel *label;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_3;
    QPushButton *copterPushButton;
    QLabel *copterLabel;
    QVBoxLayout *verticalLayout_7;
    QPushButton *quadPushButton;
    QLabel *quadLabel;
    QVBoxLayout *verticalLayout_2;
    QPushButton *planePushButton;
    QLabel *planeLabel;
    QVBoxLayout *verticalLayout_4;
    QPushButton *triPushButton;
    QLabel *triLabel;
    QVBoxLayout *verticalLayout_5;
    QPushButton *y6PushButton;
    QLabel *y6Label;
    QVBoxLayout *verticalLayout;
    QPushButton *roverPushButton;
    QLabel *roverLabel;
    QVBoxLayout *verticalLayout_6;
    QPushButton *octaPushButton;
    QLabel *octaLabel;
    QVBoxLayout *verticalLayout_9;
    QPushButton *octaQuadPushButton;
    QLabel *octaQuadLabel;
    QVBoxLayout *verticalLayout_8;
    QPushButton *hexaPushButton;
    QLabel *hexaLabel;
    QPushButton *betaFirmwareButton;
    QProgressBar *progressBar;
    QTextBrowser *textBrowser;
    QCheckBox *showOutputCheckBox;
    QLabel *statusLabel;
    QLabel *warningLabel;

    void setupUi(QWidget *ApmFirmwareConfig)
    {
        if (ApmFirmwareConfig->objectName().isEmpty())
            ApmFirmwareConfig->setObjectName(QString::fromUtf8("ApmFirmwareConfig"));
        ApmFirmwareConfig->resize(868, 684);
        label = new QLabel(ApmFirmwareConfig);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 20, 211, 31));
        gridLayoutWidget = new QWidget(ApmFirmwareConfig);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(30, 60, 801, 371));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        copterPushButton = new QPushButton(gridLayoutWidget);
        copterPushButton->setObjectName(QString::fromUtf8("copterPushButton"));
        copterPushButton->setMinimumSize(QSize(150, 150));
        copterPushButton->setMaximumSize(QSize(150, 150));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/files/images/firmware/heli.png"), QSize(), QIcon::Normal, QIcon::Off);
        copterPushButton->setIcon(icon);
        copterPushButton->setIconSize(QSize(150, 150));

        verticalLayout_3->addWidget(copterPushButton);

        copterLabel = new QLabel(gridLayoutWidget);
        copterLabel->setObjectName(QString::fromUtf8("copterLabel"));
        copterLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(copterLabel);


        gridLayout->addLayout(verticalLayout_3, 1, 1, 1, 1);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        quadPushButton = new QPushButton(gridLayoutWidget);
        quadPushButton->setObjectName(QString::fromUtf8("quadPushButton"));
        quadPushButton->setMinimumSize(QSize(150, 150));
        quadPushButton->setMaximumSize(QSize(150, 150));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/files/images/firmware/quadplus.png"), QSize(), QIcon::Normal, QIcon::Off);
        quadPushButton->setIcon(icon1);
        quadPushButton->setIconSize(QSize(150, 150));

        verticalLayout_7->addWidget(quadPushButton);

        quadLabel = new QLabel(gridLayoutWidget);
        quadLabel->setObjectName(QString::fromUtf8("quadLabel"));
        quadLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(quadLabel);


        gridLayout->addLayout(verticalLayout_7, 0, 2, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        planePushButton = new QPushButton(gridLayoutWidget);
        planePushButton->setObjectName(QString::fromUtf8("planePushButton"));
        planePushButton->setMinimumSize(QSize(150, 150));
        planePushButton->setMaximumSize(QSize(150, 150));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/files/images/firmware/plane.png"), QSize(), QIcon::Normal, QIcon::Off);
        planePushButton->setIcon(icon2);
        planePushButton->setIconSize(QSize(150, 150));

        verticalLayout_2->addWidget(planePushButton);

        planeLabel = new QLabel(gridLayoutWidget);
        planeLabel->setObjectName(QString::fromUtf8("planeLabel"));
        planeLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(planeLabel);


        gridLayout->addLayout(verticalLayout_2, 0, 1, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        triPushButton = new QPushButton(gridLayoutWidget);
        triPushButton->setObjectName(QString::fromUtf8("triPushButton"));
        triPushButton->setMinimumSize(QSize(150, 150));
        triPushButton->setMaximumSize(QSize(150, 150));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/files/images/firmware/triy.png"), QSize(), QIcon::Normal, QIcon::Off);
        triPushButton->setIcon(icon3);
        triPushButton->setIconSize(QSize(150, 150));

        verticalLayout_4->addWidget(triPushButton);

        triLabel = new QLabel(gridLayoutWidget);
        triLabel->setObjectName(QString::fromUtf8("triLabel"));
        triLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(triLabel);


        gridLayout->addLayout(verticalLayout_4, 1, 2, 1, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        y6PushButton = new QPushButton(gridLayoutWidget);
        y6PushButton->setObjectName(QString::fromUtf8("y6PushButton"));
        y6PushButton->setMinimumSize(QSize(150, 150));
        y6PushButton->setMaximumSize(QSize(150, 150));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/files/images/firmware/hexay.png"), QSize(), QIcon::Normal, QIcon::Off);
        y6PushButton->setIcon(icon4);
        y6PushButton->setIconSize(QSize(150, 150));

        verticalLayout_5->addWidget(y6PushButton);

        y6Label = new QLabel(gridLayoutWidget);
        y6Label->setObjectName(QString::fromUtf8("y6Label"));
        y6Label->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(y6Label);


        gridLayout->addLayout(verticalLayout_5, 1, 3, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        roverPushButton = new QPushButton(gridLayoutWidget);
        roverPushButton->setObjectName(QString::fromUtf8("roverPushButton"));
        roverPushButton->setMinimumSize(QSize(150, 150));
        roverPushButton->setMaximumSize(QSize(150, 150));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/files/images/firmware/rover.png"), QSize(), QIcon::Normal, QIcon::Off);
        roverPushButton->setIcon(icon5);
        roverPushButton->setIconSize(QSize(150, 150));

        verticalLayout->addWidget(roverPushButton);

        roverLabel = new QLabel(gridLayoutWidget);
        roverLabel->setObjectName(QString::fromUtf8("roverLabel"));
        roverLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(roverLabel);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        octaPushButton = new QPushButton(gridLayoutWidget);
        octaPushButton->setObjectName(QString::fromUtf8("octaPushButton"));
        octaPushButton->setMinimumSize(QSize(150, 150));
        octaPushButton->setMaximumSize(QSize(150, 150));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/files/images/firmware/octaplus.png"), QSize(), QIcon::Normal, QIcon::Off);
        octaPushButton->setIcon(icon6);
        octaPushButton->setIconSize(QSize(150, 150));

        verticalLayout_6->addWidget(octaPushButton);

        octaLabel = new QLabel(gridLayoutWidget);
        octaLabel->setObjectName(QString::fromUtf8("octaLabel"));
        octaLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(octaLabel);


        gridLayout->addLayout(verticalLayout_6, 1, 4, 1, 1);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        octaQuadPushButton = new QPushButton(gridLayoutWidget);
        octaQuadPushButton->setObjectName(QString::fromUtf8("octaQuadPushButton"));
        octaQuadPushButton->setMinimumSize(QSize(150, 150));
        octaQuadPushButton->setMaximumSize(QSize(150, 150));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/files/images/firmware/octx.png"), QSize(), QIcon::Normal, QIcon::Off);
        octaQuadPushButton->setIcon(icon7);
        octaQuadPushButton->setIconSize(QSize(150, 150));

        verticalLayout_9->addWidget(octaQuadPushButton);

        octaQuadLabel = new QLabel(gridLayoutWidget);
        octaQuadLabel->setObjectName(QString::fromUtf8("octaQuadLabel"));
        octaQuadLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_9->addWidget(octaQuadLabel);


        gridLayout->addLayout(verticalLayout_9, 0, 4, 1, 1);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        hexaPushButton = new QPushButton(gridLayoutWidget);
        hexaPushButton->setObjectName(QString::fromUtf8("hexaPushButton"));
        hexaPushButton->setMinimumSize(QSize(150, 150));
        hexaPushButton->setMaximumSize(QSize(150, 150));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/files/images/firmware/hexaplus.png"), QSize(), QIcon::Normal, QIcon::Off);
        hexaPushButton->setIcon(icon8);
        hexaPushButton->setIconSize(QSize(150, 150));

        verticalLayout_8->addWidget(hexaPushButton);

        hexaLabel = new QLabel(gridLayoutWidget);
        hexaLabel->setObjectName(QString::fromUtf8("hexaLabel"));
        hexaLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(hexaLabel);


        gridLayout->addLayout(verticalLayout_8, 0, 3, 1, 1);

        betaFirmwareButton = new QPushButton(ApmFirmwareConfig);
        betaFirmwareButton->setObjectName(QString::fromUtf8("betaFirmwareButton"));
        betaFirmwareButton->setGeometry(QRect(700, 440, 131, 23));
        betaFirmwareButton->setCheckable(true);
        betaFirmwareButton->setChecked(false);
        progressBar = new QProgressBar(ApmFirmwareConfig);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(30, 490, 801, 23));
        progressBar->setValue(24);
        textBrowser = new QTextBrowser(ApmFirmwareConfig);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(30, 520, 801, 151));
        showOutputCheckBox = new QCheckBox(ApmFirmwareConfig);
        showOutputCheckBox->setObjectName(QString::fromUtf8("showOutputCheckBox"));
        showOutputCheckBox->setGeometry(QRect(710, 470, 101, 17));
        statusLabel = new QLabel(ApmFirmwareConfig);
        statusLabel->setObjectName(QString::fromUtf8("statusLabel"));
        statusLabel->setGeometry(QRect(30, 440, 141, 21));
        warningLabel = new QLabel(ApmFirmwareConfig);
        warningLabel->setObjectName(QString::fromUtf8("warningLabel"));
        warningLabel->setGeometry(QRect(180, 440, 491, 16));

        retranslateUi(ApmFirmwareConfig);

        QMetaObject::connectSlotsByName(ApmFirmwareConfig);
    } // setupUi

    void retranslateUi(QWidget *ApmFirmwareConfig)
    {
        ApmFirmwareConfig->setWindowTitle(QApplication::translate("ApmFirmwareConfig", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ApmFirmwareConfig", "<h2>Firmware</h2>", 0, QApplication::UnicodeUTF8));
        copterPushButton->setText(QString());
        copterLabel->setText(QApplication::translate("ApmFirmwareConfig", "ArduCopter vX.XX", 0, QApplication::UnicodeUTF8));
        quadPushButton->setText(QString());
        quadLabel->setText(QApplication::translate("ApmFirmwareConfig", "ArduCopter vX.XX", 0, QApplication::UnicodeUTF8));
        planePushButton->setText(QString());
        planeLabel->setText(QApplication::translate("ApmFirmwareConfig", "ArduPlane vX.XX", 0, QApplication::UnicodeUTF8));
        triPushButton->setText(QString());
        triLabel->setText(QApplication::translate("ApmFirmwareConfig", "ArduCopter vX.XX", 0, QApplication::UnicodeUTF8));
        y6PushButton->setText(QString());
        y6Label->setText(QApplication::translate("ApmFirmwareConfig", "ArduCopter vX.XX", 0, QApplication::UnicodeUTF8));
        roverPushButton->setText(QString());
        roverLabel->setText(QApplication::translate("ApmFirmwareConfig", "ArduRover vX.XX", 0, QApplication::UnicodeUTF8));
        octaPushButton->setText(QString());
        octaLabel->setText(QApplication::translate("ApmFirmwareConfig", "ArduCopter vX.XX", 0, QApplication::UnicodeUTF8));
        octaQuadPushButton->setText(QString());
        octaQuadLabel->setText(QApplication::translate("ApmFirmwareConfig", "ArduCopter vX.XX", 0, QApplication::UnicodeUTF8));
        hexaPushButton->setText(QString());
        hexaLabel->setText(QApplication::translate("ApmFirmwareConfig", "ArduCopter vX.XX", 0, QApplication::UnicodeUTF8));
        betaFirmwareButton->setText(QApplication::translate("ApmFirmwareConfig", "Beta firmware", 0, QApplication::UnicodeUTF8));
        showOutputCheckBox->setText(QApplication::translate("ApmFirmwareConfig", "Show Output", 0, QApplication::UnicodeUTF8));
        statusLabel->setText(QApplication::translate("ApmFirmwareConfig", "Status", 0, QApplication::UnicodeUTF8));
        warningLabel->setText(QApplication::translate("ApmFirmwareConfig", "<html><head/><body><p><span style=\" font-size:large; font-weight:600; color:#e90000;\">WARNING:</span><span style=\" font-size:large; font-weight:600; color:#ffaa00;\"> Only install BETA firmware if you are an experienced tester.</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ApmFirmwareConfig: public Ui_ApmFirmwareConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APMFIRMWARECONFIG_H
