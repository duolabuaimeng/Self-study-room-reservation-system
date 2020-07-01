#ifndef BOOKINFORMATION_H
#define BOOKINFORMATION_H

#include <main.h>
#include <QMainWindow>
#include <QPushButton>
#include "checkborrowbooks.h"
#include <zeng.h>
#include <gai.h>


namespace Ui {
class BookInformation;

}

class BookInformation : public QMainWindow
{
    Q_OBJECT

public:
    explicit BookInformation(QWidget *parent = 0);
    ~BookInformation();

    zeng* Zeng;
    gai* Gai;

    //图书信息显示;
    void Bookshow();
    void Tableshow(QString query);
    void Dbook();


     void Tableshow2(QString query);
signals:
    //发出返回的信号
    void BookInformationBack();


private slots:

    void on_pushButton_clicked();//搜索
    void on_pushButton_2_clicked();//返回
    void on_pushButton_3_clicked();//删除
    void on_pushButton_4_clicked();//增加
    void on_pushButton_5_clicked();//修改


    void on_pushButton_6_clicked();

private:



   Ui::BookInformation *ui;



};

#endif // BOOKINFORMATION_H
