#include "adminmenu.h"
#include "ui_adminmenu.h"

AdminMenu::AdminMenu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AdminMenu)
{
    ui->setupUi(this);
    //个人信息管理窗口
    pimanagement = new PIManagement();
    bookinformation = new BookInformation();
    backup = new Backup();
    checkborrowbooks = new CheckBorrowBooks();
    fines = new Fines();
    countlist = new CountList();
    //监听个人信息管理窗口的返回按钮
    connect(pimanagement,&PIManagement::PIManagementBack,[=](){
        pimanagement->hide();
        this->showMaximized();
    });
    //监听图书信息窗口的返回按钮
    connect(bookinformation,&BookInformation::BookInformationBack,[=](){
        bookinformation->hide();
        this->showMaximized();
    });
    //监听借阅人信息的返回按钮
    connect(checkborrowbooks, &CheckBorrowBooks::CheckBorrowBooksBack,[=](){
        checkborrowbooks->hide();
        this->showMaximized();
    });
    //监听
    connect(fines, &Fines::FinesBack,[=](){
       fines->hide();
        this->showMaximized();
    });
    //监听统计数据返回按钮
    connect(countlist, &CountList::CountListBack,[=](){
        countlist->hide();
        this->showMaximized();
    });
    //监听备份还原窗口的返回按钮
    connect(backup,&Backup::BackupBack,[=](){
        backup->hide();
        this->showMaximized();
    });
}

AdminMenu::~AdminMenu()
{
    delete ui;
}
void AdminMenu::on_pushButton_8_clicked()
{
    this->hide();
    backup->showMaximized();
    backup->roadshow();
}

void AdminMenu::on_pushButton_clicked()
{
    emit this->AdminMenuBack();
}

//点击个人信息管理窗口按钮
void AdminMenu::on_pushButton_3_clicked()
{
    this->hide();
    pimanagement->showMaximized();
    pimanagement->PIshow();
}

//点击图书管理窗口按钮
void AdminMenu::on_pushButton_4_clicked()
{
    this->hide();
    bookinformation->showMaximized();
    bookinformation->Bookshow();

}

void AdminMenu::on_pushButton_5_clicked()
{
    this->hide();
    checkborrowbooks->showMaximized();
}

void AdminMenu::on_pushButton_6_clicked()
{
    this->hide();
    fines->showMaximized();
    //>showAll();
}

void AdminMenu::on_pushButton_7_clicked()
{
    this->hide();
    countlist->showMaximized();
    //statisticInfo->Infoshow();
}
