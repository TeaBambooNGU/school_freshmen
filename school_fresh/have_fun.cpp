#include "have_fun.h"
#include "ui_have_fun.h"
#include"connecting.h"
#include"ActiveQt/QAxWidget"
#include"string"
/*
#include"QLabel"
#include"QHBoxLayout"
#include"QVBoxLayout"
#include"QFormLayout"
#include"QGridLayout"//网格布局
#include"QMainWindow"
#include"QGroupBox" */
have_fun::have_fun(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::have_fun)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint); //无边框模式




}

void have_fun::receive_show_fun(){
   /* QVBoxLayout *vlayout= new QVBoxLayout;
    QHBoxLayout *hlayout= new QHBoxLayout();
    //QHBoxLayout *hlayout2= new QHBoxLayout;
    QGridLayout *gridlayout= new QGridLayout;
    QWidget   *window= new QWidget;
    //QWidget   *window2 = new QWidget;
    QSqlQuery query;
    query.exec("select * from shop_info");
    qDebug()<<query.first();
    while(query.next())
    {

        QLabel *PicLabel = new QLabel;
        QLabel *shop_name=new QLabel;
        QLabel *shop_cost=new QLabel;
        QLabel *shop_time=new QLabel;
        QLabel *shop_favorabel_rate= new QLabel;

        QPixmap photo;

        photo.loadFromData(query.value(4).toByteArray(), "JPG"); //从数据库中读出图片为二进制数据，图片格式为JPG，然后显示到QLabel里
        PicLabel->setPixmap(photo);
        PicLabel->setFixedSize(100, 100);
        PicLabel->setScaledContents(true);
        shop_name->setText(query.value(0).toString());
        shop_cost->setText(query.value(1).toString());
        shop_favorabel_rate->setText(query.value(2).toString());
        shop_time->setText(query.value(3).toString());

        vlayout->addWidget(shop_name);
        vlayout->addWidget(shop_cost);
        vlayout->addWidget(shop_favorabel_rate);
        vlayout->addWidget(shop_time);

        QGroupBox *shop_box =new QGroupBox(tr("商店信息"));//给排列好的控件打包。。。。。。
        shop_box->setLayout(vlayout);


        hlayout->addWidget(PicLabel);
        hlayout->addWidget(shop_box);
        hlayout->addStretch(1);
        //window1->setLayout(vlayout);
        //hlayout->addWidget(PicLabel);

       // hlayout->addSpacing(5);
        //hlayout->addLayout(vlayout);                   纪念一次耗时10个小时的失败尝试。但是bug已经解决，是本身的架构实现不了目的
                                                         这次失败的尝试，收获了不少自定义UI的知识，也算聊以自慰。

        //hlayout->addWidget(window1);
        //this->setLayout(vlayout);



        //this->setLayout(vlayout);

    }
    this->setLayout(hlayout);*/
    QSqlQuery query;
    query.exec("select * from shop_info order by power_number DESC");
    qDebug()<<query.first();
    QPixmap photo;

    photo.loadFromData(query.value(4).toByteArray(), "JPG"); //从数据库中读出图片为二进制数据，图片格式为JPG，然后显示到QLabel里
    ui->label1->setPixmap(photo);
    ui->label_1->setText(query.value(0).toString());
    ui->label_11->setText(query.value(1).toString());
    ui->label_12->setText(query.value(2).toString());
    ui->label_13->setText(query.value(3).toString());
    url_shop1=query.value(6).toString();


    query.next();
    query.next();
    photo.loadFromData(query.value(4).toByteArray(), "JPG"); //从数据库中读出图片为二进制数据，图片格式为JPG，然后显示到QLabel里
    ui->label2->setPixmap(photo);
    ui->label_2->setText(query.value(0).toString());
    ui->label_21->setText(query.value(1).toString());
    ui->label_22->setText(query.value(2).toString());
    ui->label_23->setText(query.value(3).toString());
    url_shop2=query.value(6).toString();

    query.next();
    photo.loadFromData(query.value(4).toByteArray(), "JPG"); //从数据库中读出图片为二进制数据，图片格式为JPG，然后显示到QLabel里
    ui->label3->setPixmap(photo);
    ui->label_3->setText(query.value(0).toString());
    ui->label_31->setText(query.value(1).toString());
    ui->label_32->setText(query.value(2).toString());
    ui->label_33->setText(query.value(3).toString());
    url_shop3=query.value(6).toString();

    query.next();
    photo.loadFromData(query.value(4).toByteArray(), "JPG"); //从数据库中读出图片为二进制数据，图片格式为JPG，然后显示到QLabel里
    ui->label4->setPixmap(photo);
    ui->label_4->setText(query.value(0).toString());
    ui->label_41->setText(query.value(1).toString());
    ui->label_42->setText(query.value(2).toString());
    ui->label_43->setText(query.value(3).toString());
    url_shop4=query.value(6).toString();

    query.next();
    photo.loadFromData(query.value(4).toByteArray(), "JPG"); //从数据库中读出图片为二进制数据，图片格式为JPG，然后显示到QLabel里
    ui->label5->setPixmap(photo);
    ui->label_5->setText(query.value(0).toString());
    ui->label_51->setText(query.value(1).toString());
    ui->label_52->setText(query.value(2).toString());
    ui->label_53->setText(query.value(3).toString());
    url_shop5=query.value(6).toString();

    query.next();
    photo.loadFromData(query.value(4).toByteArray(), "JPG"); //从数据库中读出图片为二进制数据，图片格式为JPG，然后显示到QLabel里
    ui->label6->setPixmap(photo);
    ui->label_6->setText(query.value(0).toString());
    ui->label_61->setText(query.value(1).toString());
    ui->label_62->setText(query.value(2).toString());
    ui->label_63->setText(query.value(3).toString());
    url_shop6=query.value(6).toString();

    query.next();
    photo.loadFromData(query.value(4).toByteArray(), "JPG"); //从数据库中读出图片为二进制数据，图片格式为JPG，然后显示到QLabel里
    ui->label7->setPixmap(photo);
    ui->label_7->setText(query.value(0).toString());
    ui->label_71->setText(query.value(1).toString());
    ui->label_72->setText(query.value(2).toString());
    ui->label_73->setText(query.value(3).toString());
    url_shop7=query.value(6).toString();

    query.next();
    photo.loadFromData(query.value(4).toByteArray(), "JPG"); //从数据库中读出图片为二进制数据，图片格式为JPG，然后显示到QLabel里
    ui->label8->setPixmap(photo);
    ui->label_8->setText(query.value(0).toString());
    ui->label_81->setText(query.value(1).toString());
    ui->label_82->setText(query.value(2).toString());
    ui->label_83->setText(query.value(3).toString());
    url_shop8=query.value(6).toString();

    query.next();
    query.next();
    photo.loadFromData(query.value(4).toByteArray(), "JPG"); //从数据库中读出图片为二进制数据，图片格式为JPG，然后显示到QLabel里
    ui->label9->setPixmap(photo);
    ui->label_9->setText(query.value(0).toString());
    ui->label_91->setText(query.value(1).toString());
    ui->label_92->setText(query.value(2).toString());
    ui->label_93->setText(query.value(3).toString());
    url_shop9=query.value(6).toString();

    this->show();


    //设置ActiveX控件为IEMicrosoft Web Browser
    //设置ActiveX控件的id，最有效的方式就是使用UUID
    //此处的{8856F961-340A-11D0-A96B-00C04FD705A2}就是Microsoft Web Browser控件的UUID
    webWidget->setControl(QString::fromUtf8("{8856F961-340A-11D0-A96B-00C04FD705A2}"));
    webWidget->setObjectName(QString::fromUtf8("webWidget"));//设置控件的名称
    webWidget->setFocusPolicy(Qt::StrongFocus);//设置控件接收键盘焦点的方式：鼠标单击、Tab键
    webWidget->setProperty("DisplayAlerts",false); //不显示任何警告信息。
    webWidget->setProperty("DisplayScrollBars",true); // 显示滚动条
    webWidget->setWindowState(Qt::WindowMaximized);//浏览器最大化
}



have_fun::~have_fun()
{
    delete ui;
}

void have_fun::on_pushButton_clicked()
{
    this->close();
}

void have_fun::on_pushButton_1_clicked()
{
   webWidget->dynamicCall("Navigate(const QString&)",url_shop1);
   webWidget->show();
}

void have_fun::on_pushButton_3_clicked()
{
  webWidget->dynamicCall("Navigate(const QString&)",url_shop3);
  webWidget->show();
}

void have_fun::on_pushButton_4_clicked()
{
 webWidget->dynamicCall("Navigate(const QString&)",url_shop4);
 webWidget->show();
}

void have_fun::on_pushButton_5_clicked()
{
 webWidget->dynamicCall("Navigate(const QString&)",url_shop5);
 webWidget->show();
}

void have_fun::on_pushButton_6_clicked()
{
 webWidget->dynamicCall("Navigate(const QString&)",url_shop6);
 webWidget->show();
}

void have_fun::on_pushButton_7_clicked()
{
 webWidget->dynamicCall("Navigate(const QString&)",url_shop7);
 webWidget->show();
}

void have_fun::on_pushButton_8_clicked()
{
 webWidget->dynamicCall("Navigate(const QString&)",url_shop8);
 webWidget->show();
}

void have_fun::on_pushButton_9_clicked()
{
 webWidget->dynamicCall("Navigate(const QString&)",url_shop9);
 webWidget->show();
}

void have_fun::on_pushButton_2_clicked()
{
 webWidget->dynamicCall("Navigate(const QString&)",url_shop2);
 webWidget->show();
}
