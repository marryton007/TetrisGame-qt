#include "TetrisGameWindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TetrisGameWindow w;
    w.show();

    return a.exec();
}
