#include "principal.h"

#include <QApplication>

/*
 *Alexis Lomas
 */


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Principal w;
    w.show();
    return a.exec();
}
