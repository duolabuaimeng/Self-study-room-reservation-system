#include "bookseat.h"
#include "ui_bookseat.h"

BookSeat::BookSeat(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::BookSeat)
{
    ui->setupUi(this);
}

BookSeat::~BookSeat()
{
    delete ui;
}

//返回按钮
void BookSeat::on_pushButton_4_clicked()
{
    emit this->BorrowBooksBack();
}

//按下查询按钮
void BookSeat::on_pushButton_clicked()
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
            QMessageBox::information(this,"无记录！","抱歉！根据您搜索所提供的关键字没有找到相关楼名信息！",QMessageBox::Ok);
            Bookshow();
        }
        else{ui->tableView->clearSpans();
        Tableshow(sql);

         }
    }
    else if(choice == "楼号") {
        if((classs=ui->lineEdit->text()).isEmpty())QMessageBox::warning(this,"楼号长度异常！","类别名不能为空！",QMessageBox::Ok);
        sql=QString("SELECT building_id,building_name,building_number,floor,number,total,remaining,booked FROM building WHERE building_number LIKE '%%1%';").arg(writer);
        query.exec(sql);
        if(!query.next()){
            QMessageBox::information(this,"无记录！","抱歉！根据您搜索所提供的关键字没有找到相关楼号信息！",QMessageBox::Ok);
            Bookshow();}
        else{ui->tableView->clearSpans();
        Tableshow(sql);

        }
    }
    else if(choice == "层数"){
        if((bookname=ui->lineEdit->text()).isEmpty())QMessageBox::warning(this,"楼层长度异常！","楼层不能为空！",QMessageBox::Ok);
       sql=QString("SELECT building_id,building_name,building_number,floor,number,total,remaining,booked FROM building WHERE floor LIKE '%%1%';").arg(writer);
        query.exec(sql);
        if(!query.next()){
            QMessageBox::information(this,"无记录！","抱歉！根据您搜索所提供的关键字没有找到相关楼层信息！",QMessageBox::Ok);
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
    else if(choice =="教室号") {
        if((isbn=ui->lineEdit->text()).isEmpty())QMessageBox::warning(this,"教室号长度异常！","教室号不能为空！",QMessageBox::Ok);
        sql=QString("SELECT building_id,building_name,building_number,floor,number,total,remaining,booked FROM building WHERE number LIKE '%%1%';").arg(writer);
        query.exec(sql);
        if(!query.next()){
            QMessageBox::information(this,"无记录！","抱歉！根据您搜索所提供的关键字没有找到相关教室号信息！",QMessageBox::Ok);
            Bookshow();}
        else{ui->tableView->clearSpans();
        Tableshow(sql);

          }
    }
    else if(choice =="教室id") {
        if((isbn=ui->lineEdit->text()).isEmpty())QMessageBox::warning(this,"教室id长度异常！","教室id不能为空！",QMessageBox::Ok);
        sql=QString("SELECT building_id,building_name,building_number,floor,number,total,remaining,booked FROM building WHERE building_id LIKE '%%1%';").arg(writer);
        query.exec(sql);
        if(!query.next()){
            QMessageBox::information(this,"无记录！","抱歉！根据您搜索所提供的关键字没有找到相关教室id信息！",QMessageBox::Ok);
            Bookshow();}
        else{ui->tableView->clearSpans();
        Tableshow(sql);

          }
    };


}


//所有教室显示
void BookSeat::Bookshow()
{
    QString query="SELECT building_id,building_name,building_number,floor,number,total_name,total,remaining,booked FROM building";
    Tableshow(query);
}

void BookSeat::Tableshow(QString query)
{
    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery(query.toUtf8().data());
    model->setHeaderData(0, Qt::Horizontal, tr("教室id"));
    model->setHeaderData(1, Qt::Horizontal, tr("楼名"));
    model->setHeaderData(2, Qt::Horizontal, tr("楼号"));
    model->setHeaderData(3, Qt::Horizontal, tr("层数"));
    model->setHeaderData(4, Qt::Horizontal, tr("教室号"));
    model->setHeaderData(5, Qt::Horizontal, tr("教室名"));
    model->setHeaderData(6, Qt::Horizontal, tr("总容纳人数"));
    model->setHeaderData(7, Qt::Horizontal, tr("剩余空位"));
    model->setHeaderData(8, Qt::Horizontal, tr("已定位置"));
    ui->tableView->setModel(model);
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents );//列宽根据内容大小自动适应
    ui->tableView->setFrameShape(QFrame::NoFrame);//无边框
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers); //设置成不可编辑
}

//所有教室
void BookSeat::on_pushButton_5_clicked()
{
    Bookshow();
}

// 预定按钮按下
void BookSeat::on_pushButton_3_clicked()
{
    QSqlDatabase db;
    db = QSqlDatabase::addDatabase("QMYSQL","borrowbooks_submit");
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
        QMessageBox::warning(this,"教室号为空","请输入想要预定的教室号！","确定");
        return;
    }

    //查询数据集的对象
    QSqlQuery query(db);

    QString sqlCode=QString("select * from building where building_id = '%1'").arg(book_id);
    //qDebug()<<sqlCode;
    query.exec(sqlCode);

    if(query.size()==0){
        QMessageBox::warning(this,"未找到！","抱歉！教室号不存在，请输入正确的教室号。",QMessageBox::Ok);
        return;
    }

    while(query.next()){
        if(query.value(7).toInt()==1){
            QMessageBox::warning(this,"没有空的位置","抱歉！该教室现在没有空的位置，要不看看别的？",QMessageBox::Ok);
            return;
        };
    }

    sqlCode=QString("select * from student where student_id = '%1'").arg(reader_id_global);
    //qDebug()<<sqlCode;
    query.exec(sqlCode);

    while(query.next()){
        if(query.value(10).toInt()==1){
            QMessageBox::warning(this,"您的罚金未结清","抱歉！请先结清罚金才可预定！",QMessageBox::Ok);
            return;
        };
        if(query.value(7).toInt()>=20){
            QMessageBox::warning(this,"您已达到预定上限","抱歉！您已经预定了20个座位，请先还座！",QMessageBox::Ok);
            return;
        };
    }

    //开启事务
    sqlCode=QString("set autocommit=0");
    if(!query.exec(sqlCode)){
        qDebug()<<sqlCode;
        query.exec("rollback");
        QMessageBox::critical(this,"无法开启事务！","借书功能未能正常运行，请稍后再试！",QMessageBox::Ok);
        return;
    }

    //学生表1
    sqlCode=QString("update student set student_have_borrowed=student_have_borrowed+1 where student_id = '%1'").arg(reader_id_global);
    if(!query.exec(sqlCode)){
        qDebug()<<sqlCode;
        query.exec("rollback");
        QMessageBox::critical(this,"无法修改学生表！","预定功能未能正常运行，请稍后再试！",QMessageBox::Ok);
        return;
    }

    //学生表2
    sqlCode=QString("update student set student_left_borrowTimes=student_left_borrowTimes-1 where student_id = '%1'").arg(reader_id_global);
    if(!query.exec(sqlCode)){
        qDebug()<<sqlCode;
        query.exec("rollback");
        QMessageBox::critical(this,"无法修改学生表！","预定功能未能正常运行，请稍后再试！",QMessageBox::Ok);
        return;
    }

    //图书表状态
    sqlCode=QString("update building set booked=booked+1, remaining = remaining-1 where building_id = '%1'").arg(book_id);
    if(!query.exec(sqlCode)){
        qDebug()<<sqlCode;
        query.exec("rollback");
        QMessageBox::critical(this,"无法修改图书表！","借书功能未能正常运行，请稍后再试！",QMessageBox::Ok);
        return;
    }

    //最后添加记录
    sqlCode=QString("insert into borrowed values('%1','%2',now(),FROM_UNIXTIME(%3),FROM_UNIXTIME(%4),1)").arg(book_id).arg(reader_id_global).arg(start).arg(end);
    if(!query.exec(sqlCode)){
        qDebug()<<sqlCode;
        query.exec("rollback");
        QMessageBox::critical(this,"无法修改预定表！","预定功能未能正常运行，请稍后再试！",QMessageBox::Ok);
        return;
    }
    else{
        query.exec("commit");
        QMessageBox::information(this,"预定成功","恭喜您，预定成功！",QMessageBox::Ok);
        emit this->BorrowBooksBack();
    }
}

void BookSeat::on_dateTimeEdit_2_dateTimeChanged(const QDateTime &dateTime)
{
    end= dateTime.toTime_t();
}

void BookSeat::on_dateTimeEdit_dateTimeChanged(const QDateTime &dateTime)
{
    start= dateTime.toTime_t();
}
