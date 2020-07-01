#include "studentmenu.h"
#include "ui_studentmenu.h"

StudentMenu::StudentMenu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::StudentMenu)
{
    ui->setupUi(this);

    returnSeat=new ReturnSeat();
    borrowBooks=new BookSeat();
    readerInfo=new ReaderInfo();
    renew=new Renew();
    readerPenalty=new ReaderPenalty();

    //1.监听还座返回的按钮
    connect(returnSeat,&ReturnSeat::ReturnBookBack,[=](){
        returnSeat->hide();
        this->showMaximized();
    });
    //2.监听预定座位返回的按钮
    connect(borrowBooks,&BookSeat::BorrowBooksBack,[=](){
        borrowBooks->hide();
        this->showMaximized();
    });
    //3.监听个人信息返回的按钮
    connect(readerInfo,&ReaderInfo::ReaderInfoBack,[=](){
        readerInfo->hide();
        this->showMaximized();
    });
    //4.监听续座返回的按钮
    connect(renew,&Renew::RenewBack,[=](){
        renew->hide();
        this->showMaximized();
    });
    //5.监听罚金返回的按钮
    connect(readerPenalty,&ReaderPenalty::ReaderPenaltyBack,[=](){
        readerPenalty->hide();
        this->showMaximized();
    });
}

StudentMenu::~StudentMenu()
{
    delete ui;
}
/*
void ReaderMenu::RMShow()
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

    QString id, password;

    query.exec("select * from admin");
    while( query.next()){//指向第一条记

    id=query.value(0).toString();
    password=query.value(1).toString();
    ui->lineEdit_3->setText(id);
    ui->lineEdit_4->setText(password);


    }}
}
*/
void StudentMenu::on_pushButton_clicked()
{
    emit this->ReaderMenuBack();
}

void StudentMenu::on_pushButton_4_clicked()
{
    this->hide();
    returnSeat->showMaximized();
    returnSeat->showAll();
}

void StudentMenu::on_pushButton_5_clicked()
{
    readerInfo->showInfo();
    this->hide();
    readerInfo->showMaximized();
}

void StudentMenu::on_pushButton_6_clicked()
{
    this->hide();
    renew->showMaximized();
    renew->showAll();
}

void StudentMenu::on_pushButton_7_clicked()
{
    this->hide();
    readerPenalty->locks=0;
    readerPenalty->showMaximized();
    readerPenalty->showAll();
}

void StudentMenu::on_pushButton_3_clicked()
{
    this->hide();
    borrowBooks->showMaximized();
    borrowBooks->Bookshow();
}
