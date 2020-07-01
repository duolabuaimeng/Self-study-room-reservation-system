#include "countlist.h"
#include "ui_countlist.h"
#include <qdebug.h>
CountList::CountList(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CountList)
{
    ui->setupUi(this);
}

CountList::~CountList()
{
    delete ui;
}

void CountList::on_department_Btn_clicked()
{
      //QString sql;
    QString sql="SELECT r.`reader_department`,COUNT(DISTINCT r.reader_id),COUNT(*),COUNT(*)/( SELECT COUNT(*) FROM returned)"
            "FROM returned re INNER JOIN reader r "
            "ON re.`reader_id`=r.`reader_id` GROUP BY r.`reader_department`  ASC ;";

    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery(sql.toUtf8().data());
    model->setHeaderData(0, Qt::Horizontal, tr("学院编号（计算机学院：1,理学院：2,文法学院：3,生命科学学院：4）"));
    model->setHeaderData(1, Qt::Horizontal, tr("借阅人数"));
    model->setHeaderData(2, Qt::Horizontal, tr("借阅书籍数量"));
      model->setHeaderData(3, Qt::Horizontal, tr("所借书籍数量占比"));
    ui->tableView->setModel(model);
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents );//列宽根据内容大小自动适应
    ui->tableView->setFrameShape(QFrame::NoFrame);//无边框
    ui->tableView->setColumnWidth(0,400);
      ui->tableView->setColumnWidth(1,400);
      ui->tableView->setColumnWidth(2,400);
      ui->tableView->setColumnWidth(3,400);
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers); //设置成不可编辑
}

void CountList::on_class_Btn_clicked()
{

    //QString sql;
    QString sql="SELECT r.`reader_grade`,COUNT(DISTINCT r.reader_id),COUNT(*),COUNT(*)/( SELECT COUNT(*) FROM returned)"
            "FROM returned re INNER JOIN reader r "
            "ON re.`reader_id`=r.`reader_id` GROUP BY r.`reader_grade`  ASC ;";

    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery(sql.toUtf8().data());
    model->setHeaderData(0, Qt::Horizontal, tr("借阅人身份(大一：1，大二：2，大三：3，大四：4，研究生：5，博士：6，教师：7)"));
    model->setHeaderData(1, Qt::Horizontal, tr("借阅人数"));
    model->setHeaderData(2, Qt::Horizontal, tr("借阅书籍数量"));
      model->setHeaderData(3, Qt::Horizontal, tr("所借书籍数量占比"));
    ui->tableView->setModel(model);
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents );//列宽根据内容大小自动适应
    ui->tableView->setFrameShape(QFrame::NoFrame);//无边框
    ui->tableView->setColumnWidth(0,400);
      ui->tableView->setColumnWidth(1,400);
      ui->tableView->setColumnWidth(2,400);
      ui->tableView->setColumnWidth(3,400);
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers); //设置成不可编辑
}

void CountList::on_sex_Btn_clicked()
{

    //QString sql;
    QString sql="SELECT r.`reader_sex`,COUNT(DISTINCT r.reader_id),COUNT(*),COUNT(*)/( SELECT COUNT(*) FROM returned)"
            "FROM returned re INNER JOIN reader r "
            "ON re.`reader_id`=r.`reader_id` GROUP BY r.`reader_sex`  ASC ;";
   qDebug() << sql;
    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery(sql.toUtf8().data());
    model->setHeaderData(0, Qt::Horizontal, tr("借阅人姓别（男性为1，女性为2）"));
    model->setHeaderData(1, Qt::Horizontal, tr("借阅人数"));
    model->setHeaderData(2, Qt::Horizontal, tr("借阅书籍数量"));
      model->setHeaderData(3, Qt::Horizontal, tr("所借书籍数量占比"));
    ui->tableView->setModel(model);
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents );//列宽根据内容大小自动适应
    ui->tableView->setFrameShape(QFrame::NoFrame);//无边框
    ui->tableView->setColumnWidth(0,400);
      ui->tableView->setColumnWidth(1,400);
      ui->tableView->setColumnWidth(2,400);
      ui->tableView->setColumnWidth(3,400);
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers); //设置成不可编辑
//    //设置表格的各列的宽度值
}
void  CountList::on_fines_Btn_clicked()
{
    //QString sql;
    QString sql="SELECT r.`reader_name`   FROM reader r WHERE r.`reader_penalty`=1;";

    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery(sql.toUtf8().data());
    model->setHeaderData(0, Qt::Horizontal, tr("目前有罚进的借阅人姓名"));
    ui->tableView->setModel(model);
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents );//列宽根据内容大小自动适应
    ui->tableView->setFrameShape(QFrame::NoFrame);//无边框
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers); //设置成不可编辑
}
void CountList::on_favorite_Btn_clicked()
{
    //QString sql;
    QString sql="SELECT  b.`book_name`,COUNT(*)FROM borrowed   bo INNER JOIN book b ON b.`book_id`=bo.`book_id`GROUP BY b.`isbn` ORDER BY  COUNT(*) DESC LIMIT 0, 3;";

    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery(sql.toUtf8().data());
    model->setHeaderData(0, Qt::Horizontal, tr("书名"));
    model->setHeaderData(1, Qt::Horizontal, tr("借阅次数"));
    ui->tableView->setModel(model);
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents );//列宽根据内容大小自动适应
    ui->tableView->setFrameShape(QFrame::NoFrame);//无边框
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers); //设置成不可编辑

}
void CountList::on_pushButton_4_clicked()
{
    emit this->CountListBack();
}
