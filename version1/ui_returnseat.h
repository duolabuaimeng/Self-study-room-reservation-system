/********************************************************************************
** Form generated from reading UI file 'returnseat.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RETURNSEAT_H
#define UI_RETURNSEAT_H

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

class Ui_ReturnSeat
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *label;
    QTableView *tableView;
    QPushButton *pushButton;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton_2;

    void setupUi(QMainWindow *ReturnSeat)
    {
        if (ReturnSeat->objectName().isEmpty())
            ReturnSeat->setObjectName(QString::fromUtf8("ReturnSeat"));
        ReturnSeat->resize(1409, 945);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/0001.png"), QSize(), QIcon::Normal, QIcon::Off);
        ReturnSeat->setWindowIcon(icon);
        ReturnSeat->setStyleSheet(QString::fromUtf8("#centralwidget{\n"
"background:url(:/res/0000_3.jpg);\n"
"}"));
        centralwidget = new QWidget(ReturnSeat);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(120, 100, 1221, 811));
        frame->setStyleSheet(QString::fromUtf8("QFrame{\n"
"background:rgba(253,116,0,0.5);\n"
"border:2px solid #002D40;\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        pushButton_3 = new QPushButton(frame);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(900, 280, 121, 41));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background:#FFE11A;\n"
"border-radius:15px;\n"
"font-size:28px;\n"
"font-family:Microsoft JhengHei;\n"
"}\n"
"QPushButton:hover{\n"
"background:#FD7400;\n"
"border-radius:15px;\n"
"font-size:28px;\n"
"font-family:Microsoft JhengHei;\n"
"}\n"
""));
        pushButton_4 = new QPushButton(frame);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(1060, 280, 121, 41));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background:#FFE11A;\n"
"border-radius:15px;\n"
"font-size:28px;\n"
"font-family:Microsoft JhengHei;\n"
"}\n"
"QPushButton:hover{\n"
"background:#FD7400;\n"
"border-radius:15px;\n"
"font-size:28px;\n"
"font-family:Microsoft JhengHei;\n"
"}\n"
""));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(540, 50, 161, 81));
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
        pushButton->setGeometry(QRect(1060, 580, 121, 121));
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
        lineEdit_2->setGeometry(QRect(900, 480, 291, 71));
        lineEdit_2->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"background:rgba(255,225,26,0.5);\n"
"border-radius:15px;\n"
"color:#000000;\n"
"font-size:40px;\n"
"font-family:Microsoft JhengHei;\n"
"border:2px solid #002D40;\n"
"}"));
        lineEdit_3 = new QLineEdit(frame);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(900, 180, 281, 71));
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
        pushButton_2->setGeometry(QRect(910, 580, 121, 121));
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
        ReturnSeat->setCentralWidget(centralwidget);

        retranslateUi(ReturnSeat);

        QMetaObject::connectSlotsByName(ReturnSeat);
    } // setupUi

    void retranslateUi(QMainWindow *ReturnSeat)
    {
        ReturnSeat->setWindowTitle(QApplication::translate("ReturnSeat", "\345\275\222\350\277\230\345\272\247\344\275\215", nullptr));
        pushButton_3->setText(QApplication::translate("ReturnSeat", "\346\237\245\350\257\242", nullptr));
        pushButton_4->setText(QApplication::translate("ReturnSeat", "\346\230\276\347\244\272\345\205\250\351\203\250", nullptr));
        label->setText(QApplication::translate("ReturnSeat", "\350\277\230\345\272\247", nullptr));
        pushButton->setText(QApplication::translate("ReturnSeat", "\350\277\224\345\233\236", nullptr));
        lineEdit_2->setText(QString());
        lineEdit_2->setPlaceholderText(QApplication::translate("ReturnSeat", "\350\276\223\345\205\245\345\275\222\350\277\230\346\225\231\345\256\244\345\217\267", nullptr));
        lineEdit_3->setText(QString());
        lineEdit_3->setPlaceholderText(QApplication::translate("ReturnSeat", "\350\276\223\345\205\245\346\225\231\345\256\244\345\220\215\346\237\245\350\257\242", nullptr));
        pushButton_2->setText(QApplication::translate("ReturnSeat", "\345\275\222\350\277\230", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReturnSeat: public Ui_ReturnSeat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RETURNSEAT_H
