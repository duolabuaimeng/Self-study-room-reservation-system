#include "returnseat.h"
#include "ui_returnseat.h"
#include <exception>


ReturnSeat::ReturnSeat(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ReturnSeat)
{
    ui->setupUi(this);


}
ReturnSeat::~ReturnSeat()
{
    delete ui;
}


//教室名查询
void ReturnSeat::on_pushButton_3_clicked()
{
    QSqlDatabase db;
    db = QSqlDatabase::addDatabase("QMYSQL","connection_returnbook_checkname");
    db.setHostName(IP);
    db.setDatabaseName(DATABASENAME);       //这里输入你的数据库名
    db.setUserName(USERNAME);
    db.setPassword(PASSWORD);   //这里输入你的密码
    if(!db.open())
    {
        QMessageBox::warning(this,"错误",db.lastError().text());
        return;
    }

    model = new QSqlQueryModel;

    QString book_name=ui->lineEdit_3->text();
    if(book_name.isEmpty()){
        QMessageBox::warning(this,"教室名为空","请输入教室名！","确定");
        return;
    }

    QString sqlCode=QString("SELECT b.building_id,total_name,book_times,start_plan,return_plan,IF(return_plan<NOW(),'超期有罚金','未超期') penalty \
FROM borrowed bd INNER JOIN building b ON bd.`building_id`=b.`building_id` where valid=1 and student_id = '%1' and building_name like '%%2%'").arg(reader_id_global).arg(book_name);
    //qDebug()<<sqlCode;
    model->setQuery(sqlCode);
    ui->tableView->setModel(model);
    ui->tableView->setColumnWidth(0,100);
    ui->tableView->setColumnWidth(1,200);
    ui->tableView->setColumnWidth(2,200);
    ui->tableView->setColumnWidth(3,200);
    ui->tableView->setColumnWidth(4,200);
    ui->tableView->setColumnWidth(5,100);
    model->setHeaderData(0, Qt::Horizontal, "书号");
    model->setHeaderData(1, Qt::Horizontal,  "书名");
    model->setHeaderData(2, Qt::Horizontal,  "预约时间");
    model->setHeaderData(3, Qt::Horizontal,  "预订时间");
    model->setHeaderData(4,Qt::Horizontal,  "应还时间");
    model->setHeaderData(5, Qt::Horizontal,  "罚金情况");

    if(!ui->tableView->verticalHeader()->count()){
        QMessageBox::warning(this,"没有记录","您没有预定该教室，无须归还！","确定");
    }
}

//显示全部
void ReturnSeat::on_pushButton_4_clicked()
{
    showAll();
}

void ReturnSeat::showAll(){
    QSqlDatabase db;
    db = QSqlDatabase::addDatabase("QMYSQL","connection_returnbook_checkall");
    db.setHostName(IP);
    db.setDatabaseName(DATABASENAME);       //这里输入你的数据库名
    db.setUserName(USERNAME);
    db.setPassword(PASSWORD);   //这里输入你的密码
    if(!db.open())
    {
        QMessageBox::warning(this,"错误",db.lastError().text());
        return;
    }

    model = new QSqlQueryModel;

    QString sqlCode=QString("SELECT b.building_id,total_name,book_times,start_plan,return_plan,IF(return_plan<NOW(),'超期有罚金','未超期') penalty \
FROM borrowed bd INNER JOIN building b ON bd.`building_id`=b.`building_id` where valid=1 and student_id = '%1'").arg(reader_id_global);
    //qDebug()<<sqlCode;
    model->setQuery(sqlCode);


    ui->tableView->setModel(model);

    ui->tableView->setColumnWidth(0,100);
    ui->tableView->setColumnWidth(1,200);
    ui->tableView->setColumnWidth(2,200);
    ui->tableView->setColumnWidth(3,200);
    ui->tableView->setColumnWidth(4,200);
    ui->tableView->setColumnWidth(5,100);

    model->setHeaderData(0,Qt::Horizontal, "楼号");
    model->setHeaderData(1, Qt::Horizontal,  "教室名");
    model->setHeaderData(2, Qt::Horizontal,  "预约时间");
    model->setHeaderData(3, Qt::Horizontal,  "预订时间");
    model->setHeaderData(4,Qt::Horizontal,  "应还时间");
    model->setHeaderData(5, Qt::Horizontal,  "罚金情况");

    if(!ui->tableView->verticalHeader()->count()){
        QMessageBox::warning(this,"没有记录","没有查询到您的预定记录，无需还座","确定");
        emit this->ReturnBookBack();
    }
}

//归还按钮
void ReturnSeat::on_pushButton_2_clicked()
{
    QSqlDatabase db;
    db = QSqlDatabase::addDatabase("QMYSQL","connection_returnbook_submit");
    db.setHostName(IP);
    db.setDatabaseName(DATABASENAME);       //这里输入你的数据库名
    db.setUserName(USERNAME);
    db.setPassword(PASSWORD);   //这里输入你的密码
    if(!db.open())
    {
        QMessageBox::warning(this,"错误",db.lastError().text());
        return;
    }

    //教室号不能为空
    QString book_id=ui->lineEdit_2->text();
    if(book_id.isEmpty()){
        QMessageBox::warning(this,"教室号为空","请输入想要归还的教室号！","确定");
        return;
    }

    //查询数据集的对象
    QSqlQuery query(db);

    QString sqlCode=QString("SELECT building_id,student_id,IF(return_plan<NOW(),'1','0') penalty \
FROM borrowed WHERE valid=1 and student_id = '%1' and building_id = '%2'").arg(reader_id_global).arg(book_id);
    //qDebug()<<sqlCode;
    query.exec(sqlCode);

    int flag=1,penalty=0;
    while(query.next()){
        if(query.value("student_id").toString()==reader_id_global){
            flag=0;
            penalty=query.value(2).toInt();
            break;
        };
    }
    if(flag){
        QMessageBox::warning(this,"未查询到记录","您并未预定该座！","确定");
        return;
    }

    //开始操作
    //1.事务开启
    sqlCode=QString("set autocommit=0");
    if(!query.exec(sqlCode)){
        qDebug()<<sqlCode;
        query.exec("rollback");
        QMessageBox::critical(this,"无法开启事务！","还书功能未能正常运行，请稍后再试！",QMessageBox::Ok);
        return;
    }

    //2.记录变成无效
    sqlCode=QString("update borrowed set valid=0 where student_id = '%1' and building_id = '%2'").arg(reader_id_global).arg(book_id);
    if(!query.exec(sqlCode)){
        qDebug()<<sqlCode;
        query.exec("rollback");
        QMessageBox::critical(this,"无法更改预定记录！","还座功能未能正常运行，请稍后再试！",QMessageBox::Ok);
        return;
    }

    //3.学生表改3个部分
    sqlCode=QString("update student set student_have_borrowed=student_have_borrowed-1 where student_id = '%1'").arg(reader_id_global);
    if(!query.exec(sqlCode)){
        qDebug()<<sqlCode;
        query.exec("rollback");
        QMessageBox::critical(this,"无法修改学生表！","还座功能未能正常运行，请稍后再试！",QMessageBox::Ok);
        return;
    }

    sqlCode=QString("update student set student_left_borrowTimes=student_left_borrowTimes+1 where student_id = '%1'").arg(reader_id_global);
    if(!query.exec(sqlCode)){
        qDebug()<<sqlCode;
        query.exec("rollback");
        QMessageBox::critical(this,"无法修改学生表！","还书功能未能正常运行，请稍后再试！",QMessageBox::Ok);
        return;
    }

    if(penalty){
        sqlCode=QString("update student set penalty=1 where student_id = '%1'").arg(reader_id_global);
        if(!query.exec(sqlCode)){
            qDebug()<<sqlCode;
            query.exec("rollback");
            QMessageBox::critical(this,"无法修改学生表！","还书功能未能正常运行，请稍后再试！",QMessageBox::Ok);
            return;
        }
    }

    //4.座位预定状态
    sqlCode=QString("update building set booked=if(booked>0,booked-1,0), remaining=remaining+1 where building_id = '%1'").arg(book_id);
    if(!query.exec(sqlCode)){
        qDebug()<<sqlCode;
        query.exec("rollback");
        QMessageBox::critical(this,"无法修改座位表！","还书功能未能正常运行，请稍后再试！",QMessageBox::Ok);
        return;
    }

    //5.最后修改已还表
    sqlCode=QString("INSERT INTO returned(building_id,student_id,book_times,start_plan,return_plan,return_real)\
                    (SELECT building_id, student_id, book_times,start_plan,return_plan, NOW() FROM borrowed\
                        WHERE building_id = '%1' and student_id = '%2')").arg(book_id).arg(reader_id_global);
    if(!query.exec(sqlCode)){
        qDebug()<<sqlCode;
        query.exec("rollback");
        QMessageBox::critical(this,"无法修改已还表！","还书功能未能正常运行，请稍后再试！",QMessageBox::Ok);
        return;
    }
    else{
        query.exec("commit");
        QMessageBox::information(this,"还座成功","恭喜您，还座成功！",QMessageBox::Ok);
        emit this->ReturnBookBack();
    }

}

//返回按钮
void ReturnSeat::on_pushButton_clicked()
{
    emit this->ReturnBookBack();
}
