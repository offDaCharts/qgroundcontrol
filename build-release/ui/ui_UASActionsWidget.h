/********************************************************************************
** Form generated from reading UI file 'UASActionsWidget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UASACTIONSWIDGET_H
#define UI_UASACTIONSWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UASActionsWidget
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QComboBox *waypointComboBox;
    QLabel *currentWaypointLabel;
    QPushButton *goToWaypointButton;
    QPushButton *pushButton_6;
    QHBoxLayout *horizontalLayout_2;
    QSpinBox *altitudeSpinBox;
    QPushButton *changeAltitudeButton;
    QHBoxLayout *horizontalLayout;
    QSpinBox *speedSpinBox;
    QPushButton *changeSpeedButton;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QComboBox *comboBox;
    QComboBox *comboBox_3;
    QPushButton *pushButton_8;
    QPushButton *pushButton_5;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QPushButton *armDisarmButton;

    void setupUi(QWidget *UASActionsWidget)
    {
        if (UASActionsWidget->objectName().isEmpty())
            UASActionsWidget->setObjectName(QString::fromUtf8("UASActionsWidget"));
        UASActionsWidget->resize(321, 363);
        verticalLayout = new QVBoxLayout(UASActionsWidget);
        verticalLayout->setContentsMargins(6, 6, 6, 6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(UASActionsWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
        gridLayout->setContentsMargins(6, 6, 6, 6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        waypointComboBox = new QComboBox(groupBox);
        waypointComboBox->setObjectName(QString::fromUtf8("waypointComboBox"));

        gridLayout->addWidget(waypointComboBox, 0, 0, 1, 1);

        currentWaypointLabel = new QLabel(groupBox);
        currentWaypointLabel->setObjectName(QString::fromUtf8("currentWaypointLabel"));

        gridLayout->addWidget(currentWaypointLabel, 0, 1, 1, 1);

        goToWaypointButton = new QPushButton(groupBox);
        goToWaypointButton->setObjectName(QString::fromUtf8("goToWaypointButton"));

        gridLayout->addWidget(goToWaypointButton, 1, 0, 1, 1);

        pushButton_6 = new QPushButton(groupBox);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        gridLayout->addWidget(pushButton_6, 1, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        altitudeSpinBox = new QSpinBox(groupBox);
        altitudeSpinBox->setObjectName(QString::fromUtf8("altitudeSpinBox"));

        horizontalLayout_2->addWidget(altitudeSpinBox);

        changeAltitudeButton = new QPushButton(groupBox);
        changeAltitudeButton->setObjectName(QString::fromUtf8("changeAltitudeButton"));

        horizontalLayout_2->addWidget(changeAltitudeButton);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        speedSpinBox = new QSpinBox(groupBox);
        speedSpinBox->setObjectName(QString::fromUtf8("speedSpinBox"));

        horizontalLayout->addWidget(speedSpinBox);

        changeSpeedButton = new QPushButton(groupBox);
        changeSpeedButton->setObjectName(QString::fromUtf8("changeSpeedButton"));

        horizontalLayout->addWidget(changeSpeedButton);


        gridLayout->addLayout(horizontalLayout, 3, 0, 1, 2);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(UASActionsWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
#ifndef Q_OS_MAC
        gridLayout_2->setSpacing(6);
#endif
        gridLayout_2->setContentsMargins(6, 6, 6, 6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        comboBox = new QComboBox(groupBox_2);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout_2->addWidget(comboBox, 0, 0, 1, 2);

        comboBox_3 = new QComboBox(groupBox_2);
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));

        gridLayout_2->addWidget(comboBox_3, 0, 2, 1, 2);

        pushButton_8 = new QPushButton(groupBox_2);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));

        gridLayout_2->addWidget(pushButton_8, 1, 0, 1, 2);

        pushButton_5 = new QPushButton(groupBox_2);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        gridLayout_2->addWidget(pushButton_5, 1, 2, 1, 2);

        pushButton = new QPushButton(groupBox_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout_2->addWidget(pushButton, 2, 0, 1, 1);

        pushButton_2 = new QPushButton(groupBox_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout_2->addWidget(pushButton_2, 2, 1, 1, 2);

        pushButton_4 = new QPushButton(groupBox_2);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        gridLayout_2->addWidget(pushButton_4, 2, 3, 1, 1);

        armDisarmButton = new QPushButton(groupBox_2);
        armDisarmButton->setObjectName(QString::fromUtf8("armDisarmButton"));

        gridLayout_2->addWidget(armDisarmButton, 3, 0, 1, 4);


        verticalLayout->addWidget(groupBox_2);


        retranslateUi(UASActionsWidget);

        QMetaObject::connectSlotsByName(UASActionsWidget);
    } // setupUi

    void retranslateUi(QWidget *UASActionsWidget)
    {
        UASActionsWidget->setWindowTitle(QApplication::translate("UASActionsWidget", "Form", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("UASActionsWidget", "Mission Controls", 0, QApplication::UnicodeUTF8));
        currentWaypointLabel->setText(QApplication::translate("UASActionsWidget", "Current:", 0, QApplication::UnicodeUTF8));
        goToWaypointButton->setText(QApplication::translate("UASActionsWidget", "Go To Waypoint", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QApplication::translate("UASActionsWidget", "Restart Mission", 0, QApplication::UnicodeUTF8));
        changeAltitudeButton->setText(QApplication::translate("UASActionsWidget", "Change Altitude", 0, QApplication::UnicodeUTF8));
        changeSpeedButton->setText(QApplication::translate("UASActionsWidget", "Change Speed", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("UASActionsWidget", "Auto Actions", 0, QApplication::UnicodeUTF8));
        pushButton_8->setText(QApplication::translate("UASActionsWidget", "Execute Action", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("UASActionsWidget", "Set Mode", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("UASActionsWidget", "Auto", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("UASActionsWidget", "Manual", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("UASActionsWidget", "RTL", 0, QApplication::UnicodeUTF8));
        armDisarmButton->setText(QApplication::translate("UASActionsWidget", "ARM", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class UASActionsWidget: public Ui_UASActionsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UASACTIONSWIDGET_H
