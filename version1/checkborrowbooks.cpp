#include "checkborrowbooks.h"

#include "ui_checkborrowbooks.h"
#include <QDebug>

CheckBorrowBooks::CheckBorrowBooks(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CheckBorrowBooks)
{
    ui->setupUi(this);

    this->setWindowIcon(QIcon(":/res/jiaobiao1.png"));
    bookinfo = new bookinformation3();

    connect(bookinfo,&bookinformation3::BookInformation3Back,[=](){
        bookinfo->hide();
        this->showMaximized();
    });

}

CheckBorrowBooks::~CheckBorrowBooks()
{
    delete ui;
}

void CheckBorrowBooks::Tableshow(QString query)
{
    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery(query.toUtf8().data());
    model->setHeaderData(0, Qt::Horizontal, tr("书名"));
    model->setHeaderData(1, Qt::Horizontal, tr("借阅人姓名"));
    model->setHeaderData(2, Qt::Horizontal, tr("借阅时间"));
    model->setHeaderData(3, Qt::Horizontal, tr("归还时间"));
    model->setHeaderData(4, Qt::Horizontal, tr("是否超期"));
    model->setHeaderData(5, Qt::Horizontal, tr("是否归还"));
    ui->tableView->setModel(model);
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents );//列宽根据内容大小自动适应
    ui->tableView->setFrameShape(QFrame::NoFrame);//无边框
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers); //设置成不可编辑
}

void CheckBorrowBooks::on_pushButton_2_clicked()
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
    QString borrower = ui->lineEdit->text();
    QString sql;
    if(borrower.isEmpty())
    {
        QMessageBox::warning(this,"借阅人信息异常！","借阅人名不能为空！",QMessageBox::Ok);
        return;
    }
    //sql= QString("SELECT bo.book_id,book_name,borrow_times,return_real,IF(return_plan>return_real,'No','Yes'),IF(b.`borrowed`>0,'No','Yes') FROM returned bo INNER JOIN book b"
    //            "ON bo.`book_id`=b.`book_id` INNER JOIN reader r ON bo.`reader_id`= r.reader_id WHERE r.reader_name  LIKE '%%1%';").arg(borrower);
    sql= "SELECT b.`book_name`,r.reader_name,borrow_times,return_plan,IF(return_plan>NOW()," +
            QStringLiteral("'No','Yes'),IF(b.`borrowed`>0,'NO','Yes') "
            "FROM reader r INNER JOIN borrowed bo ON r.`reader_id`=bo.`reader_id` "
            "INNER JOIN book b ON b.`book_id`=bo.`book_id` WHERE r.`reader_name` ") + QString("LIKE '%%1%'").arg(borrower);
    qDebug() << sql;
    query.exec(sql);
    if(!query.next()){
        QMessageBox::information(this,"无记录！","抱歉！没有找到相关借阅人信息！",QMessageBox::Ok);

        return;
    }
    else{ui->tableView->clearSpans();
    Tableshow(sql);}

}

void CheckBorrowBooks::on_pushButton_4_clicked()
{
     emit this->CheckBorrowBooksBack();
}

void CheckBorrowBooks::on_pushButton_3_clicked()
{
    bookinfo->showMaximized();
    this->hide();
}
