/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainwindow
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QCheckBox *checkBox;
    QPushButton *pushButton_3;
    QListWidget *listWidget;

    void setupUi(QWidget *mainwindow)
    {
        if (mainwindow->objectName().isEmpty())
            mainwindow->setObjectName(QStringLiteral("mainwindow"));
        mainwindow->resize(667, 414);
        pushButton = new QPushButton(mainwindow);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(40, 310, 121, 23));
        pushButton_2 = new QPushButton(mainwindow);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(40, 270, 121, 23));
        checkBox = new QCheckBox(mainwindow);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(50, 380, 171, 16));
        pushButton_3 = new QPushButton(mainwindow);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(40, 230, 121, 23));
        listWidget = new QListWidget(mainwindow);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(240, 10, 411, 251));

        retranslateUi(mainwindow);

        QMetaObject::connectSlotsByName(mainwindow);
    } // setupUi

    void retranslateUi(QWidget *mainwindow)
    {
        mainwindow->setWindowTitle(QApplication::translate("mainwindow", "mainwindow", Q_NULLPTR));
        pushButton->setText(QApplication::translate("mainwindow", "\346\232\202\345\201\234\346\216\245\346\224\266\346\225\260\346\215\256", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("mainwindow", "\345\274\200\345\247\213\346\216\245\346\224\266\346\225\260\346\215\256", Q_NULLPTR));
        checkBox->setText(QApplication::translate("mainwindow", "\350\257\267\351\201\265\345\256\210\344\273\245\344\270\212\346\235\241\346\254\276", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("mainwindow", "\345\212\240\350\275\275\350\275\250\351\201\223\346\225\260\346\215\256", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class mainwindow: public Ui_mainwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
