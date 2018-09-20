#include "widget.h"
#include <QApplication>
#inlude <iostream>
//go into newtempBranch
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();
    return a.exec();
}
