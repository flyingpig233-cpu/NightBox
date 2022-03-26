#include "nightbox.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    NightBox w;
    w.show();
    return a.exec();
}
