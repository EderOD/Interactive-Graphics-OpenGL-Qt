#include <QtGui/QApplication>
#include "JanelaPrincipal.h"
#include <GL/glu.h>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    JanelaPrincipal w;
    w.show();
    return a.exec();
}
