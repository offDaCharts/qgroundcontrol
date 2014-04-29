/********************************************************************************
** Form generated from reading UI file 'QGCSettingsWidget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCSETTINGSWIDGET_H
#define UI_QGCSETTINGSWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QGCSettingsWidget
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *general;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *audioMuteCheckBox;
    QCheckBox *reconnectCheckBox;
    QCheckBox *lowPowerCheckBox;
    QCheckBox *titleBarCheckBox;
    QComboBox *customModeComboBox;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QComboBox *styleChooser;
    QHBoxLayout *DarkStyleLayout;
    QLabel *label;
    QLineEdit *styleSheetFile;
    QPushButton *styleCustomButton;
    QPushButton *styleDefaultButton;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QGCSettingsWidget)
    {
        if (QGCSettingsWidget->objectName().isEmpty())
            QGCSettingsWidget->setObjectName(QString::fromUtf8("QGCSettingsWidget"));
        QGCSettingsWidget->resize(528, 455);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QGCSettingsWidget->sizePolicy().hasHeightForWidth());
        QGCSettingsWidget->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(QGCSettingsWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(QGCSettingsWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        general = new QWidget();
        general->setObjectName(QString::fromUtf8("general"));
        verticalLayout_2 = new QVBoxLayout(general);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        audioMuteCheckBox = new QCheckBox(general);
        audioMuteCheckBox->setObjectName(QString::fromUtf8("audioMuteCheckBox"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/files/images/status/audio-volume-muted.svg"), QSize(), QIcon::Normal, QIcon::Off);
        audioMuteCheckBox->setIcon(icon);

        verticalLayout_2->addWidget(audioMuteCheckBox);

        reconnectCheckBox = new QCheckBox(general);
        reconnectCheckBox->setObjectName(QString::fromUtf8("reconnectCheckBox"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/files/images/devices/network-wireless.svg"), QSize(), QIcon::Normal, QIcon::Off);
        reconnectCheckBox->setIcon(icon1);

        verticalLayout_2->addWidget(reconnectCheckBox);

        lowPowerCheckBox = new QCheckBox(general);
        lowPowerCheckBox->setObjectName(QString::fromUtf8("lowPowerCheckBox"));

        verticalLayout_2->addWidget(lowPowerCheckBox);

        titleBarCheckBox = new QCheckBox(general);
        titleBarCheckBox->setObjectName(QString::fromUtf8("titleBarCheckBox"));
        titleBarCheckBox->setChecked(false);

        verticalLayout_2->addWidget(titleBarCheckBox);

        customModeComboBox = new QComboBox(general);
        customModeComboBox->setObjectName(QString::fromUtf8("customModeComboBox"));

        verticalLayout_2->addWidget(customModeComboBox);

        groupBox = new QGroupBox(general);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setFlat(false);
        groupBox->setCheckable(false);
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        styleChooser = new QComboBox(groupBox);
        styleChooser->setObjectName(QString::fromUtf8("styleChooser"));

        horizontalLayout->addWidget(styleChooser);


        verticalLayout_3->addLayout(horizontalLayout);

        DarkStyleLayout = new QHBoxLayout();
        DarkStyleLayout->setObjectName(QString::fromUtf8("DarkStyleLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        DarkStyleLayout->addWidget(label);

        styleSheetFile = new QLineEdit(groupBox);
        styleSheetFile->setObjectName(QString::fromUtf8("styleSheetFile"));

        DarkStyleLayout->addWidget(styleSheetFile);

        styleCustomButton = new QPushButton(groupBox);
        styleCustomButton->setObjectName(QString::fromUtf8("styleCustomButton"));
        styleCustomButton->setAutoDefault(false);

        DarkStyleLayout->addWidget(styleCustomButton);

        styleDefaultButton = new QPushButton(groupBox);
        styleDefaultButton->setObjectName(QString::fromUtf8("styleDefaultButton"));
        styleDefaultButton->setAutoDefault(false);

        DarkStyleLayout->addWidget(styleDefaultButton);


        verticalLayout_3->addLayout(DarkStyleLayout);


        verticalLayout_2->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        tabWidget->addTab(general, QString());

        verticalLayout->addWidget(tabWidget);

        buttonBox = new QDialogButtonBox(QGCSettingsWidget);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);
        buttonBox->setCenterButtons(false);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(QGCSettingsWidget);
        QObject::connect(buttonBox, SIGNAL(accepted()), QGCSettingsWidget, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QGCSettingsWidget, SLOT(reject()));

        QMetaObject::connectSlotsByName(QGCSettingsWidget);
    } // setupUi

    void retranslateUi(QDialog *QGCSettingsWidget)
    {
        QGCSettingsWidget->setWindowTitle(QApplication::translate("QGCSettingsWidget", "Dialog", 0, QApplication::UnicodeUTF8));
        audioMuteCheckBox->setText(QApplication::translate("QGCSettingsWidget", "Mute all audio output", 0, QApplication::UnicodeUTF8));
        reconnectCheckBox->setText(QApplication::translate("QGCSettingsWidget", "Automatically reconnect last link on application startup", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        lowPowerCheckBox->setToolTip(QApplication::translate("QGCSettingsWidget", "Lowers all update rates to save battery power", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        lowPowerCheckBox->setText(QApplication::translate("QGCSettingsWidget", "Enable low power mode", 0, QApplication::UnicodeUTF8));
        titleBarCheckBox->setText(QApplication::translate("QGCSettingsWidget", "Show Docked Widget title bars when NOT in advanced Mode.", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("QGCSettingsWidget", "Style", 0, QApplication::UnicodeUTF8));
        styleChooser->clear();
        styleChooser->insertItems(0, QStringList()
         << QApplication::translate("QGCSettingsWidget", "Dark (for indoor use)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QGCSettingsWidget", "Light (for outdoor use)", 0, QApplication::UnicodeUTF8)
        );
        label->setText(QApplication::translate("QGCSettingsWidget", "Stylesheet:", 0, QApplication::UnicodeUTF8));
        styleCustomButton->setText(QApplication::translate("QGCSettingsWidget", "Custom", 0, QApplication::UnicodeUTF8));
        styleDefaultButton->setText(QApplication::translate("QGCSettingsWidget", "Default", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(general), QApplication::translate("QGCSettingsWidget", "General", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabToolTip(tabWidget->indexOf(general), QApplication::translate("QGCSettingsWidget", "General Settings", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QGCSettingsWidget: public Ui_QGCSettingsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCSETTINGSWIDGET_H
