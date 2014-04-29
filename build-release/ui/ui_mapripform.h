/********************************************************************************
** Form generated from reading UI file 'mapripform.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAPRIPFORM_H
#define UI_MAPRIPFORM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MapRipForm
{
public:
    QProgressBar *progressBar;
    QLabel *mainlabel;
    QLabel *statuslabel;
    QPushButton *cancelButton;

    void setupUi(QWidget *MapRipForm)
    {
        if (MapRipForm->objectName().isEmpty())
            MapRipForm->setObjectName(QString::fromUtf8("MapRipForm"));
        MapRipForm->resize(392, 133);
        progressBar = new QProgressBar(MapRipForm);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(20, 60, 371, 23));
        progressBar->setValue(0);
        mainlabel = new QLabel(MapRipForm);
        mainlabel->setObjectName(QString::fromUtf8("mainlabel"));
        mainlabel->setGeometry(QRect(30, 10, 321, 16));
        statuslabel = new QLabel(MapRipForm);
        statuslabel->setObjectName(QString::fromUtf8("statuslabel"));
        statuslabel->setGeometry(QRect(30, 40, 341, 16));
        cancelButton = new QPushButton(MapRipForm);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setGeometry(QRect(280, 100, 75, 23));

        retranslateUi(MapRipForm);

        QMetaObject::connectSlotsByName(MapRipForm);
    } // setupUi

    void retranslateUi(QWidget *MapRipForm)
    {
        MapRipForm->setWindowTitle(QApplication::translate("MapRipForm", "MapRipper", 0, QApplication::UnicodeUTF8));
        mainlabel->setText(QApplication::translate("MapRipForm", "Currently ripping from:", 0, QApplication::UnicodeUTF8));
        statuslabel->setText(QApplication::translate("MapRipForm", "Downloading tile", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("MapRipForm", "Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MapRipForm: public Ui_MapRipForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAPRIPFORM_H
