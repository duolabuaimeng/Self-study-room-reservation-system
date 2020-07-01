#include "pimanagement.h"
#include "ui_pimanagement.h"
#include <qdebug>

PIManagement::PIManagement(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PIManagement)
{
    ui->setupUi(this);

    ui->groupBox->setStyleSheet("QGroupBox{border:none}");//隐藏边框

    ui->groupBox_2->setStyleSheet("QGroupBox{border:none}");

    ui->groupBox->hide();

    ui->groupBox_2->hide();

    ui->groupBox_2->show();

}

PIManagement::~PIManagement()
{
    delete ui;
}

//个人信息显示
void PIManagement::PIshow()
{
    QSqlDatabase db;
    db = QSqlDatabase::addDatabase("QMYSQL","connection_registerwindow_submit");
    db.setHostName(IP);
    db.setDatabaseName(DATABASENAME);       //这里输入你的数据库名
    db.setUserName(USERNAME);
    db.setPassword(PASSWORD);   //这里输入你的密码
    if(!db.open())
    {
        QMessageBox::warning(this,"错误",db.lastError().text());
        return;
    }
    else{
    QSqlQuery query(db);

    QString id, password,sql;
    sql=QString("select * from admin where admin_id='%1';").arg(reader_id_global);
    query.exec(sql);
    while( query.next()){//指向第一条记

    id=query.value(0).toString();
    password=query.value(1).toString();
    ui->lineEdit_3->setText(id);
    ui->lineEdit_4->setText(password);


    }}
}

//返回按钮
void PIManagement::on_pushButton_2_clicked()
{

    emit this->PIManagementBack();
    ui->lineEdit_3->clear();
    ui->lineEdit_4->clear();
}

//修改按钮
void PIManagement::on_pushButton_clicked()
{
    ui->groupBox_2->hide();
    ui->groupBox->show();
    ui->lineEdit_3->clear();
    ui->lineEdit_4->clear();
}

//保存按钮
void PIManagement::on_pushButton_3_clicked()
{

    QSqlDatabase db;

    QSqlQuery query(db);

    QString id,password,sqlCode;

    //用户名长度审查
    if((id=ui->lineEdit->text()).length()>15||id.isEmpty()){
        QMessageBox::warning(this,"用户名长度异常！","请保证用户名的长度不超过15位且不为空！",QMessageBox::Ok);
        return;
    }

    //密码长度审查
    if((password=ui->lineEdit_2->text()).length()>15||password.isEmpty()){
        QMessageBox::warning(this,"密码长度异常！","请保证密码的长度不超过15位且不为空！",QMessageBox::Ok);
        return;
    }

    //拼接sql语句
    sqlCode=QString("update admin set admin_id='%1',admin_password='%2' where admin_id='%3';")
            .arg(id).arg(password).arg(reader_id_global);
    qDebug()<<sqlCode;
    if(!query.exec(sqlCode.toUtf8().data())){

        QMessageBox::critical(this,"无法插入数据！","个人信息修改功能未能正常运行，请稍后再试！",QMessageBox::Ok);
        return;
    }
    else {
        QMessageBox::information(this,"修改成功","欢迎您，尊贵的管理员！",QMessageBox::Ok);
        ui->groupBox->hide();
        ui->groupBox_2->show();
        reader_id_global=ui->lineEdit->text();
        ui->lineEdit->clear();
        ui->lineEdit_2->clear();
        this->PIshow();
    }


}
//取消按钮
void PIManagement::on_pushButton_4_clicked()
{
    ui->groupBox->hide();
    ui->groupBox_2->show();
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    this->PIshow();
}
