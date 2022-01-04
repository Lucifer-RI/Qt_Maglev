//
// Created by 1 on 2021/12/30.
//

#ifndef QT_TEST_MAINWINDOW_H
#define QT_TEST_MAINWINDOW_H

#include <QtWidgets/qwidget.h>
#include <QPushButton>
#include "subWindow.h" //子窗口头文件

QT_BEGIN_NAMESPACE
namespace Ui { class mainwindow; }
QT_END_NAMESPACE

class mainwindow : public QWidget {
    Q_OBJECT  //信号与槽会用到

public:
    explicit mainwindow(QWidget *parent = nullptr);

    void mySlot();
    void mySlotSwitch();
    void dealsub_mySignal();
    void dealSlot(int, QString);
    ~mainwindow() override;

private:
    Ui::mainwindow *ui;
    QPushButton b1;
    QPushButton b2;
    QPushButton b3;
    subWindow w;
};


#endif //QT_TEST_MAINWINDOW_H
