#include "mainwindow.h"

#include <QApplication>


//设计窗体，显示各种 QGraphicsltem 类型（包括不停闪烁的
//圆及来回移动的星星等）
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
