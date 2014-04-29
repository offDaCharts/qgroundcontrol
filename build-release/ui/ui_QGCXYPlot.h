/********************************************************************************
** Form generated from reading UI file 'QGCXYPlot.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCXYPLOT_H
#define UI_QGCXYPLOT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QScrollBar>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QGCXYPlot
{
public:
    QVBoxLayout *verticalLayout_2;
    QFrame *editLine1;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *lblXParam;
    QComboBox *editXParam;
    QLabel *lblYParam;
    QComboBox *editYParam;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lblMaxDataShow;
    QSpinBox *maxDataShowSpinBox;
    QLabel *lblMaxDataStore;
    QSpinBox *maxDataStoreSpinBox;
    QLabel *lblSmooth;
    QSpinBox *smoothSpinBox;
    QCheckBox *automaticAxisRange;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *lblMinX;
    QDoubleSpinBox *minX;
    QLabel *lblMaxX;
    QDoubleSpinBox *maxX;
    QLabel *lblMinY;
    QDoubleSpinBox *minY;
    QLabel *lblMaxY;
    QDoubleSpinBox *maxY;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *xyPlotLayout;
    QHBoxLayout *horizontalLayout_6;
    QScrollBar *timeScrollBar;
    QPushButton *stopStartButton;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *editFinishButton;
    QFrame *editLine2;

    void setupUi(QWidget *QGCXYPlot)
    {
        if (QGCXYPlot->objectName().isEmpty())
            QGCXYPlot->setObjectName(QString::fromUtf8("QGCXYPlot"));
        QGCXYPlot->resize(771, 365);
        verticalLayout_2 = new QVBoxLayout(QGCXYPlot);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        editLine1 = new QFrame(QGCXYPlot);
        editLine1->setObjectName(QString::fromUtf8("editLine1"));
        editLine1->setMinimumSize(QSize(0, 0));
        editLine1->setFrameShape(QFrame::HLine);
        editLine1->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(editLine1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lblXParam = new QLabel(QGCXYPlot);
        lblXParam->setObjectName(QString::fromUtf8("lblXParam"));
        lblXParam->setMinimumSize(QSize(50, 0));
        lblXParam->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(lblXParam);

        editXParam = new QComboBox(QGCXYPlot);
        editXParam->setObjectName(QString::fromUtf8("editXParam"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(editXParam->sizePolicy().hasHeightForWidth());
        editXParam->setSizePolicy(sizePolicy);
        editXParam->setEditable(true);
        editXParam->setInsertPolicy(QComboBox::InsertAlphabetically);
        editXParam->setSizeAdjustPolicy(QComboBox::AdjustToContents);
        editXParam->setMinimumContentsLength(10);

        horizontalLayout->addWidget(editXParam);

        lblYParam = new QLabel(QGCXYPlot);
        lblYParam->setObjectName(QString::fromUtf8("lblYParam"));
        lblYParam->setMinimumSize(QSize(50, 0));
        lblYParam->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(lblYParam);

        editYParam = new QComboBox(QGCXYPlot);
        editYParam->setObjectName(QString::fromUtf8("editYParam"));
        sizePolicy.setHeightForWidth(editYParam->sizePolicy().hasHeightForWidth());
        editYParam->setSizePolicy(sizePolicy);
        editYParam->setEditable(true);
        editYParam->setInsertPolicy(QComboBox::InsertAlphabetically);
        editYParam->setSizeAdjustPolicy(QComboBox::AdjustToContents);
        editYParam->setMinimumContentsLength(10);

        horizontalLayout->addWidget(editYParam);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        lblMaxDataShow = new QLabel(QGCXYPlot);
        lblMaxDataShow->setObjectName(QString::fromUtf8("lblMaxDataShow"));

        horizontalLayout_3->addWidget(lblMaxDataShow);

        maxDataShowSpinBox = new QSpinBox(QGCXYPlot);
        maxDataShowSpinBox->setObjectName(QString::fromUtf8("maxDataShowSpinBox"));
        maxDataShowSpinBox->setMinimum(2);
        maxDataShowSpinBox->setMaximum(999);
        maxDataShowSpinBox->setValue(15);

        horizontalLayout_3->addWidget(maxDataShowSpinBox);

        lblMaxDataStore = new QLabel(QGCXYPlot);
        lblMaxDataStore->setObjectName(QString::fromUtf8("lblMaxDataStore"));

        horizontalLayout_3->addWidget(lblMaxDataStore);

        maxDataStoreSpinBox = new QSpinBox(QGCXYPlot);
        maxDataStoreSpinBox->setObjectName(QString::fromUtf8("maxDataStoreSpinBox"));
        maxDataStoreSpinBox->setMinimum(10);
        maxDataStoreSpinBox->setMaximum(999999999);
        maxDataStoreSpinBox->setValue(15);

        horizontalLayout_3->addWidget(maxDataStoreSpinBox);

        lblSmooth = new QLabel(QGCXYPlot);
        lblSmooth->setObjectName(QString::fromUtf8("lblSmooth"));

        horizontalLayout_3->addWidget(lblSmooth);

        smoothSpinBox = new QSpinBox(QGCXYPlot);
        smoothSpinBox->setObjectName(QString::fromUtf8("smoothSpinBox"));
        smoothSpinBox->setMinimum(1);
        smoothSpinBox->setMaximum(99999);

        horizontalLayout_3->addWidget(smoothSpinBox);

        automaticAxisRange = new QCheckBox(QGCXYPlot);
        automaticAxisRange->setObjectName(QString::fromUtf8("automaticAxisRange"));
        automaticAxisRange->setChecked(true);

        horizontalLayout_3->addWidget(automaticAxisRange);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        lblMinX = new QLabel(QGCXYPlot);
        lblMinX->setObjectName(QString::fromUtf8("lblMinX"));

        horizontalLayout_4->addWidget(lblMinX);

        minX = new QDoubleSpinBox(QGCXYPlot);
        minX->setObjectName(QString::fromUtf8("minX"));
        minX->setMinimum(-1e+09);
        minX->setMaximum(1e+09);

        horizontalLayout_4->addWidget(minX);

        lblMaxX = new QLabel(QGCXYPlot);
        lblMaxX->setObjectName(QString::fromUtf8("lblMaxX"));

        horizontalLayout_4->addWidget(lblMaxX);

        maxX = new QDoubleSpinBox(QGCXYPlot);
        maxX->setObjectName(QString::fromUtf8("maxX"));
        maxX->setMinimum(-1e+09);
        maxX->setMaximum(1e+09);

        horizontalLayout_4->addWidget(maxX);

        lblMinY = new QLabel(QGCXYPlot);
        lblMinY->setObjectName(QString::fromUtf8("lblMinY"));

        horizontalLayout_4->addWidget(lblMinY);

        minY = new QDoubleSpinBox(QGCXYPlot);
        minY->setObjectName(QString::fromUtf8("minY"));
        minY->setMinimum(-1e+09);
        minY->setMaximum(1e+09);

        horizontalLayout_4->addWidget(minY);

        lblMaxY = new QLabel(QGCXYPlot);
        lblMaxY->setObjectName(QString::fromUtf8("lblMaxY"));

        horizontalLayout_4->addWidget(lblMaxY);

        maxY = new QDoubleSpinBox(QGCXYPlot);
        maxY->setObjectName(QString::fromUtf8("maxY"));
        maxY->setMinimum(-1e+09);
        maxY->setMaximum(1e+09);

        horizontalLayout_4->addWidget(maxY);


        verticalLayout->addLayout(horizontalLayout_4);


        horizontalLayout_5->addLayout(verticalLayout);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);


        verticalLayout_2->addLayout(horizontalLayout_5);

        xyPlotLayout = new QHBoxLayout();
        xyPlotLayout->setSpacing(0);
        xyPlotLayout->setObjectName(QString::fromUtf8("xyPlotLayout"));

        verticalLayout_2->addLayout(xyPlotLayout);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        timeScrollBar = new QScrollBar(QGCXYPlot);
        timeScrollBar->setObjectName(QString::fromUtf8("timeScrollBar"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(timeScrollBar->sizePolicy().hasHeightForWidth());
        timeScrollBar->setSizePolicy(sizePolicy1);
        timeScrollBar->setMinimum(2);
        timeScrollBar->setTracking(true);
        timeScrollBar->setOrientation(Qt::Horizontal);

        horizontalLayout_6->addWidget(timeScrollBar);

        stopStartButton = new QPushButton(QGCXYPlot);
        stopStartButton->setObjectName(QString::fromUtf8("stopStartButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/files/images/actions/media-playback-stop.svg"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QString::fromUtf8(":/files/images/actions/media-playback-start.svg"), QSize(), QIcon::Normal, QIcon::On);
        stopStartButton->setIcon(icon);
        stopStartButton->setIconSize(QSize(16, 16));
        stopStartButton->setCheckable(true);
        stopStartButton->setChecked(false);
        stopStartButton->setFlat(false);

        horizontalLayout_6->addWidget(stopStartButton);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        editFinishButton = new QPushButton(QGCXYPlot);
        editFinishButton->setObjectName(QString::fromUtf8("editFinishButton"));
        editFinishButton->setAutoDefault(false);
        editFinishButton->setDefault(true);

        horizontalLayout_2->addWidget(editFinishButton);


        verticalLayout_2->addLayout(horizontalLayout_2);

        editLine2 = new QFrame(QGCXYPlot);
        editLine2->setObjectName(QString::fromUtf8("editLine2"));
        editLine2->setMinimumSize(QSize(0, 0));
        editLine2->setFrameShape(QFrame::HLine);
        editLine2->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(editLine2);

#ifndef QT_NO_SHORTCUT
        lblXParam->setBuddy(editXParam);
        lblYParam->setBuddy(editYParam);
        lblMaxDataShow->setBuddy(maxDataShowSpinBox);
        lblMaxDataStore->setBuddy(maxDataStoreSpinBox);
        lblSmooth->setBuddy(smoothSpinBox);
        lblMinX->setBuddy(minX);
        lblMaxX->setBuddy(maxX);
        lblMinY->setBuddy(minY);
        lblMaxY->setBuddy(maxY);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(editXParam, editYParam);
        QWidget::setTabOrder(editYParam, maxDataShowSpinBox);
        QWidget::setTabOrder(maxDataShowSpinBox, maxDataStoreSpinBox);
        QWidget::setTabOrder(maxDataStoreSpinBox, smoothSpinBox);
        QWidget::setTabOrder(smoothSpinBox, automaticAxisRange);
        QWidget::setTabOrder(automaticAxisRange, minX);
        QWidget::setTabOrder(minX, maxX);
        QWidget::setTabOrder(maxX, minY);
        QWidget::setTabOrder(minY, maxY);
        QWidget::setTabOrder(maxY, editFinishButton);

        retranslateUi(QGCXYPlot);

        QMetaObject::connectSlotsByName(QGCXYPlot);
    } // setupUi

    void retranslateUi(QWidget *QGCXYPlot)
    {
        QGCXYPlot->setWindowTitle(QApplication::translate("QGCXYPlot", "Form", 0, QApplication::UnicodeUTF8));
        lblXParam->setText(QApplication::translate("QGCXYPlot", "X Parameter:", 0, QApplication::UnicodeUTF8));
        lblYParam->setText(QApplication::translate("QGCXYPlot", "Y Parameter:", 0, QApplication::UnicodeUTF8));
        lblMaxDataShow->setText(QApplication::translate("QGCXYPlot", "Number of data points to &show:", 0, QApplication::UnicodeUTF8));
        lblMaxDataStore->setText(QApplication::translate("QGCXYPlot", "To s&tore:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        lblSmooth->setToolTip(QApplication::translate("QGCXYPlot", "Number of points to average, to provide a smoothing effect of the plotted values", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        lblSmooth->setText(QApplication::translate("QGCXYPlot", "S&mooth:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        smoothSpinBox->setToolTip(QApplication::translate("QGCXYPlot", "Number of points to average, to provide a smoothing effect of the plotted values", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        automaticAxisRange->setText(QApplication::translate("QGCXYPlot", "Automatic Axis Range", 0, QApplication::UnicodeUTF8));
        lblMinX->setText(QApplication::translate("QGCXYPlot", "&Min X:", 0, QApplication::UnicodeUTF8));
        lblMaxX->setText(QApplication::translate("QGCXYPlot", "&Max X:", 0, QApplication::UnicodeUTF8));
        lblMinY->setText(QApplication::translate("QGCXYPlot", "Min &Y:", 0, QApplication::UnicodeUTF8));
        lblMaxY->setText(QApplication::translate("QGCXYPlot", "Ma&x Y:", 0, QApplication::UnicodeUTF8));
        editFinishButton->setText(QApplication::translate("QGCXYPlot", "Done", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QGCXYPlot: public Ui_QGCXYPlot {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCXYPLOT_H
