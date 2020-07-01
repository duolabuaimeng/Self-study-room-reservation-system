#include"main.h"
#include "loginwindow.h"

#include <QApplication>
QString reader_id_global,LISBN;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //修改风格
    a.setStyle(QStyleFactory::create("fusion"));

    LoginWindow w;
    w.showMaximized();
    return a.exec();
}



