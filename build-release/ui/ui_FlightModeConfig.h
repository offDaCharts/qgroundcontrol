/********************************************************************************
** Form generated from reading UI file 'FlightModeConfig.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FLIGHTMODECONFIG_H
#define UI_FLIGHTMODECONFIG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FlightModeConfig
{
public:
    QLabel *label;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *labelLayout;
    QLabel *mode0Label;
    QLabel *mode1Label;
    QLabel *mode2Label;
    QLabel *mode3Label;
    QLabel *mode4Label;
    QLabel *mode5Label;
    QVBoxLayout *comboLayout;
    QComboBox *mode0ComboBox;
    QComboBox *mode1ComboBox;
    QComboBox *mode2ComboBox;
    QComboBox *mode3ComboBox;
    QComboBox *mode4ComboBox;
    QComboBox *mode5ComboBox;
    QVBoxLayout *simpleCheckBoxLayout;
    QCheckBox *mode0SimpleCheckBox;
    QCheckBox *mode1SimpleCheckBox;
    QCheckBox *mode2SimpleCheckBox;
    QCheckBox *mode3SimpleCheckBox;
    QCheckBox *mode4SimpleCheckBox;
    QCheckBox *mode5SimpleCheckBox;
    QVBoxLayout *PWMLabelLayout;
    QLabel *mode0PWMLabel;
    QLabel *mode1PWMLabel;
    QLabel *mode2PWMLabel;
    QLabel *mode3PWMLabel;
    QLabel *mode4PWMLabel;
    QLabel *mode5PWMLabel;
    QPushButton *savePushButton;

    void setupUi(QWidget *FlightModeConfig)
    {
        if (FlightModeConfig->objectName().isEmpty())
            FlightModeConfig->setObjectName(QString::fromUtf8("FlightModeConfig"));
        FlightModeConfig->resize(818, 435);
        label = new QLabel(FlightModeConfig);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 20, 131, 31));
        label->setScaledContents(false);
        horizontalLayoutWidget = new QWidget(FlightModeConfig);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 70, 481, 191));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        labelLayout = new QVBoxLayout();
#ifndef Q_OS_MAC
        labelLayout->setSpacing(-1);
#endif
        labelLayout->setObjectName(QString::fromUtf8("labelLayout"));
        labelLayout->setContentsMargins(-1, 0, -1, -1);
        mode0Label = new QLabel(horizontalLayoutWidget);
        mode0Label->setObjectName(QString::fromUtf8("mode0Label"));
        mode0Label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        labelLayout->addWidget(mode0Label);

        mode1Label = new QLabel(horizontalLayoutWidget);
        mode1Label->setObjectName(QString::fromUtf8("mode1Label"));
        mode1Label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        labelLayout->addWidget(mode1Label);

        mode2Label = new QLabel(horizontalLayoutWidget);
        mode2Label->setObjectName(QString::fromUtf8("mode2Label"));
        mode2Label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        labelLayout->addWidget(mode2Label);

        mode3Label = new QLabel(horizontalLayoutWidget);
        mode3Label->setObjectName(QString::fromUtf8("mode3Label"));
        mode3Label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        labelLayout->addWidget(mode3Label);

        mode4Label = new QLabel(horizontalLayoutWidget);
        mode4Label->setObjectName(QString::fromUtf8("mode4Label"));
        mode4Label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        labelLayout->addWidget(mode4Label);

        mode5Label = new QLabel(horizontalLayoutWidget);
        mode5Label->setObjectName(QString::fromUtf8("mode5Label"));
        mode5Label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        labelLayout->addWidget(mode5Label);


        horizontalLayout->addLayout(labelLayout);

        comboLayout = new QVBoxLayout();
        comboLayout->setObjectName(QString::fromUtf8("comboLayout"));
        comboLayout->setContentsMargins(-1, 0, -1, -1);
        mode0ComboBox = new QComboBox(horizontalLayoutWidget);
        mode0ComboBox->setObjectName(QString::fromUtf8("mode0ComboBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mode0ComboBox->sizePolicy().hasHeightForWidth());
        mode0ComboBox->setSizePolicy(sizePolicy);
        mode0ComboBox->setFrame(true);

        comboLayout->addWidget(mode0ComboBox);

        mode1ComboBox = new QComboBox(horizontalLayoutWidget);
        mode1ComboBox->setObjectName(QString::fromUtf8("mode1ComboBox"));
        mode1ComboBox->setStyleSheet(QString::fromUtf8(""));

        comboLayout->addWidget(mode1ComboBox);

        mode2ComboBox = new QComboBox(horizontalLayoutWidget);
        mode2ComboBox->setObjectName(QString::fromUtf8("mode2ComboBox"));

        comboLayout->addWidget(mode2ComboBox);

        mode3ComboBox = new QComboBox(horizontalLayoutWidget);
        mode3ComboBox->setObjectName(QString::fromUtf8("mode3ComboBox"));

        comboLayout->addWidget(mode3ComboBox);

        mode4ComboBox = new QComboBox(horizontalLayoutWidget);
        mode4ComboBox->setObjectName(QString::fromUtf8("mode4ComboBox"));

        comboLayout->addWidget(mode4ComboBox);

        mode5ComboBox = new QComboBox(horizontalLayoutWidget);
        mode5ComboBox->setObjectName(QString::fromUtf8("mode5ComboBox"));

        comboLayout->addWidget(mode5ComboBox);


        horizontalLayout->addLayout(comboLayout);

        simpleCheckBoxLayout = new QVBoxLayout();
        simpleCheckBoxLayout->setSpacing(12);
        simpleCheckBoxLayout->setObjectName(QString::fromUtf8("simpleCheckBoxLayout"));
        simpleCheckBoxLayout->setContentsMargins(-1, 0, -1, -1);
        mode0SimpleCheckBox = new QCheckBox(horizontalLayoutWidget);
        mode0SimpleCheckBox->setObjectName(QString::fromUtf8("mode0SimpleCheckBox"));

        simpleCheckBoxLayout->addWidget(mode0SimpleCheckBox);

        mode1SimpleCheckBox = new QCheckBox(horizontalLayoutWidget);
        mode1SimpleCheckBox->setObjectName(QString::fromUtf8("mode1SimpleCheckBox"));

        simpleCheckBoxLayout->addWidget(mode1SimpleCheckBox);

        mode2SimpleCheckBox = new QCheckBox(horizontalLayoutWidget);
        mode2SimpleCheckBox->setObjectName(QString::fromUtf8("mode2SimpleCheckBox"));

        simpleCheckBoxLayout->addWidget(mode2SimpleCheckBox);

        mode3SimpleCheckBox = new QCheckBox(horizontalLayoutWidget);
        mode3SimpleCheckBox->setObjectName(QString::fromUtf8("mode3SimpleCheckBox"));

        simpleCheckBoxLayout->addWidget(mode3SimpleCheckBox);

        mode4SimpleCheckBox = new QCheckBox(horizontalLayoutWidget);
        mode4SimpleCheckBox->setObjectName(QString::fromUtf8("mode4SimpleCheckBox"));

        simpleCheckBoxLayout->addWidget(mode4SimpleCheckBox);

        mode5SimpleCheckBox = new QCheckBox(horizontalLayoutWidget);
        mode5SimpleCheckBox->setObjectName(QString::fromUtf8("mode5SimpleCheckBox"));

        simpleCheckBoxLayout->addWidget(mode5SimpleCheckBox);


        horizontalLayout->addLayout(simpleCheckBoxLayout);

        PWMLabelLayout = new QVBoxLayout();
#ifndef Q_OS_MAC
        PWMLabelLayout->setSpacing(-1);
#endif
        PWMLabelLayout->setObjectName(QString::fromUtf8("PWMLabelLayout"));
        mode0PWMLabel = new QLabel(horizontalLayoutWidget);
        mode0PWMLabel->setObjectName(QString::fromUtf8("mode0PWMLabel"));
        mode0PWMLabel->setStyleSheet(QString::fromUtf8(""));

        PWMLabelLayout->addWidget(mode0PWMLabel);

        mode1PWMLabel = new QLabel(horizontalLayoutWidget);
        mode1PWMLabel->setObjectName(QString::fromUtf8("mode1PWMLabel"));

        PWMLabelLayout->addWidget(mode1PWMLabel);

        mode2PWMLabel = new QLabel(horizontalLayoutWidget);
        mode2PWMLabel->setObjectName(QString::fromUtf8("mode2PWMLabel"));

        PWMLabelLayout->addWidget(mode2PWMLabel);

        mode3PWMLabel = new QLabel(horizontalLayoutWidget);
        mode3PWMLabel->setObjectName(QString::fromUtf8("mode3PWMLabel"));

        PWMLabelLayout->addWidget(mode3PWMLabel);

        mode4PWMLabel = new QLabel(horizontalLayoutWidget);
        mode4PWMLabel->setObjectName(QString::fromUtf8("mode4PWMLabel"));

        PWMLabelLayout->addWidget(mode4PWMLabel);

        mode5PWMLabel = new QLabel(horizontalLayoutWidget);
        mode5PWMLabel->setObjectName(QString::fromUtf8("mode5PWMLabel"));
        mode5PWMLabel->setStyleSheet(QString::fromUtf8(""));

        PWMLabelLayout->addWidget(mode5PWMLabel);


        horizontalLayout->addLayout(PWMLabelLayout);

        savePushButton = new QPushButton(FlightModeConfig);
        savePushButton->setObjectName(QString::fromUtf8("savePushButton"));
        savePushButton->setGeometry(QRect(50, 290, 75, 23));

        retranslateUi(FlightModeConfig);

        QMetaObject::connectSlotsByName(FlightModeConfig);
    } // setupUi

    void retranslateUi(QWidget *FlightModeConfig)
    {
        FlightModeConfig->setWindowTitle(QApplication::translate("FlightModeConfig", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("FlightModeConfig", "<h2>Flight Modes</h2>", 0, QApplication::UnicodeUTF8));
        mode0Label->setText(QApplication::translate("FlightModeConfig", "Flight Mode 1", 0, QApplication::UnicodeUTF8));
        mode1Label->setText(QApplication::translate("FlightModeConfig", "Flight Mode 2", 0, QApplication::UnicodeUTF8));
        mode2Label->setText(QApplication::translate("FlightModeConfig", "Flight Mode 3", 0, QApplication::UnicodeUTF8));
        mode3Label->setText(QApplication::translate("FlightModeConfig", "Flight Mode 4", 0, QApplication::UnicodeUTF8));
        mode4Label->setText(QApplication::translate("FlightModeConfig", "Flight Mode 5", 0, QApplication::UnicodeUTF8));
        mode5Label->setText(QApplication::translate("FlightModeConfig", "Flight Mode 6", 0, QApplication::UnicodeUTF8));
        mode0SimpleCheckBox->setText(QApplication::translate("FlightModeConfig", "Simple Mode", 0, QApplication::UnicodeUTF8));
        mode1SimpleCheckBox->setText(QApplication::translate("FlightModeConfig", "Simple Mode", 0, QApplication::UnicodeUTF8));
        mode2SimpleCheckBox->setText(QApplication::translate("FlightModeConfig", "Simple Mode", 0, QApplication::UnicodeUTF8));
        mode3SimpleCheckBox->setText(QApplication::translate("FlightModeConfig", "Simple Mode", 0, QApplication::UnicodeUTF8));
        mode4SimpleCheckBox->setText(QApplication::translate("FlightModeConfig", "Simple Mode", 0, QApplication::UnicodeUTF8));
        mode5SimpleCheckBox->setText(QApplication::translate("FlightModeConfig", "Simple Mode", 0, QApplication::UnicodeUTF8));
        mode0PWMLabel->setText(QApplication::translate("FlightModeConfig", "PWM 0 - 1230", 0, QApplication::UnicodeUTF8));
        mode1PWMLabel->setText(QApplication::translate("FlightModeConfig", "PWM 1231 - 1360", 0, QApplication::UnicodeUTF8));
        mode2PWMLabel->setText(QApplication::translate("FlightModeConfig", "PWM 1361 - 1490", 0, QApplication::UnicodeUTF8));
        mode3PWMLabel->setText(QApplication::translate("FlightModeConfig", "PWM 1491 - 1620", 0, QApplication::UnicodeUTF8));
        mode4PWMLabel->setText(QApplication::translate("FlightModeConfig", "PWM 1621 - 1749", 0, QApplication::UnicodeUTF8));
        mode5PWMLabel->setText(QApplication::translate("FlightModeConfig", "PWM 1750 +", 0, QApplication::UnicodeUTF8));
        savePushButton->setText(QApplication::translate("FlightModeConfig", "Save", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FlightModeConfig: public Ui_FlightModeConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLIGHTMODECONFIG_H
