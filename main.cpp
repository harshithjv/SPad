#include <QtGui/QApplication>
#include "spad_frontend.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    spad_frontend w;
    w.show();

    return a.exec();
}
