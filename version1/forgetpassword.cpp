#include "forgetpassword.h"
#include "ui_forgetpassword.h"

ForgetPassword::ForgetPassword(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ForgetPassword)
{
    ui->setupUi(this);

    //设置密保问题选项只读
    ui->lineEdit_4->setFocusPolicy(Qt::NoFocus);
}


ForgetPassword::~ForgetPassword()
{
    delete ui;
}

//设置返回按钮
void ForgetPassword::on_pushButton_clicked()
{
    emit this->ForgetPasswordBack();
}

//设置查询按钮
void ForgetPassword::on_pushButton_3_clicked()
{
    QSqlDatabase db;
    db = QSqlDatabase::addDatabase("QMYSQL","connection_forgetpassword_selectusername");
    db.setHostName(IP);
    db.setDatabaseName(DATABASENAME);       //这里输入你的数据库名
    db.setUserName(USERNAME);
    db.setPassword(PASSWORD);   //这里输入你的密码
    if(!db.open())
    {
        QMessageBox::warning(this,"错误",db.lastError().text());
        return;
    }

    QSqlQuery query(db);

    QString id,password,question,answer,sqlCode;

    //获取用户名
    id=ui->lineEdit->text();

    sqlCode=QString("SELECT reader_id,reader_question,reader_answer from reader where reader_id like '%%1%'").arg(id);
    //qDebug()<<sqlCode;

    //执行结果首先看行数
    query.exec(sqlCode.toUtf8());
    QSqlQueryModel *queryModel = new QSqlQueryModel();
    queryModel->setQuery(query);
    int rowCount = queryModel->rowCount();

    if(rowCount==0){
        QMessageBox::warning(this,"用户名不存在！","请输入正确的用户名！",QMessageBox::Ok);
        return;
    }

    while(query.next()){
         if(query.value(0).toString()==id){
             ui->lineEdit_4->setText(query.value(1).toString());
             return;
         };
    }
}

//设置提交功能
void ForgetPassword::on_pushButton_2_clicked()
{

    QSqlDatabase db;
    db = QSqlDatabase::addDatabase("QMYSQL","connection_forgetpassword_submit");
    db.setHostName(IP);
    db.setDatabaseName(DATABASENAME);       //这里输入你的数据库名
    db.setUserName(USERNAME);
    db.setPassword(PASSWORD);   //这里输入你的密码
    if(!db.open())
    {
        QMessageBox::warning(this,"错误",db.lastError().text());
        return;
    }

    QSqlQuery query(db);

    QString id,password,question,answer,sqlCode;

    //获取用户名
    id=ui->lineEdit->text();

    sqlCode=QString("SELECT reader_id,reader_question,reader_answer from reader where reader_id like '%%1%'").arg(id);
    //qDebug()<<sqlCode;

    //执行结果首先看行数
    query.exec(sqlCode.toUtf8());
    QSqlQueryModel *queryModel = new QSqlQueryModel();
    queryModel->setQuery(query);
    int rowCount = queryModel->rowCount();

    if(rowCount==0){
        QMessageBox::warning(this,"用户名不存在！","请输入正确的用户名！",QMessageBox::Ok);
        return;
    }

    //判断是不是密保答案错误
    while(query.next()){
         if(query.value(0).toString()==id){
             if(ui->lineEdit_2->text()!=query.value(2).toString()){
                 QMessageBox::warning(this,"密保验证失败！","密保答案有误！",QMessageBox::Ok);
                 return;
             };
         };
    }

    //拼接新语句
    password=ui->lineEdit_3->text();
    sqlCode=QString("UPDATE reader SET reader_password='%1' WHERE reader_id = '%2'").arg(password).arg(id);

    if(!query.exec(sqlCode.toUtf8())){
        qDebug()<<sqlCode;
        QMessageBox::critical(this,"无法修改数据！","重置密码功能未能正常运行，请稍后再试！",QMessageBox::Ok);
        return;
    }
    else {
        QMessageBox::information(this,"修改成功","欢迎回来，尊贵的用户！",QMessageBox::Ok);
        emit this->ForgetPasswordBack();
    }
}
