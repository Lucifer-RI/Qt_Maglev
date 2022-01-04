#include <QtWidgets/qapplication.h>
#include <QtWidgets/qmainwindow.h>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "subWindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv); //定义并创建应用程序
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    auto* widget = new mainwindow; //定义并创建窗口
    widget->resize(800,450);  //调整窗口大小
    widget->show();
    a.exec();
    return 0;
}