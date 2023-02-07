#include "CryptoAppBuild.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CryptoAppBuild w;
    w.show();
    return a.exec();
}
