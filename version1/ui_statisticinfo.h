/********************************************************************************
** Form generated from reading UI file 'statisticinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATISTICINFO_H
#define UI_STATISTICINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StatisticInfo
{
public:
    QWidget *centralwidget;
    QTableView *tableView;
    QPushButton *pushButton_4;
    QLabel *label;
    QPushButton *sex_Btn;
    QPushButton *class_Btn;
    QPushButton *department_Btn;
    QPushButton *favorite_Btn;

    void setupUi(QMainWindow *StatisticInfo)
    {
        if (StatisticInfo->objectName().isEmpty())
            StatisticInfo->setObjectName(QString::fromUtf8("StatisticInfo"));
        StatisticInfo->resize(1998, 966);
        StatisticInfo->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(StatisticInfo);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(20, 110, 1501, 831));
        tableView->setStyleSheet(QString::fromUtf8("QTableView{\n"
"    background:rgba(0,0,0,0);\n"
"	\n"
"}\n"
""));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(1700, 580, 121, 121));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background:#ff8c69;\n"
"border-radius:60px;\n"
"font-size:25px;\n"
"font-family:Microsoft JhengHei;\n"
"}\n"
"QPushButton:hover{\n"
"border-radius:60px;\n"
"background:#FF6F69;\n"
"font-size:25px;\n"
"font-family:Microsoft JhengHei;\n"
"}\n"
""));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(750, 10, 371, 81));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:	#000001;\n"
"border:none;\n"
"font-size:80px;\n"
"font-family:Microsoft JhengHei;\n"
"background:transparent;\n"
"}\n"
""));
        sex_Btn = new QPushButton(centralwidget);
        sex_Btn->setObjectName(QString::fromUtf8("sex_Btn"));
        sex_Btn->setGeometry(QRect(1650, 360, 211, 81));
        sex_Btn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background:#ff6f69;\n"
"border-radius:15px;\n"
"font-size:40px;\n"
"font-family:Microsoft JhengHei;\n"
"}\n"
"QPushButton:hover{\n"
"background:#FF6F69;\n"
"border-radius:10px;\n"
"font-size:40px;\n"
"font-family:Microsoft JhengHei;\n"
"}\n"
""));
        class_Btn = new QPushButton(centralwidget);
        class_Btn->setObjectName(QString::fromUtf8("class_Btn"));
        class_Btn->setGeometry(QRect(1650, 240, 211, 81));
        class_Btn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background:#ff6f69;\n"
"border-radius:15px;\n"
"font-size:40px;\n"
"font-family:Microsoft JhengHei;\n"
"}\n"
"QPushButton:hover{\n"
"background:#FF6F69;\n"
"border-radius:10px;\n"
"font-size:40px;\n"
"font-family:Microsoft JhengHei;\n"
"}\n"
""));
        department_Btn = new QPushButton(centralwidget);
        department_Btn->setObjectName(QString::fromUtf8("department_Btn"));
        department_Btn->setGeometry(QRect(1650, 120, 211, 81));
        department_Btn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background:#ff6f69;\n"
"border-radius:15px;\n"
"font-size:40px;\n"
"font-family:Microsoft JhengHei;\n"
"}\n"
"QPushButton:hover{\n"
"background:#FF6F69;\n"
"border-radius:10px;\n"
"font-size:40px;\n"
"font-family:Microsoft JhengHei;\n"
"}\n"
""));
        favorite_Btn = new QPushButton(centralwidget);
        favorite_Btn->setObjectName(QString::fromUtf8("favorite_Btn"));
        favorite_Btn->setGeometry(QRect(1560, 470, 391, 81));
        favorite_Btn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background:#ff6f69;\n"
"border-radius:15px;\n"
"font-size:40px;\n"
"font-family:Microsoft JhengHei;\n"
"}\n"
"QPushButton:hover{\n"
"background:#FF6F69;\n"
"border-radius:10px;\n"
"font-size:40px;\n"
"font-family:Microsoft JhengHei;\n"
"}\n"
""));
        StatisticInfo->setCentralWidget(centralwidget);

        retranslateUi(StatisticInfo);

        QMetaObject::connectSlotsByName(StatisticInfo);
    } // setupUi

    void retranslateUi(QMainWindow *StatisticInfo)
    {
        StatisticInfo->setWindowTitle(QApplication::translate("StatisticInfo", "MainWindow", nullptr));
        pushButton_4->setText(QApplication::translate("StatisticInfo", "\350\277\224\345\233\236", nullptr));
        label->setText(QApplication::translate("StatisticInfo", "\344\277\241\346\201\257\347\273\237\350\256\241", nullptr));
        sex_Btn->setText(QApplication::translate("StatisticInfo", "\346\214\211\346\200\247\345\210\253\347\273\237\350\256\241", nullptr));
        class_Btn->setText(QApplication::translate("StatisticInfo", "\346\214\211\345\271\264\347\272\247\347\273\237\350\256\241", nullptr));
        department_Btn->setText(QApplication::translate("StatisticInfo", "\346\214\211\345\255\246\351\231\242\347\273\237\350\256\241", nullptr));
        favorite_Btn->setText(QApplication::translate("StatisticInfo", "\346\234\200\345\217\227\346\254\242\350\277\216\347\232\204\344\270\211\346\234\254\345\233\276\344\271\246", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StatisticInfo: public Ui_StatisticInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATISTICINFO_H
