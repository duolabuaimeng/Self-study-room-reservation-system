#ifndef BACKUP_H
#define BACKUP_H

#include <QMainWindow>
#include <main.h>
namespace Ui {
class Backup;
}

class Backup : public QMainWindow
{
    Q_OBJECT

public:
    explicit Backup(QWidget *parent = 0);
    ~Backup();
    void roadshow();
signals:
    void BackupBack();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_6_clicked();
    void on_pushButton_7_clicked();
    void on_pushButton_8_clicked();
    void on_pushButton_9_clicked();
    void on_pushButton_10_clicked();
    void on_pushButton_11_clicked();
    void on_pushButton_12_clicked();
    void on_pushButton_13_clicked();
    void on_pushButton_14_clicked();
    void on_pushButton_15_clicked();



private:
    Ui::Backup *ui;
    int btn;
};

#endif // BACKUP_H
