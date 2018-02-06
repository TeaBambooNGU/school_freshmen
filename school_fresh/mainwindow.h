#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include"hello_fresh_student.h"
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_log_pushButton_clicked();

    void on_quit_pushButton_clicked();
    void on_pushButton_clicked();

signals:
    void sendData(QString); //发射信号
    void sendName(QString);
    void show_hello_fresh();
    void show_edit_password();
private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
