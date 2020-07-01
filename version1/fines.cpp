#include "fines.h"
#include "ui_fines.h"
#include "qdebug.h"

Fines::Fines(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Fines)
{
    ui->setupUi(this);
    this->setWindowIcon(QIcon(":/res/33.png"));
}

Fines::~Fines()
{
    delete ui;
}

void Fines::on_deleteBtn_clicked()
{
    QString school_id = ui->school_id_Edit->text();
    QSqlDatabase db;
    db = QSqlDatabase::addDatabase("QMYSQL","penalty_submit");
    db.setHostName(IP);
    db.setDatabaseName(DATABASENAME);       //这里输入你的数据库名
    db.setUserName(USERNAME);
    db.setPassword(PASSWORD);   //这里输入你的密码
    if(!db.open())
    {
        QMessageBox::warning(this,"错误",db.lastError().text());
        return;
    }
    //查询数据集的对象
    QSqlQuery query(db);

    if(school_id.isEmpty()){
        QMessageBox::warning(this,"用户名为空","请输入用户名！","确定");
        return;
    }
    QString sqlCode=QString("select * from reader where reader_id = '%1'").arg(school_id);
    query.exec(sqlCode);

    int flag1=1;
    while(query.next()){
            flag1=0;
    }
    if(flag1){
        QMessageBox::warning(this,"用户名不存在","请重新检查账户！","确定");
        return;
    }
    sqlCode=QString("UPDATE reader r SET r.`reader_penalty`=0 WHERE reader_id ='%1'").arg(school_id);
     qDebug() << sqlCode;
    query.exec(sqlCode);

//    sqlCode=QString("update schoolcard set left_money=left_money-5 where school_id = '%1'").arg(school_id);
//    query.exec(sqlCode);

    QMessageBox::information(this,"删除成功！","恭喜您，欢迎您的继续使用！",QMessageBox::Ok);
    //emit this->FinesBack();

}

void Fines::on_addBtn_clicked()
{
    QString school_id = ui->school_id_Edit->text();
    QSqlDatabase db;
    db = QSqlDatabase::addDatabase("QMYSQL","penalty_submit");
    db.setHostName(IP);
    db.setDatabaseName(DATABASENAME);       //这里输入你的数据库名
    db.setUserName(USERNAME);
    db.setPassword(PASSWORD);   //这里输入你的密码
    if(!db.open())
    {
        QMessageBox::warning(this,"错误",db.lastError().text());
        return;
    }
    //查询数据集的对象
    QSqlQuery query(db);

    if(school_id.isEmpty()){
        QMessageBox::warning(this,"用户名为空","请输入用户名！","确定");
        return;
    }
    QString sqlCode=QString("select * from reader where reader_id = '%1'").arg(school_id);
    query.exec(sqlCode);

    int flag1=1;
    while(query.next()){
            flag1=0;
    }
    if(flag1){
        QMessageBox::warning(this,"账户不存在","请重新检查账户！","确定");
        return;
    }


    sqlCode=QString("UPDATE reader r SET r.`reader_penalty`=1 WHERE reader_id = '%1'").arg(school_id);
    qDebug() << sqlCode;
    query.exec(sqlCode);

//    sqlCode=QString("update schoolcard set left_money=left_money+5 where school_id = '%1'").arg(school_id);
//    query.exec(sqlCode);

    QMessageBox::information(this,"操作成功！","恭喜您，欢迎您的继续使用！",QMessageBox::Ok);
    //emit this->FinesBack();
}

void Fines::on_pushButton_clicked()
{
    ui->school_id_Edit->clear();
    emit this->FinesBack();
}
