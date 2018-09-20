#include "widget.h"
#include <QApplication>
#inlude <iostream>
#moving to final branch
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();
    return a.exec();
}
