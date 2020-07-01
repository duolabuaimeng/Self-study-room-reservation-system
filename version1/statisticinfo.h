#ifndef STATISTICINFO_H
#define STATISTICINFO_H

#include "main.h"
#include <QMainWindow>
#include <QPushButton>
#include <zeng.h>
#include <gai.h>
#include <QStandardItemModel>
#include <QtDebug>
#include <QHeaderView>
namespace Ui {
class StatisticInfo;
}

class StatisticInfo : public QMainWindow
{
    Q_OBJECT

public:
    explicit StatisticInfo(QWidget *parent = 0);
    ~StatisticInfo();

    zeng* Zeng;
    gai* Gai;

    //图书信息显示;
    void StaticticInfoshow();
    void Tableshow(int num2, int num3, int num4);
    void Dbook();
    void Infoshow();

signals:
    void StatisticInfoBack();

private slots:
    void on_pushButton_4_clicked();

    void on_department_Btn_clicked();

    void on_class_Btn_clicked();

    void on_sex_Btn_clicked();

    void on_favorite_Btn_clicked();

private:
    Ui::StatisticInfo *ui;
};

#endif // STATISTICINFO_H
