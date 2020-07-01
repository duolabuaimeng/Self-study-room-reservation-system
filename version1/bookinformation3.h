#ifndef BOOKINFORMATION3_H
#define BOOKINFORMATION3_H

#include <QMainWindow>
#include <main.h>
#include <QPushButton>
namespace Ui {
class bookinformation3;
}

class bookinformation3 : public QMainWindow
{
    Q_OBJECT

public:
    explicit bookinformation3(QWidget *parent = nullptr);
    ~bookinformation3();
    //图书信息显示;
    void Bookshow();
    void Tableshow(QString query);

    void Tableshow2(QString query);

signals:
    //发出返回的信号
    void BookInformation3Back();
private slots:

    void on_pushButton_clicked();//搜索
    void on_pushButton_1_clicked();//返回

    void on_pushButton_2_clicked();//返回
    void on_pushButton_3_clicked();//返回

private:
    Ui::bookinformation3 *ui;
};

#endif // BOOKINFORMATION3_H
