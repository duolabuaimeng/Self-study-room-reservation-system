#ifndef READERPENALTY_H
#define READERPENALTY_H

#include"main.h"
#include <QMainWindow>

namespace Ui {
class ReaderPenalty;
}

class ReaderPenalty : public QMainWindow
{
    Q_OBJECT

public:
    explicit ReaderPenalty(QWidget *parent = nullptr);
    ~ReaderPenalty();

    void showAll();
    void payBills();
    QSqlQueryModel *model;

    int locks=0;
signals:
    void ReaderPenaltyBack();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::ReaderPenalty *ui;
};

#endif // READERPENALTY_H
