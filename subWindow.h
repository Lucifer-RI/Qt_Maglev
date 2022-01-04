//
// Created by 1 on 2022/1/4.
//

#ifndef QT_TEST_SUBWINDOW_H
#define QT_TEST_SUBWINDOW_H

#include <QtWidgets/qwidget.h>
#include <QPushButton>

//QT_BEGIN_NAMESPACE
//namespace Ui { class subWindow; }
//QT_END_NAMESPACE

class subWindow : public QWidget {
    Q_OBJECT  //信号与槽会用到

public:
    explicit subWindow(QWidget *parent = nullptr);
    void sendSlot();
    ~subWindow() override;
signals:
    //信号必须有signals关键字来声明
//    信号没有返回值,可以有参数
//    信号就是函数的声明,只需声明,无需定义
//    使用: emit mySignal();
//    信号可以重载
    void mySignal();
    void mySignal(int a,QString s);
    //QString 为QT中的字符串




private:
    QPushButton s1;
};
#endif //QT_TEST_SUBWINDOW_H
