#ifndef CONNECTING_H
#define CONNECTING_H
#include <QtSql/QSqlDatabase>
#include<QtSql/QSqlQuery>
#include  <QDebug>
#include <QtSql/QSqlError>
static bool connect_database()
{
    QSqlDatabase db= QSqlDatabase::addDatabase("QMYSQL");
                 db.setHostName("你数据库的ip地址");
                 db.setUserName("数据库账号");
                 db.setPassword("数据库密码");
                 db.setDatabaseName("数据库名");
                 db.open();

                 QSqlQuery query(db);//赋予数据库
                 if (!db.open())
                 {
                     qDebug()<<"Connect to Mysql error:"<<db.lastError().text();

                 }
                 else
                 {
                     qDebug()<<"connect successfully";
                 }

}






#endif // CONNECTING_H
