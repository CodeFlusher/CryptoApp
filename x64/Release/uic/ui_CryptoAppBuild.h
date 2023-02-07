/********************************************************************************
** Form generated from reading UI file 'CryptoAppBuild.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CRYPTOAPPBUILD_H
#define UI_CRYPTOAPPBUILD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CryptoAppBuildClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *CryptoAppBuildClass)
    {
        if (CryptoAppBuildClass->objectName().isEmpty())
            CryptoAppBuildClass->setObjectName(QString::fromUtf8("CryptoAppBuildClass"));
        CryptoAppBuildClass->resize(600, 400);
        menuBar = new QMenuBar(CryptoAppBuildClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        CryptoAppBuildClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(CryptoAppBuildClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        CryptoAppBuildClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(CryptoAppBuildClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        CryptoAppBuildClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(CryptoAppBuildClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        CryptoAppBuildClass->setStatusBar(statusBar);

        retranslateUi(CryptoAppBuildClass);

        QMetaObject::connectSlotsByName(CryptoAppBuildClass);
    } // setupUi

    void retranslateUi(QMainWindow *CryptoAppBuildClass)
    {
        CryptoAppBuildClass->setWindowTitle(QCoreApplication::translate("CryptoAppBuildClass", "CryptoAppBuild", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CryptoAppBuildClass: public Ui_CryptoAppBuildClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CRYPTOAPPBUILD_H
