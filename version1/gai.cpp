#include "gai.h"
#include "ui_gai.h"
#include <qdebug.h>

gai::gai(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::gai)
{
    ui->setupUi(this);
    QPalette pal = this->palette();

    pal.setBrush(QPalette::Background,QBrush(QPixmap(":/res/LW_12.jpg")));
    setPalette(pal);


}

gai::~gai()
{
    delete ui;
}



//提交
void gai::on_pushButton_3_clicked()
{
    int c;
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

    QDoubleValidator* adoubleValidator = new QDoubleValidator(0,999,2,this);
    ui->lineEdit_5->setValidator(adoubleValidator);
    QSqlQuery query(db);
    QString bn,isbn,w,p,price,bi,sql;

    if(ui->comboBox->currentText()=="Linux")c=1;
    else if(ui->comboBox->currentText()=="深度学习")c=2;
    else if(ui->comboBox->currentText()=="机器学习")c=3;
    else if(ui->comboBox->currentText()=="英语")c=4;
    if((bn=ui->lineEdit->text()).length()>20||bn.isEmpty())QMessageBox::warning(this,"书名长度异常！","请保证书名的长度不超过20位且不为空！！",QMessageBox::Ok);
    if((isbn=ui->lineEdit_2->text()).length()>20||isbn.isEmpty())QMessageBox::warning(this,"ISBN号长度异常！","请保证ISBN的长度不超过20位且不为空！！！",QMessageBox::Ok);
    if((w=ui->lineEdit_3->text()).length()>20||w.isEmpty())QMessageBox::warning(this,"作者名长度异常！","请保证作者名的长度不超过20位且不为空！！！",QMessageBox::Ok);
    if((price=ui->lineEdit_5->text()).isEmpty())QMessageBox::warning(this,"价格长度异常！","价格不能为空！",QMessageBox::Ok);
    if((p=ui->lineEdit_4->text()).length()>20||p.isEmpty())QMessageBox::warning(this,"出版社名长度异常！","请保证出版社名的长度不超过20位且不为空！！",QMessageBox::Ok);
    if((bi=ui->lineEdit_6->text()).length()>50||bi.isEmpty())QMessageBox::warning(this,"简介长度异常！","请保证简介的长度不超过50位且不为空！！",QMessageBox::Ok);


    sql=QString("update book set book_name='%1',isbn='%2',writer='%3',price=%4,publish='%5',location=%6,info= '%7' where isbn='%8';")
            .arg(bn).arg(isbn).arg(w).arg(price).arg(p).arg(c).arg(bi).arg(LISBN);
    qDebug()<<sql;

    if (!query.exec(sql.toUtf8().data())){
    query.exec("rollback;");}
    else{//printf("\n\t 插入成功!\n");
     query.exec("commit;");
                        }

    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    ui->lineEdit_3->clear();
    ui->lineEdit_3->clear();
    ui->lineEdit_4->clear();
    ui->lineEdit_5->clear();
    ui->lineEdit_6->clear();

    this->hide();
    emit this->gaiback();

}

void  gai::on_pushButton_2_clicked()
{
        ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    ui->lineEdit_3->clear();
    ui->lineEdit_3->clear();
    ui->lineEdit_4->clear();
    ui->lineEdit_5->clear();
    ui->lineEdit_6->clear();
    this->hide();
    emit this->gaiback();

}
void gai::gaishow()
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
    QString bn,isbn,w,p,price,bi,sql,c;
    QDoubleValidator* adoubleValidator = new QDoubleValidator(0,999,2,this);
    ui->lineEdit_5->setValidator(adoubleValidator);
    QSqlQuery query(db);
    sql=QString("SELECT * FROM(SELECT*, COUNT(*) 馆藏总数,SUM(IF(borrowed=0,1,0)) 馆藏现存\
                FROM(SELECT * FROM book b INNER JOIN bookshelf bs ON b.`location`=bs.`bookshelf` ORDER BY borrowed ASC) newBook\
                GROUP BY isbn) finalBook WHERE isbn='%1';").arg(LISBN);
    qDebug()<<sql;
    query.exec(sql.toUtf8().data());
            while( query.next()){//指向第一条记

            bn=query.value(1).toString();
            isbn=query.value(2).toString();
            w=query.value(3).toString();
            p=query.value(5).toString();
            price=query.value(4).toString();
            c=query.value(6).toString();
            if(c.toInt()==1){
                ui->comboBox->setCurrentIndex(0);
                ui->comboBox->setCurrentText("Linux");
            }else if(c.toInt()==2){
                ui->comboBox->setCurrentIndex(0);
                ui->comboBox->setCurrentText("深度学习");
            }else if(c.toInt()==3){
                ui->comboBox->setCurrentIndex(0);
                ui->comboBox->setCurrentText("机器学习");
            }else if(c.toInt()==4){
                ui->comboBox->setCurrentIndex(0);
                ui->comboBox->setCurrentText("英语");
            }
            bi=query.value(8).toString();
            ui->lineEdit->setText(bn);
            ui->lineEdit_2->setText(isbn);
            ui->lineEdit_3->setText(w);
            ui->lineEdit_4->setText(p);
            ui->lineEdit_5->setText(price);
            ui->lineEdit_6->setText(bi);
            emit this->gaiback();

}}
void gai::closeEvent(QCloseEvent *event)
 {
     emit this->gaiback();
 }
