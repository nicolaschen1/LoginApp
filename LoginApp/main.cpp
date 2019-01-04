/**********************************************************
NotePadQt
VERSION: 1.0

Description: It is a simple login app developed with C++ Qt.
Developer: Nicolas CHEN
***********************************************************/

#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
