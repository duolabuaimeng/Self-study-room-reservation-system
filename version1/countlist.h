#ifndef COUNTLIST_H
#define COUNTLIST_H
#include "main.h"
#include <QMainWindow>
#include <QStandardItemModel>
#include <QtDebug>
#include <QHeaderView>
namespace Ui {
class CountList;
}

class CountList : public QMainWindow
{
    Q_OBJECT

public:
    explicit CountList(QWidget *parent = 0);
    ~CountList();
signals:
    void CountListBack();
private slots:
    void on_department_Btn_clicked();

    void on_class_Btn_clicked();

    void on_sex_Btn_clicked();

    void on_favorite_Btn_clicked();

    void on_pushButton_4_clicked();
    void on_fines_Btn_clicked();
private:
    Ui::CountList *ui;
};

#endif // COUNTLIST_H
