#include <QApplication>
#include "roscan_app.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    RosCan_App *pApp = new RosCan_App(&a);
    pApp->runTask();

    return a.exec();
}
