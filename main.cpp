#include "Mainwindow.h"
#include <QApplication>
#include "server/mserver.h"
#include "iostream"
using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
