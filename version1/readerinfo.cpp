#include "readerinfo.h"
#include "ui_readerinfo.h"

ReaderInfo::ReaderInfo(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ReaderInfo)
{
    ui->setupUi(this);

    //用户名和性别选项只读
    ui->lineEdit->setFocusPolicy(Qt::NoFocus);
}

//显示个人信息
void ReaderInfo::showInfo(){
    QSqlDatabase db;
    db = QSqlDatabase::addDatabase("QMYSQL","readerinfo_showinfo");
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

    sqlCode=QString("select * from student where student_id = '%1'").arg(reader_id_global);

    if(!query.exec(sqlCode.toUtf8().data())){
        qDebug()<<sqlCode;
        QMessageBox::critical(this,"无法查询到用户数据","未在数据库中查询到您的个人信息，请稍后再试！",QMessageBox::Ok);
        return;
    }

    while(query.next()){
        id=query.value(0).toString();
        password=query.value(1).toString();
        name=query.value(2).toString();
        gender=query.value(3).toString();
        grade=query.value(4).toString();
        phone=query.value(5).toString();
        department=query.value(6).toString();
        question=query.value(11).toString();
        answer=query.value(12).toString();

        ui->lineEdit->setText(id);
        ui->lineEdit_2->setText(password);
        ui->lineEdit_3->setText(name);
        ui->lineEdit_4->setText(phone);
        ui->lineEdit_6->setText(question);
        ui->lineEdit_7->setText(answer);


        if(gender=="0"){
            ui->radioButton_2->setChecked(true);
        }else if(gender=="1"){
            ui->radioButton->setChecked(true);
        }

        if(grade=="1"){
            ui->radioButton_9->setChecked(true);
        }else if(grade=="2"){
            ui->radioButton_3->setChecked(true);
        }else if(grade=="3"){
            ui->radioButton_4->setChecked(true);
        }else if(grade=="4"){
            ui->radioButton_6->setChecked(true);
        }else if(grade=="5"){
            ui->radioButton_8->setChecked(true);
        }else if(grade=="6"){
            ui->radioButton_7->setChecked(true);
        }else if(grade=="7"){
            ui->radioButton_5->setChecked(true);
        }

        if(department=="1"){
            ui->comboBox->setCurrentIndex(0);
        }else if(department=="2"){
            ui->comboBox->setCurrentIndex(1);
        }else if(department=="3"){
            ui->comboBox->setCurrentIndex(2);
        }else if(department=="4"){
            ui->comboBox->setCurrentIndex(3);
        }
    }

   // qDebug()<<sqlCode<<id;

}

ReaderInfo::~ReaderInfo()
{
    delete ui;
}

void ReaderInfo::on_pushButton_clicked()
{
    emit this->ReaderInfoBack();
}

void ReaderInfo::on_pushButton_2_clicked()
{
    //1.连接数据库
    QSqlDatabase db;
    db = QSqlDatabase::addDatabase("QMYSQL","readerinfo_change");
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
    QString password,name,gender,grade,phone,department,question,answer,sqlCode;

    int a=0,b=20,c=2,d=0;

    //存储一下不需要改变的量
    query.exec("select * from reader");
    while(query.next()){
         if(query.value("reader_id").toString()==reader_id_global){
             a=query.value(7).toInt();
             b=query.value(8).toInt();
             c=query.value(9).toInt();
             d=query.value(10).toInt();
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
    if(ui->radioButton->isChecked()){
        gender=QString("1");
    }
    else {
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
    if(ui->comboBox->currentIndex()==0){
        department=QString("1");
    }
    else if (ui->comboBox->currentIndex()==1) {
        department=QString("2");
    }
    else if (ui->comboBox->currentIndex()==2) {
        department=QString("3");
    }
    else{
        department=QString("4");
    }

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

    //拼接sql语句
    query.exec(QString("delete from reader where reader_id = '%1'").arg(reader_id_global));
    sqlCode=QString("insert into reader values('%1','%2','%3','%4','%5','%6','%7',%8,%9,%10,%11,'%12','%13')")
            .arg(reader_id_global).arg(password).arg(name).arg(gender)
            .arg(grade).arg(phone).arg(department).arg(a).arg(b).arg(c).arg(d).arg(question).arg(answer);

    if(!query.exec(sqlCode.toUtf8().data())){
        qDebug()<<sqlCode;
        QMessageBox::critical(this,"无法插入数据！","个人信息修改功能未能正常运行，请稍后再试！",QMessageBox::Ok);
        return;
    }
    else {
        QMessageBox::information(this,"修改成功","恭喜您，个人信息已经更新！",QMessageBox::Ok);
        emit this->ReaderInfoBack();
    }
}
