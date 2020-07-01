/********************************************************************************
** Form generated from reading UI file 'countlist.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COUNTLIST_H
#define UI_COUNTLIST_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CountList
{
public:
    QWidget *centralwidget;
    QPushButton *favorite_Btn;
    QPushButton *sex_Btn;
    QPushButton *pushButton_4;
    QLabel *label;
    QTableView *tableView;
    QPushButton *class_Btn;
    QPushButton *department_Btn;
    QPushButton *fines_Btn;

    void setupUi(QMainWindow *CountList)
    {
        if (CountList->objectName().isEmpty())
            CountList->setObjectName(QString::fromUtf8("CountList"));
        CountList->resize(2000, 1028);
        CountList->setStyleSheet(QString::fromUtf8("background:url(:/res/backup.jpg)"));
        centralwidget = new QWidget(CountList);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        favorite_Btn = new QPushButton(centralwidget);
        favorite_Btn->setObjectName(QString::fromUtf8("favorite_Btn"));
        favorite_Btn->setGeometry(QRect(1580, 530, 291, 81));
        favorite_Btn->setStyleSheet(QString::fromUtf8("QPushButton\n"
"\n"
"{\n"
"font: 16pt \"Ink Free\";\n"
"background:rgba(121,0,255,0.20);\n"
"border-radius:26px;\n"
"}\n"
"QPushButton:hover{\n"
"background:rgba(255,50,157,0.4);\n"
"border-radius:26px;\n"
"\n"
"}\n"
""));
        sex_Btn = new QPushButton(centralwidget);
        sex_Btn->setObjectName(QString::fromUtf8("sex_Btn"));
        sex_Btn->setGeometry(QRect(1580, 410, 281, 81));
        sex_Btn->setStyleSheet(QString::fromUtf8("QPushButton\n"
"\n"
"{\n"
"font: 16pt \"Ink Free\";\n"
"background:rgba(121,0,255,0.20);\n"
"border-radius:26px;\n"
"}\n"
"QPushButton:hover{\n"
"background:rgba(255,50,157,0.4);\n"
"border-radius:26px;\n"
"\n"
"}\n"
""));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(1670, 810, 131, 121));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"\n"
"background:rgba(1,222,255,0.25);\n"
"border-radius:50px;\n"
"}\n"
"QPushButton:hover{\n"
"background:rgba(255,255,157,0.70);\n"
"border-radius:50px;\n"
"\n"
"}\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/LW_8.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon);
        pushButton_4->setIconSize(QSize(100, 100));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(730, 40, 371, 81));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:	#000001;\n"
"border:none;\n"
"font-size:80px;\n"
"color:orange;\n"
"font-family:Microsoft JhengHei;\n"
"background:transparent;\n"
"}\n"
""));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(20, 130, 1501, 831));
        tableView->setStyleSheet(QString::fromUtf8("\n"
"*{\n"
"    background:rgba(255,255,157,0.80);\n"
"	font-size:20px;\n"
"	color:black;\n"
"	font-family:Microsoft JhengHei;\n"
"}\n"
"QHeaderView::section{\n"
"    background:rgba(255,255,157,0.90);\n"
"	font-size:20px;\n"
"	color:black;\n"
"	font-family:Microsoft JhengHei;\n"
"}\n"
"QHeaderView{\n"
"	min-height:30px;\n"
"    background:rgba(255,255,157,0.80);\n"
"	font-size:20px;\n"
"	color:black;\n"
"	font-family:Microsoft JhengHei;\n"
"}\n"
""));
        class_Btn = new QPushButton(centralwidget);
        class_Btn->setObjectName(QString::fromUtf8("class_Btn"));
        class_Btn->setGeometry(QRect(1580, 290, 281, 81));
        class_Btn->setStyleSheet(QString::fromUtf8("QPushButton\n"
"\n"
"{\n"
"font: 16pt \"Ink Free\";\n"
"background:rgba(121,0,255,0.20);\n"
"border-radius:26px;\n"
"}\n"
"QPushButton:hover{\n"
"background:rgba(255,50,157,0.4);\n"
"border-radius:26px;\n"
"\n"
"}\n"
""));
        department_Btn = new QPushButton(centralwidget);
        department_Btn->setObjectName(QString::fromUtf8("department_Btn"));
        department_Btn->setGeometry(QRect(1580, 170, 281, 81));
        department_Btn->setStyleSheet(QString::fromUtf8("QPushButton\n"
"\n"
"{\n"
"font: 16pt \"Ink Free\";\n"
"background:rgba(121,0,255,0.20);\n"
"border-radius:26px;\n"
"}\n"
"QPushButton:hover{\n"
"background:rgba(255,50,157,0.4);\n"
"border-radius:26px;\n"
"\n"
"}\n"
""));
        fines_Btn = new QPushButton(centralwidget);
        fines_Btn->setObjectName(QString::fromUtf8("fines_Btn"));
        fines_Btn->setGeometry(QRect(1580, 670, 291, 81));
        fines_Btn->setStyleSheet(QString::fromUtf8("QPushButton\n"
"\n"
"{\n"
"font: 16pt \"Ink Free\";\n"
"background:rgba(121,0,255,0.20);\n"
"border-radius:26px;\n"
"}\n"
"QPushButton:hover{\n"
"background:rgba(255,50,157,0.4);\n"
"border-radius:26px;\n"
"\n"
"}\n"
""));
        CountList->setCentralWidget(centralwidget);

        retranslateUi(CountList);

        QMetaObject::connectSlotsByName(CountList);
    } // setupUi

    void retranslateUi(QMainWindow *CountList)
    {
        CountList->setWindowTitle(QApplication::translate("CountList", "MainWindow", nullptr));
        favorite_Btn->setText(QApplication::translate("CountList", "\346\234\200\345\217\227\346\254\242\350\277\216\347\232\204\344\270\211\346\234\254\345\233\276\344\271\246", nullptr));
        sex_Btn->setText(QApplication::translate("CountList", "\346\214\211\346\200\247\345\210\253\347\273\237\350\256\241", nullptr));
        pushButton_4->setText(QString());
        label->setText(QApplication::translate("CountList", "\344\277\241\346\201\257\347\273\237\350\256\241", nullptr));
        class_Btn->setText(QApplication::translate("CountList", "\346\214\211\345\271\264\347\272\247\347\273\237\350\256\241", nullptr));
        department_Btn->setText(QApplication::translate("CountList", "\346\214\211\345\255\246\351\231\242\347\273\237\350\256\241", nullptr));
        fines_Btn->setText(QApplication::translate("CountList", "\346\237\245\347\234\213\347\275\232\351\207\221\346\203\205\345\206\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CountList: public Ui_CountList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COUNTLIST_H
