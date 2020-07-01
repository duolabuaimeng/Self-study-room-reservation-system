#ifndef GAI_H
#define GAI_H

#include <QCloseEvent>
#include <QWidget>
#include "main.h"

namespace Ui {
class gai;
}

class gai : public QWidget
{
    Q_OBJECT

public:
    explicit gai(QWidget *parent = 0);
    ~gai();
    void gaishow();
signals:
    void gaiback();

private slots:
    void on_pushButton_3_clicked();//提交
    void on_pushButton_2_clicked();//取消

private:
    Ui::gai *ui;

protected:
    void closeEvent(QCloseEvent *event);
};

#endif // GAI_H
