#include "registerwindow.h"
#include "ui_registerwindow.h"

RegisterWindow::RegisterWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::RegisterWindow)
{
    ui->setupUi(this);

}

RegisterWindow::~RegisterWindow()
{
    delete ui;
}

//槽函数1：返回按钮返回
void RegisterWindow::on_pushButton_clicked()
{
    emit this->RegisterWindowBack();
}

//槽函数2：提交按钮按下，审查格式并提交
void RegisterWindow::on_pushButton_2_clicked()
{
    //1.连接数据库
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

    QSqlQuery query(db);

    //保存数据的对象
    QString id,password,name,gender,grade,phone,department,question,answer,sqlCode;

    //用户名长度审查
    if((id=ui->lineEdit->text()).length()>15||id.isEmpty()){
        QMessageBox::warning(this,"用户名长度异常！","请保证用户名的长度不超过15位且不为空！",QMessageBox::Ok);
        return;
    }

    //用户名去重
    if (ui->radioButton_5->isChecked()){
        query.exec("select * from teacher");
    }
    else{
        query.exec("select * from student");
    }
    while(query.next()){
         if(query.value("student_id").toString()==id){
             QMessageBox::warning(this,"该用户名已被使用！","该用户名已被占用，请更换用户名！",QMessageBox::Ok);
             return;
         };
    }

    //密码长度审查
    if((password=ui->lineEdit_2->text()).length()>15||password.isEmpty()){
        QMessageBox::warning(this,"密码长度异常！","请保证密码的长度不超过15位且不为空！",QMessageBox::Ok);
        return;
    }

    //姓名长度审查
    if((name=ui->lineEdit_3->text()).length()>15||name.isEmpty()){
        QMessageBox::warning(this,"姓名长度异常！","请输入有效的姓名(15位以内且不为空)！",QMessageBox::Ok);
        return;
    }

    //性别转换成字符串
    if(ui->radioButton_2->isChecked()){
        gender=QString("1");
    }
    else{
        gender=QString("0");
    }

    //身份转换为字符串
    if(ui->radioButton_9->isChecked()){
        grade=QString("1");
    }
    else if (ui->radioButton_3->isChecked()) {
        grade=QString("2");
    }
    else if (ui->radioButton_4->isChecked()) {
        grade=QString("3");
    }
    else if (ui->radioButton_6->isChecked()) {
        grade=QString("4");
    }
    else if (ui->radioButton_8->isChecked()) {
        grade=QString("5");
    }
    else if (ui->radioButton_7->isChecked()) {
        grade=QString("6");
    }
    else{
        grade=QString("7");
    }

    //手机号长度审查
    if((phone=ui->lineEdit_4->text()).length()!=11){
        QMessageBox::warning(this,"手机号长度异常！","请输入有效的手机号(11位)！",QMessageBox::Ok);
        return;
    }

    //学院选择
    int comboBox_index =  ui->comboBox->currentIndex();
    QString str = QString::number(comboBox_index);
    department=QString(str);

    //密保问题长度审查
    if((question=ui->lineEdit_6->text()).length()>15||question.isEmpty()){
        QMessageBox::warning(this,"密保问题长度异常！","请输入有效的密保答案(15位以内且不为空)！",QMessageBox::Ok);
        return;
    }

    //密保答案长度审查
    if((answer=ui->lineEdit_7->text()).length()>15||answer.isEmpty()){
        QMessageBox::warning(this,"密保答案长度异常！","请输入有效的密保问题(15位以内且不为空)！",QMessageBox::Ok);
        return;
    }
    //插入教师表
    if (ui->radioButton_5->isChecked()){
    //拼接sql语句
    sqlCode=QString("insert into teacher values('%1','%2','%3','%4','%5','%6','%7',0,20,2,0,'%8','%9')")
            .arg(id).arg(password).arg(name).arg(gender)
            .arg(grade).arg(phone).arg(department).arg(question).arg(answer);
    }
    //插入学生表
    else{
        sqlCode=QString("insert into student values('%1','%2','%3','%4','%5','%6','%7',0,20,2,0,'%8','%9')")
                .arg(id).arg(password).arg(name).arg(gender)
                .arg(grade).arg(phone).arg(department).arg(question).arg(answer);
    }

    if(!query.exec(sqlCode.toUtf8().data())){
        qDebug()<<sqlCode;
        QMessageBox::critical(this,"无法插入数据！","注册功能未能正常运行，请稍后再试！",QMessageBox::Ok);
        return;
    }
    else {
        QMessageBox::information(this,"注册成功","欢迎您，尊贵的用户！",QMessageBox::Ok);
        emit this->RegisterWindowBack();
    }
}
