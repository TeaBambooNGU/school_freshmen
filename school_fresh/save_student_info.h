#ifndef SAVE_STUDENT_INFO_H
#define SAVE_STUDENT_INFO_H

#include <QDialog>
#include"connecting.h"
#include"QSqlTableModel"
#include"mainwindow.h"
namespace Ui {
class save_student_info;
}

class save_student_info : public QDialog
{
    Q_OBJECT

public:
    explicit save_student_info(QWidget *parent = 0);
    ~save_student_info();

private slots:
    void on_cancel_pushButton_clicked();

    void on_red_radioButton_clicked();

    void on_white_radioButton_clicked();
    void receive_show_save();
    void on_ok_pushButton_clicked();
    void receiveData(QString data2);//接收槽
private:
    Ui::save_student_info *ui;
     QSqlTableModel *model;



};

#endif // SAVE_STUDENT_INFO_H
