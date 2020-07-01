/********************************************************************************
** Form generated from reading UI file 'bookinformation3.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKINFORMATION3_H
#define UI_BOOKINFORMATION3_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_bookinformation3
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QComboBox *comboBox;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton_3;
    QTableView *tableView;
    QPushButton *pushButton_1;
    QTableView *tableView_2;
    QLineEdit *lineEdit_isbn;

    void setupUi(QMainWindow *bookinformation3)
    {
        if (bookinformation3->objectName().isEmpty())
            bookinformation3->setObjectName(QString::fromUtf8("bookinformation3"));
        bookinformation3->resize(1911, 1076);
        bookinformation3->setStyleSheet(QString::fromUtf8("#centralwidget{\n"
"background:url(:/res/LW (2).jpg);\n"
"}"));
        centralwidget = new QWidget(bookinformation3);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(360, 40, 81, 61));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background:rgba(255,255,157,0.70);\n"
"border-radius:26px;\n"
"}\n"
"QPushButton:hover{\n"
"background:#FFE11A;\n"
"border-radius:26px;\n"
"\n"
"}\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/0003.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(30, 30));
        comboBox = new QComboBox(centralwidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(460, 50, 161, 61));
        comboBox->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"font-size:40px;\n"
"font-family:Microsoft JhengHei;\n"
"background:rgba(255,255,157,0.50);\n"
"border-radius:0px;\n"
"}\n"
"\n"
"\n"
"\n"
"/* \344\270\213\346\213\211\345\220\216\357\274\214\346\225\264\344\270\252\344\270\213\346\213\211\347\252\227\344\275\223\350\266\212\350\277\207\346\257\217\351\241\271\347\232\204\346\240\267\345\274\217 */\n"
"QComboBox QAbstractItemView::item:hover {\n"
"color:black;\n"
"font-size:40px;\n"
"font-family:Microsoft JhengHei;\n"
"background:rgba(0,0,0,0);\n"
"border-radius:0px;  /* \346\225\264\344\270\252\344\270\213\346\213\211\347\252\227\344\275\223\350\266\212\350\277\207\346\257\217\351\241\271\347\232\204\350\203\214\346\231\257\350\211\262 */\n"
"}\n"
"\n"
"\n"
"QComboBox QAbstractItemView::item:selected {\n"
"font-size:40px;\n"
"font-family:Microsoft JhengHei;\n"
"background:rgba(255,255,157,0.50);\n"
"border-radius:0px;\n"
"}"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(1100, 50, 311, 61));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font: 25pt \"Arial\";\n"
"background:rgba(237, 255, 255,0.70);\n"
"border-radius:26px;\n"
"}\n"
"QPushButton:hover{\n"
"background:rgba(121,0,255,0.20);\n"
"border-radius:26px;\n"
"\n"
"}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/res/0007 (6).png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);
        pushButton_2->setIconSize(QSize(50, 50));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(0, 40, 441, 61));
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"font-size:40px;\n"
"font-family:Microsoft JhengHei;\n"
"\n"
"background:rgba(255,255,157,0.50);\n"
"border-radius:25px;\n"
"}\n"
"\n"
"\n"
"\n"
"QLineEdit::hover\n"
"{\n"
"\n"
"  color:green\n"
"  border-color:rgb(50,480,40);\n"
"  background-color:green;\n"
"}\n"
""));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(1680, 50, 171, 61));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font: 25pt \"Arial\";\n"
"background:rgba(237, 255, 255,0.70);\n"
"border-radius:26px;\n"
"}\n"
"QPushButton:hover{\n"
"background:rgba(121,0,255,0.20);\n"
"border-radius:26px;\n"
"\n"
"}"));
        pushButton_3->setIcon(icon1);
        pushButton_3->setIconSize(QSize(50, 50));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(0, 140, 851, 941));
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
"\n"
""));
        pushButton_1 = new QPushButton(centralwidget);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setGeometry(QRect(650, 50, 151, 61));
        pushButton_1->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    background:rgba(255,255,157,0.70);\n"
"border-radius:15px;\n"
"font-size:30px;\n"
"font-family:Microsoft JhengHei;\n"
"}\n"
"QPushButton:hover{\n"
"background:#FFE11A;\n"
"border-radius:15px;\n"
"font-size:30px;\n"
"font-family:Microsoft JhengHei;\n"
"}\n"
""));
        tableView_2 = new QTableView(centralwidget);
        tableView_2->setObjectName(QString::fromUtf8("tableView_2"));
        tableView_2->setGeometry(QRect(850, 140, 1091, 951));
        tableView_2->setStyleSheet(QString::fromUtf8("\n"
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
"\n"
""));
        lineEdit_isbn = new QLineEdit(centralwidget);
        lineEdit_isbn->setObjectName(QString::fromUtf8("lineEdit_isbn"));
        lineEdit_isbn->setGeometry(QRect(830, 60, 251, 41));
        bookinformation3->setCentralWidget(centralwidget);
        lineEdit->raise();
        pushButton->raise();
        comboBox->raise();
        pushButton_2->raise();
        pushButton_3->raise();
        tableView->raise();
        pushButton_1->raise();
        tableView_2->raise();
        lineEdit_isbn->raise();

        retranslateUi(bookinformation3);

        QMetaObject::connectSlotsByName(bookinformation3);
    } // setupUi

    void retranslateUi(QMainWindow *bookinformation3)
    {
        bookinformation3->setWindowTitle(QApplication::translate("bookinformation3", "MainWindow", nullptr));
        pushButton->setText(QString());
        comboBox->setItemText(0, QApplication::translate("bookinformation3", "\344\271\246\345\220\215", nullptr));
        comboBox->setItemText(1, QApplication::translate("bookinformation3", "\344\275\234\350\200\205\345\220\215", nullptr));
        comboBox->setItemText(2, QApplication::translate("bookinformation3", "\347\261\273\345\210\253", nullptr));
        comboBox->setItemText(3, QApplication::translate("bookinformation3", "\345\233\276\344\271\246\345\217\267", nullptr));

        pushButton_2->setText(QApplication::translate("bookinformation3", "\346\237\245\347\234\213\345\200\237\351\230\205\344\277\241\346\201\257", nullptr));
        lineEdit->setInputMask(QString());
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QApplication::translate("bookinformation3", "   \346\220\234\347\264\242", nullptr));
        pushButton_3->setText(QApplication::translate("bookinformation3", "  \350\277\224  \345\233\236", nullptr));
        pushButton_1->setText(QApplication::translate("bookinformation3", "\346\230\276\347\244\272\345\205\250\351\203\250", nullptr));
        lineEdit_isbn->setText(QString());
        lineEdit_isbn->setPlaceholderText(QApplication::translate("bookinformation3", "\350\257\267\350\276\223\345\205\245isbn\345\217\267", nullptr));
    } // retranslateUi

};

namespace Ui {
    class bookinformation3: public Ui_bookinformation3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKINFORMATION3_H
