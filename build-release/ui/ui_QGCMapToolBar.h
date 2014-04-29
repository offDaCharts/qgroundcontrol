/********************************************************************************
** Form generated from reading UI file 'QGCMapToolBar.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCMAPTOOLBAR_H
#define UI_QGCMAPTOOLBAR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QGCMapToolBar
{
public:
    QHBoxLayout *horizontalLayout;
    QPushButton *goToButton;
    QPushButton *editButton;
    QPushButton *goHomeButton;
    QPushButton *lastPosButton;
    QPushButton *ripMapButton;
    QPushButton *clearTrailsButton;
    QCheckBox *followCheckBox;
    QSpacerItem *horizontalSpacer;
    QLabel *posLabel;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *optionsButton;

    void setupUi(QWidget *QGCMapToolBar)
    {
        if (QGCMapToolBar->objectName().isEmpty())
            QGCMapToolBar->setObjectName(QString::fromUtf8("QGCMapToolBar"));
        QGCMapToolBar->resize(809, 35);
        horizontalLayout = new QHBoxLayout(QGCMapToolBar);
        horizontalLayout->setSpacing(2);
        horizontalLayout->setContentsMargins(4, 4, 4, 4);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        goToButton = new QPushButton(QGCMapToolBar);
        goToButton->setObjectName(QString::fromUtf8("goToButton"));

        horizontalLayout->addWidget(goToButton);

        editButton = new QPushButton(QGCMapToolBar);
        editButton->setObjectName(QString::fromUtf8("editButton"));

        horizontalLayout->addWidget(editButton);

        goHomeButton = new QPushButton(QGCMapToolBar);
        goHomeButton->setObjectName(QString::fromUtf8("goHomeButton"));

        horizontalLayout->addWidget(goHomeButton);

        lastPosButton = new QPushButton(QGCMapToolBar);
        lastPosButton->setObjectName(QString::fromUtf8("lastPosButton"));

        horizontalLayout->addWidget(lastPosButton);

        ripMapButton = new QPushButton(QGCMapToolBar);
        ripMapButton->setObjectName(QString::fromUtf8("ripMapButton"));

        horizontalLayout->addWidget(ripMapButton);

        clearTrailsButton = new QPushButton(QGCMapToolBar);
        clearTrailsButton->setObjectName(QString::fromUtf8("clearTrailsButton"));

        horizontalLayout->addWidget(clearTrailsButton);

        followCheckBox = new QCheckBox(QGCMapToolBar);
        followCheckBox->setObjectName(QString::fromUtf8("followCheckBox"));

        horizontalLayout->addWidget(followCheckBox);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        posLabel = new QLabel(QGCMapToolBar);
        posLabel->setObjectName(QString::fromUtf8("posLabel"));

        horizontalLayout->addWidget(posLabel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        optionsButton = new QPushButton(QGCMapToolBar);
        optionsButton->setObjectName(QString::fromUtf8("optionsButton"));

        horizontalLayout->addWidget(optionsButton);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 1);
        horizontalLayout->setStretch(2, 1);
        horizontalLayout->setStretch(3, 1);
        horizontalLayout->setStretch(4, 1);
        horizontalLayout->setStretch(5, 1);
        horizontalLayout->setStretch(6, 1);
        horizontalLayout->setStretch(7, 5);
        horizontalLayout->setStretch(8, 1);
        horizontalLayout->setStretch(9, 30);
        horizontalLayout->setStretch(10, 1);

        retranslateUi(QGCMapToolBar);

        QMetaObject::connectSlotsByName(QGCMapToolBar);
    } // setupUi

    void retranslateUi(QWidget *QGCMapToolBar)
    {
        QGCMapToolBar->setWindowTitle(QApplication::translate("QGCMapToolBar", "Form", 0, QApplication::UnicodeUTF8));
        goToButton->setText(QApplication::translate("QGCMapToolBar", "Lat/Lon", 0, QApplication::UnicodeUTF8));
        editButton->setText(QApplication::translate("QGCMapToolBar", "Edit", 0, QApplication::UnicodeUTF8));
        goHomeButton->setText(QApplication::translate("QGCMapToolBar", "Go Home", 0, QApplication::UnicodeUTF8));
        lastPosButton->setText(QApplication::translate("QGCMapToolBar", "Last Pos", 0, QApplication::UnicodeUTF8));
        ripMapButton->setText(QApplication::translate("QGCMapToolBar", "Cache", 0, QApplication::UnicodeUTF8));
        clearTrailsButton->setText(QApplication::translate("QGCMapToolBar", "Clear Map", 0, QApplication::UnicodeUTF8));
        followCheckBox->setText(QApplication::translate("QGCMapToolBar", "Follow", 0, QApplication::UnicodeUTF8));
        posLabel->setText(QApplication::translate("QGCMapToolBar", "00.00 00.00", 0, QApplication::UnicodeUTF8));
        optionsButton->setText(QApplication::translate("QGCMapToolBar", "Options", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QGCMapToolBar: public Ui_QGCMapToolBar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCMAPTOOLBAR_H
