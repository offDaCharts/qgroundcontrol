/********************************************************************************
** Form generated from reading UI file 'CompassConfig.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPASSCONFIG_H
#define UI_COMPASSCONFIG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CompassConfig
{
public:
    QLabel *label;
    QLabel *label_4;
    QComboBox *orientationComboBox;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_6;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *declinationLineEdit;
    QLabel *label_3;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QVBoxLayout *verticalLayout;
    QCheckBox *enableCheckBox;
    QCheckBox *autoDecCheckBox;
    QSpacerItem *verticalSpacer;
    QLabel *label_5;

    void setupUi(QWidget *CompassConfig)
    {
        if (CompassConfig->objectName().isEmpty())
            CompassConfig->setObjectName(QString::fromUtf8("CompassConfig"));
        CompassConfig->resize(565, 241);
        label = new QLabel(CompassConfig);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 0, 521, 31));
        label->setScaledContents(false);
        label_4 = new QLabel(CompassConfig);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(230, 100, 101, 16));
        orientationComboBox = new QComboBox(CompassConfig);
        orientationComboBox->setObjectName(QString::fromUtf8("orientationComboBox"));
        orientationComboBox->setGeometry(QRect(280, 120, 201, 22));
        pushButton = new QPushButton(CompassConfig);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(290, 180, 101, 23));
        pushButton_2 = new QPushButton(CompassConfig);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(390, 180, 101, 23));
        label_6 = new QLabel(CompassConfig);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(340, 160, 91, 16));
        horizontalLayoutWidget_2 = new QWidget(CompassConfig);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(220, 70, 321, 31));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        declinationLineEdit = new QLineEdit(horizontalLayoutWidget_2);
        declinationLineEdit->setObjectName(QString::fromUtf8("declinationLineEdit"));

        horizontalLayout_3->addWidget(declinationLineEdit);

        label_3 = new QLabel(horizontalLayoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        horizontalLayoutWidget = new QWidget(CompassConfig);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 70, 211, 111));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(100, 100));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/files/images/devices/BR-HMC5883-01-2.jpg")));
        label_2->setScaledContents(true);

        horizontalLayout->addWidget(label_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        enableCheckBox = new QCheckBox(horizontalLayoutWidget);
        enableCheckBox->setObjectName(QString::fromUtf8("enableCheckBox"));

        verticalLayout->addWidget(enableCheckBox);

        autoDecCheckBox = new QCheckBox(horizontalLayoutWidget);
        autoDecCheckBox->setObjectName(QString::fromUtf8("autoDecCheckBox"));

        verticalLayout->addWidget(autoDecCheckBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);

        label_5 = new QLabel(CompassConfig);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(220, 120, 54, 20));

        retranslateUi(CompassConfig);

        QMetaObject::connectSlotsByName(CompassConfig);
    } // setupUi

    void retranslateUi(QWidget *CompassConfig)
    {
        CompassConfig->setWindowTitle(QApplication::translate("CompassConfig", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CompassConfig", "<h2>Compass</h2>", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("CompassConfig", "<a href=\"http://magnetic-declination.com/\">Declination Website</a>", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("CompassConfig", "Live Calibration", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("CompassConfig", "Log Calibration", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("CompassConfig", "Advanced Config ", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("CompassConfig", "in Degrees eg 2* 3' W is -2.3", 0, QApplication::UnicodeUTF8));
        label_2->setText(QString());
        enableCheckBox->setText(QApplication::translate("CompassConfig", "Enable", 0, QApplication::UnicodeUTF8));
        autoDecCheckBox->setText(QApplication::translate("CompassConfig", "Auto Declination", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("CompassConfig", "Orientation", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CompassConfig: public Ui_CompassConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPASSCONFIG_H
