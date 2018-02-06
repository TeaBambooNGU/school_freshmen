#ifndef HAVE_FUN_H
#define HAVE_FUN_H

#include <QDialog>
#include"connecting.h"
#include"ActiveQt/QAxWidget"
namespace Ui {
class have_fun;
}

class have_fun : public QDialog
{
    Q_OBJECT

public:
    explicit have_fun(QWidget *parent = 0);
    ~have_fun();
private slots:
    void receive_show_fun();

    void on_pushButton_clicked();

    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

private:
    Ui::have_fun *ui;
    QAxWidget *webWidget = new QAxWidget;
    QString url_shop1,url_shop2,url_shop3,url_shop4,url_shop5,url_shop6,url_shop7,url_shop8,url_shop9;
};

#endif // HAVE_FUN_H
