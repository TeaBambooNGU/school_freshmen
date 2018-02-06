#ifndef HELLO_FRESH_STUDENT_H
#define HELLO_FRESH_STUDENT_H
#include"save_student_info.h"
#include <QDialog>

namespace Ui {
class hello_fresh_student;
}

class hello_fresh_student : public QDialog
{
    Q_OBJECT

public:
    explicit hello_fresh_student(QWidget *parent = 0);
    ~hello_fresh_student();

private slots:
    void on_school_info_pushButton_clicked();

    void on_school_local_pushButton_clicked();
    void receive_show_hello();
    void on_pushButton_clicked();

    void on_collage_pushButton_clicked();
    void on_fun_pushButton_clicked();

    void receiveData(QString data3);//接收槽

    void on_pushButton_2_clicked();

signals:
    void show_save_student();
    void show_have_fun();

private:
    Ui::hello_fresh_student *ui;


};

#endif // HELLO_FRESH_STUDENT_H
