#include "Headers/mainwindow.h"
#include <QApplication>
#include <QWidget>
#include <pthread.h>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
