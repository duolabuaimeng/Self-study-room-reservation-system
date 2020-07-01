#include "readerpenalty.h"
#include "ui_readerpenalty.h"

ReaderPenalty::ReaderPenalty(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ReaderPenalty)
{
    ui->setupUi(this);
    ui->lineEdit_4->setFocusPolicy(Qt::NoFocus);
}

ReaderPenalty::~ReaderPenalty()
{
    delete ui;
}

void ReaderPenalty::showAll(){
    QSqlDatabase db;
    db = QSqlDatabase::addDatabase("QMYSQL","readerpenalty_checkall");
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

    QString sqlCode=QString("SELECT bo.book_id,book_name,borrow_times,return_real,IF(return_plan>return_real,'未超期','超期') FROM returned bo INNER JOIN book b\
                            ON bo.`book_id`=b.`book_id` WHERE bo.reader_id = '%1'").arg(reader_id_global);
    //qDebug()<<sqlCode;
    model->setQuery(sqlCode);


    ui->tableView->setModel(model);

    ui->tableView->setColumnWidth(0,100);
    ui->tableView->setColumnWidth(1,200);
    ui->tableView->setColumnWidth(2,200);
    ui->tableView->setColumnWidth(3,200);
    ui->tableView->setColumnWidth(4,100);

    model->setHeaderData(0, Qt::Horizontal, "书号");
    model->setHeaderData(1, Qt::Horizontal,  "书名");
    model->setHeaderData(2, Qt::Horizontal,  "借书时间");
    model->setHeaderData(3,Qt::Horizontal,  "还书时间");
    model->setHeaderData(4, Qt::Horizontal,  "罚金情况");

    if(!ui->tableView->verticalHeader()->count()){
        QMessageBox::warning(this,"没有记录","没有查询到您的还书记录，无需结清罚金","确定");
        emit this->ReaderPenaltyBack();
        return;
    }

    payBills();
}

void ReaderPenalty::payBills(){
    QSqlDatabase db;
    db = QSqlDatabase::addDatabase("QMYSQL","penalty_payBills");
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

    QString sqlCode=QString("select * from reader where reader_id = '%1'").arg(reader_id_global);
    query.exec(sqlCode);

    int flag=1;
    while(query.next()){
        if(query.value(10).toInt()==0){
            flag=0;
            break;
        };
    }
    if(flag){
        ui->lineEdit_4->setText("有罚金未清");
        QMessageBox::warning(this,"您有罚金未结清","为了您的账号安全，您只有3次输入账号和密码的机会，三次全部错误，则锁定账号。\n这里只能结清你的延期罚金【5元】，图书丢失的话得去图书馆二楼找工作人员现场办理","确定");
        ui->lineEdit_2->setVisible(true);
        ui->lineEdit_3->setVisible(true);
        ui->pushButton_2->setVisible(true);
        return;
    }
    else{
        ui->lineEdit_4->setText("无罚金情况");
        ui->lineEdit_2->setVisible(false);
        ui->lineEdit_3->setVisible(false);
        ui->pushButton_2->setVisible(false);
    }
}

void ReaderPenalty::on_pushButton_clicked()
{
    emit this->ReaderPenaltyBack();
}

//结清罚金
void ReaderPenalty::on_pushButton_2_clicked()
{
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

    QString card=ui->lineEdit_3->text(),cardpwd=ui->lineEdit_2->text();
    if(card.isEmpty()){
        QMessageBox::warning(this,"校园卡号为空","请输入校园卡号！","确定");
        return;
    }
    if(cardpwd.isEmpty()){
        QMessageBox::warning(this,"校园卡密码为空","请输入校园卡密码！","确定");
        return;
    }

    QString sqlCode=QString("select * from schoolcard where school_id = '%1'").arg(card);

    query.exec(sqlCode);

    int flag1=1,flag2=1,flag3=1,flag4=1;
    while(query.next()){
        if(query.value(1).toString()==cardpwd){
            flag1=0;
            flag2=0;
            if(query.value(3).toInt()==0){
                flag3=0;
                if(query.value(2).toInt()>=5){
                    flag4=0;
                }
            }
        }else{
            flag1=0;
        };
    }
    if(flag1){
        QMessageBox::warning(this,"校园卡账户不存在","请重新检查账户！","确定");
        return;
    }
    if(flag2){
        if(locks>=3){
            QMessageBox::warning(this,"密码输入错误达到3次","请前往食堂三楼解锁校园卡！","确定");

            sqlCode=QString("update schoolcard set locked=1 where school_id = '%1'").arg(card);
            query.exec(sqlCode);

            emit this->ReaderPenaltyBack();
            return;
        }
        QMessageBox::warning(this,"校园卡密码错误","请重新检查校园卡密码！","确定");
        locks++;
        return;
    }
    if(flag3){
        QMessageBox::warning(this,"校园卡已被锁定","请前往食堂三楼解锁校园卡！","确定");
        return;
    }
    if(flag4){
        QMessageBox::warning(this,"校园卡余额不足","请前往食堂一楼充值，至少需要5元！","确定");
        return;
    }

    sqlCode=QString("update reader set reader_penalty=0 where reader_id = '%1'").arg(reader_id_global);
    query.exec(sqlCode);

    sqlCode=QString("update schoolcard set left_money=left_money-5 where school_id = '%1'").arg(card);
    query.exec(sqlCode);

    QMessageBox::information(this,"罚金已经结清","恭喜您，欢迎您的继续使用！",QMessageBox::Ok);
    emit this->ReaderPenaltyBack();
}
