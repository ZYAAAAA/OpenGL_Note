#include "mainwindow.h"
#include <QApplication>

int main(int argc, char* argv[])
{
    QApplication a(argc, argv);
    Triangle t;
    t.show();
    return a.exec();
}
