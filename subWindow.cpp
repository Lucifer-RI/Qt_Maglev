//
// Created by 1 on 2022/1/4.
//

#include "subWindow.h"

subWindow::subWindow(QWidget *parent) :
QWidget(parent) {
    this->setWindowTitle("SUB");
    s1.setParent(this);
    s1.setText("切换到主窗口");
    this->resize(300,400);  //在窗口构造函数中确定窗口大小

    connect(&s1, &QPushButton::released, this, &subWindow::sendSlot);
    //按钮一旦"释放",则调用槽函数sendSlot();
}

void subWindow::sendSlot()  //槽函数sendSlot() 用来发送信号
{
    emit mySignal();  //发送信号,emit + 信号 ,信号类似于函数,主窗口处理信号即可
    emit mySignal(250,"我是子窗口");
}

subWindow::~subWindow() {

}