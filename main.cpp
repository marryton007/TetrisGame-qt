#include "gui/TetrisGameWindow.h"
#include <QApplication>
#include <QImage>
#include <QIODevice>
#include <QFile>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TetrisGameWindow w;
    w.show();

    return a.exec();
}
