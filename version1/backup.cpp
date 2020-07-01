#include "backup.h"
#include "ui_backup.h"

Backup::Backup(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Backup)
{
    ui->setupUi(this);
    //ui->groupBox->setStyleSheet("QGroupBox{border:none}");//隐藏边框
    ui->frame->hide();

}

Backup::~Backup()
{
    delete ui;
}

void Backup::roadshow()
{
    QString title,road;
    QSqlDatabase db;
    QSqlQuery query(db);
    query.exec("select * from backuproad");
    while(query.next()){
    road=query.value("road").toString();
    }
    qDebug()<<road;
    title=QString("  默认路径：%1").arg(road);
    qDebug()<<title;
    ui->lineEdit->setText(title);
}

void Backup::on_pushButton_clicked()
{
    ui->frame->show();
}

void Backup::on_pushButton_2_clicked()
{
    QString sql,road;
    QSqlDatabase db;
    QSqlQuery query(db);
    query.exec("select * from backuproad");
    while(query.next()){
    road=query.value("road").toString();
    }
    qDebug()<<road;
    sql=QString("mysqldump -u%1 -p%2 library > %3Backup1.sql").arg(USERNAME).arg(PASSWORD).arg(road);
    qDebug()<<sql;
    system(sql.toUtf8().data());
    QMessageBox::information(this,"备份","备份成功！",QMessageBox::Ok);
}

void Backup::on_pushButton_3_clicked()
{
    QString sql,road;
    QSqlDatabase db;
    QSqlQuery query(db);
    query.exec("select * from backuproad");
    while(query.next()){
    road=query.value("road").toString();
    }
    qDebug()<<road;
    sql=QString("mysql -u%1 -p%2 library < %3Backup1.sql").arg(USERNAME).arg(PASSWORD).arg(road);
    qDebug()<<sql;
    system(sql.toUtf8().data());
    QMessageBox::information(this,"还原","还原成功！",QMessageBox::Ok);
}

void Backup::on_pushButton_4_clicked()
{
    QString sql,road;
    QSqlDatabase db;
    QSqlQuery query(db);
    query.exec("select * from backuproad");
    while(query.next()){
    road=query.value("road").toString();
    }
    qDebug()<<road;
    sql=QString("mysqldump -u%1 -p%2 library book bookshelf > %3Backup2.sql").arg(USERNAME).arg(PASSWORD).arg(road);
    qDebug()<<sql;
    system(sql.toUtf8().data());
    QMessageBox::information(this,"备份","备份成功！",QMessageBox::Ok);
}

void Backup::on_pushButton_5_clicked()
{
    QString sql,road;
    QSqlDatabase db;
    QSqlQuery query(db);
    query.exec("select * from backuproad");
    while(query.next()){
    road=query.value("road").toString();
    }
    qDebug()<<road;
    sql=QString("mysql -u%1 -p%2 library < %3Backup2.sql").arg(USERNAME).arg(PASSWORD).arg(road);
    qDebug()<<sql;
    system(sql.toUtf8().data());
    QMessageBox::information(this,"还原","还原成功！",QMessageBox::Ok);
}

void Backup::on_pushButton_6_clicked()
{
    QString sql,road;
    QSqlDatabase db;
    QSqlQuery query(db);
    query.exec("select * from backuproad");
    while(query.next()){
    road=query.value("road").toString();
    }
    qDebug()<<road;
    sql=QString("mysqldump -u%1 -p%2 library admin reader > %3Backup3.sql").arg(USERNAME).arg(PASSWORD).arg(road);
    qDebug()<<sql;
    system(sql.toUtf8().data());
    QMessageBox::information(this,"备份","备份成功！",QMessageBox::Ok);
}

void Backup::on_pushButton_7_clicked()
{
    QString sql,road;
    QSqlDatabase db;
    QSqlQuery query(db);
    query.exec("select * from backuproad");
    while(query.next()){
    road=query.value("road").toString();
    }
    qDebug()<<road;
    sql=QString("mysql -u%1 -p%2 library < %3Backup3.sql").arg(USERNAME).arg(PASSWORD).arg(road);
    qDebug()<<sql;
    system(sql.toUtf8().data());
    QMessageBox::information(this,"还原","还原成功！",QMessageBox::Ok);
}

void Backup::on_pushButton_8_clicked()
{
    QString sql,road;
    QSqlDatabase db;
    QSqlQuery query(db);
    query.exec("select * from backuproad");
    while(query.next()){
    road=query.value("road").toString();
    }
    qDebug()<<road;
    sql=QString("mysqldump -u%1 -p%2 library borrowed > %3Backup4.sql").arg(USERNAME).arg(PASSWORD).arg(road);
    qDebug()<<sql;
    system(sql.toUtf8().data());
    QMessageBox::information(this,"备份","备份成功！",QMessageBox::Ok);
}

void Backup::on_pushButton_9_clicked()
{
    QString sql,road;
    QSqlDatabase db;
    QSqlQuery query(db);
    query.exec("select * from backuproad");
    while(query.next()){
    road=query.value("road").toString();
    }
    qDebug()<<road;
    sql=QString("mysql -u%1 -p%2 library < %3Backup4.sql").arg(USERNAME).arg(PASSWORD).arg(road);
    qDebug()<<sql;
    system(sql.toUtf8().data());
    QMessageBox::information(this,"还原","还原成功！",QMessageBox::Ok);
}

void Backup::on_pushButton_10_clicked()
{
    QString sql,road;
    QSqlDatabase db;
    QSqlQuery query(db);
    query.exec("select * from backuproad");
    while(query.next()){
    road=query.value("road").toString();
    }
    qDebug()<<road;
    sql=QString("mysqldump -u%1 -p%2 library schoolcard > %3Backup5.sql").arg(USERNAME).arg(PASSWORD).arg(road);
    qDebug()<<sql;
    system(sql.toUtf8().data());
    QMessageBox::information(this,"备份","备份成功！",QMessageBox::Ok);
}

void Backup::on_pushButton_11_clicked()
{
    QString sql,road;
    QSqlDatabase db;
    QSqlQuery query(db);
    query.exec("select * from backuproad");
    while(query.next()){
    road=query.value("road").toString();
    }
    qDebug()<<road;
    sql=QString("mysql -u%1 -p%2 library < %3Backup5.sql").arg(USERNAME).arg(PASSWORD).arg(road);
    qDebug()<<sql;
    system(sql.toUtf8().data());
    QMessageBox::information(this,"还原","还原成功！",QMessageBox::Ok);
}

void Backup::on_pushButton_12_clicked()
{
    emit this->BackupBack();
}

void Backup::on_pushButton_13_clicked()
{

    QString Pan,folder,path,sql;
    QSqlDatabase db;

    QSqlQuery query(db);
    Pan=ui->comboBox->currentText();
    folder=ui->lineEdit_2->text();
    if(btn==1)
    {
        path=QString("mkdir %1:\%2").arg(Pan).arg(folder);
        qDebug()<<path;
        system(path.toUtf8().data());
        sql=QString("update backuproad set road='%1:/%2/'").arg(Pan).arg(folder);
        query.exec(sql.toUtf8().data());
    }else{
        sql=QString("update backuproad set road='%1:/'").arg(Pan);
        query.exec(sql.toUtf8().data());
    }
    QMessageBox::information(this,"修改路径","修改成功！",QMessageBox::Ok);
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    ui->frame->hide();
    roadshow();
}



void Backup::on_pushButton_14_clicked()
{
    ui->lineEdit_2->clear();
    ui->frame->hide();
}

void Backup::on_pushButton_15_clicked()
{
    btn=1;
}
