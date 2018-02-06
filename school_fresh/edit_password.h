#ifndef EDIT_PASSWORD_H
#define EDIT_PASSWORD_H

#include <QDialog>
#include"connecting.h"
#include"QSqlTableModel"
namespace Ui {
class edit_password;
}

class edit_password : public QDialog
{
    Q_OBJECT

public:
    explicit edit_password(QWidget *parent = 0);

    ~edit_password();
private slots:

    void receive_show_edit();
    void receivedata(QString data4);
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::edit_password *ui;
    QSqlTableModel *model;
};

#endif // EDIT_PASSWORD_H
