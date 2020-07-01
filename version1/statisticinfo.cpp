#include "statisticinfo.h"
#include "ui_statisticinfo.h"

StatisticInfo::StatisticInfo(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::StatisticInfo)
{
    ui->setupUi(this);
}

StatisticInfo::~StatisticInfo()
{
    delete ui;
}

void StatisticInfo::on_pushButton_4_clicked()
{
    emit this->StatisticInfoBack();
}

void StatisticInfo::on_department_Btn_clicked()
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
    //QString sqlCode=QString("select * from reader where reader_id = '%1'").arg(card);
    query.exec("SELECT * FROM library.reader");

    int borrowedBooksNum1=0,borrowedBooksNum2=0,borrowedBooksNum3=0,borrowedBooksNum4=0;
    int departmentNum1=0,departmentNum2=0,departmentNum3=0,departmentNum4=0;
    while(query.next()){
        if(query.value(7).toInt()!=0){

            switch (query.value(6).toInt()) {
            case 1:
                departmentNum1++;  //学院人数加1
                borrowedBooksNum1=borrowedBooksNum1+query.value(7).toInt();
                break;
            case 2:
                departmentNum2++;
                borrowedBooksNum2=borrowedBooksNum2+query.value(7).toInt();
                break;
            case 3:
                departmentNum3++;
                borrowedBooksNum3=borrowedBooksNum3+query.value(7).toInt();
                break;
            case 4:
                departmentNum4++;
                borrowedBooksNum4=borrowedBooksNum4+query.value(7).toInt();
            default:
                QMessageBox::warning(this,"学院信息有误！","暂不存在学院信息！","确定");
                break;
            }
        }
    };

    QStandardItemModel *model = new QStandardItemModel();
    model->setHorizontalHeaderItem(0, new QStandardItem(QObject::tr("学院名称")));
    model->setHorizontalHeaderItem(1, new QStandardItem(QObject::tr("借阅人数量")));
    model->setHorizontalHeaderItem(2, new QStandardItem(QObject::tr("借阅书籍数量")));
    ui->tableView->setModel(model);

    ui->tableView->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Fixed);
    ui->tableView->horizontalHeader()->setSectionResizeMode(1, QHeaderView::Fixed);//列宽根据内容大小自动适应
    ui->tableView->horizontalHeader()->setSectionResizeMode(2, QHeaderView::Fixed);
    ui->tableView->setFrameShape(QFrame::NoFrame);//无边框
//    //设置表格的各列的宽度值
    ui->tableView->setColumnWidth(0,500);
    ui->tableView->setColumnWidth(1,500);
    ui->tableView->setColumnWidth(2,500);
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers); //设置成不可编辑

    model->setItem(0,0,new QStandardItem("信息学院"));
    model->setItem(0,1,new QStandardItem(QString::number(departmentNum1)));
    model->setItem(0,2,new QStandardItem(QString::number(borrowedBooksNum1)));

    model->setItem(1,0,new QStandardItem("理学院"));
    model->setItem(1,1,new QStandardItem(QString::number(departmentNum2)));
    model->setItem(1,2,new QStandardItem(QString::number(borrowedBooksNum2)));

    model->setItem(2,0,new QStandardItem("文法学院"));
    model->setItem(2,1,new QStandardItem(QString::number(departmentNum3)));
    model->setItem(2,2,new QStandardItem(QString::number(borrowedBooksNum3)));

    model->setItem(3,0,new QStandardItem("生命科学学院"));
    model->setItem(3,1,new QStandardItem(QString::number(departmentNum4)));
    model->setItem(3,2,new QStandardItem(QString::number(borrowedBooksNum4)));
}

void StatisticInfo::on_class_Btn_clicked()
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
    //QString sqlCode=QString("select * from reader where reader_id = '%1'").arg(card);
    query.exec("SELECT * FROM library.reader");

    int borrowedBooksNum1=0,borrowedBooksNum2=0,borrowedBooksNum3=0,borrowedBooksNum4=0,borrowedBooksNum5=0,borrowedBooksNum6=0,borrowedBooksNum7=0;
    int grade1=0,grade2=0,grade3=0,grade4=0, grade5=0, grade6=0, grade7=0;
    while(query.next()){
        if(query.value(7).toInt()!=0){

            switch (query.value(4).toInt()) {
            case 1:
                grade1++;  //年级人数加1
                borrowedBooksNum1=borrowedBooksNum1+query.value(7).toInt();
                break;
            case 2:
                grade2++;
                borrowedBooksNum2=borrowedBooksNum2+query.value(7).toInt();
                break;
            case 3:
                grade3++;
                borrowedBooksNum3=borrowedBooksNum3+query.value(7).toInt();
                break;
            case 4:
                grade4++;
                borrowedBooksNum4=borrowedBooksNum4+query.value(7).toInt();
            case 5:
                grade5++;
                borrowedBooksNum5=borrowedBooksNum5+query.value(7).toInt();
            case 6:
                grade6++;
                borrowedBooksNum6=borrowedBooksNum6+query.value(7).toInt();
            case 7:
                grade7++;
                borrowedBooksNum7=borrowedBooksNum7+query.value(7).toInt();
            default:
                QMessageBox::warning(this,"学院信息有误！","暂不存在学院信息！","确定");
                break;
            }
        }
    };
    QStandardItemModel *model = new QStandardItemModel();
    model->setHorizontalHeaderItem(0, new QStandardItem(QObject::tr("年级")));
    model->setHorizontalHeaderItem(1, new QStandardItem(QObject::tr("借阅人数量")));
    model->setHorizontalHeaderItem(2, new QStandardItem(QObject::tr("借阅书籍数量")));
    ui->tableView->setModel(model);

    ui->tableView->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Fixed);
    ui->tableView->horizontalHeader()->setSectionResizeMode(1, QHeaderView::Fixed);//列宽根据内容大小自动适应
    ui->tableView->horizontalHeader()->setSectionResizeMode(2, QHeaderView::Fixed);
    ui->tableView->setFrameShape(QFrame::NoFrame);//无边框
//    //设置表格的各列的宽度值
    ui->tableView->setColumnWidth(0,500);
    ui->tableView->setColumnWidth(1,500);
    ui->tableView->setColumnWidth(2,500);
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers); //设置成不可编辑

    model->setItem(0,0,new QStandardItem("大一"));
    model->setItem(0,1,new QStandardItem(QString::number(grade1)));
    model->setItem(0,2,new QStandardItem(QString::number(borrowedBooksNum1)));

    model->setItem(0,0,new QStandardItem("大二"));
    model->setItem(0,1,new QStandardItem(QString::number(grade2)));
    model->setItem(0,2,new QStandardItem(QString::number(borrowedBooksNum2)));

    model->setItem(0,0,new QStandardItem("大三"));
    model->setItem(0,1,new QStandardItem(QString::number(grade3)));
    model->setItem(0,2,new QStandardItem(QString::number(borrowedBooksNum3)));

    model->setItem(0,0,new QStandardItem("大四"));
    model->setItem(0,1,new QStandardItem(QString::number(grade4)));
    model->setItem(0,2,new QStandardItem(QString::number(borrowedBooksNum4)));

    model->setItem(0,0,new QStandardItem("研究生"));
    model->setItem(0,1,new QStandardItem(QString::number(grade5)));
    model->setItem(0,2,new QStandardItem(QString::number(borrowedBooksNum5)));

    model->setItem(0,0,new QStandardItem("博士生"));
    model->setItem(0,1,new QStandardItem(QString::number(grade6)));
    model->setItem(0,2,new QStandardItem(QString::number(borrowedBooksNum6)));

    model->setItem(0,0,new QStandardItem("老师"));
    model->setItem(0,1,new QStandardItem(QString::number(grade7)));
    model->setItem(0,2,new QStandardItem(QString::number(borrowedBooksNum7)));
}

void StatisticInfo::on_sex_Btn_clicked()
{
    QStandardItemModel *model = new QStandardItemModel();
    model->setHorizontalHeaderItem(0, new QStandardItem(QObject::tr("性别")));
    model->setHorizontalHeaderItem(1, new QStandardItem(QObject::tr("借阅人数量")));
    model->setHorizontalHeaderItem(2, new QStandardItem(QObject::tr("借阅书籍数量")));
    ui->tableView->setModel(model);

    ui->tableView->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Fixed);
    ui->tableView->horizontalHeader()->setSectionResizeMode(1, QHeaderView::Fixed);//列宽根据内容大小自动适应
    ui->tableView->horizontalHeader()->setSectionResizeMode(2, QHeaderView::Fixed);
    ui->tableView->setFrameShape(QFrame::NoFrame);//无边框
//    //设置表格的各列的宽度值
    ui->tableView->setColumnWidth(0,500);
    ui->tableView->setColumnWidth(1,500);
    ui->tableView->setColumnWidth(2,500);
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers); //设置成不可编辑
}

void StatisticInfo::on_favorite_Btn_clicked()
{

}
