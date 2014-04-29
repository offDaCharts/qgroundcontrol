/********************************************************************************
** Form generated from reading UI file 'WaypointEditableView.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WAYPOINTEDITABLEVIEW_H
#define UI_WAYPOINTEDITABLEVIEW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WaypointEditableView
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *idLabel;
    QCheckBox *selectedBox;
    QComboBox *comboBox_frame;
    QComboBox *comboBox_action;
    QWidget *customActionWidget;
    QCheckBox *autoContinue;
    QToolButton *upButton;
    QToolButton *downButton;
    QToolButton *removeButton;

    void setupUi(QWidget *WaypointEditableView)
    {
        if (WaypointEditableView->objectName().isEmpty())
            WaypointEditableView->setObjectName(QString::fromUtf8("WaypointEditableView"));
        WaypointEditableView->resize(585, 45);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(WaypointEditableView->sizePolicy().hasHeightForWidth());
        WaypointEditableView->setSizePolicy(sizePolicy);
        WaypointEditableView->setMinimumSize(QSize(200, 0));
        WaypointEditableView->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout = new QHBoxLayout(WaypointEditableView);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(6, 6, 6, 6);
        idLabel = new QLabel(WaypointEditableView);
        idLabel->setObjectName(QString::fromUtf8("idLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(idLabel->sizePolicy().hasHeightForWidth());
        idLabel->setSizePolicy(sizePolicy1);
        idLabel->setMinimumSize(QSize(25, 0));
        idLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(idLabel);

        selectedBox = new QCheckBox(WaypointEditableView);
        selectedBox->setObjectName(QString::fromUtf8("selectedBox"));
        selectedBox->setEnabled(false);
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(selectedBox->sizePolicy().hasHeightForWidth());
        selectedBox->setSizePolicy(sizePolicy2);
        selectedBox->setMinimumSize(QSize(20, 0));
        selectedBox->setFocusPolicy(Qt::TabFocus);
        selectedBox->setIconSize(QSize(16, 16));

        horizontalLayout->addWidget(selectedBox);

        comboBox_frame = new QComboBox(WaypointEditableView);
        comboBox_frame->setObjectName(QString::fromUtf8("comboBox_frame"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(comboBox_frame->sizePolicy().hasHeightForWidth());
        comboBox_frame->setSizePolicy(sizePolicy3);
        comboBox_frame->setMaximumSize(QSize(100, 16777215));
        comboBox_frame->setSizeAdjustPolicy(QComboBox::AdjustToContentsOnFirstShow);

        horizontalLayout->addWidget(comboBox_frame);

        comboBox_action = new QComboBox(WaypointEditableView);
        comboBox_action->setObjectName(QString::fromUtf8("comboBox_action"));
        sizePolicy3.setHeightForWidth(comboBox_action->sizePolicy().hasHeightForWidth());
        comboBox_action->setSizePolicy(sizePolicy3);
        comboBox_action->setMaximumSize(QSize(120, 16777215));
        comboBox_action->setSizeAdjustPolicy(QComboBox::AdjustToContentsOnFirstShow);

        horizontalLayout->addWidget(comboBox_action);

        customActionWidget = new QWidget(WaypointEditableView);
        customActionWidget->setObjectName(QString::fromUtf8("customActionWidget"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(customActionWidget->sizePolicy().hasHeightForWidth());
        customActionWidget->setSizePolicy(sizePolicy4);
        customActionWidget->setMinimumSize(QSize(0, 0));

        horizontalLayout->addWidget(customActionWidget);

        autoContinue = new QCheckBox(WaypointEditableView);
        autoContinue->setObjectName(QString::fromUtf8("autoContinue"));
        sizePolicy2.setHeightForWidth(autoContinue->sizePolicy().hasHeightForWidth());
        autoContinue->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(autoContinue);

        upButton = new QToolButton(WaypointEditableView);
        upButton->setObjectName(QString::fromUtf8("upButton"));
        sizePolicy2.setHeightForWidth(upButton->sizePolicy().hasHeightForWidth());
        upButton->setSizePolicy(sizePolicy2);
        upButton->setMinimumSize(QSize(24, 24));
        upButton->setFocusPolicy(Qt::NoFocus);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/files/images/actions/go-up.svg"), QSize(), QIcon::Normal, QIcon::Off);
        upButton->setIcon(icon);

        horizontalLayout->addWidget(upButton);

        downButton = new QToolButton(WaypointEditableView);
        downButton->setObjectName(QString::fromUtf8("downButton"));
        sizePolicy2.setHeightForWidth(downButton->sizePolicy().hasHeightForWidth());
        downButton->setSizePolicy(sizePolicy2);
        downButton->setMinimumSize(QSize(24, 24));
        downButton->setFocusPolicy(Qt::NoFocus);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/files/images/actions/go-down.svg"), QSize(), QIcon::Normal, QIcon::Off);
        downButton->setIcon(icon1);

        horizontalLayout->addWidget(downButton);

        removeButton = new QToolButton(WaypointEditableView);
        removeButton->setObjectName(QString::fromUtf8("removeButton"));
        sizePolicy2.setHeightForWidth(removeButton->sizePolicy().hasHeightForWidth());
        removeButton->setSizePolicy(sizePolicy2);
        removeButton->setMinimumSize(QSize(24, 24));
        removeButton->setFocusPolicy(Qt::NoFocus);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/files/images/actions/list-remove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        removeButton->setIcon(icon2);

        horizontalLayout->addWidget(removeButton);


        retranslateUi(WaypointEditableView);

        QMetaObject::connectSlotsByName(WaypointEditableView);
    } // setupUi

    void retranslateUi(QWidget *WaypointEditableView)
    {
        WaypointEditableView->setWindowTitle(QApplication::translate("WaypointEditableView", "Form", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        idLabel->setToolTip(QApplication::translate("WaypointEditableView", "Waypoint Sequence Number", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        idLabel->setText(QApplication::translate("WaypointEditableView", "ID", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        selectedBox->setToolTip(QApplication::translate("WaypointEditableView", "Mission Start", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        selectedBox->setStatusTip(QApplication::translate("WaypointEditableView", "Mission Start", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        selectedBox->setText(QString());
#ifndef QT_NO_TOOLTIP
        comboBox_frame->setToolTip(QApplication::translate("WaypointEditableView", "Coordinate frame", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        comboBox_frame->setStatusTip(QApplication::translate("WaypointEditableView", "Coordinate frame", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_TOOLTIP
        comboBox_action->setToolTip(QApplication::translate("WaypointEditableView", "Action at Waypoint", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        comboBox_action->setStatusTip(QApplication::translate("WaypointEditableView", "Action at Waypoint", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_TOOLTIP
        autoContinue->setToolTip(QApplication::translate("WaypointEditableView", "Automatically continue after this waypoint", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        autoContinue->setStatusTip(QApplication::translate("WaypointEditableView", "Automatically continue after this waypoint", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        autoContinue->setText(QString());
#ifndef QT_NO_TOOLTIP
        upButton->setToolTip(QApplication::translate("WaypointEditableView", "Move Up in List", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        upButton->setStatusTip(QApplication::translate("WaypointEditableView", "Move Up in List", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        upButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        downButton->setToolTip(QApplication::translate("WaypointEditableView", "Move Down in List", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        downButton->setStatusTip(QApplication::translate("WaypointEditableView", "Move Down in List", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        downButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        removeButton->setToolTip(QApplication::translate("WaypointEditableView", "Delete", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        removeButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class WaypointEditableView: public Ui_WaypointEditableView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WAYPOINTEDITABLEVIEW_H
