#include "renew.h"
#include "ui_renew.h"

Renew::Renew(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Renew)
{
    ui->setupUi(this);
}

Renew::~Renew()
{
    delete ui;
}

//返回按钮
void Renew::on_pushButton_clicked()
{
    emit this->RenewBack();
}

void Renew::showAll(){
    QSqlDatabase db;
    db = QSqlDatabase::addDatabase("QMYSQL","renew_checkall");
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

    model->setHeaderData(0, Qt::Horizontal, "教室号");
    model->setHeaderData(1, Qt::Horizontal,  "教室名");
    model->setHeaderData(2, Qt::Horizontal,  "预约时间");
    model->setHeaderData(3, Qt::Horizontal,  "预定时间");
    model->setHeaderData(4,Qt::Horizontal,  "应还时间");
    model->setHeaderData(5, Qt::Horizontal,  "罚金情况");

    if(!ui->tableView->verticalHeader()->count()){
        QMessageBox::warning(this,"没有记录","没有查询到您的预定记录，无需续座","确定");
        emit this->RenewBack();
    }
}

//显示所有教室
void Renew::on_pushButton_4_clicked()
{
    showAll();
}

//教室名查询
void Renew::on_pushButton_3_clicked()
{
    QSqlDatabase db;
    db = QSqlDatabase::addDatabase("QMYSQL","renew_checkname");
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
FROM borrowed bd INNER JOIN building b ON bd.`building_id`=b.`building_id` where valid=1 and student_id = '%1' and total_name like '%%2%'").arg(reader_id_global).arg(book_name);
    //qDebug()<<sqlCode;
    model->setQuery(sqlCode);
    ui->tableView->setModel(model);
    ui->tableView->setColumnWidth(0,100);
    ui->tableView->setColumnWidth(1,200);
    ui->tableView->setColumnWidth(2,200);
    ui->tableView->setColumnWidth(3,200);
    ui->tableView->setColumnWidth(4,200);
    ui->tableView->setColumnWidth(5,100);
    model->setHeaderData(0, Qt::Horizontal, "教室号");
    model->setHeaderData(1, Qt::Horizontal,  "教室名");
    model->setHeaderData(2, Qt::Horizontal,  "预约时间");
    model->setHeaderData(3, Qt::Horizontal,  "预定时间");
    model->setHeaderData(4,Qt::Horizontal,  "应还时间");
    model->setHeaderData(5, Qt::Horizontal,  "罚金情况");
    if(!ui->tableView->verticalHeader()->count()){
        QMessageBox::warning(this,"没有记录","您没有预定，无须续座！","确定");
    }
}

//续座
void Renew::on_pushButton_2_clicked()
{
    QSqlDatabase db;
    db = QSqlDatabase::addDatabase("QMYSQL","renew_submit");
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
        QMessageBox::warning(this,"教室号为空","请输入想要续座的教室号！","确定");
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
        QMessageBox::warning(this,"未查询到记录","您并未预定该教室！","确定");
        return;
    }

    //开始操作
    //1.事务开启
    sqlCode=QString("set autocommit=0");
    if(!query.exec(sqlCode)){
        qDebug()<<sqlCode;
        query.exec("rollback");
        QMessageBox::critical(this,"无法开启事务！","续座功能未能正常运行，请稍后再试！",QMessageBox::Ok);
        return;
    }

    //判断罚金
    if(penalty){
        sqlCode=QString("update student set student_penalty=1 where student_id = '%1'").arg(reader_id_global);
        if(!query.exec(sqlCode)){
            qDebug()<<sqlCode;
            query.exec("rollback");
            QMessageBox::critical(this,"无法修改学生表！","续座功能未能正常运行，请稍后再试！",QMessageBox::Ok);
            return;
        }
    }

    //2.预定状态
    sqlCode=QString("update borrowed set return_plan=DATE_SUB(return_plan, INTERVAL -30 DAY) where building_id = '%1' and student_id = '%2'")
            .arg(book_id).arg(reader_id_global);
    if(!query.exec(sqlCode)){
        qDebug()<<sqlCode;
        query.exec("rollback");
        QMessageBox::critical(this,"无法修改预定表！","续座功能未能正常运行，请稍后再试！",QMessageBox::Ok);
        return;
    }
    else{
        query.exec("commit");
        QMessageBox::information(this,"续座成功","续座可以延长应还日期 30 天，但若已经超期，罚金仍然生效，罚金存在时不可再借！",QMessageBox::Ok);
        emit this->RenewBack();
    }

}
