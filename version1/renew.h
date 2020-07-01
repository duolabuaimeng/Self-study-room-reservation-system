#ifndef RENEW_H
#define RENEW_H

#include"main.h"
#include <QMainWindow>

namespace Ui {
class Renew;
}

class Renew : public QMainWindow
{
    Q_OBJECT

public:
    explicit Renew(QWidget *parent = nullptr);
    ~Renew();

    QSqlQueryModel *model;
    void showAll();

signals:
    void RenewBack();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Renew *ui;
};

#endif // RENEW_H
