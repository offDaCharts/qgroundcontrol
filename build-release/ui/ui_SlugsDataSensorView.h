/********************************************************************************
** Form generated from reading UI file 'SlugsDataSensorView.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SLUGSDATASENSORVIEW_H
#define UI_SLUGSDATASENSORVIEW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SlugsDataSensorView
{
public:
    QGridLayout *gridLayout;
    QTabWidget *SlugsSensorView_tabWidget;
    QWidget *tab_5;
    QGridLayout *gridLayout_19;
    QVBoxLayout *verticalLayout_27;
    QGroupBox *position_groupBox;
    QGridLayout *gridLayout_17;
    QVBoxLayout *verticalLayout_5;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *ed_x;
    QLineEdit *ed_y;
    QLineEdit *ed_z;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QVBoxLayout *verticalLayout_9;
    QLineEdit *ed_vx;
    QLineEdit *ed_vy;
    QLineEdit *ed_vz;
    QGroupBox *attitude_groupBox;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_7;
    QLineEdit *m_Roll;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_8;
    QLineEdit *m_Pitch;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_9;
    QLineEdit *m_Yaw;
    QGroupBox *navigation_groupBox;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_26;
    QLabel *label_27;
    QLabel *label_28;
    QLabel *label_29;
    QLabel *label_30;
    QVBoxLayout *verticalLayout_21;
    QLineEdit *m_Um;
    QLineEdit *m_PitchC;
    QLineEdit *m_PsidC;
    QLineEdit *m_PhiC;
    QLineEdit *m_AyBody;
    QVBoxLayout *verticalLayout_26;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_31;
    QLabel *label_32;
    QVBoxLayout *verticalLayout_24;
    QLineEdit *m_FromWP;
    QLineEdit *m_ToWP;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_33;
    QLabel *label_34;
    QVBoxLayout *verticalLayout_25;
    QLineEdit *m_TotRun;
    QLineEdit *m_DistToGo;
    QSpacerItem *verticalSpacer_5;
    QWidget *tab;
    QGridLayout *gridLayout_26;
    QVBoxLayout *verticalLayout_20;
    QVBoxLayout *verticalLayout_19;
    QGroupBox *sensorBiases_groupBox;
    QGridLayout *gridLayout_6;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_14;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QVBoxLayout *verticalLayout_13;
    QLineEdit *m_AxBiases;
    QLineEdit *m_AyBiases;
    QLineEdit *m_AzBiases;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout_16;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QVBoxLayout *verticalLayout_15;
    QLineEdit *m_GxBiases;
    QLineEdit *m_GyBiases;
    QLineEdit *m_GzBiases;
    QGroupBox *PWMCommands_groupBox;
    QGridLayout *gridLayout_9;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *m_pwmThro;
    QLineEdit *m_pwmAile;
    QLineEdit *m_pwmElev;
    QLineEdit *m_pwmRudd;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QVBoxLayout *verticalLayout_12;
    QLineEdit *m_pwmThroTrim;
    QLineEdit *m_pwmAileTrim;
    QLineEdit *m_pwmElevTrim;
    QLineEdit *m_pwmRuddTrim;
    QHBoxLayout *horizontalLayout_10;
    QGroupBox *gpsData_groupBox_2;
    QGridLayout *gridLayout_23;
    QHBoxLayout *horizontalLayout_9;
    QVBoxLayout *verticalLayout_18;
    QLabel *label_77;
    QLabel *label_78;
    QLabel *label_79;
    QLabel *label_80;
    QLabel *label_81;
    QVBoxLayout *verticalLayout_17;
    QLineEdit *tbRCThrottle;
    QLineEdit *tbRCAileron;
    QLineEdit *tbRCRudder;
    QLineEdit *tbRCElevator;
    QLineEdit *m_GpsSog_2;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_6;
    QWidget *tab_4;
    QGridLayout *gridLayout_21;
    QVBoxLayout *verticalLayout_28;
    QGroupBox *gpsData_groupBox;
    QGridLayout *gridLayout_20;
    QGridLayout *gridLayout_3;
    QLabel *label_48;
    QLineEdit *m_GpsDate;
    QLabel *label_47;
    QLineEdit *m_GpsTime;
    QLabel *label_54;
    QLineEdit *m_GpsSat;
    QLabel *label_52;
    QLineEdit *m_GpsCog;
    QLabel *label_53;
    QLineEdit *m_GpsSog;
    QGridLayout *gridLayout_5;
    QLabel *label_50;
    QLineEdit *m_GpsLatitude;
    QLabel *label_49;
    QLineEdit *m_GpsLongitude;
    QLabel *label_51;
    QLineEdit *m_GpsHeight;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_15;
    QGroupBox *sensorBiases_groupBox_5;
    QGridLayout *gridLayout_16;
    QHBoxLayout *horizontalLayout_11;
    QVBoxLayout *verticalLayout_23;
    QLabel *label_68;
    QLabel *label_69;
    QLabel *label_70;
    QLabel *label_74;
    QLabel *label_75;
    QLabel *label_76;
    QLabel *label_71;
    QLabel *label_72;
    QLabel *label_73;
    QVBoxLayout *verticalLayout_22;
    QLineEdit *m_Axr;
    QLineEdit *m_Ayr;
    QLineEdit *m_Azr;
    QLineEdit *m_Mxr;
    QLineEdit *m_Myr;
    QLineEdit *m_Mzr;
    QLineEdit *m_Gxr;
    QLineEdit *m_Gyr;
    QLineEdit *m_Gzr;
    QGroupBox *sensorBiases_groupBox_4;
    QGridLayout *gridLayout_13;
    QGridLayout *gridLayout_12;
    QLabel *label_20;
    QLineEdit *m_Axf;
    QLabel *label_61;
    QLineEdit *m_Ayf;
    QLabel *label_63;
    QLineEdit *m_Azf;
    QLabel *label_66;
    QLineEdit *m_Mxf;
    QLabel *label_67;
    QLineEdit *m_Myf;
    QLabel *label_65;
    QLineEdit *m_Mzf;
    QLabel *label_25;
    QLineEdit *m_Gxf;
    QLabel *label_62;
    QLineEdit *m_Gyf;
    QLabel *label_64;
    QLineEdit *m_Gzf;
    QGridLayout *gridLayout_18;
    QGroupBox *sensorBiases_groupBox_2;
    QGridLayout *gridLayout_14;
    QGridLayout *gridLayout_11;
    QLabel *label_55;
    QLineEdit *ed_sens;
    QLabel *label_57;
    QLineEdit *ed_control;
    QLabel *label_59;
    QLineEdit *ed_batvolt;
    QGroupBox *sensorBiases_groupBox_3;
    QGridLayout *gridLayout_15;
    QGridLayout *gridLayout_10;
    QLabel *label_56;
    QLineEdit *ed_dynamic;
    QLabel *label_58;
    QLineEdit *ed_static;
    QLineEdit *ed_temp;
    QLabel *label_60;
    QSpacerItem *verticalSpacer_4;
    QWidget *tab_3;
    QGridLayout *gridLayout_34;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QGroupBox *diagnosticMessages_groupBox;
    QGridLayout *gridLayout_22;
    QGridLayout *gridLayout_7;
    QLabel *label_35;
    QLineEdit *m_Fl1;
    QLabel *label_38;
    QLineEdit *m_Sh1;
    QLabel *label_36;
    QLineEdit *m_Fl2;
    QLabel *label_39;
    QLineEdit *m_Sh2;
    QLabel *label_37;
    QLineEdit *m_Fl3;
    QLabel *label_40;
    QLineEdit *m_Sh3;
    QGroupBox *logMessages_groupBox;
    QGridLayout *gridLayout_25;
    QGridLayout *gridLayout_8;
    QLabel *label_41;
    QLineEdit *m_logFl1;
    QLabel *label_44;
    QLineEdit *m_logFl4;
    QLabel *label_42;
    QLineEdit *m_logFl2;
    QLabel *label_45;
    QLineEdit *m_logFl5;
    QLabel *label_43;
    QLineEdit *m_logFl3;
    QLabel *label_46;
    QLineEdit *m_logFl6;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QWidget *SlugsDataSensorView)
    {
        if (SlugsDataSensorView->objectName().isEmpty())
            SlugsDataSensorView->setObjectName(QString::fromUtf8("SlugsDataSensorView"));
        SlugsDataSensorView->resize(495, 671);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SlugsDataSensorView->sizePolicy().hasHeightForWidth());
        SlugsDataSensorView->setSizePolicy(sizePolicy);
        SlugsDataSensorView->setMinimumSize(QSize(0, 0));
        SlugsDataSensorView->setMaximumSize(QSize(16777215, 16777215));
        gridLayout = new QGridLayout(SlugsDataSensorView);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        SlugsSensorView_tabWidget = new QTabWidget(SlugsDataSensorView);
        SlugsSensorView_tabWidget->setObjectName(QString::fromUtf8("SlugsSensorView_tabWidget"));
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        gridLayout_19 = new QGridLayout(tab_5);
        gridLayout_19->setObjectName(QString::fromUtf8("gridLayout_19"));
        verticalLayout_27 = new QVBoxLayout();
        verticalLayout_27->setObjectName(QString::fromUtf8("verticalLayout_27"));
        position_groupBox = new QGroupBox(tab_5);
        position_groupBox->setObjectName(QString::fromUtf8("position_groupBox"));
        position_groupBox->setMinimumSize(QSize(0, 0));
        position_groupBox->setMaximumSize(QSize(16777215, 16777215));
        QFont font;
        font.setPointSize(10);
        font.setBold(false);
        font.setWeight(50);
        position_groupBox->setFont(font);
        gridLayout_17 = new QGridLayout(position_groupBox);
        gridLayout_17->setObjectName(QString::fromUtf8("gridLayout_17"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label = new QLabel(position_groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(0, 0));
        label->setMaximumSize(QSize(16777215, 16777215));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setFrameShape(QFrame::NoFrame);

        verticalLayout_5->addWidget(label);

        label_2 = new QLabel(position_groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(0, 0));
        label_2->setMaximumSize(QSize(16777215, 16777215));
        label_2->setFont(font1);

        verticalLayout_5->addWidget(label_2);

        label_3 = new QLabel(position_groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(0, 0));
        label_3->setMaximumSize(QSize(16777215, 16777215));
        label_3->setFont(font1);
        label_3->setFrameShape(QFrame::NoFrame);

        verticalLayout_5->addWidget(label_3);


        gridLayout_17->addLayout(verticalLayout_5, 0, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        ed_x = new QLineEdit(position_groupBox);
        ed_x->setObjectName(QString::fromUtf8("ed_x"));

        verticalLayout_3->addWidget(ed_x);

        ed_y = new QLineEdit(position_groupBox);
        ed_y->setObjectName(QString::fromUtf8("ed_y"));

        verticalLayout_3->addWidget(ed_y);

        ed_z = new QLineEdit(position_groupBox);
        ed_z->setObjectName(QString::fromUtf8("ed_z"));

        verticalLayout_3->addWidget(ed_z);


        gridLayout_17->addLayout(verticalLayout_3, 0, 1, 1, 1);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        label_4 = new QLabel(position_groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(0, 0));
        label_4->setMaximumSize(QSize(16777215, 16777215));
        label_4->setFont(font1);

        verticalLayout_7->addWidget(label_4);

        label_5 = new QLabel(position_groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(0, 0));
        label_5->setMaximumSize(QSize(16777215, 16777215));
        label_5->setFont(font1);

        verticalLayout_7->addWidget(label_5);

        label_6 = new QLabel(position_groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(0, 0));
        label_6->setMaximumSize(QSize(16777215, 16777215));
        label_6->setFont(font1);

        verticalLayout_7->addWidget(label_6);


        gridLayout_17->addLayout(verticalLayout_7, 0, 2, 1, 1);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        ed_vx = new QLineEdit(position_groupBox);
        ed_vx->setObjectName(QString::fromUtf8("ed_vx"));

        verticalLayout_9->addWidget(ed_vx);

        ed_vy = new QLineEdit(position_groupBox);
        ed_vy->setObjectName(QString::fromUtf8("ed_vy"));

        verticalLayout_9->addWidget(ed_vy);

        ed_vz = new QLineEdit(position_groupBox);
        ed_vz->setObjectName(QString::fromUtf8("ed_vz"));

        verticalLayout_9->addWidget(ed_vz);


        gridLayout_17->addLayout(verticalLayout_9, 0, 3, 1, 1);


        verticalLayout_27->addWidget(position_groupBox);

        attitude_groupBox = new QGroupBox(tab_5);
        attitude_groupBox->setObjectName(QString::fromUtf8("attitude_groupBox"));
        attitude_groupBox->setMinimumSize(QSize(0, 0));
        attitude_groupBox->setMaximumSize(QSize(16777215, 16777215));
        attitude_groupBox->setFont(font);
        gridLayout_4 = new QGridLayout(attitude_groupBox);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_7 = new QLabel(attitude_groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMinimumSize(QSize(0, 0));
        label_7->setMaximumSize(QSize(16777215, 16777215));
        label_7->setFont(font1);

        horizontalLayout_12->addWidget(label_7);

        m_Roll = new QLineEdit(attitude_groupBox);
        m_Roll->setObjectName(QString::fromUtf8("m_Roll"));

        horizontalLayout_12->addWidget(m_Roll);


        gridLayout_4->addLayout(horizontalLayout_12, 0, 0, 1, 1);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_8 = new QLabel(attitude_groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMinimumSize(QSize(0, 0));
        label_8->setMaximumSize(QSize(16777215, 16777215));
        label_8->setFont(font1);

        horizontalLayout_13->addWidget(label_8);

        m_Pitch = new QLineEdit(attitude_groupBox);
        m_Pitch->setObjectName(QString::fromUtf8("m_Pitch"));

        horizontalLayout_13->addWidget(m_Pitch);


        gridLayout_4->addLayout(horizontalLayout_13, 0, 1, 1, 1);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        label_9 = new QLabel(attitude_groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMinimumSize(QSize(0, 0));
        label_9->setMaximumSize(QSize(16777215, 16777215));
        label_9->setFont(font1);

        horizontalLayout_14->addWidget(label_9);

        m_Yaw = new QLineEdit(attitude_groupBox);
        m_Yaw->setObjectName(QString::fromUtf8("m_Yaw"));

        horizontalLayout_14->addWidget(m_Yaw);


        gridLayout_4->addLayout(horizontalLayout_14, 0, 2, 1, 1);


        verticalLayout_27->addWidget(attitude_groupBox);

        navigation_groupBox = new QGroupBox(tab_5);
        navigation_groupBox->setObjectName(QString::fromUtf8("navigation_groupBox"));
        navigation_groupBox->setMinimumSize(QSize(0, 0));
        navigation_groupBox->setMaximumSize(QSize(16777215, 16777215));
        navigation_groupBox->setFont(font);
        gridLayout_2 = new QGridLayout(navigation_groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_26 = new QLabel(navigation_groupBox);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setMinimumSize(QSize(0, 0));
        label_26->setMaximumSize(QSize(16777215, 16777215));
        label_26->setFont(font1);

        verticalLayout_4->addWidget(label_26);

        label_27 = new QLabel(navigation_groupBox);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setMinimumSize(QSize(0, 0));
        label_27->setMaximumSize(QSize(16777215, 16777215));
        label_27->setFont(font1);

        verticalLayout_4->addWidget(label_27);

        label_28 = new QLabel(navigation_groupBox);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setMinimumSize(QSize(0, 0));
        label_28->setMaximumSize(QSize(16777215, 16777215));
        label_28->setFont(font1);

        verticalLayout_4->addWidget(label_28);

        label_29 = new QLabel(navigation_groupBox);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setMinimumSize(QSize(0, 0));
        label_29->setMaximumSize(QSize(16777215, 16777215));
        label_29->setFont(font1);

        verticalLayout_4->addWidget(label_29);

        label_30 = new QLabel(navigation_groupBox);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setMinimumSize(QSize(0, 0));
        label_30->setMaximumSize(QSize(16777215, 16777215));
        label_30->setFont(font1);

        verticalLayout_4->addWidget(label_30);


        horizontalLayout_2->addLayout(verticalLayout_4);

        verticalLayout_21 = new QVBoxLayout();
        verticalLayout_21->setObjectName(QString::fromUtf8("verticalLayout_21"));
        m_Um = new QLineEdit(navigation_groupBox);
        m_Um->setObjectName(QString::fromUtf8("m_Um"));

        verticalLayout_21->addWidget(m_Um);

        m_PitchC = new QLineEdit(navigation_groupBox);
        m_PitchC->setObjectName(QString::fromUtf8("m_PitchC"));

        verticalLayout_21->addWidget(m_PitchC);

        m_PsidC = new QLineEdit(navigation_groupBox);
        m_PsidC->setObjectName(QString::fromUtf8("m_PsidC"));

        verticalLayout_21->addWidget(m_PsidC);

        m_PhiC = new QLineEdit(navigation_groupBox);
        m_PhiC->setObjectName(QString::fromUtf8("m_PhiC"));

        verticalLayout_21->addWidget(m_PhiC);

        m_AyBody = new QLineEdit(navigation_groupBox);
        m_AyBody->setObjectName(QString::fromUtf8("m_AyBody"));

        verticalLayout_21->addWidget(m_AyBody);


        horizontalLayout_2->addLayout(verticalLayout_21);


        gridLayout_2->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        verticalLayout_26 = new QVBoxLayout();
        verticalLayout_26->setObjectName(QString::fromUtf8("verticalLayout_26"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_31 = new QLabel(navigation_groupBox);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setMinimumSize(QSize(0, 0));
        label_31->setMaximumSize(QSize(16777215, 16777215));
        label_31->setFont(font1);

        verticalLayout_6->addWidget(label_31);

        label_32 = new QLabel(navigation_groupBox);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setMinimumSize(QSize(0, 0));
        label_32->setMaximumSize(QSize(16777215, 16777215));
        label_32->setFont(font1);

        verticalLayout_6->addWidget(label_32);


        horizontalLayout_3->addLayout(verticalLayout_6);

        verticalLayout_24 = new QVBoxLayout();
        verticalLayout_24->setObjectName(QString::fromUtf8("verticalLayout_24"));
        m_FromWP = new QLineEdit(navigation_groupBox);
        m_FromWP->setObjectName(QString::fromUtf8("m_FromWP"));

        verticalLayout_24->addWidget(m_FromWP);

        m_ToWP = new QLineEdit(navigation_groupBox);
        m_ToWP->setObjectName(QString::fromUtf8("m_ToWP"));

        verticalLayout_24->addWidget(m_ToWP);


        horizontalLayout_3->addLayout(verticalLayout_24);


        verticalLayout_26->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(17, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_26->addItem(verticalSpacer);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        label_33 = new QLabel(navigation_groupBox);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setMinimumSize(QSize(0, 0));
        label_33->setMaximumSize(QSize(16777215, 16777215));
        label_33->setFont(font1);

        verticalLayout_8->addWidget(label_33);

        label_34 = new QLabel(navigation_groupBox);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setMinimumSize(QSize(0, 0));
        label_34->setMaximumSize(QSize(16777215, 16777215));
        label_34->setFont(font1);

        verticalLayout_8->addWidget(label_34);


        horizontalLayout_4->addLayout(verticalLayout_8);

        verticalLayout_25 = new QVBoxLayout();
        verticalLayout_25->setObjectName(QString::fromUtf8("verticalLayout_25"));
        m_TotRun = new QLineEdit(navigation_groupBox);
        m_TotRun->setObjectName(QString::fromUtf8("m_TotRun"));

        verticalLayout_25->addWidget(m_TotRun);

        m_DistToGo = new QLineEdit(navigation_groupBox);
        m_DistToGo->setObjectName(QString::fromUtf8("m_DistToGo"));

        verticalLayout_25->addWidget(m_DistToGo);


        horizontalLayout_4->addLayout(verticalLayout_25);


        verticalLayout_26->addLayout(horizontalLayout_4);


        gridLayout_2->addLayout(verticalLayout_26, 0, 1, 1, 1);


        verticalLayout_27->addWidget(navigation_groupBox);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_27->addItem(verticalSpacer_5);


        gridLayout_19->addLayout(verticalLayout_27, 0, 0, 1, 1);

        SlugsSensorView_tabWidget->addTab(tab_5, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_26 = new QGridLayout(tab);
        gridLayout_26->setObjectName(QString::fromUtf8("gridLayout_26"));
        verticalLayout_20 = new QVBoxLayout();
        verticalLayout_20->setObjectName(QString::fromUtf8("verticalLayout_20"));
        verticalLayout_19 = new QVBoxLayout();
        verticalLayout_19->setObjectName(QString::fromUtf8("verticalLayout_19"));
        sensorBiases_groupBox = new QGroupBox(tab);
        sensorBiases_groupBox->setObjectName(QString::fromUtf8("sensorBiases_groupBox"));
        sensorBiases_groupBox->setMinimumSize(QSize(0, 0));
        sensorBiases_groupBox->setMaximumSize(QSize(16777215, 16777215));
        QFont font2;
        font2.setPointSize(10);
        sensorBiases_groupBox->setFont(font2);
        gridLayout_6 = new QGridLayout(sensorBiases_groupBox);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        label_10 = new QLabel(sensorBiases_groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setMinimumSize(QSize(0, 0));
        label_10->setMaximumSize(QSize(16777215, 16777215));
        label_10->setFont(font1);

        verticalLayout_14->addWidget(label_10);

        label_11 = new QLabel(sensorBiases_groupBox);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setMinimumSize(QSize(0, 0));
        label_11->setMaximumSize(QSize(16777215, 16777215));
        label_11->setFont(font1);

        verticalLayout_14->addWidget(label_11);

        label_12 = new QLabel(sensorBiases_groupBox);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setMinimumSize(QSize(0, 0));
        label_12->setMaximumSize(QSize(16777215, 16777215));
        label_12->setFont(font1);

        verticalLayout_14->addWidget(label_12);


        horizontalLayout_7->addLayout(verticalLayout_14);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        m_AxBiases = new QLineEdit(sensorBiases_groupBox);
        m_AxBiases->setObjectName(QString::fromUtf8("m_AxBiases"));

        verticalLayout_13->addWidget(m_AxBiases);

        m_AyBiases = new QLineEdit(sensorBiases_groupBox);
        m_AyBiases->setObjectName(QString::fromUtf8("m_AyBiases"));

        verticalLayout_13->addWidget(m_AyBiases);

        m_AzBiases = new QLineEdit(sensorBiases_groupBox);
        m_AzBiases->setObjectName(QString::fromUtf8("m_AzBiases"));

        verticalLayout_13->addWidget(m_AzBiases);


        horizontalLayout_7->addLayout(verticalLayout_13);


        gridLayout_6->addLayout(horizontalLayout_7, 0, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        label_13 = new QLabel(sensorBiases_groupBox);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setMinimumSize(QSize(0, 0));
        label_13->setMaximumSize(QSize(16777215, 16777215));
        label_13->setFont(font1);

        verticalLayout_16->addWidget(label_13);

        label_14 = new QLabel(sensorBiases_groupBox);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setMinimumSize(QSize(0, 0));
        label_14->setMaximumSize(QSize(16777215, 16777215));
        label_14->setFont(font1);

        verticalLayout_16->addWidget(label_14);

        label_15 = new QLabel(sensorBiases_groupBox);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setMinimumSize(QSize(0, 0));
        label_15->setMaximumSize(QSize(16777215, 16777215));
        label_15->setFont(font1);

        verticalLayout_16->addWidget(label_15);


        horizontalLayout_8->addLayout(verticalLayout_16);

        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        m_GxBiases = new QLineEdit(sensorBiases_groupBox);
        m_GxBiases->setObjectName(QString::fromUtf8("m_GxBiases"));

        verticalLayout_15->addWidget(m_GxBiases);

        m_GyBiases = new QLineEdit(sensorBiases_groupBox);
        m_GyBiases->setObjectName(QString::fromUtf8("m_GyBiases"));

        verticalLayout_15->addWidget(m_GyBiases);

        m_GzBiases = new QLineEdit(sensorBiases_groupBox);
        m_GzBiases->setObjectName(QString::fromUtf8("m_GzBiases"));

        verticalLayout_15->addWidget(m_GzBiases);


        horizontalLayout_8->addLayout(verticalLayout_15);


        gridLayout_6->addLayout(horizontalLayout_8, 0, 1, 1, 1);


        verticalLayout_19->addWidget(sensorBiases_groupBox);

        PWMCommands_groupBox = new QGroupBox(tab);
        PWMCommands_groupBox->setObjectName(QString::fromUtf8("PWMCommands_groupBox"));
        PWMCommands_groupBox->setMinimumSize(QSize(0, 0));
        PWMCommands_groupBox->setMaximumSize(QSize(311, 171));
        PWMCommands_groupBox->setFont(font2);
        gridLayout_9 = new QGridLayout(PWMCommands_groupBox);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        label_16 = new QLabel(PWMCommands_groupBox);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setMinimumSize(QSize(0, 0));
        label_16->setMaximumSize(QSize(16777215, 16777215));
        label_16->setFont(font1);

        verticalLayout_10->addWidget(label_16);

        label_17 = new QLabel(PWMCommands_groupBox);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setMinimumSize(QSize(0, 0));
        label_17->setMaximumSize(QSize(16777215, 16777215));
        label_17->setFont(font1);

        verticalLayout_10->addWidget(label_17);

        label_18 = new QLabel(PWMCommands_groupBox);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setMinimumSize(QSize(0, 0));
        label_18->setMaximumSize(QSize(16777215, 16777215));
        label_18->setFont(font1);

        verticalLayout_10->addWidget(label_18);

        label_19 = new QLabel(PWMCommands_groupBox);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setMinimumSize(QSize(0, 0));
        label_19->setMaximumSize(QSize(16777215, 16777215));
        label_19->setFont(font1);

        verticalLayout_10->addWidget(label_19);


        horizontalLayout_5->addLayout(verticalLayout_10);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        m_pwmThro = new QLineEdit(PWMCommands_groupBox);
        m_pwmThro->setObjectName(QString::fromUtf8("m_pwmThro"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m_pwmThro->sizePolicy().hasHeightForWidth());
        m_pwmThro->setSizePolicy(sizePolicy1);
        m_pwmThro->setMinimumSize(QSize(0, 0));
        m_pwmThro->setMaximumSize(QSize(16777215, 16777215));

        verticalLayout_2->addWidget(m_pwmThro);

        m_pwmAile = new QLineEdit(PWMCommands_groupBox);
        m_pwmAile->setObjectName(QString::fromUtf8("m_pwmAile"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(60);
        sizePolicy2.setVerticalStretch(18);
        sizePolicy2.setHeightForWidth(m_pwmAile->sizePolicy().hasHeightForWidth());
        m_pwmAile->setSizePolicy(sizePolicy2);
        m_pwmAile->setMinimumSize(QSize(0, 0));
        m_pwmAile->setMaximumSize(QSize(16777215, 16777215));

        verticalLayout_2->addWidget(m_pwmAile);

        m_pwmElev = new QLineEdit(PWMCommands_groupBox);
        m_pwmElev->setObjectName(QString::fromUtf8("m_pwmElev"));
        sizePolicy2.setHeightForWidth(m_pwmElev->sizePolicy().hasHeightForWidth());
        m_pwmElev->setSizePolicy(sizePolicy2);
        m_pwmElev->setMinimumSize(QSize(0, 0));
        m_pwmElev->setMaximumSize(QSize(16777215, 16777215));

        verticalLayout_2->addWidget(m_pwmElev);

        m_pwmRudd = new QLineEdit(PWMCommands_groupBox);
        m_pwmRudd->setObjectName(QString::fromUtf8("m_pwmRudd"));
        sizePolicy2.setHeightForWidth(m_pwmRudd->sizePolicy().hasHeightForWidth());
        m_pwmRudd->setSizePolicy(sizePolicy2);
        m_pwmRudd->setMinimumSize(QSize(0, 0));
        m_pwmRudd->setMaximumSize(QSize(16777215, 16777215));

        verticalLayout_2->addWidget(m_pwmRudd);


        horizontalLayout_5->addLayout(verticalLayout_2);


        gridLayout_9->addLayout(horizontalLayout_5, 0, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        label_21 = new QLabel(PWMCommands_groupBox);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setMinimumSize(QSize(0, 0));
        label_21->setMaximumSize(QSize(16777215, 16777215));
        label_21->setFont(font1);

        verticalLayout_11->addWidget(label_21);

        label_22 = new QLabel(PWMCommands_groupBox);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setMinimumSize(QSize(0, 0));
        label_22->setMaximumSize(QSize(16777215, 16777215));
        label_22->setFont(font1);

        verticalLayout_11->addWidget(label_22);

        label_23 = new QLabel(PWMCommands_groupBox);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setMinimumSize(QSize(0, 0));
        label_23->setMaximumSize(QSize(16777215, 16777215));
        label_23->setFont(font1);

        verticalLayout_11->addWidget(label_23);

        label_24 = new QLabel(PWMCommands_groupBox);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setMinimumSize(QSize(0, 0));
        label_24->setMaximumSize(QSize(16777215, 16777215));
        label_24->setFont(font1);

        verticalLayout_11->addWidget(label_24);


        horizontalLayout_6->addLayout(verticalLayout_11);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        m_pwmThroTrim = new QLineEdit(PWMCommands_groupBox);
        m_pwmThroTrim->setObjectName(QString::fromUtf8("m_pwmThroTrim"));
        sizePolicy2.setHeightForWidth(m_pwmThroTrim->sizePolicy().hasHeightForWidth());
        m_pwmThroTrim->setSizePolicy(sizePolicy2);
        m_pwmThroTrim->setMinimumSize(QSize(0, 0));
        m_pwmThroTrim->setMaximumSize(QSize(16777215, 16777215));

        verticalLayout_12->addWidget(m_pwmThroTrim);

        m_pwmAileTrim = new QLineEdit(PWMCommands_groupBox);
        m_pwmAileTrim->setObjectName(QString::fromUtf8("m_pwmAileTrim"));
        sizePolicy2.setHeightForWidth(m_pwmAileTrim->sizePolicy().hasHeightForWidth());
        m_pwmAileTrim->setSizePolicy(sizePolicy2);
        m_pwmAileTrim->setMinimumSize(QSize(0, 0));
        m_pwmAileTrim->setMaximumSize(QSize(16777215, 16777215));

        verticalLayout_12->addWidget(m_pwmAileTrim);

        m_pwmElevTrim = new QLineEdit(PWMCommands_groupBox);
        m_pwmElevTrim->setObjectName(QString::fromUtf8("m_pwmElevTrim"));
        sizePolicy2.setHeightForWidth(m_pwmElevTrim->sizePolicy().hasHeightForWidth());
        m_pwmElevTrim->setSizePolicy(sizePolicy2);
        m_pwmElevTrim->setMinimumSize(QSize(0, 0));
        m_pwmElevTrim->setMaximumSize(QSize(16777215, 16777215));

        verticalLayout_12->addWidget(m_pwmElevTrim);

        m_pwmRuddTrim = new QLineEdit(PWMCommands_groupBox);
        m_pwmRuddTrim->setObjectName(QString::fromUtf8("m_pwmRuddTrim"));
        sizePolicy2.setHeightForWidth(m_pwmRuddTrim->sizePolicy().hasHeightForWidth());
        m_pwmRuddTrim->setSizePolicy(sizePolicy2);
        m_pwmRuddTrim->setMinimumSize(QSize(0, 0));
        m_pwmRuddTrim->setMaximumSize(QSize(16777215, 16777215));

        verticalLayout_12->addWidget(m_pwmRuddTrim);


        horizontalLayout_6->addLayout(verticalLayout_12);


        gridLayout_9->addLayout(horizontalLayout_6, 0, 1, 1, 1);


        verticalLayout_19->addWidget(PWMCommands_groupBox);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        gpsData_groupBox_2 = new QGroupBox(tab);
        gpsData_groupBox_2->setObjectName(QString::fromUtf8("gpsData_groupBox_2"));
        gridLayout_23 = new QGridLayout(gpsData_groupBox_2);
        gridLayout_23->setObjectName(QString::fromUtf8("gridLayout_23"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        verticalLayout_18 = new QVBoxLayout();
        verticalLayout_18->setObjectName(QString::fromUtf8("verticalLayout_18"));
        label_77 = new QLabel(gpsData_groupBox_2);
        label_77->setObjectName(QString::fromUtf8("label_77"));
        label_77->setFont(font1);

        verticalLayout_18->addWidget(label_77);

        label_78 = new QLabel(gpsData_groupBox_2);
        label_78->setObjectName(QString::fromUtf8("label_78"));
        label_78->setFont(font1);

        verticalLayout_18->addWidget(label_78);

        label_79 = new QLabel(gpsData_groupBox_2);
        label_79->setObjectName(QString::fromUtf8("label_79"));
        label_79->setFont(font1);

        verticalLayout_18->addWidget(label_79);

        label_80 = new QLabel(gpsData_groupBox_2);
        label_80->setObjectName(QString::fromUtf8("label_80"));
        label_80->setFont(font1);

        verticalLayout_18->addWidget(label_80);

        label_81 = new QLabel(gpsData_groupBox_2);
        label_81->setObjectName(QString::fromUtf8("label_81"));
        label_81->setFont(font1);

        verticalLayout_18->addWidget(label_81);


        horizontalLayout_9->addLayout(verticalLayout_18);

        verticalLayout_17 = new QVBoxLayout();
        verticalLayout_17->setObjectName(QString::fromUtf8("verticalLayout_17"));
        tbRCThrottle = new QLineEdit(gpsData_groupBox_2);
        tbRCThrottle->setObjectName(QString::fromUtf8("tbRCThrottle"));
        tbRCThrottle->setMinimumSize(QSize(60, 18));
        tbRCThrottle->setMaximumSize(QSize(80, 18));
        tbRCThrottle->setFont(font2);

        verticalLayout_17->addWidget(tbRCThrottle);

        tbRCAileron = new QLineEdit(gpsData_groupBox_2);
        tbRCAileron->setObjectName(QString::fromUtf8("tbRCAileron"));
        tbRCAileron->setMinimumSize(QSize(60, 18));
        tbRCAileron->setMaximumSize(QSize(80, 18));
        tbRCAileron->setFont(font2);

        verticalLayout_17->addWidget(tbRCAileron);

        tbRCRudder = new QLineEdit(gpsData_groupBox_2);
        tbRCRudder->setObjectName(QString::fromUtf8("tbRCRudder"));
        tbRCRudder->setMinimumSize(QSize(60, 18));
        tbRCRudder->setMaximumSize(QSize(80, 18));
        tbRCRudder->setFont(font2);

        verticalLayout_17->addWidget(tbRCRudder);

        tbRCElevator = new QLineEdit(gpsData_groupBox_2);
        tbRCElevator->setObjectName(QString::fromUtf8("tbRCElevator"));
        tbRCElevator->setMinimumSize(QSize(60, 18));
        tbRCElevator->setMaximumSize(QSize(80, 18));
        tbRCElevator->setFont(font2);

        verticalLayout_17->addWidget(tbRCElevator);

        m_GpsSog_2 = new QLineEdit(gpsData_groupBox_2);
        m_GpsSog_2->setObjectName(QString::fromUtf8("m_GpsSog_2"));
        m_GpsSog_2->setMinimumSize(QSize(60, 18));
        m_GpsSog_2->setMaximumSize(QSize(80, 18));
        m_GpsSog_2->setFont(font2);

        verticalLayout_17->addWidget(m_GpsSog_2);


        horizontalLayout_9->addLayout(verticalLayout_17);


        gridLayout_23->addLayout(horizontalLayout_9, 0, 0, 1, 1);


        horizontalLayout_10->addWidget(gpsData_groupBox_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_2);


        verticalLayout_19->addLayout(horizontalLayout_10);


        verticalLayout_20->addLayout(verticalLayout_19);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_20->addItem(verticalSpacer_6);


        gridLayout_26->addLayout(verticalLayout_20, 0, 0, 1, 1);

        SlugsSensorView_tabWidget->addTab(tab, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        gridLayout_21 = new QGridLayout(tab_4);
        gridLayout_21->setObjectName(QString::fromUtf8("gridLayout_21"));
        verticalLayout_28 = new QVBoxLayout();
        verticalLayout_28->setObjectName(QString::fromUtf8("verticalLayout_28"));
        gpsData_groupBox = new QGroupBox(tab_4);
        gpsData_groupBox->setObjectName(QString::fromUtf8("gpsData_groupBox"));
        gridLayout_20 = new QGridLayout(gpsData_groupBox);
        gridLayout_20->setObjectName(QString::fromUtf8("gridLayout_20"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_48 = new QLabel(gpsData_groupBox);
        label_48->setObjectName(QString::fromUtf8("label_48"));
        label_48->setFont(font1);

        gridLayout_3->addWidget(label_48, 0, 0, 1, 1);

        m_GpsDate = new QLineEdit(gpsData_groupBox);
        m_GpsDate->setObjectName(QString::fromUtf8("m_GpsDate"));
        m_GpsDate->setMinimumSize(QSize(0, 0));
        m_GpsDate->setMaximumSize(QSize(16777215, 16777215));
        m_GpsDate->setFont(font2);

        gridLayout_3->addWidget(m_GpsDate, 0, 1, 1, 1);

        label_47 = new QLabel(gpsData_groupBox);
        label_47->setObjectName(QString::fromUtf8("label_47"));
        label_47->setFont(font1);

        gridLayout_3->addWidget(label_47, 1, 0, 1, 1);

        m_GpsTime = new QLineEdit(gpsData_groupBox);
        m_GpsTime->setObjectName(QString::fromUtf8("m_GpsTime"));
        m_GpsTime->setMinimumSize(QSize(0, 0));
        m_GpsTime->setMaximumSize(QSize(16777215, 16777215));
        m_GpsTime->setFont(font2);

        gridLayout_3->addWidget(m_GpsTime, 1, 1, 1, 1);

        label_54 = new QLabel(gpsData_groupBox);
        label_54->setObjectName(QString::fromUtf8("label_54"));
        label_54->setFont(font1);

        gridLayout_3->addWidget(label_54, 2, 0, 1, 1);

        m_GpsSat = new QLineEdit(gpsData_groupBox);
        m_GpsSat->setObjectName(QString::fromUtf8("m_GpsSat"));
        m_GpsSat->setMinimumSize(QSize(0, 0));
        m_GpsSat->setMaximumSize(QSize(16777215, 16777215));
        m_GpsSat->setFont(font2);

        gridLayout_3->addWidget(m_GpsSat, 2, 1, 1, 1);

        label_52 = new QLabel(gpsData_groupBox);
        label_52->setObjectName(QString::fromUtf8("label_52"));
        label_52->setFont(font1);

        gridLayout_3->addWidget(label_52, 3, 0, 1, 1);

        m_GpsCog = new QLineEdit(gpsData_groupBox);
        m_GpsCog->setObjectName(QString::fromUtf8("m_GpsCog"));
        m_GpsCog->setMinimumSize(QSize(0, 0));
        m_GpsCog->setMaximumSize(QSize(16777215, 16777215));
        m_GpsCog->setFont(font2);

        gridLayout_3->addWidget(m_GpsCog, 3, 1, 1, 1);

        label_53 = new QLabel(gpsData_groupBox);
        label_53->setObjectName(QString::fromUtf8("label_53"));
        label_53->setFont(font1);

        gridLayout_3->addWidget(label_53, 4, 0, 1, 1);

        m_GpsSog = new QLineEdit(gpsData_groupBox);
        m_GpsSog->setObjectName(QString::fromUtf8("m_GpsSog"));
        m_GpsSog->setMinimumSize(QSize(0, 0));
        m_GpsSog->setMaximumSize(QSize(16777215, 16777215));
        m_GpsSog->setFont(font2);

        gridLayout_3->addWidget(m_GpsSog, 4, 1, 1, 1);


        gridLayout_20->addLayout(gridLayout_3, 0, 0, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_50 = new QLabel(gpsData_groupBox);
        label_50->setObjectName(QString::fromUtf8("label_50"));
        label_50->setFont(font1);

        gridLayout_5->addWidget(label_50, 0, 0, 1, 1);

        m_GpsLatitude = new QLineEdit(gpsData_groupBox);
        m_GpsLatitude->setObjectName(QString::fromUtf8("m_GpsLatitude"));
        m_GpsLatitude->setMinimumSize(QSize(0, 0));
        m_GpsLatitude->setMaximumSize(QSize(16777215, 16777215));
        m_GpsLatitude->setFont(font2);

        gridLayout_5->addWidget(m_GpsLatitude, 0, 1, 1, 1);

        label_49 = new QLabel(gpsData_groupBox);
        label_49->setObjectName(QString::fromUtf8("label_49"));
        label_49->setFont(font1);

        gridLayout_5->addWidget(label_49, 1, 0, 1, 1);

        m_GpsLongitude = new QLineEdit(gpsData_groupBox);
        m_GpsLongitude->setObjectName(QString::fromUtf8("m_GpsLongitude"));
        m_GpsLongitude->setMinimumSize(QSize(0, 0));
        m_GpsLongitude->setMaximumSize(QSize(16777215, 16777215));
        m_GpsLongitude->setFont(font2);

        gridLayout_5->addWidget(m_GpsLongitude, 1, 1, 1, 1);

        label_51 = new QLabel(gpsData_groupBox);
        label_51->setObjectName(QString::fromUtf8("label_51"));
        label_51->setFont(font1);

        gridLayout_5->addWidget(label_51, 2, 0, 1, 1);

        m_GpsHeight = new QLineEdit(gpsData_groupBox);
        m_GpsHeight->setObjectName(QString::fromUtf8("m_GpsHeight"));
        m_GpsHeight->setMinimumSize(QSize(0, 0));
        m_GpsHeight->setMaximumSize(QSize(16777215, 16777215));
        m_GpsHeight->setFont(font2);

        gridLayout_5->addWidget(m_GpsHeight, 2, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_2, 3, 1, 1, 1);


        gridLayout_20->addLayout(gridLayout_5, 0, 1, 1, 1);


        verticalLayout_28->addWidget(gpsData_groupBox);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        sensorBiases_groupBox_5 = new QGroupBox(tab_4);
        sensorBiases_groupBox_5->setObjectName(QString::fromUtf8("sensorBiases_groupBox_5"));
        sensorBiases_groupBox_5->setMinimumSize(QSize(0, 0));
        sensorBiases_groupBox_5->setMaximumSize(QSize(16777215, 16777215));
        gridLayout_16 = new QGridLayout(sensorBiases_groupBox_5);
        gridLayout_16->setObjectName(QString::fromUtf8("gridLayout_16"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        verticalLayout_23 = new QVBoxLayout();
        verticalLayout_23->setObjectName(QString::fromUtf8("verticalLayout_23"));
        label_68 = new QLabel(sensorBiases_groupBox_5);
        label_68->setObjectName(QString::fromUtf8("label_68"));
        label_68->setMinimumSize(QSize(0, 0));
        label_68->setMaximumSize(QSize(16777215, 16777215));
        label_68->setFont(font1);

        verticalLayout_23->addWidget(label_68);

        label_69 = new QLabel(sensorBiases_groupBox_5);
        label_69->setObjectName(QString::fromUtf8("label_69"));
        label_69->setMinimumSize(QSize(0, 0));
        label_69->setMaximumSize(QSize(16777215, 16777215));
        label_69->setFont(font1);

        verticalLayout_23->addWidget(label_69);

        label_70 = new QLabel(sensorBiases_groupBox_5);
        label_70->setObjectName(QString::fromUtf8("label_70"));
        label_70->setMinimumSize(QSize(0, 0));
        label_70->setMaximumSize(QSize(16777215, 16777215));
        label_70->setFont(font1);

        verticalLayout_23->addWidget(label_70);

        label_74 = new QLabel(sensorBiases_groupBox_5);
        label_74->setObjectName(QString::fromUtf8("label_74"));
        label_74->setMinimumSize(QSize(0, 0));
        label_74->setMaximumSize(QSize(16777215, 16777215));
        label_74->setFont(font1);

        verticalLayout_23->addWidget(label_74);

        label_75 = new QLabel(sensorBiases_groupBox_5);
        label_75->setObjectName(QString::fromUtf8("label_75"));
        label_75->setMinimumSize(QSize(0, 0));
        label_75->setMaximumSize(QSize(16777215, 16777215));
        label_75->setFont(font1);

        verticalLayout_23->addWidget(label_75);

        label_76 = new QLabel(sensorBiases_groupBox_5);
        label_76->setObjectName(QString::fromUtf8("label_76"));
        label_76->setMinimumSize(QSize(0, 0));
        label_76->setMaximumSize(QSize(16777215, 16777215));
        label_76->setFont(font1);

        verticalLayout_23->addWidget(label_76);

        label_71 = new QLabel(sensorBiases_groupBox_5);
        label_71->setObjectName(QString::fromUtf8("label_71"));
        label_71->setMinimumSize(QSize(0, 0));
        label_71->setMaximumSize(QSize(16777215, 16777215));
        label_71->setFont(font1);

        verticalLayout_23->addWidget(label_71);

        label_72 = new QLabel(sensorBiases_groupBox_5);
        label_72->setObjectName(QString::fromUtf8("label_72"));
        label_72->setMinimumSize(QSize(0, 0));
        label_72->setMaximumSize(QSize(16777215, 16777215));
        label_72->setFont(font1);

        verticalLayout_23->addWidget(label_72);

        label_73 = new QLabel(sensorBiases_groupBox_5);
        label_73->setObjectName(QString::fromUtf8("label_73"));
        label_73->setMinimumSize(QSize(0, 0));
        label_73->setMaximumSize(QSize(16777215, 16777215));
        label_73->setFont(font1);

        verticalLayout_23->addWidget(label_73);


        horizontalLayout_11->addLayout(verticalLayout_23);

        verticalLayout_22 = new QVBoxLayout();
        verticalLayout_22->setObjectName(QString::fromUtf8("verticalLayout_22"));
        m_Axr = new QLineEdit(sensorBiases_groupBox_5);
        m_Axr->setObjectName(QString::fromUtf8("m_Axr"));

        verticalLayout_22->addWidget(m_Axr);

        m_Ayr = new QLineEdit(sensorBiases_groupBox_5);
        m_Ayr->setObjectName(QString::fromUtf8("m_Ayr"));

        verticalLayout_22->addWidget(m_Ayr);

        m_Azr = new QLineEdit(sensorBiases_groupBox_5);
        m_Azr->setObjectName(QString::fromUtf8("m_Azr"));

        verticalLayout_22->addWidget(m_Azr);

        m_Mxr = new QLineEdit(sensorBiases_groupBox_5);
        m_Mxr->setObjectName(QString::fromUtf8("m_Mxr"));

        verticalLayout_22->addWidget(m_Mxr);

        m_Myr = new QLineEdit(sensorBiases_groupBox_5);
        m_Myr->setObjectName(QString::fromUtf8("m_Myr"));

        verticalLayout_22->addWidget(m_Myr);

        m_Mzr = new QLineEdit(sensorBiases_groupBox_5);
        m_Mzr->setObjectName(QString::fromUtf8("m_Mzr"));

        verticalLayout_22->addWidget(m_Mzr);

        m_Gxr = new QLineEdit(sensorBiases_groupBox_5);
        m_Gxr->setObjectName(QString::fromUtf8("m_Gxr"));

        verticalLayout_22->addWidget(m_Gxr);

        m_Gyr = new QLineEdit(sensorBiases_groupBox_5);
        m_Gyr->setObjectName(QString::fromUtf8("m_Gyr"));

        verticalLayout_22->addWidget(m_Gyr);

        m_Gzr = new QLineEdit(sensorBiases_groupBox_5);
        m_Gzr->setObjectName(QString::fromUtf8("m_Gzr"));

        verticalLayout_22->addWidget(m_Gzr);


        horizontalLayout_11->addLayout(verticalLayout_22);


        gridLayout_16->addLayout(horizontalLayout_11, 0, 0, 1, 1);


        horizontalLayout_15->addWidget(sensorBiases_groupBox_5);

        sensorBiases_groupBox_4 = new QGroupBox(tab_4);
        sensorBiases_groupBox_4->setObjectName(QString::fromUtf8("sensorBiases_groupBox_4"));
        sensorBiases_groupBox_4->setMinimumSize(QSize(0, 0));
        sensorBiases_groupBox_4->setMaximumSize(QSize(16777215, 16777215));
        gridLayout_13 = new QGridLayout(sensorBiases_groupBox_4);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        gridLayout_12 = new QGridLayout();
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        label_20 = new QLabel(sensorBiases_groupBox_4);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setMinimumSize(QSize(0, 0));
        label_20->setMaximumSize(QSize(16777215, 16777215));
        label_20->setFont(font1);

        gridLayout_12->addWidget(label_20, 0, 0, 1, 1);

        m_Axf = new QLineEdit(sensorBiases_groupBox_4);
        m_Axf->setObjectName(QString::fromUtf8("m_Axf"));

        gridLayout_12->addWidget(m_Axf, 0, 1, 1, 1);

        label_61 = new QLabel(sensorBiases_groupBox_4);
        label_61->setObjectName(QString::fromUtf8("label_61"));
        label_61->setMinimumSize(QSize(0, 0));
        label_61->setMaximumSize(QSize(16777215, 16777215));
        label_61->setFont(font1);

        gridLayout_12->addWidget(label_61, 1, 0, 1, 1);

        m_Ayf = new QLineEdit(sensorBiases_groupBox_4);
        m_Ayf->setObjectName(QString::fromUtf8("m_Ayf"));

        gridLayout_12->addWidget(m_Ayf, 1, 1, 1, 1);

        label_63 = new QLabel(sensorBiases_groupBox_4);
        label_63->setObjectName(QString::fromUtf8("label_63"));
        label_63->setMinimumSize(QSize(0, 0));
        label_63->setMaximumSize(QSize(16777215, 16777215));
        label_63->setFont(font1);

        gridLayout_12->addWidget(label_63, 2, 0, 1, 1);

        m_Azf = new QLineEdit(sensorBiases_groupBox_4);
        m_Azf->setObjectName(QString::fromUtf8("m_Azf"));

        gridLayout_12->addWidget(m_Azf, 2, 1, 1, 1);

        label_66 = new QLabel(sensorBiases_groupBox_4);
        label_66->setObjectName(QString::fromUtf8("label_66"));
        label_66->setMinimumSize(QSize(0, 0));
        label_66->setMaximumSize(QSize(16777215, 16777215));
        label_66->setFont(font1);

        gridLayout_12->addWidget(label_66, 3, 0, 1, 1);

        m_Mxf = new QLineEdit(sensorBiases_groupBox_4);
        m_Mxf->setObjectName(QString::fromUtf8("m_Mxf"));

        gridLayout_12->addWidget(m_Mxf, 3, 1, 1, 1);

        label_67 = new QLabel(sensorBiases_groupBox_4);
        label_67->setObjectName(QString::fromUtf8("label_67"));
        label_67->setMinimumSize(QSize(0, 0));
        label_67->setMaximumSize(QSize(16777215, 16777215));
        label_67->setFont(font1);

        gridLayout_12->addWidget(label_67, 4, 0, 1, 1);

        m_Myf = new QLineEdit(sensorBiases_groupBox_4);
        m_Myf->setObjectName(QString::fromUtf8("m_Myf"));

        gridLayout_12->addWidget(m_Myf, 4, 1, 1, 1);

        label_65 = new QLabel(sensorBiases_groupBox_4);
        label_65->setObjectName(QString::fromUtf8("label_65"));
        label_65->setMinimumSize(QSize(0, 0));
        label_65->setMaximumSize(QSize(16777215, 16777215));
        label_65->setFont(font1);

        gridLayout_12->addWidget(label_65, 5, 0, 1, 1);

        m_Mzf = new QLineEdit(sensorBiases_groupBox_4);
        m_Mzf->setObjectName(QString::fromUtf8("m_Mzf"));

        gridLayout_12->addWidget(m_Mzf, 5, 1, 1, 1);

        label_25 = new QLabel(sensorBiases_groupBox_4);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setMinimumSize(QSize(0, 0));
        label_25->setMaximumSize(QSize(16777215, 16777215));
        label_25->setFont(font1);

        gridLayout_12->addWidget(label_25, 6, 0, 1, 1);

        m_Gxf = new QLineEdit(sensorBiases_groupBox_4);
        m_Gxf->setObjectName(QString::fromUtf8("m_Gxf"));

        gridLayout_12->addWidget(m_Gxf, 6, 1, 1, 1);

        label_62 = new QLabel(sensorBiases_groupBox_4);
        label_62->setObjectName(QString::fromUtf8("label_62"));
        label_62->setMinimumSize(QSize(0, 0));
        label_62->setMaximumSize(QSize(16777215, 16777215));
        label_62->setFont(font1);

        gridLayout_12->addWidget(label_62, 7, 0, 1, 1);

        m_Gyf = new QLineEdit(sensorBiases_groupBox_4);
        m_Gyf->setObjectName(QString::fromUtf8("m_Gyf"));

        gridLayout_12->addWidget(m_Gyf, 7, 1, 1, 1);

        label_64 = new QLabel(sensorBiases_groupBox_4);
        label_64->setObjectName(QString::fromUtf8("label_64"));
        label_64->setMinimumSize(QSize(0, 0));
        label_64->setMaximumSize(QSize(16777215, 16777215));
        label_64->setFont(font1);

        gridLayout_12->addWidget(label_64, 8, 0, 1, 1);

        m_Gzf = new QLineEdit(sensorBiases_groupBox_4);
        m_Gzf->setObjectName(QString::fromUtf8("m_Gzf"));

        gridLayout_12->addWidget(m_Gzf, 8, 1, 1, 1);


        gridLayout_13->addLayout(gridLayout_12, 0, 0, 1, 1);


        horizontalLayout_15->addWidget(sensorBiases_groupBox_4);


        verticalLayout_28->addLayout(horizontalLayout_15);

        gridLayout_18 = new QGridLayout();
        gridLayout_18->setObjectName(QString::fromUtf8("gridLayout_18"));
        sensorBiases_groupBox_2 = new QGroupBox(tab_4);
        sensorBiases_groupBox_2->setObjectName(QString::fromUtf8("sensorBiases_groupBox_2"));
        sensorBiases_groupBox_2->setMinimumSize(QSize(0, 0));
        sensorBiases_groupBox_2->setMaximumSize(QSize(132123, 123123));
        gridLayout_14 = new QGridLayout(sensorBiases_groupBox_2);
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        gridLayout_11 = new QGridLayout();
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        label_55 = new QLabel(sensorBiases_groupBox_2);
        label_55->setObjectName(QString::fromUtf8("label_55"));
        label_55->setMinimumSize(QSize(0, 0));
        label_55->setMaximumSize(QSize(16777215, 16777215));
        label_55->setFont(font1);

        gridLayout_11->addWidget(label_55, 0, 0, 1, 1);

        ed_sens = new QLineEdit(sensorBiases_groupBox_2);
        ed_sens->setObjectName(QString::fromUtf8("ed_sens"));

        gridLayout_11->addWidget(ed_sens, 0, 1, 2, 1);

        label_57 = new QLabel(sensorBiases_groupBox_2);
        label_57->setObjectName(QString::fromUtf8("label_57"));
        label_57->setMinimumSize(QSize(0, 0));
        label_57->setMaximumSize(QSize(16777215, 16777215));
        label_57->setFont(font1);

        gridLayout_11->addWidget(label_57, 1, 0, 2, 1);

        ed_control = new QLineEdit(sensorBiases_groupBox_2);
        ed_control->setObjectName(QString::fromUtf8("ed_control"));

        gridLayout_11->addWidget(ed_control, 2, 1, 1, 1);

        label_59 = new QLabel(sensorBiases_groupBox_2);
        label_59->setObjectName(QString::fromUtf8("label_59"));
        label_59->setMinimumSize(QSize(0, 0));
        label_59->setMaximumSize(QSize(16777215, 16777215));
        label_59->setFont(font1);

        gridLayout_11->addWidget(label_59, 3, 0, 1, 1);

        ed_batvolt = new QLineEdit(sensorBiases_groupBox_2);
        ed_batvolt->setObjectName(QString::fromUtf8("ed_batvolt"));

        gridLayout_11->addWidget(ed_batvolt, 3, 1, 1, 1);


        gridLayout_14->addLayout(gridLayout_11, 0, 0, 1, 1);


        gridLayout_18->addWidget(sensorBiases_groupBox_2, 0, 0, 1, 1);

        sensorBiases_groupBox_3 = new QGroupBox(tab_4);
        sensorBiases_groupBox_3->setObjectName(QString::fromUtf8("sensorBiases_groupBox_3"));
        sensorBiases_groupBox_3->setMinimumSize(QSize(0, 0));
        sensorBiases_groupBox_3->setMaximumSize(QSize(132123, 123123));
        gridLayout_15 = new QGridLayout(sensorBiases_groupBox_3);
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        gridLayout_10 = new QGridLayout();
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        label_56 = new QLabel(sensorBiases_groupBox_3);
        label_56->setObjectName(QString::fromUtf8("label_56"));
        label_56->setMinimumSize(QSize(0, 0));
        label_56->setMaximumSize(QSize(16777215, 16777215));
        label_56->setFont(font1);

        gridLayout_10->addWidget(label_56, 0, 0, 1, 1);

        ed_dynamic = new QLineEdit(sensorBiases_groupBox_3);
        ed_dynamic->setObjectName(QString::fromUtf8("ed_dynamic"));

        gridLayout_10->addWidget(ed_dynamic, 0, 1, 1, 1);

        label_58 = new QLabel(sensorBiases_groupBox_3);
        label_58->setObjectName(QString::fromUtf8("label_58"));
        label_58->setMinimumSize(QSize(0, 0));
        label_58->setMaximumSize(QSize(16777215, 16777215));
        label_58->setFont(font1);

        gridLayout_10->addWidget(label_58, 1, 0, 2, 1);

        ed_static = new QLineEdit(sensorBiases_groupBox_3);
        ed_static->setObjectName(QString::fromUtf8("ed_static"));

        gridLayout_10->addWidget(ed_static, 1, 1, 1, 1);

        ed_temp = new QLineEdit(sensorBiases_groupBox_3);
        ed_temp->setObjectName(QString::fromUtf8("ed_temp"));

        gridLayout_10->addWidget(ed_temp, 2, 1, 2, 1);

        label_60 = new QLabel(sensorBiases_groupBox_3);
        label_60->setObjectName(QString::fromUtf8("label_60"));
        label_60->setMinimumSize(QSize(0, 0));
        label_60->setMaximumSize(QSize(16777215, 16777215));
        label_60->setFont(font1);

        gridLayout_10->addWidget(label_60, 3, 0, 1, 1);


        gridLayout_15->addLayout(gridLayout_10, 0, 0, 1, 1);


        gridLayout_18->addWidget(sensorBiases_groupBox_3, 0, 1, 1, 1);


        verticalLayout_28->addLayout(gridLayout_18);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_28->addItem(verticalSpacer_4);


        gridLayout_21->addLayout(verticalLayout_28, 0, 0, 1, 1);

        SlugsSensorView_tabWidget->addTab(tab_4, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        gridLayout_34 = new QGridLayout(tab_3);
        gridLayout_34->setObjectName(QString::fromUtf8("gridLayout_34"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        diagnosticMessages_groupBox = new QGroupBox(tab_3);
        diagnosticMessages_groupBox->setObjectName(QString::fromUtf8("diagnosticMessages_groupBox"));
        diagnosticMessages_groupBox->setMinimumSize(QSize(0, 0));
        diagnosticMessages_groupBox->setMaximumSize(QSize(16777215, 16777215));
        diagnosticMessages_groupBox->setFont(font);
        gridLayout_22 = new QGridLayout(diagnosticMessages_groupBox);
        gridLayout_22->setObjectName(QString::fromUtf8("gridLayout_22"));
        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        label_35 = new QLabel(diagnosticMessages_groupBox);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_35->sizePolicy().hasHeightForWidth());
        label_35->setSizePolicy(sizePolicy3);
        label_35->setFont(font1);

        gridLayout_7->addWidget(label_35, 0, 0, 1, 1);

        m_Fl1 = new QLineEdit(diagnosticMessages_groupBox);
        m_Fl1->setObjectName(QString::fromUtf8("m_Fl1"));

        gridLayout_7->addWidget(m_Fl1, 0, 1, 1, 1);

        label_38 = new QLabel(diagnosticMessages_groupBox);
        label_38->setObjectName(QString::fromUtf8("label_38"));
        sizePolicy3.setHeightForWidth(label_38->sizePolicy().hasHeightForWidth());
        label_38->setSizePolicy(sizePolicy3);
        label_38->setFont(font1);

        gridLayout_7->addWidget(label_38, 0, 2, 1, 1);

        m_Sh1 = new QLineEdit(diagnosticMessages_groupBox);
        m_Sh1->setObjectName(QString::fromUtf8("m_Sh1"));

        gridLayout_7->addWidget(m_Sh1, 0, 3, 1, 1);

        label_36 = new QLabel(diagnosticMessages_groupBox);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        sizePolicy3.setHeightForWidth(label_36->sizePolicy().hasHeightForWidth());
        label_36->setSizePolicy(sizePolicy3);
        label_36->setFont(font1);

        gridLayout_7->addWidget(label_36, 1, 0, 1, 1);

        m_Fl2 = new QLineEdit(diagnosticMessages_groupBox);
        m_Fl2->setObjectName(QString::fromUtf8("m_Fl2"));

        gridLayout_7->addWidget(m_Fl2, 1, 1, 1, 1);

        label_39 = new QLabel(diagnosticMessages_groupBox);
        label_39->setObjectName(QString::fromUtf8("label_39"));
        sizePolicy3.setHeightForWidth(label_39->sizePolicy().hasHeightForWidth());
        label_39->setSizePolicy(sizePolicy3);
        label_39->setFont(font1);

        gridLayout_7->addWidget(label_39, 1, 2, 1, 1);

        m_Sh2 = new QLineEdit(diagnosticMessages_groupBox);
        m_Sh2->setObjectName(QString::fromUtf8("m_Sh2"));

        gridLayout_7->addWidget(m_Sh2, 1, 3, 1, 1);

        label_37 = new QLabel(diagnosticMessages_groupBox);
        label_37->setObjectName(QString::fromUtf8("label_37"));
        sizePolicy3.setHeightForWidth(label_37->sizePolicy().hasHeightForWidth());
        label_37->setSizePolicy(sizePolicy3);
        label_37->setFont(font1);

        gridLayout_7->addWidget(label_37, 2, 0, 1, 1);

        m_Fl3 = new QLineEdit(diagnosticMessages_groupBox);
        m_Fl3->setObjectName(QString::fromUtf8("m_Fl3"));

        gridLayout_7->addWidget(m_Fl3, 2, 1, 1, 1);

        label_40 = new QLabel(diagnosticMessages_groupBox);
        label_40->setObjectName(QString::fromUtf8("label_40"));
        sizePolicy3.setHeightForWidth(label_40->sizePolicy().hasHeightForWidth());
        label_40->setSizePolicy(sizePolicy3);
        label_40->setFont(font1);

        gridLayout_7->addWidget(label_40, 2, 2, 1, 1);

        m_Sh3 = new QLineEdit(diagnosticMessages_groupBox);
        m_Sh3->setObjectName(QString::fromUtf8("m_Sh3"));

        gridLayout_7->addWidget(m_Sh3, 2, 3, 1, 1);


        gridLayout_22->addLayout(gridLayout_7, 0, 0, 1, 1);


        horizontalLayout->addWidget(diagnosticMessages_groupBox);

        logMessages_groupBox = new QGroupBox(tab_3);
        logMessages_groupBox->setObjectName(QString::fromUtf8("logMessages_groupBox"));
        logMessages_groupBox->setMinimumSize(QSize(0, 0));
        logMessages_groupBox->setMaximumSize(QSize(16777215, 16777215));
        logMessages_groupBox->setFont(font);
        gridLayout_25 = new QGridLayout(logMessages_groupBox);
        gridLayout_25->setObjectName(QString::fromUtf8("gridLayout_25"));
        gridLayout_8 = new QGridLayout();
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        label_41 = new QLabel(logMessages_groupBox);
        label_41->setObjectName(QString::fromUtf8("label_41"));
        label_41->setFont(font1);

        gridLayout_8->addWidget(label_41, 0, 0, 1, 1);

        m_logFl1 = new QLineEdit(logMessages_groupBox);
        m_logFl1->setObjectName(QString::fromUtf8("m_logFl1"));

        gridLayout_8->addWidget(m_logFl1, 0, 1, 1, 1);

        label_44 = new QLabel(logMessages_groupBox);
        label_44->setObjectName(QString::fromUtf8("label_44"));
        label_44->setFont(font1);

        gridLayout_8->addWidget(label_44, 0, 2, 1, 1);

        m_logFl4 = new QLineEdit(logMessages_groupBox);
        m_logFl4->setObjectName(QString::fromUtf8("m_logFl4"));

        gridLayout_8->addWidget(m_logFl4, 0, 3, 1, 1);

        label_42 = new QLabel(logMessages_groupBox);
        label_42->setObjectName(QString::fromUtf8("label_42"));
        label_42->setFont(font1);

        gridLayout_8->addWidget(label_42, 1, 0, 1, 1);

        m_logFl2 = new QLineEdit(logMessages_groupBox);
        m_logFl2->setObjectName(QString::fromUtf8("m_logFl2"));

        gridLayout_8->addWidget(m_logFl2, 1, 1, 1, 1);

        label_45 = new QLabel(logMessages_groupBox);
        label_45->setObjectName(QString::fromUtf8("label_45"));
        label_45->setFont(font1);

        gridLayout_8->addWidget(label_45, 1, 2, 1, 1);

        m_logFl5 = new QLineEdit(logMessages_groupBox);
        m_logFl5->setObjectName(QString::fromUtf8("m_logFl5"));

        gridLayout_8->addWidget(m_logFl5, 1, 3, 1, 1);

        label_43 = new QLabel(logMessages_groupBox);
        label_43->setObjectName(QString::fromUtf8("label_43"));
        label_43->setFont(font1);

        gridLayout_8->addWidget(label_43, 2, 0, 1, 1);

        m_logFl3 = new QLineEdit(logMessages_groupBox);
        m_logFl3->setObjectName(QString::fromUtf8("m_logFl3"));

        gridLayout_8->addWidget(m_logFl3, 2, 1, 1, 1);

        label_46 = new QLabel(logMessages_groupBox);
        label_46->setObjectName(QString::fromUtf8("label_46"));
        label_46->setFont(font1);

        gridLayout_8->addWidget(label_46, 2, 2, 1, 1);

        m_logFl6 = new QLineEdit(logMessages_groupBox);
        m_logFl6->setObjectName(QString::fromUtf8("m_logFl6"));

        gridLayout_8->addWidget(m_logFl6, 2, 3, 1, 1);


        gridLayout_25->addLayout(gridLayout_8, 0, 0, 1, 1);


        horizontalLayout->addWidget(logMessages_groupBox);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);


        gridLayout_34->addLayout(verticalLayout, 0, 0, 1, 1);

        SlugsSensorView_tabWidget->addTab(tab_3, QString());

        gridLayout->addWidget(SlugsSensorView_tabWidget, 0, 0, 1, 1);


        retranslateUi(SlugsDataSensorView);

        SlugsSensorView_tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(SlugsDataSensorView);
    } // setupUi

    void retranslateUi(QWidget *SlugsDataSensorView)
    {
        SlugsDataSensorView->setWindowTitle(QApplication::translate("SlugsDataSensorView", "Form", 0, QApplication::UnicodeUTF8));
        position_groupBox->setTitle(QApplication::translate("SlugsDataSensorView", "Position", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("SlugsDataSensorView", "X", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("SlugsDataSensorView", "Y", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("SlugsDataSensorView", "Z", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("SlugsDataSensorView", "Vx", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("SlugsDataSensorView", "Vy", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("SlugsDataSensorView", "Vz", 0, QApplication::UnicodeUTF8));
        attitude_groupBox->setTitle(QApplication::translate("SlugsDataSensorView", "Attitude", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("SlugsDataSensorView", "Roll", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("SlugsDataSensorView", "Pitch", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("SlugsDataSensorView", "Yaw", 0, QApplication::UnicodeUTF8));
        navigation_groupBox->setTitle(QApplication::translate("SlugsDataSensorView", "Navigation", 0, QApplication::UnicodeUTF8));
        label_26->setText(QApplication::translate("SlugsDataSensorView", "U_m", 0, QApplication::UnicodeUTF8));
        label_27->setText(QApplication::translate("SlugsDataSensorView", "Pitch C", 0, QApplication::UnicodeUTF8));
        label_28->setText(QApplication::translate("SlugsDataSensorView", "Psi_d C", 0, QApplication::UnicodeUTF8));
        label_29->setText(QApplication::translate("SlugsDataSensorView", "Phi C", 0, QApplication::UnicodeUTF8));
        label_30->setText(QApplication::translate("SlugsDataSensorView", "Ay body", 0, QApplication::UnicodeUTF8));
        label_31->setText(QApplication::translate("SlugsDataSensorView", "From WP", 0, QApplication::UnicodeUTF8));
        label_32->setText(QApplication::translate("SlugsDataSensorView", "To WP", 0, QApplication::UnicodeUTF8));
        label_33->setText(QApplication::translate("SlugsDataSensorView", "Tot Run", 0, QApplication::UnicodeUTF8));
        label_34->setText(QApplication::translate("SlugsDataSensorView", "Dist to G", 0, QApplication::UnicodeUTF8));
        SlugsSensorView_tabWidget->setTabText(SlugsSensorView_tabWidget->indexOf(tab_5), QApplication::translate("SlugsDataSensorView", "Navigation", 0, QApplication::UnicodeUTF8));
        sensorBiases_groupBox->setTitle(QApplication::translate("SlugsDataSensorView", "Sensor Biases", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("SlugsDataSensorView", "Axb", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("SlugsDataSensorView", "Ayb", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("SlugsDataSensorView", "Azb", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("SlugsDataSensorView", "Gxb", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("SlugsDataSensorView", "Gyb", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("SlugsDataSensorView", "Gzb", 0, QApplication::UnicodeUTF8));
        PWMCommands_groupBox->setTitle(QApplication::translate("SlugsDataSensorView", "PWM Commands", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("SlugsDataSensorView", "Thro", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("SlugsDataSensorView", "Aile", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("SlugsDataSensorView", "Elev", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("SlugsDataSensorView", "Rudd", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("SlugsDataSensorView", "Thro Trim", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("SlugsDataSensorView", "Aile Trim", 0, QApplication::UnicodeUTF8));
        label_23->setText(QApplication::translate("SlugsDataSensorView", "Elev Trim", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("SlugsDataSensorView", "Rudd Trim", 0, QApplication::UnicodeUTF8));
        gpsData_groupBox_2->setTitle(QApplication::translate("SlugsDataSensorView", "GPS Data", 0, QApplication::UnicodeUTF8));
        label_77->setText(QApplication::translate("SlugsDataSensorView", "Throttle", 0, QApplication::UnicodeUTF8));
        label_78->setText(QApplication::translate("SlugsDataSensorView", "Aileron", 0, QApplication::UnicodeUTF8));
        label_79->setText(QApplication::translate("SlugsDataSensorView", "Rudder", 0, QApplication::UnicodeUTF8));
        label_80->setText(QApplication::translate("SlugsDataSensorView", "Elevator", 0, QApplication::UnicodeUTF8));
        label_81->setText(QApplication::translate("SlugsDataSensorView", "SOG", 0, QApplication::UnicodeUTF8));
        SlugsSensorView_tabWidget->setTabText(SlugsSensorView_tabWidget->indexOf(tab), QApplication::translate("SlugsDataSensorView", "Attitude", 0, QApplication::UnicodeUTF8));
        gpsData_groupBox->setTitle(QApplication::translate("SlugsDataSensorView", "GPS Data", 0, QApplication::UnicodeUTF8));
        label_48->setText(QApplication::translate("SlugsDataSensorView", "Date", 0, QApplication::UnicodeUTF8));
        label_47->setText(QApplication::translate("SlugsDataSensorView", "Time", 0, QApplication::UnicodeUTF8));
        label_54->setText(QApplication::translate("SlugsDataSensorView", "# Sats", 0, QApplication::UnicodeUTF8));
        label_52->setText(QApplication::translate("SlugsDataSensorView", "COG", 0, QApplication::UnicodeUTF8));
        label_53->setText(QApplication::translate("SlugsDataSensorView", "SOG", 0, QApplication::UnicodeUTF8));
        label_50->setText(QApplication::translate("SlugsDataSensorView", "Latitude", 0, QApplication::UnicodeUTF8));
        label_49->setText(QApplication::translate("SlugsDataSensorView", "Longitude", 0, QApplication::UnicodeUTF8));
        label_51->setText(QApplication::translate("SlugsDataSensorView", "Height", 0, QApplication::UnicodeUTF8));
        sensorBiases_groupBox_5->setTitle(QApplication::translate("SlugsDataSensorView", "Raw Data", 0, QApplication::UnicodeUTF8));
        label_68->setText(QApplication::translate("SlugsDataSensorView", "Ax", 0, QApplication::UnicodeUTF8));
        label_69->setText(QApplication::translate("SlugsDataSensorView", "Ay", 0, QApplication::UnicodeUTF8));
        label_70->setText(QApplication::translate("SlugsDataSensorView", "Az", 0, QApplication::UnicodeUTF8));
        label_74->setText(QApplication::translate("SlugsDataSensorView", "Mx", 0, QApplication::UnicodeUTF8));
        label_75->setText(QApplication::translate("SlugsDataSensorView", "My", 0, QApplication::UnicodeUTF8));
        label_76->setText(QApplication::translate("SlugsDataSensorView", "Mz", 0, QApplication::UnicodeUTF8));
        label_71->setText(QApplication::translate("SlugsDataSensorView", "Gx", 0, QApplication::UnicodeUTF8));
        label_72->setText(QApplication::translate("SlugsDataSensorView", "Gy", 0, QApplication::UnicodeUTF8));
        label_73->setText(QApplication::translate("SlugsDataSensorView", "Gz", 0, QApplication::UnicodeUTF8));
        sensorBiases_groupBox_4->setTitle(QApplication::translate("SlugsDataSensorView", "Filtered Data", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("SlugsDataSensorView", "Ax", 0, QApplication::UnicodeUTF8));
        label_61->setText(QApplication::translate("SlugsDataSensorView", "Ay", 0, QApplication::UnicodeUTF8));
        label_63->setText(QApplication::translate("SlugsDataSensorView", "Az", 0, QApplication::UnicodeUTF8));
        label_66->setText(QApplication::translate("SlugsDataSensorView", "Mx", 0, QApplication::UnicodeUTF8));
        label_67->setText(QApplication::translate("SlugsDataSensorView", "My", 0, QApplication::UnicodeUTF8));
        label_65->setText(QApplication::translate("SlugsDataSensorView", "Mz", 0, QApplication::UnicodeUTF8));
        label_25->setText(QApplication::translate("SlugsDataSensorView", "Gx", 0, QApplication::UnicodeUTF8));
        label_62->setText(QApplication::translate("SlugsDataSensorView", "Gy", 0, QApplication::UnicodeUTF8));
        label_64->setText(QApplication::translate("SlugsDataSensorView", "Gz", 0, QApplication::UnicodeUTF8));
        sensorBiases_groupBox_2->setTitle(QApplication::translate("SlugsDataSensorView", "CPU Load", 0, QApplication::UnicodeUTF8));
        label_55->setText(QApplication::translate("SlugsDataSensorView", "Sensor", 0, QApplication::UnicodeUTF8));
        label_57->setText(QApplication::translate("SlugsDataSensorView", "Control", 0, QApplication::UnicodeUTF8));
        label_59->setText(QApplication::translate("SlugsDataSensorView", "Batt Volt", 0, QApplication::UnicodeUTF8));
        sensorBiases_groupBox_3->setTitle(QApplication::translate("SlugsDataSensorView", "Air Data", 0, QApplication::UnicodeUTF8));
        label_56->setText(QApplication::translate("SlugsDataSensorView", "Dynamic", 0, QApplication::UnicodeUTF8));
        label_58->setText(QApplication::translate("SlugsDataSensorView", "Static", 0, QApplication::UnicodeUTF8));
        label_60->setText(QApplication::translate("SlugsDataSensorView", "Temperature", 0, QApplication::UnicodeUTF8));
        SlugsSensorView_tabWidget->setTabText(SlugsSensorView_tabWidget->indexOf(tab_4), QApplication::translate("SlugsDataSensorView", "Sensor", 0, QApplication::UnicodeUTF8));
        diagnosticMessages_groupBox->setTitle(QApplication::translate("SlugsDataSensorView", "Diagnostic Messages", 0, QApplication::UnicodeUTF8));
        label_35->setText(QApplication::translate("SlugsDataSensorView", "Fl1", 0, QApplication::UnicodeUTF8));
        label_38->setText(QApplication::translate("SlugsDataSensorView", "Sh1", 0, QApplication::UnicodeUTF8));
        label_36->setText(QApplication::translate("SlugsDataSensorView", "Fl2", 0, QApplication::UnicodeUTF8));
        label_39->setText(QApplication::translate("SlugsDataSensorView", "Sh2", 0, QApplication::UnicodeUTF8));
        label_37->setText(QApplication::translate("SlugsDataSensorView", "Fl3", 0, QApplication::UnicodeUTF8));
        label_40->setText(QApplication::translate("SlugsDataSensorView", "Sh3", 0, QApplication::UnicodeUTF8));
        logMessages_groupBox->setTitle(QApplication::translate("SlugsDataSensorView", "Log Messages", 0, QApplication::UnicodeUTF8));
        label_41->setText(QApplication::translate("SlugsDataSensorView", "Fl1", 0, QApplication::UnicodeUTF8));
        label_44->setText(QApplication::translate("SlugsDataSensorView", "Fl4", 0, QApplication::UnicodeUTF8));
        label_42->setText(QApplication::translate("SlugsDataSensorView", "Fl2", 0, QApplication::UnicodeUTF8));
        label_45->setText(QApplication::translate("SlugsDataSensorView", "Fl5", 0, QApplication::UnicodeUTF8));
        label_43->setText(QApplication::translate("SlugsDataSensorView", "Fl3", 0, QApplication::UnicodeUTF8));
        label_46->setText(QApplication::translate("SlugsDataSensorView", "Fl6", 0, QApplication::UnicodeUTF8));
        SlugsSensorView_tabWidget->setTabText(SlugsSensorView_tabWidget->indexOf(tab_3), QApplication::translate("SlugsDataSensorView", "Messages", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SlugsDataSensorView: public Ui_SlugsDataSensorView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SLUGSDATASENSORVIEW_H
