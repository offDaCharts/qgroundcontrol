/********************************************************************************
** Form generated from reading UI file 'SlugsPadCameraControl.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SLUGSPADCAMERACONTROL_H
#define UI_SLUGSPADCAMERACONTROL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SlugsPadCameraControl
{
public:
    QGridLayout *gridLayout;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *lbPixel;
    QLabel *lbDirection;

    void setupUi(QWidget *SlugsPadCameraControl)
    {
        if (SlugsPadCameraControl->objectName().isEmpty())
            SlugsPadCameraControl->setObjectName(QString::fromUtf8("SlugsPadCameraControl"));
        SlugsPadCameraControl->resize(200, 200);
        SlugsPadCameraControl->setMinimumSize(QSize(200, 200));
        SlugsPadCameraControl->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);"));
        gridLayout = new QGridLayout(SlugsPadCameraControl);
        gridLayout->setSpacing(1);
        gridLayout->setContentsMargins(1, 1, 1, 1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        frame = new QFrame(SlugsPadCameraControl);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMinimumSize(QSize(200, 200));
        frame->setMouseTracking(true);
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(135, 206, 235);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalSpacer = new QSpacerItem(20, 156, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lbPixel = new QLabel(frame);
        lbPixel->setObjectName(QString::fromUtf8("lbPixel"));
        lbPixel->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(lbPixel);

        lbDirection = new QLabel(frame);
        lbDirection->setObjectName(QString::fromUtf8("lbDirection"));

        horizontalLayout->addWidget(lbDirection);


        gridLayout_2->addLayout(horizontalLayout, 1, 0, 1, 1);


        gridLayout->addWidget(frame, 0, 0, 1, 1);


        retranslateUi(SlugsPadCameraControl);

        QMetaObject::connectSlotsByName(SlugsPadCameraControl);
    } // setupUi

    void retranslateUi(QWidget *SlugsPadCameraControl)
    {
        SlugsPadCameraControl->setWindowTitle(QApplication::translate("SlugsPadCameraControl", "Form", 0, QApplication::UnicodeUTF8));
        lbPixel->setText(QApplication::translate("SlugsPadCameraControl", "----", 0, QApplication::UnicodeUTF8));
        lbDirection->setText(QApplication::translate("SlugsPadCameraControl", "----", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SlugsPadCameraControl: public Ui_SlugsPadCameraControl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SLUGSPADCAMERACONTROL_H
