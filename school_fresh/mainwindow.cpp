#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"connecting.h"
#include <QApplication>
#include<QMessageBox>
#include<QTextStream>
#include"QMessageBox"
#include"hello_fresh_student.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    this->setAttribute(Qt::WA_TranslucentBackground,true);
    //this->setWindowFlags(Qt::FramelessWindowHint); #无边框模式
    ui->setupUi(this);
    this->setFixedSize(this->width(),this->height());
}



void MainWindow::on_log_pushButton_clicked()
{

    QSqlQuery query;
    QString name =ui->student_id_lineEdit->text();
    QString pass =ui->student_passward_lineEdit->text();
    emit sendData(name);

    query.exec("select * from student_info");
    qDebug()<<query.lastError();//查看query的错误信息
    int key;
    while(query.next())
    {
        QString name0=query.value(2).toString();

        QString pass0=query.value(3).toString();


        if(QString::compare(name,name0)==0 && QString::compare(pass,pass0)==0)
        {
          QString student_name=query.value(1).toString();
          emit sendName(student_name);
          key=1;
          break;

        }
        else
        {
          key=0;

        }

    }
    if(key==1)
    {
        this->close();
        emit show_hello_fresh();
        if( pass.length()<=4){
            emit show_edit_password();

        }

    }
    else if(key==0)
    {
        QMessageBox::warning(this,tr("！！警告！！"),
                             tr("学号或密码不正确"),QMessageBox::Yes);
    }
}

void MainWindow::on_quit_pushButton_clicked()
{
    this->close();
}



MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked() //忘记密码
{
    QSqlQuery query;
    QString name_forget =ui->student_id_lineEdit->text();
    query.exec("select * from student_info");
    int exit;
    while(query.next()){
        QString name0=query.value(2).toString();
        if(QString::compare(name_forget,name0)==0){

            QString password=query.value(3).toString();
            QMessageBox ::information(this,tr("密码通知"),password, QMessageBox::Yes);
            exit=1;
            break;

        }
        else
        {
            exit=2;

        }
}
     if(exit!=1){
         QMessageBox::warning(this,tr("警告"),tr("请输入学号或者学号不存在"),QMessageBox::Yes);
     }



}
