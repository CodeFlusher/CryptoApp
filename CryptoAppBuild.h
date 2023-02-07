#pragma once

#include <QtWidgets/QMainWindow>
#include <string>
#include <fstream>
#include "ui_CryptoAppBuild.h"

class CryptoAppBuild : public QMainWindow
{
    Q_OBJECT

public:
    CryptoAppBuild(QWidget *parent = nullptr);
    ~CryptoAppBuild();

private slots:
    void on_pushButton_clicked();

private:

    Ui::CryptoAppBuildClass* ui;
};
