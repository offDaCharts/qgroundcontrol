/********************************************************************************
** Form generated from reading UI file 'QGCDataPlot2D.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCDATAPLOT2D_H
#define UI_QGCDATAPLOT2D_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QGCDataPlot2D
{
public:
    QGridLayout *gridLayout;
    QLabel *label_2;
    QComboBox *xAxis;
    QLabel *label_3;
    QLineEdit *yAxis;
    QComboBox *style;
    QPushButton *reloadButton;
    QFrame *line;
    QPushButton *savePlotButton;
    QPushButton *printButton;
    QLabel *label_4;
    QLineEdit *plotTitle;
    QLabel *label_5;
    QLineEdit *plotXAxisLabel;
    QLabel *label_6;
    QLineEdit *plotYAxisLabel;
    QCheckBox *symmetricCheckBox;
    QCheckBox *legendCheckBox;
    QCheckBox *gridCheckBox;
    QFrame *plotFrame;
    QLabel *label;
    QComboBox *inputFileType;
    QLabel *filenameLabel;
    QPushButton *selectFileButton;
    QSpacerItem *horizontalSpacer;
    QFrame *line_2;
    QLabel *label_7;
    QComboBox *xRegressionComboBox;
    QComboBox *yRegressionComboBox;
    QPushButton *regressionButton;
    QLineEdit *regressionOutput;
    QPushButton *saveCsvButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *QGCDataPlot2D)
    {
        if (QGCDataPlot2D->objectName().isEmpty())
            QGCDataPlot2D->setObjectName(QString::fromUtf8("QGCDataPlot2D"));
        QGCDataPlot2D->resize(1463, 311);
        gridLayout = new QGridLayout(QGCDataPlot2D);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(QGCDataPlot2D);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        xAxis = new QComboBox(QGCDataPlot2D);
        xAxis->setObjectName(QString::fromUtf8("xAxis"));

        gridLayout->addWidget(xAxis, 0, 1, 1, 2);

        label_3 = new QLabel(QGCDataPlot2D);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 3, 1, 1);

        yAxis = new QLineEdit(QGCDataPlot2D);
        yAxis->setObjectName(QString::fromUtf8("yAxis"));

        gridLayout->addWidget(yAxis, 0, 4, 1, 1);

        style = new QComboBox(QGCDataPlot2D);
        style->setObjectName(QString::fromUtf8("style"));

        gridLayout->addWidget(style, 0, 5, 1, 2);

        reloadButton = new QPushButton(QGCDataPlot2D);
        reloadButton->setObjectName(QString::fromUtf8("reloadButton"));

        gridLayout->addWidget(reloadButton, 0, 7, 1, 2);

        line = new QFrame(QGCDataPlot2D);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 0, 11, 1, 1);

        savePlotButton = new QPushButton(QGCDataPlot2D);
        savePlotButton->setObjectName(QString::fromUtf8("savePlotButton"));

        gridLayout->addWidget(savePlotButton, 0, 12, 1, 2);

        printButton = new QPushButton(QGCDataPlot2D);
        printButton->setObjectName(QString::fromUtf8("printButton"));

        gridLayout->addWidget(printButton, 0, 19, 1, 1);

        label_4 = new QLabel(QGCDataPlot2D);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 1, 0, 1, 2);

        plotTitle = new QLineEdit(QGCDataPlot2D);
        plotTitle->setObjectName(QString::fromUtf8("plotTitle"));

        gridLayout->addWidget(plotTitle, 1, 2, 1, 3);

        label_5 = new QLabel(QGCDataPlot2D);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 1, 5, 1, 1);

        plotXAxisLabel = new QLineEdit(QGCDataPlot2D);
        plotXAxisLabel->setObjectName(QString::fromUtf8("plotXAxisLabel"));

        gridLayout->addWidget(plotXAxisLabel, 1, 6, 1, 2);

        label_6 = new QLabel(QGCDataPlot2D);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 1, 8, 1, 1);

        plotYAxisLabel = new QLineEdit(QGCDataPlot2D);
        plotYAxisLabel->setObjectName(QString::fromUtf8("plotYAxisLabel"));

        gridLayout->addWidget(plotYAxisLabel, 1, 9, 1, 3);

        symmetricCheckBox = new QCheckBox(QGCDataPlot2D);
        symmetricCheckBox->setObjectName(QString::fromUtf8("symmetricCheckBox"));

        gridLayout->addWidget(symmetricCheckBox, 1, 12, 1, 2);

        legendCheckBox = new QCheckBox(QGCDataPlot2D);
        legendCheckBox->setObjectName(QString::fromUtf8("legendCheckBox"));

        gridLayout->addWidget(legendCheckBox, 1, 14, 1, 2);

        gridCheckBox = new QCheckBox(QGCDataPlot2D);
        gridCheckBox->setObjectName(QString::fromUtf8("gridCheckBox"));

        gridLayout->addWidget(gridCheckBox, 1, 16, 1, 1);

        plotFrame = new QFrame(QGCDataPlot2D);
        plotFrame->setObjectName(QString::fromUtf8("plotFrame"));
        plotFrame->setFrameShape(QFrame::StyledPanel);
        plotFrame->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(plotFrame, 2, 0, 1, 20);

        label = new QLabel(QGCDataPlot2D);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 3, 0, 1, 1);

        inputFileType = new QComboBox(QGCDataPlot2D);
        inputFileType->setObjectName(QString::fromUtf8("inputFileType"));

        gridLayout->addWidget(inputFileType, 3, 1, 1, 2);

        filenameLabel = new QLabel(QGCDataPlot2D);
        filenameLabel->setObjectName(QString::fromUtf8("filenameLabel"));

        gridLayout->addWidget(filenameLabel, 3, 3, 1, 4);

        selectFileButton = new QPushButton(QGCDataPlot2D);
        selectFileButton->setObjectName(QString::fromUtf8("selectFileButton"));

        gridLayout->addWidget(selectFileButton, 3, 8, 1, 2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 3, 10, 1, 2);

        line_2 = new QFrame(QGCDataPlot2D);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 3, 12, 1, 1);

        label_7 = new QLabel(QGCDataPlot2D);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 3, 13, 1, 1);

        xRegressionComboBox = new QComboBox(QGCDataPlot2D);
        xRegressionComboBox->setObjectName(QString::fromUtf8("xRegressionComboBox"));

        gridLayout->addWidget(xRegressionComboBox, 3, 14, 1, 2);

        yRegressionComboBox = new QComboBox(QGCDataPlot2D);
        yRegressionComboBox->setObjectName(QString::fromUtf8("yRegressionComboBox"));

        gridLayout->addWidget(yRegressionComboBox, 3, 16, 1, 2);

        regressionButton = new QPushButton(QGCDataPlot2D);
        regressionButton->setObjectName(QString::fromUtf8("regressionButton"));

        gridLayout->addWidget(regressionButton, 3, 19, 1, 1);

        regressionOutput = new QLineEdit(QGCDataPlot2D);
        regressionOutput->setObjectName(QString::fromUtf8("regressionOutput"));
        regressionOutput->setReadOnly(true);

        gridLayout->addWidget(regressionOutput, 3, 18, 1, 1);

        saveCsvButton = new QPushButton(QGCDataPlot2D);
        saveCsvButton->setObjectName(QString::fromUtf8("saveCsvButton"));

        gridLayout->addWidget(saveCsvButton, 0, 14, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(5, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 9, 1, 2);

        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 1);
        gridLayout->setColumnStretch(2, 1);
        gridLayout->setColumnStretch(3, 1);
        gridLayout->setColumnStretch(4, 100);
        gridLayout->setColumnStretch(5, 1);
        gridLayout->setColumnStretch(6, 1);
        gridLayout->setColumnStretch(7, 1);
        gridLayout->setColumnStretch(8, 1);
        gridLayout->setColumnStretch(9, 1);
        gridLayout->setColumnStretch(10, 1);
        gridLayout->setColumnStretch(11, 1);
        gridLayout->setColumnStretch(12, 1);
        gridLayout->setColumnStretch(13, 1);
        gridLayout->setColumnStretch(14, 1);
        gridLayout->setColumnStretch(15, 1);
        gridLayout->setColumnStretch(16, 1);
        gridLayout->setColumnStretch(17, 1);
        gridLayout->setColumnStretch(18, 1);
        gridLayout->setColumnStretch(19, 1);

        retranslateUi(QGCDataPlot2D);

        QMetaObject::connectSlotsByName(QGCDataPlot2D);
    } // setupUi

    void retranslateUi(QWidget *QGCDataPlot2D)
    {
        QGCDataPlot2D->setWindowTitle(QApplication::translate("QGCDataPlot2D", "Form", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("QGCDataPlot2D", "X", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("QGCDataPlot2D", "Y", 0, QApplication::UnicodeUTF8));
        style->clear();
        style->insertItems(0, QStringList()
         << QApplication::translate("QGCDataPlot2D", "Style..", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QGCDataPlot2D", "Only crosses", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QGCDataPlot2D", "Only circles", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QGCDataPlot2D", "Only rectangles", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QGCDataPlot2D", "Only symbols", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QGCDataPlot2D", "Lines and crosses", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QGCDataPlot2D", "Lines and circles", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QGCDataPlot2D", "Lines and rects", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QGCDataPlot2D", "Lines and symbols", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QGCDataPlot2D", "Dotted lines and crosses", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QGCDataPlot2D", "Dotted lines and circles", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QGCDataPlot2D", "Dotted lines and rects", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QGCDataPlot2D", "Dashed lines and crosses", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QGCDataPlot2D", "Dashed lines and circles", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QGCDataPlot2D", "Dashed lines and rects", 0, QApplication::UnicodeUTF8)
        );
        reloadButton->setText(QApplication::translate("QGCDataPlot2D", "Replot", 0, QApplication::UnicodeUTF8));
        savePlotButton->setText(QApplication::translate("QGCDataPlot2D", "Save Image", 0, QApplication::UnicodeUTF8));
        printButton->setText(QApplication::translate("QGCDataPlot2D", "Print", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("QGCDataPlot2D", "Title", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("QGCDataPlot2D", "X label", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("QGCDataPlot2D", "Y label", 0, QApplication::UnicodeUTF8));
        symmetricCheckBox->setText(QApplication::translate("QGCDataPlot2D", "Symmetric", 0, QApplication::UnicodeUTF8));
        legendCheckBox->setText(QApplication::translate("QGCDataPlot2D", "Legend", 0, QApplication::UnicodeUTF8));
        gridCheckBox->setText(QApplication::translate("QGCDataPlot2D", "Grid", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QGCDataPlot2D", "File", 0, QApplication::UnicodeUTF8));
        inputFileType->clear();
        inputFileType->insertItems(0, QStringList()
         << QApplication::translate("QGCDataPlot2D", "CSV", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QGCDataPlot2D", "pxIMU", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QGCDataPlot2D", "RAW", 0, QApplication::UnicodeUTF8)
        );
        filenameLabel->setText(QApplication::translate("QGCDataPlot2D", "Please select input file..", 0, QApplication::UnicodeUTF8));
        selectFileButton->setText(QApplication::translate("QGCDataPlot2D", "Select file", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("QGCDataPlot2D", "Regression", 0, QApplication::UnicodeUTF8));
        regressionButton->setText(QApplication::translate("QGCDataPlot2D", "Calculate", 0, QApplication::UnicodeUTF8));
        saveCsvButton->setText(QApplication::translate("QGCDataPlot2D", "Save Data", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QGCDataPlot2D: public Ui_QGCDataPlot2D {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCDATAPLOT2D_H
