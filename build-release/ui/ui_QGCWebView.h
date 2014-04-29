/********************************************************************************
** Form generated from reading UI file 'QGCWebView.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCWEBVIEW_H
#define UI_QGCWEBVIEW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>
#include <QtWebKit/QWebView>

QT_BEGIN_NAMESPACE

class Ui_QGCWebView
{
public:
    QHBoxLayout *horizontalLayout;
    QWebView *webView;

    void setupUi(QWidget *QGCWebView)
    {
        if (QGCWebView->objectName().isEmpty())
            QGCWebView->setObjectName(QString::fromUtf8("QGCWebView"));
        QGCWebView->resize(400, 300);
        horizontalLayout = new QHBoxLayout(QGCWebView);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        webView = new QWebView(QGCWebView);
        webView->setObjectName(QString::fromUtf8("webView"));
        webView->setUrl(QUrl(QString::fromUtf8("about:blank")));

        horizontalLayout->addWidget(webView);


        retranslateUi(QGCWebView);

        QMetaObject::connectSlotsByName(QGCWebView);
    } // setupUi

    void retranslateUi(QWidget *QGCWebView)
    {
        QGCWebView->setWindowTitle(QApplication::translate("QGCWebView", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QGCWebView: public Ui_QGCWebView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCWEBVIEW_H
