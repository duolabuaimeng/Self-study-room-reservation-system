/********************************************************************************
** Form generated from reading UI file 'readerpenalty.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_READERPENALTY_H
#define UI_READERPENALTY_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ReaderPenalty
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QLabel *label;
    QTableView *tableView;
    QPushButton *pushButton;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit_4;

    void setupUi(QMainWindow *ReaderPenalty)
    {
        if (ReaderPenalty->objectName().isEmpty())
            ReaderPenalty->setObjectName(QString::fromUtf8("ReaderPenalty"));
        ReaderPenalty->resize(1597, 905);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/0006.png"), QSize(), QIcon::Normal, QIcon::Off);
        ReaderPenalty->setWindowIcon(icon);
        ReaderPenalty->setStyleSheet(QString::fromUtf8("#centralwidget{\n"
"background:url(:/res/0000_3.jpg);\n"
"}"));
        centralwidget = new QWidget(ReaderPenalty);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(110, 60, 1291, 811));
        frame->setStyleSheet(QString::fromUtf8("QFrame{\n"
"background:rgba(253,116,0,0.5);\n"
"border:2px solid #002D40;\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(540, 50, 331, 81));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:	#000001;\n"
"border:none;\n"
"font-size:80px;\n"
"font-family:Microsoft JhengHei;\n"
"background:transparent;\n"
"}\n"
""));
        tableView = new QTableView(frame);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(50, 180, 811, 591));
        tableView->setStyleSheet(QString::fromUtf8("*{\n"
"	background:rgba(255,225,26,0.5);\n"
"	font-size:20px;\n"
"	color:black;\n"
"	font-family:Microsoft JhengHei;\n"
"}\n"
"QHeaderView::section{\n"
"	background:rgba(255,225,26,0.5);\n"
"	font-size:20px;\n"
"	color:black;\n"
"	font-family:Microsoft JhengHei;\n"
"}\n"
"QHeaderView{\n"
"	min-height:30px;\n"
"	background:rgba(255,225,26,0.5);\n"
"	font-size:20px;\n"
"	color:black;\n"
"	font-family:Microsoft JhengHei;\n"
"}\n"
""));
        tableView->setSortingEnabled(false);
        tableView->horizontalHeader()->setMinimumSectionSize(45);
        tableView->verticalHeader()->setVisible(false);
        tableView->verticalHeader()->setMinimumSectionSize(45);
        tableView->verticalHeader()->setDefaultSectionSize(45);
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(1090, 540, 121, 121));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        lineEdit_2 = new QLineEdit(frame);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(900, 390, 321, 71));
        lineEdit_2->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"background:rgba(255,225,26,0.5);\n"
"border-radius:15px;\n"
"color:#000000;\n"
"font-size:40px;\n"
"font-family:Microsoft JhengHei;\n"
"border:2px solid #002D40;\n"
"}"));
        lineEdit_2->setEchoMode(QLineEdit::Password);
        lineEdit_3 = new QLineEdit(frame);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(900, 280, 321, 71));
        lineEdit_3->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"background:rgba(255,225,26,0.5);\n"
"border-radius:15px;\n"
"color:#000000;\n"
"font-size:40px;\n"
"font-family:Microsoft JhengHei;\n"
"border:2px solid #002D40;\n"
"}"));
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(910, 540, 121, 121));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background:#96CA2D;\n"
"border-radius:60px;\n"
"font-size:28px;\n"
"font-family:Microsoft JhengHei;\n"
"}\n"
"QPushButton:hover{\n"
"background:#168039;\n"
"border-radius:60px;\n"
"font-size:28px;\n"
"font-family:Microsoft JhengHei;\n"
"}\n"
""));
        lineEdit_4 = new QLineEdit(frame);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(910, 190, 301, 61));
        lineEdit_4->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"background:transparent;\n"
"color:#002D40;\n"
"font-size:40px;\n"
"font-family:Microsoft JhengHei;\n"
"border:1px solid #002D40;\n"
"}"));
        ReaderPenalty->setCentralWidget(centralwidget);

        retranslateUi(ReaderPenalty);

        QMetaObject::connectSlotsByName(ReaderPenalty);
    } // setupUi

    void retranslateUi(QMainWindow *ReaderPenalty)
    {
        ReaderPenalty->setWindowTitle(QApplication::translate("ReaderPenalty", "\347\275\232\351\207\221\347\273\223\346\270\205", nullptr));
        label->setText(QApplication::translate("ReaderPenalty", "\347\275\232\351\207\221\347\273\223\346\270\205", nullptr));
        pushButton->setText(QApplication::translate("ReaderPenalty", "\350\277\224\345\233\236", nullptr));
        lineEdit_2->setText(QString());
        lineEdit_2->setPlaceholderText(QApplication::translate("ReaderPenalty", "\350\276\223\345\205\245\346\240\241\345\233\255\345\215\241\345\257\206\347\240\201", nullptr));
        lineEdit_3->setText(QString());
        lineEdit_3->setPlaceholderText(QApplication::translate("ReaderPenalty", "\350\276\223\345\205\245\346\240\241\345\233\255\345\215\241\350\264\246\345\217\267", nullptr));
        pushButton_2->setText(QApplication::translate("ReaderPenalty", "\347\273\223\346\270\205", nullptr));
        lineEdit_4->setText(QString());
        lineEdit_4->setPlaceholderText(QString());
    } // retranslateUi

};

namespace Ui {
    class ReaderPenalty: public Ui_ReaderPenalty {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_READERPENALTY_H
