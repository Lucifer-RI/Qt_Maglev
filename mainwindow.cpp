//
// Created by 1 on 2021/12/30.
//

// You may need to build the project (run Qt uic code generator) to get "ui_mainwindow.h" resolved

//// 放置按键，如果不指定widget为b的父对象，则两者是独立的窗口
////    指定widget为b的父对象，则意味着b放置在窗口widget内
////指定父对象，两种方式：
////(1) setParent();
////(2) 通过函数传参
////设定父对象有一个好处,只需要父对象显示,子对象自动显示
////    b.setParent(widget);  //指定父对象
//QPushButton b(widget); //在构造时进行父对象传参
//b.setText("heihei"); //给按钮设置内容
//b.move(100,100);  //移动子对象在父对象中的坐标(左上角为起点)
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPushButton>
#include <QDebug>  //打印


mainwindow::mainwindow(QWidget *parent) :
        QWidget(parent), ui(new Ui::mainwindow) {
    ui->setupUi(this);
    //窗口标题：
    b1.setParent(this);
    b1.setText("<.>");
    b1.move(100,100);
    b2.setParent(this);
    b2.setText("Close");
    //此时的按键可以点击但是无反应


    //添加信号与槽(软件模拟中断)
    connect(&b2, &QPushButton::pressed, this, &mainwindow::close);
    //参数一,发出信号的类的地址(指针类型),参数二,&发出者类名和信号名(信号发出方,定义出发信号的地址和方式)
    //参数三,对信号感兴趣的类的地址(接收者类名),参数四,接到信号后的动作(信号处理函数(槽函数))(信号接收方,定义信号作用方和信号触发动作)

    //自定义槽函数(自定义信号处理函数)
//    QT5 可以是 任意的成员函数 ,普通全局函数, 静态一致
//    槽函数需要与信号一致(参数,返回值)
//   由于信号都没有返回值,所以, 槽函数一定没有返回值
    connect(&b1, &QPushButton::released, this, &mainwindow::mySlot);
    connect(&b1,&QPushButton::released,&b2,&QPushButton::hide);
    //b1一旦被"松开"时,主窗口执行mySlot,同时,b2被隐藏

    this->setWindowTitle("BOSS");
    b3.setParent(this);
    b3.setText("切换到子窗口");
    b3.move(50,50);

    //显示子窗口 ,未指定父对象,两者为独立的
    //    w.show();
    connect(&b3, &QPushButton::released, this, &mainwindow::mySlotSwitch);

    //处理子窗口的信号
    // 为了避免重载后信号地址存在歧义
    void (subWindow::*funSignal)() = &subWindow::mySignal;  //信号mySignal的函数指针,即信号地址
    void (subWindow::*funSignalnum)(int, QString) = &subWindow::mySignal; //信号mySignal(int,QString)的函数指针,即信号地址
    connect(&w, funSignal, this, &mainwindow::dealsub_mySignal);
    connect(&w, funSignalnum, this, &mainwindow::dealSlot);
}

void mainwindow::mySlot() //在外部定义成员函数,记得加上作用域
{
    b1.setText("$.$");
}

void mainwindow::mySlotSwitch()
{
    w.show(); //子窗口显示
    this->hide(); // 主窗口隐藏
}

void mainwindow::dealsub_mySignal()
{
    this->show(); //主窗口显示
    w.hide();  //子窗口隐藏
}

void mainwindow::dealSlot(int a, QString s)
{
    qDebug() << a << s;
}

mainwindow::~mainwindow() {
    delete ui;
}

