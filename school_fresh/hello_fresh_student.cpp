#include "hello_fresh_student.h"
#include "ui_hello_fresh_student.h"
#include"QProcess"
hello_fresh_student::hello_fresh_student(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::hello_fresh_student)
{


    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint); //无边框模式
    ui->info_label->hide();
    ui->map_baidu_label->hide();
    ui->map_baidu_title_label->hide();
    ui->map_cqut_label->hide();
    ui->map_cqut_title_label->hide();
}


hello_fresh_student::~hello_fresh_student()
{
    delete ui;
}

void hello_fresh_student::on_school_info_pushButton_clicked()
{
 ui->info_label->show();
 ui->map_baidu_label->hide();
 ui->map_baidu_title_label->hide();
 ui->map_cqut_label->hide();
 ui->map_cqut_title_label->hide();
}

void hello_fresh_student::on_school_local_pushButton_clicked()
{
    ui->info_label->hide();
    ui->map_baidu_label->show();
    ui->map_baidu_title_label->show();
    ui->map_cqut_label->show();
    ui->map_cqut_title_label->show();
}

void hello_fresh_student::on_pushButton_clicked()
{
    this->close();
}

void hello_fresh_student::on_collage_pushButton_clicked()
{

    emit show_save_student();
}
void hello_fresh_student::receive_show_hello(){
    this->show();
}

void hello_fresh_student::on_fun_pushButton_clicked()
{
    emit show_have_fun();
}

void hello_fresh_student::receiveData(QString data3){
    QString student_name=data3;
    ui->student_name_label->setText(student_name);
}

void hello_fresh_student::on_pushButton_2_clicked()
{
    QString cmd = QString("D:/校区游览.exe");
    QProcess school_process;
     school_process.execute(cmd,QStringList()<<"");


}
