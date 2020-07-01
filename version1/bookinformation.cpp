#include "bookinformation.h"
#include "ui_bookinformation.h"
#include <qdebug.h>
#include <QMessageBox>
BookInformation::BookInformation(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::BookInformation)
{
    ui->setupUi(this);

    Zeng =new zeng;
    Gai =new gai;
    connect(Zeng,&zeng::zengback,[=](){

        Bookshow();
    });
    connect(Gai,&gai::gaiback,[=](){
        ui->tableView->clearSpans();
                Bookshow();
    });

    //ui->groupBox->setStyleSheet("QGroupBox{border:none}");//隐藏边框
    QLineEdit *lineEdit0 = new QLineEdit;
    lineEdit0->setReadOnly(true);
    lineEdit0->setAlignment(Qt::AlignCenter);
    ui->comboBox->setLineEdit(lineEdit0);




}

BookInformation::~BookInformation()
{
    delete ui;
}


//返回按钮
void BookInformation::on_pushButton_2_clicked()
{
    emit this->BookInformationBack();
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
}

//搜索按钮
void BookInformation::on_pushButton_clicked()
{
    QSqlDatabase db;
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName(IP);
    db.setDatabaseName(DATABASENAME);       //这里输入你的数据库名
    db.setUserName(USERNAME);
    db.setPassword(PASSWORD);
    if(!db.open())
    {
        QMessageBox::warning(this,"错误",db.lastError().text());
        return;
    }
    QSqlQuery query(db);
    QString choice,writer,classs,bookname,isbn,sql;
    choice=ui->comboBox->currentText();
    if(choice == "楼名") {
        if((writer=ui->lineEdit->text()).isEmpty())QMessageBox::warning(this,"楼名长度异常！","楼名不能为空！",QMessageBox::Ok);
        sql=QString("SELECT building_id,building_name,building_number,floor,number,total,remaining,booked FROM building WHERE building_name LIKE '%%1%';").arg(writer);
        query.exec(sql);
        if(!query.next()){
            QMessageBox::information(this,"无记录！","抱歉！根据您搜索所提供的关键字没有找到相关教学楼信息！",QMessageBox::Ok);
            Bookshow();
        }
        else{ui->tableView->clearSpans();
        Tableshow(sql);

         }
    }
    else if(choice == "层数") {
        if((classs=ui->lineEdit->text()).isEmpty())QMessageBox::warning(this,"层数长度异常！","层数不能为空！",QMessageBox::Ok);
        sql=QString("SELECT building_id,building_name,building_number,floor,number,total,remaining,booked FROM building WHERE floor LIKE '%%1%';").arg(classs);
        query.exec(sql);
        if(!query.next()){
            QMessageBox::information(this,"无记录！","抱歉！根据您搜索所提供的关键字没有找到相关书籍信息！",QMessageBox::Ok);
            Bookshow();}
        else{ui->tableView->clearSpans();
        Tableshow(sql);

        }
    }
    else if(choice == "书名"){
        if((bookname=ui->lineEdit->text()).isEmpty())QMessageBox::warning(this,"书名长度异常！","书名不能为空！",QMessageBox::Ok);
        sql=QString("SELECT book_id,book_name,isbn,writer,price,publish,location,info,class,馆藏总数,馆藏现存 FROM(SELECT*, COUNT(*) 馆藏总数,SUM(IF(borrowed=0,1,0)) 馆藏现存\
                    FROM(SELECT * FROM book b INNER JOIN bookshelf bs ON b.`location`=bs.`bookshelf` ORDER BY borrowed ASC) newBook\
                    GROUP BY isbn) finalBook WHERE book_name LIKE '%%1%';").arg(bookname);
        query.exec(sql);
        if(!query.next()){
            QMessageBox::information(this,"无记录！","抱歉！根据您搜索所提供的关键字没有找到相关书籍信息！",QMessageBox::Ok);
            Bookshow();}
        else{ui->tableView->clearSpans();
            query.exec(sql);
            if(!query.next()){
            QMessageBox::information(this,"无记录！","抱歉！根据您搜索所提供的关键字没有找到相关书籍信息！",QMessageBox::Ok);
            Bookshow();}
            else{ui->tableView->clearSpans();
            Tableshow(sql);

             }
        }
    }
    else if(choice =="图书号") {
        if((isbn=ui->lineEdit->text()).isEmpty())QMessageBox::warning(this,"图书号长度异常！","图书号不能为空！",QMessageBox::Ok);
        sql=QString("SELECT book_id,book_name,isbn,writer,price,publish,location,info,class,馆藏总数,馆藏现存 FROM(SELECT*, COUNT(*) 馆藏总数,SUM(IF(borrowed=0,1,0)) 馆藏现存\
                    FROM(SELECT * FROM book b INNER JOIN bookshelf bs ON b.`location`=bs.`bookshelf` ORDER BY borrowed ASC) newBook\
                    GROUP BY isbn) finalBook WHERE isbn LIKE '%%1%';").arg(isbn);
        query.exec(sql);
        if(!query.next()){
            QMessageBox::information(this,"无记录！","抱歉！根据您搜索所提供的关键字没有找到相关书籍信息！",QMessageBox::Ok);
            Bookshow();}
        else{ui->tableView->clearSpans();
        Tableshow(sql);

          }
    };


}


void BookInformation::Dbook()
{
    int flag=0;
    QSqlDatabase db;
    QSqlQuery query(db);
    QString sql;
    LISBN=ui->lineEdit_2->text();
    sql=QString("delete from book where isbn='%1';").arg(LISBN);
    if(LISBN.isEmpty())QMessageBox::warning(this,"isbn长度异常！","isbn不能为空！",QMessageBox::Ok);
    else{
    query.exec("select * from book");
    while(query.next()){
    if(query.value("isbn").toString()==LISBN){
        flag=1;
        break;}
    }}
    if(flag==1){
    query.exec(sql.toUtf8().data());
    QMessageBox::warning(this,"删除成功","删除成功！！",QMessageBox::Ok);
    ui->tableView->clearSpans();
    Bookshow();
    }
    else{ QMessageBox::warning(this,"ISBN号错误","请输入正确ISBN号！！",QMessageBox::Ok);}
}

//修改按钮
void BookInformation::on_pushButton_5_clicked()
{
    int flag=0;
    LISBN=ui->lineEdit_2->text();
    qDebug()<<LISBN;
    if(LISBN.isEmpty())QMessageBox::warning(this,"isbn长度异常！","isbn不能为空！",QMessageBox::Ok);
    else{
    QSqlDatabase db;
    QSqlQuery query(db);
    query.exec("select * from book");

    while(query.next()){
    if(query.value("isbn").toString()==LISBN){
        flag=1;
        break;}
    }}
    if(flag==1){
    Gai->show();
    Gai->gaishow();}
    else{ QMessageBox::warning(this,"ISBN号错误","请输入正确ISBN号！！",QMessageBox::Ok);}
}
//删除
void BookInformation::on_pushButton_3_clicked()
{
    Dbook();
}

//增加按钮
void BookInformation::on_pushButton_4_clicked()
{
    Zeng->show();
}

//所有图书显示
void BookInformation::Bookshow()
{
    QString query="SELECT building_id,building_name,building_number,floor,number,total,remaining,booked FROM building";
    Tableshow(query);

}

void BookInformation::Tableshow(QString query)
{
    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery(query.toUtf8().data());
    model->setHeaderData(0, Qt::Horizontal, tr("楼id"));
    model->setHeaderData(1, Qt::Horizontal, tr("楼名"));
    model->setHeaderData(2, Qt::Horizontal, tr("楼号"));
    model->setHeaderData(3, Qt::Horizontal, tr("层数"));
    model->setHeaderData(4, Qt::Horizontal, tr("教室号"));
    model->setHeaderData(5, Qt::Horizontal, tr("总容纳人数"));
    model->setHeaderData(6, Qt::Horizontal, tr("剩余空位"));
    model->setHeaderData(7, Qt::Horizontal, tr("已定位置"));
    ui->tableView->setModel(model);
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents );//列宽根据内容大小自动适应
    ui->tableView->setFrameShape(QFrame::NoFrame);//无边框
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers); //设置成不可编辑
}

void BookInformation::on_pushButton_6_clicked()
{
    Bookshow();
}
