#ifndef MAIN_H

#define IP "localhost"
#define USERNAME "root"
#define PASSWORD "hb19960908"
#define DATABASENAME "library"

//数据库头文件
#include<QMessageBox>
#include<QSqlDatabase>
#include <QSqlQuery>
#include<QSqlQueryModel>
#include <QSqlTableModel>
#include <QSqlError>
#include<QSqlRecord>
//设置风格
#include<QStyleFactory>
//必要的工具文件
#include<QString>
#include<QDebug>
#define MAIN_H

//借阅者id
extern QString reader_id_global,LISBN;

#endif // MAIN_H
