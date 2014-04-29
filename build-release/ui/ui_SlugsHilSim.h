/********************************************************************************
** Form generated from reading UI file 'SlugsHilSim.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SLUGSHILSIM_H
#define UI_SLUGSHILSIM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SlugsHilSim
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *ed_ipAdress;
    QFrame *line;
    QLabel *label;
    QLineEdit *ed_rxPort;
    QLabel *label_3;
    QLineEdit *ed_txPort;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_3;
    QComboBox *cb_mavlinkLinks;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *bt_startHil;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_7;
    QLineEdit *ed_count;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *ed_1;
    QLineEdit *ed_2;
    QLineEdit *ed_3;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *tbA;
    QLineEdit *tbB;
    QLineEdit *tbC;

    void setupUi(QWidget *SlugsHilSim)
    {
        if (SlugsHilSim->objectName().isEmpty())
            SlugsHilSim->setObjectName(QString::fromUtf8("SlugsHilSim"));
        SlugsHilSim->resize(337, 278);
        SlugsHilSim->setMinimumSize(QSize(320, 252));
        SlugsHilSim->setMaximumSize(QSize(450, 278));
        QFont font;
        font.setPointSize(10);
        SlugsHilSim->setFont(font);
        verticalLayout = new QVBoxLayout(SlugsHilSim);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(SlugsHilSim);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        label_2->setLayoutDirection(Qt::LeftToRight);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        ed_ipAdress = new QLineEdit(SlugsHilSim);
        ed_ipAdress->setObjectName(QString::fromUtf8("ed_ipAdress"));
        ed_ipAdress->setMinimumSize(QSize(60, 18));
        ed_ipAdress->setMaximumSize(QSize(80, 18));

        gridLayout->addWidget(ed_ipAdress, 0, 1, 1, 1);

        line = new QFrame(SlugsHilSim);
        line->setObjectName(QString::fromUtf8("line"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(line->sizePolicy().hasHeightForWidth());
        line->setSizePolicy(sizePolicy);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 1, 0, 1, 2);

        label = new QLabel(SlugsHilSim);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font1);
        label->setLayoutDirection(Qt::LeftToRight);

        gridLayout->addWidget(label, 2, 0, 1, 1);

        ed_rxPort = new QLineEdit(SlugsHilSim);
        ed_rxPort->setObjectName(QString::fromUtf8("ed_rxPort"));
        ed_rxPort->setMinimumSize(QSize(60, 18));
        ed_rxPort->setMaximumSize(QSize(80, 18));

        gridLayout->addWidget(ed_rxPort, 2, 1, 1, 1);

        label_3 = new QLabel(SlugsHilSim);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);
        label_3->setLayoutDirection(Qt::LeftToRight);

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        ed_txPort = new QLineEdit(SlugsHilSim);
        ed_txPort->setObjectName(QString::fromUtf8("ed_txPort"));
        ed_txPort->setMinimumSize(QSize(60, 18));
        ed_txPort->setMaximumSize(QSize(80, 18));

        gridLayout->addWidget(ed_txPort, 3, 1, 1, 1);


        horizontalLayout_2->addLayout(gridLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(SlugsHilSim);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);
        label_4->setLayoutDirection(Qt::RightToLeft);

        horizontalLayout_3->addWidget(label_4);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        cb_mavlinkLinks = new QComboBox(SlugsHilSim);
        cb_mavlinkLinks->setObjectName(QString::fromUtf8("cb_mavlinkLinks"));
        cb_mavlinkLinks->setMinimumSize(QSize(171, 26));

        horizontalLayout_3->addWidget(cb_mavlinkLinks);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        bt_startHil = new QPushButton(SlugsHilSim);
        bt_startHil->setObjectName(QString::fromUtf8("bt_startHil"));
        bt_startHil->setCheckable(true);

        horizontalLayout->addWidget(bt_startHil);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_7 = new QLabel(SlugsHilSim);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font1);
        label_7->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout_4->addWidget(label_7);

        ed_count = new QLineEdit(SlugsHilSim);
        ed_count->setObjectName(QString::fromUtf8("ed_count"));
        ed_count->setMinimumSize(QSize(60, 18));
        ed_count->setMaximumSize(QSize(80, 18));
        ed_count->setReadOnly(true);

        horizontalLayout_4->addWidget(ed_count);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        ed_1 = new QLineEdit(SlugsHilSim);
        ed_1->setObjectName(QString::fromUtf8("ed_1"));
        ed_1->setMinimumSize(QSize(60, 18));
        ed_1->setMaximumSize(QSize(80, 18));
        ed_1->setReadOnly(true);

        horizontalLayout_5->addWidget(ed_1);

        ed_2 = new QLineEdit(SlugsHilSim);
        ed_2->setObjectName(QString::fromUtf8("ed_2"));
        ed_2->setMinimumSize(QSize(60, 18));
        ed_2->setMaximumSize(QSize(80, 18));
        ed_2->setReadOnly(true);

        horizontalLayout_5->addWidget(ed_2);

        ed_3 = new QLineEdit(SlugsHilSim);
        ed_3->setObjectName(QString::fromUtf8("ed_3"));
        ed_3->setMinimumSize(QSize(60, 18));
        ed_3->setMaximumSize(QSize(80, 18));
        ed_3->setReadOnly(true);

        horizontalLayout_5->addWidget(ed_3);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        tbA = new QLineEdit(SlugsHilSim);
        tbA->setObjectName(QString::fromUtf8("tbA"));

        horizontalLayout_6->addWidget(tbA);

        tbB = new QLineEdit(SlugsHilSim);
        tbB->setObjectName(QString::fromUtf8("tbB"));

        horizontalLayout_6->addWidget(tbB);

        tbC = new QLineEdit(SlugsHilSim);
        tbC->setObjectName(QString::fromUtf8("tbC"));

        horizontalLayout_6->addWidget(tbC);


        verticalLayout->addLayout(horizontalLayout_6);


        retranslateUi(SlugsHilSim);

        QMetaObject::connectSlotsByName(SlugsHilSim);
    } // setupUi

    void retranslateUi(QWidget *SlugsHilSim)
    {
        SlugsHilSim->setWindowTitle(QApplication::translate("SlugsHilSim", "Form", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("SlugsHilSim", "IP Address", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("SlugsHilSim", "Receive Port", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("SlugsHilSim", "Send Port", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("SlugsHilSim", "Slugs HIL Link", 0, QApplication::UnicodeUTF8));
        bt_startHil->setText(QApplication::translate("SlugsHilSim", "Set Slugs in HIL Mode", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("SlugsHilSim", "Count", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SlugsHilSim: public Ui_SlugsHilSim {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SLUGSHILSIM_H
