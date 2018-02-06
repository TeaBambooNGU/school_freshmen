#include "save_student_info.h"
#include "ui_save_student_info.h"
#include"mainwindow.h"
#include"connecting.h"
#include"QSqlRecord"
#include"QSqlQuery"
#include"QSqlTableModel"
save_student_info::save_student_info(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::save_student_info)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint); //无边框模式

}

save_student_info::~save_student_info()
{
    delete ui;
}

void save_student_info::on_cancel_pushButton_clicked()
{
    this->close();

}
int taste;//判断学生口味，用于美食推荐
void save_student_info::on_red_radioButton_clicked()
{
    taste=1;
}

void save_student_info::on_white_radioButton_clicked()
{
    taste=2;
}
QString username;
void save_student_info::receiveData(QString data2){
    username=data2;

}
void save_student_info::receive_show_save(){
    this->show();
}



void save_student_info::on_ok_pushButton_clicked()
{
    QString taste_student;
    model= new QSqlTableModel(this);
    model->setTable("student_info");
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);//对所有模型的改变不会立即应用到数据库
    QString phone_number =ui->iphone_lineEdit->text();
    QString qq_number=ui->qq_number_lineEdit->text();
    QString home_address=ui->address_lineEdit->text();
    QString postcode=ui->postcode_lineEdit->text();
    QString email_address=ui->email_address_lineEdit->text();
    QString home_from_area=ui->home_from_lineEdit->text();

    if(taste==1){
         taste_student=u8"红油";
    }
    else if (taste==2){
        taste_student=u8"清汤";
    }
    model->setFilter(tr("student_id=")+username);
    model->select();
    if (model->rowCount() == 1)
    {
     qDebug()<<"sucessfully add";
    model->setData(model->index(0,5),phone_number);  //index 是把数据定位成坐标的形式，这里是一行数据，所以是0，而5对应的是数据库中电话号码的字段
    model->setData(model->index(0,6),taste_student);
    model->setData(model->index(0,7),qq_number);
    model->setData(model->index(0,8),home_address);
    model->setData(model->index(0,9),postcode);
    model->setData(model->index(0,10),email_address);
    model->setData(model->index(0,11),home_from_area);
    model->submitAll();
    }
    this->close();

}
