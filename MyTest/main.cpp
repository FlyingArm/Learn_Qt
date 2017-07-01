#include "mainwindow.h"
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setMaximumHeight(200);
    w.setMinimumHeight(200);
    w.setMaximumWidth(400);
    w.setMinimumWidth(400);
    w.setWindowTitle("MyFirstTest");
    w.show();

    return a.exec();
}
