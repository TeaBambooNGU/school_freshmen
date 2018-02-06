#include "edit_password.h"
#include "ui_edit_password.h"
#include"connecting.h"
#include"QMessageBox"
edit_password::edit_password(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::edit_password)
{
    ui->setupUi(this);
}

edit_password::~edit_password()
{
    delete ui;
}
 QString student_id;
void edit_password::receivedata(QString data4){
    student_id=data4;
}

void edit_password::on_pushButton_clicked()
{
    model= new QSqlTableModel(this);
    model->setTable("student_info");
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);//对所有模型的改变不会立即应用到数据库
    QString new_password1=ui->lineEdit->text();
    QString new_password=ui->lineEdit_2->text();
    if(new_password==new_password1 && new_password.length()>4){
    model->setFilter(tr("student_id=")+student_id);
    model->select();
    if (model->rowCount() == 1)
    {
     qDebug()<<"sucessfully change";
    model->setData(model->index(0,3),new_password);

    model->submitAll();
    }
    this->close();
    }
    else{
        QMessageBox::warning(this,tr("！！警告！！"),
                             tr("俩次密码不一致，或者密码长度不大于4位"),QMessageBox::Yes);

    }
}

void edit_password::on_pushButton_2_clicked()
{
    this->close();
}

void edit_password::receive_show_edit(){
    this->show();
}
