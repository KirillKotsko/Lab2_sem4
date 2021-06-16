#include "mainwidget.h"
#include "sorts.cpp"
#include "test.h"
#include <QApplication>
#include <QtCore>
#include <QtGui>

int main(int argc, char **argv)
{
    {
        TestRunner tr;
        RUN_TEST(tr, TestSortingAlgo);
    }
    QApplication app(argc, argv);
    MainWidget mw;
    mw.show();

    return app.exec();
}
