#include "node.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    node w;
    w.show();

    return a.exec();
}
