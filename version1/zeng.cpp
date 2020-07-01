#include "zeng.h"
#include "ui_zeng.h"
#include <qdebug.h>
zeng::zeng(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::zeng)
{
    ui->setupUi(this);
    QPalette pal = this->palette();
    pal.setBrush(QPalette::Background,QBrush(QPixmap(":/res/LW_12.jpg")));
    setPalette(pal);
}

zeng::~zeng()
{
    delete ui;
}

//提交
void zeng::on_pushButton_3_clicked()
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
    QIntValidator* aIntValidator = new QIntValidator;
    aIntValidator->setRange(-50, 50);
    ui->lineEdit->setValidator(aIntValidator);
    QDoubleValidator* adoubleValidator = new QDoubleValidator(0,999,2,this);
    ui->lineEdit_4->setValidator(adoubleValidator);
    QSqlQuery query(db);
    QString bn,isbn,w,p,price,bi,sql,count;
    if(ui->comboBox->currentText()=="Linux")c=1;
    else if(ui->comboBox->currentText()=="深度学习")c=2;
    else if(ui->comboBox->currentText()=="机器学习")c=3;
    else if(ui->comboBox->currentText()=="英语")c=4;
    if((bn=ui->lineEdit->text()).length()>20||bn.isEmpty())QMessageBox::warning(this,"书名长度异常！","请保证书名的长度不超过20位且不为空！！",QMessageBox::Ok);
    if((isbn=ui->lineEdit_2->text()).length()>20||isbn.isEmpty())QMessageBox::warning(this,"ISBN号长度异常！","请保证ISBN的长度不超过20位且不为空！！！",QMessageBox::Ok);
    if((w=ui->lineEdit_3->text()).length()>20||w.isEmpty())QMessageBox::warning(this,"作者名长度异常！","请保证作者名的长度不超过20位且不为空！！！",QMessageBox::Ok);
    if((price=ui->lineEdit_4->text()).isEmpty())QMessageBox::warning(this,"价格长度异常！","价格不能为空！",QMessageBox::Ok);
    if((p=ui->lineEdit_5->text()).length()>20||p.isEmpty())QMessageBox::warning(this,"出版社名长度异常！","请保证出版社名的长度不超过20位且不为空！！",QMessageBox::Ok);
    if((bi=ui->lineEdit_6->text()).length()>50||bi.isEmpty())QMessageBox::warning(this,"简介长度异常！","请保证简介的长度不超过50位且不为空！！",QMessageBox::Ok);
    if((count=ui->lineEdit_7->text()).isEmpty())QMessageBox::warning(this,"数量名长度异常！","数量不能为空！",QMessageBox::Ok);

    sql=QString("insert into book values ('0','%1','%2','%3','%4','%5','%6',0,'%7');")
            .arg(bn).arg(isbn).arg(w).arg(price).arg(p).arg(c).arg(bi);
    qDebug()<<sql;
    for (int k = 0; k < count.toInt(); ++k) {
    if (!query.exec(sql.toUtf8().data())){
    query.exec("rollback;");}
    else{//printf("\n\t 插入成功!\n");
     query.exec("commit;");
                        }
                    }
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    ui->lineEdit_3->clear();
    ui->lineEdit_3->clear();
    ui->lineEdit_4->clear();
    ui->lineEdit_5->clear();
    ui->lineEdit_6->clear();
    ui->lineEdit_7->clear();
    this->hide();
    emit this->zengback();

}


//取消
void  zeng::on_pushButton_2_clicked()
{
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    ui->lineEdit_3->clear();
    ui->lineEdit_3->clear();
    ui->lineEdit_4->clear();
    ui->lineEdit_5->clear();
    ui->lineEdit_6->clear();
    ui->lineEdit_7->clear();
    this->hide();


}
