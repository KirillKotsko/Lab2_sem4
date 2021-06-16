#include "mainwidget.h"
#include "sorts.cpp"
#include <QApplication>
#include <QtCore>
#include <QtGui>

int main(int argc, char **argv)
{
    QApplication app(argc, argv);
    MainWidget mw;
    mw.show();

    return app.exec();
}
