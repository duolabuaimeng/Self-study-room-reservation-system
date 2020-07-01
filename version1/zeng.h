#ifndef ZENG_H
#define ZENG_H

#include <QWidget>
#include "main.h"
#include <QPushButton>
namespace Ui {
class zeng;
}

class zeng : public QWidget
{
    Q_OBJECT

public:
    explicit zeng(QWidget *parent = 0);
    ~zeng();
signals:
    void zengback();

private:
    Ui::zeng *ui;

private slots:
    void on_pushButton_3_clicked();//提交
    void on_pushButton_2_clicked();//取消
};

#endif // ZENG_H
