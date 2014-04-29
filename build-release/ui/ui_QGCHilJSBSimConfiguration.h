/********************************************************************************
** Form generated from reading UI file 'QGCHilJSBSimConfiguration.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCHILJSBSIMCONFIGURATION_H
#define UI_QGCHILJSBSIMCONFIGURATION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QGCHilJSBSimConfiguration
{
public:
    QGridLayout *gridLayout;
    QLabel *aircraftPlaintextInfoLabel;
    QComboBox *aircraftComboBox;
    QLabel *optionsLabel;
    QPlainTextEdit *optionsPlainTextEdit;
    QPushButton *startButton;
    QPushButton *stopButton;

    void setupUi(QWidget *QGCHilJSBSimConfiguration)
    {
        if (QGCHilJSBSimConfiguration->objectName().isEmpty())
            QGCHilJSBSimConfiguration->setObjectName(QString::fromUtf8("QGCHilJSBSimConfiguration"));
        QGCHilJSBSimConfiguration->resize(237, 204);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QGCHilJSBSimConfiguration->sizePolicy().hasHeightForWidth());
        QGCHilJSBSimConfiguration->setSizePolicy(sizePolicy);
        QGCHilJSBSimConfiguration->setLayoutDirection(Qt::LeftToRight);
        QGCHilJSBSimConfiguration->setAutoFillBackground(false);
        gridLayout = new QGridLayout(QGCHilJSBSimConfiguration);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        aircraftPlaintextInfoLabel = new QLabel(QGCHilJSBSimConfiguration);
        aircraftPlaintextInfoLabel->setObjectName(QString::fromUtf8("aircraftPlaintextInfoLabel"));

        gridLayout->addWidget(aircraftPlaintextInfoLabel, 0, 0, 1, 1);

        aircraftComboBox = new QComboBox(QGCHilJSBSimConfiguration);
        aircraftComboBox->setObjectName(QString::fromUtf8("aircraftComboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(aircraftComboBox->sizePolicy().hasHeightForWidth());
        aircraftComboBox->setSizePolicy(sizePolicy1);
        aircraftComboBox->setEditable(true);

        gridLayout->addWidget(aircraftComboBox, 1, 0, 1, 2);

        optionsLabel = new QLabel(QGCHilJSBSimConfiguration);
        optionsLabel->setObjectName(QString::fromUtf8("optionsLabel"));

        gridLayout->addWidget(optionsLabel, 2, 0, 1, 1);

        optionsPlainTextEdit = new QPlainTextEdit(QGCHilJSBSimConfiguration);
        optionsPlainTextEdit->setObjectName(QString::fromUtf8("optionsPlainTextEdit"));
        sizePolicy.setHeightForWidth(optionsPlainTextEdit->sizePolicy().hasHeightForWidth());
        optionsPlainTextEdit->setSizePolicy(sizePolicy);

        gridLayout->addWidget(optionsPlainTextEdit, 3, 0, 1, 2);

        startButton = new QPushButton(QGCHilJSBSimConfiguration);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(startButton->sizePolicy().hasHeightForWidth());
        startButton->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(startButton, 5, 0, 1, 1);

        stopButton = new QPushButton(QGCHilJSBSimConfiguration);
        stopButton->setObjectName(QString::fromUtf8("stopButton"));

        gridLayout->addWidget(stopButton, 5, 1, 1, 1);


        retranslateUi(QGCHilJSBSimConfiguration);

        QMetaObject::connectSlotsByName(QGCHilJSBSimConfiguration);
    } // setupUi

    void retranslateUi(QWidget *QGCHilJSBSimConfiguration)
    {
        QGCHilJSBSimConfiguration->setWindowTitle(QApplication::translate("QGCHilJSBSimConfiguration", "Form", 0, QApplication::UnicodeUTF8));
        aircraftPlaintextInfoLabel->setText(QApplication::translate("QGCHilJSBSimConfiguration", "Airframe:", 0, QApplication::UnicodeUTF8));
        optionsLabel->setText(QApplication::translate("QGCHilJSBSimConfiguration", "<html><head/><body><p>Additional Options:</p></body></html>", 0, QApplication::UnicodeUTF8));
        optionsPlainTextEdit->setPlainText(QApplication::translate("QGCHilJSBSimConfiguration", "--in-air --roll=0 --pitch=0 --vc=90 --heading=300 --timeofday=noon --disable-hud-3d --disable-fullscreen --geometry=400x300 --disable-anti-alias-hud --wind=0@0 --turbulence=0.0 --prop:/sim/frame-rate-throttle-hz=30 --control=mouse --disable-intro-music --disable-sound --disable-random-objects --disable-ai-models --shading-flat --fog-disable --disable-specular-highlight --disable-random-objects --disable-panel --disable-clouds --fdm=jsb --units-meters --prop:/engines/engine/running=true", 0, QApplication::UnicodeUTF8));
        startButton->setText(QApplication::translate("QGCHilJSBSimConfiguration", "Start", 0, QApplication::UnicodeUTF8));
        stopButton->setText(QApplication::translate("QGCHilJSBSimConfiguration", "Stop", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QGCHilJSBSimConfiguration: public Ui_QGCHilJSBSimConfiguration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCHILJSBSIMCONFIGURATION_H
