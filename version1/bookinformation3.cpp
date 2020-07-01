#include "bookinformation3.h"
#include "ui_bookinformation3.h"
#include "checkborrowbooks.h"

bookinformation3::bookinformation3(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::bookinformation3)
{
    ui->setupUi(this);

    //ui->groupBox->setStyleSheet("QGroupBox{border:none}");//隐藏边框
        QLineEdit *lineEdit0 = new QLineEdit;
        lineEdit0->setReadOnly(true);
        lineEdit0->setAlignment(Qt::AlignCenter);
        ui->comboBox->setLineEdit(lineEdit0);
}

bookinformation3::~bookinformation3()
{
    delete ui;
}

//搜索按钮
void bookinformation3::on_pushButton_clicked()
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
    if(choice == "作者名") {
        if((writer=ui->lineEdit->text()).isEmpty())QMessageBox::warning(this,"作者名长度异常！","作者名不能为空！",QMessageBox::Ok);
        sql=QString("SELECT book_id,book_name,isbn,writer,price,publish,location,info,class,馆藏总数,馆藏现存 FROM(SELECT*, COUNT(*) 馆藏总数,SUM(IF(borrowed=0,1,0)) 馆藏现存\
                    FROM(SELECT * FROM book b INNER JOIN bookshelf bs ON b.`location`=bs.`bookshelf` ORDER BY borrowed ASC) newBook\
                    GROUP BY isbn) finalBook WHERE writer LIKE '%%1%';").arg(writer);
        query.exec(sql);
        if(!query.next()){
            QMessageBox::information(this,"无记录！","抱歉！根据您搜索所提供的关键字没有找到相关书籍信息！",QMessageBox::Ok);
            Bookshow();
        }
        else{ui->tableView->clearSpans();
        Tableshow(sql);

         }
    }
    else if(choice == "类别") {
        if((classs=ui->lineEdit->text()).isEmpty())QMessageBox::warning(this,"类别名长度异常！","类别名不能为空！",QMessageBox::Ok);
        sql=QString("SELECT book_id,book_name,isbn,writer,price,publish,location,info,class,馆藏总数,馆藏现存 FROM(SELECT*, COUNT(*) 馆藏总数,SUM(IF(borrowed=0,1,0)) 馆藏现存\
                    FROM(SELECT * FROM book b INNER JOIN bookshelf bs ON b.`location`=bs.`bookshelf` ORDER BY borrowed ASC) newBook\
                    GROUP BY isbn) finalBook WHERE class LIKE '%%1%';").arg(classs);
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


void bookinformation3::on_pushButton_1_clicked()
{
    Bookshow();
}

//所有图书显示
void bookinformation3::Bookshow()
{
    QString query="SELECT book_id,book_name,isbn,writer,price,publish,location,info,class,馆藏总数,馆藏现存 FROM(SELECT*, COUNT(*) 馆藏总数,SUM(IF(borrowed=0,1,0)) 馆藏现存\
            FROM(SELECT * FROM book b INNER JOIN bookshelf bs ON b.`location`=bs.`bookshelf` ORDER BY borrowed ASC) newBook\
            GROUP BY isbn) finalBook";
    Tableshow(query);

}
void bookinformation3::Tableshow(QString query)
{
    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery(query.toUtf8().data());
    model->setHeaderData(0, Qt::Horizontal, tr("书号"));
    model->setHeaderData(1, Qt::Horizontal, tr("书名"));
    model->setHeaderData(2, Qt::Horizontal, tr("图书号"));
    model->setHeaderData(3, Qt::Horizontal, tr("作者"));
    model->setHeaderData(4, Qt::Horizontal, tr("价格"));
    model->setHeaderData(5, Qt::Horizontal, tr("出版社"));
    model->setHeaderData(6, Qt::Horizontal, tr("书架号"));
    model->setHeaderData(7, Qt::Horizontal, tr("简介"));
    model->setHeaderData(8, Qt::Horizontal, tr("类别"));
    model->setHeaderData(9, Qt::Horizontal, tr("馆藏总数"));
    model->setHeaderData(10, Qt::Horizontal, tr("馆藏剩余"));
    ui->tableView->setModel(model);
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents );//列宽根据内容大小自动适应
    ui->tableView->setFrameShape(QFrame::NoFrame);//无边框
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers); //设置成不可编辑
}

void bookinformation3::on_pushButton_2_clicked()
{
    //QModelIndex index = ui->tableView->currentIndex();

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

    QString isbnstr = ui->lineEdit_isbn->text();
    if(isbnstr.isEmpty())
    {
        QMessageBox::warning(this,"图书号信息异常！","图书号不能为空！",QMessageBox::Ok);
        return;
    }
//    QString sql= QString(" SELECT r.reader_id,r.reader_name,borrow_times,return_plan,IF(return_plan>NOW(),'未超期','超期'),IF(b.`borrowed`>0,'未还','已还') FROM reader r INNER JOIN borrowed bo ON r.`reader_id`=bo.`reader_id`"
//                         "INNER JOIN book b ON b.`book_id`=bo.`book_id` WHERE b.`isbn` LIKE %1 ").arg(isbnstr);

    QString sql= "SELECT b.`book_name`,r.reader_name,borrow_times,return_plan,IF(return_plan>NOW()," +
            QStringLiteral("'未超期','超期'),IF(b.`borrowed`>0,'未还','已还') "
            "FROM reader r INNER JOIN borrowed bo ON r.`reader_id`=bo.`reader_id` "
            "INNER JOIN book b ON b.`book_id`=bo.`book_id` WHERE b.`isbn` ") + QString("LIKE '%%1%'").arg(isbnstr);
     qDebug() << sql;
    query.exec(sql);
    if(!query.next()){
        QMessageBox::information(this,"无记录！","抱歉！没有找到相关借阅人信息！",QMessageBox::Ok);
        return;
    }

    Tableshow2(sql);
}
void bookinformation3::Tableshow2(QString query)
{
    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery(query.toUtf8().data());
    model->setHeaderData(0, Qt::Horizontal, tr("书籍名称"));
    model->setHeaderData(1, Qt::Horizontal, tr("读者姓名"));
    model->setHeaderData(2, Qt::Horizontal, tr("书名"));
    model->setHeaderData(3, Qt::Horizontal, tr("借阅时间"));
    model->setHeaderData(4, Qt::Horizontal, tr("是否超期"));
    model->setHeaderData(5, Qt::Horizontal, tr("是否归还"));
    ui->tableView_2->setModel(model);
    ui->tableView_2->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents );//列宽根据内容大小自动适应
    ui->tableView_2->setFrameShape(QFrame::NoFrame);//无边框
    ui->tableView_2->setEditTriggers(QAbstractItemView::NoEditTriggers); //设置成不可编辑
}


void bookinformation3::on_pushButton_3_clicked()
{   
    emit this->BookInformation3Back();
}
