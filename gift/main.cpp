#include "welcome_page.h"
#include "hexgrid.h"
#include <QApplication>
#include <QGraphicsView>

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    welcome_page w;
    w.show();
    return a.exec();

}
