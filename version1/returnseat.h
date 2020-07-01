#ifndef RETURNBOOK_H
#define RETURNBOOK_H

#include"main.h"
#include <QMainWindow>

namespace Ui {
class QSqlTableModel;

class ReturnSeat;
}

class ReturnSeat : public QMainWindow
{
    Q_OBJECT

public:
    explicit ReturnSeat(QWidget *parent = nullptr);
    ~ReturnSeat();


    QSqlQueryModel *model;

    void showAll();

signals:
    void ReturnBookBack();

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::ReturnSeat *ui;
};

#endif // RETURNBOOK_H
