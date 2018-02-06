#include "mainwindow.h"
#include <QApplication>
#include"connecting.h"
#include"qpalette.h"
#include"hello_fresh_student.h"
#include"save_student_info.h"
#include"have_fun.h"
#include"edit_password.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    hello_fresh_student h;
    save_student_info s;
    have_fun f;
    edit_password e;
    w.show();
    connect_database();
    QObject::connect(&w,SIGNAL(show_hello_fresh()),&h,SLOT(receive_show_hello()));
    QObject::connect(&h,SIGNAL(show_save_student()),&s,SLOT(receive_show_save()));
    QObject::connect(&w,SIGNAL(sendData(QString)),&s,SLOT(receiveData(QString)));//关联信号和槽
    QObject::connect(&h,SIGNAL(show_have_fun()),&f,SLOT(receive_show_fun()));
    QObject::connect(&w,SIGNAL(sendName(QString)),&h,SLOT(receiveData(QString)));
    QObject::connect(&w,SIGNAL(show_edit_password()),&e,SLOT(receive_show_edit()));
    QObject::connect(&w,SIGNAL(sendData(QString)),&e,SLOT(receivedata(QString)));//发送学号

    return a.exec();
}
