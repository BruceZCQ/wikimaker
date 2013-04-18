#include "wikimaker.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    WikiMaker w;
    w.show();
    
    return a.exec();
}
