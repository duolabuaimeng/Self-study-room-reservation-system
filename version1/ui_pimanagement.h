/********************************************************************************
** Form generated from reading UI file 'pimanagement.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PIMANAGEMENT_H
#define UI_PIMANAGEMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PIManagement
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QGroupBox *groupBox_2;
    QLabel *label_6;
    QLineEdit *lineEdit_3;
    QLabel *label_7;
    QLineEdit *lineEdit_4;
    QGroupBox *groupBox;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *pushButton_4;

    void setupUi(QMainWindow *PIManagement)
    {
        if (PIManagement->objectName().isEmpty())
            PIManagement->setObjectName(QString::fromUtf8("PIManagement"));
        PIManagement->resize(1395, 940);
        PIManagement->setStyleSheet(QString::fromUtf8("#centralwidget{\n"
"background:url(:/res/LW_12.jpg)\n"
"}"));
        centralwidget = new QWidget(PIManagement);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(140, 100, 1021, 811));
        frame->setStyleSheet(QString::fromUtf8("QFrame{\n"
"background:rgba(255,255,157,0.70);\n"
"border-radius:15px;\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(350, 30, 351, 111));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:#00A388;\n"
"font-size:50px;\n"
"font-family:Microsoft JhengHei;\n"
"background:transparent;\n"
"}\n"
""));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(690, 650, 131, 131));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(870, 650, 131, 131));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background:#ff8c69;\n"
"border-radius:60px;\n"
"font-size:28px;\n"
"font-family:Microsoft JhengHei;\n"
"}\n"
"QPushButton:hover{\n"
"border-radius:60px;\n"
"background:#FF6F69;\n"
"font-size:28px;\n"
"font-family:Microsoft JhengHei;\n"
"}\n"
""));
        groupBox_2 = new QGroupBox(frame);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(30, 140, 801, 341));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(60, 60, 161, 91));
        label_6->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:white;\n"
"font-size:32px;\n"
"font-family:Microsoft JhengHei;\n"
"background:transparent;\n"
"}"));
        lineEdit_3 = new QLineEdit(groupBox_2);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(290, 70, 451, 61));
        lineEdit_3->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"background:transparent;\n"
"border:none;\n"
"color:#717072;\n"
"font-size:40px;\n"
"font-family:Microsoft JhengHei;\n"
"border-bottom:1px solid #717072;\n"
"}"));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(90, 220, 151, 101));
        label_7->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:white;\n"
"font-size:32px;\n"
"font-family:Microsoft JhengHei;\n"
"background:transparent;\n"
"}"));
        lineEdit_4 = new QLineEdit(groupBox_2);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(280, 230, 471, 61));
        lineEdit_4->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"background:transparent;\n"
"border:none;\n"
"color:#717072;\n"
"font-size:40px;\n"
"font-family:Microsoft JhengHei;\n"
"border-bottom:1px solid #717072;\n"
"}"));
        groupBox = new QGroupBox(frame);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(60, 130, 951, 531));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 80, 231, 71));
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:white;\n"
"font-size:32px;\n"
"font-family:Microsoft JhengHei;\n"
"background:transparent;\n"
"}"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 210, 321, 141));
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:white;\n"
"font-size:32px;\n"
"font-family:Microsoft JhengHei;\n"
"background:transparent;\n"
"}"));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(260, 80, 471, 61));
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"background:transparent;\n"
"border:none;\n"
"color:#717072;\n"
"font-size:25px;\n"
"font-family:Microsoft JhengHei;\n"
"border-bottom:1px solid #717072;\n"
"}"));
        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(252, 260, 481, 41));
        lineEdit_2->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"background:transparent;\n"
"border:none;\n"
"color:#717072;\n"
"font-size:25px;\n"
"font-family:Microsoft JhengHei;\n"
"border-bottom:1px solid #717072;\n"
"}"));
        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(630, 380, 131, 131));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background:rgb(85, 85, 255);\n"
"border-radius:60px;\n"
"font-color:white;\n"
"font-size:28px;\n"
"font-family:Microsoft JhengHei;\n"
"}\n"
"QPushButton:hover{\n"
"background:rgb(85, 255, 255);\n"
"border-radius:60px;\n"
"font-size:28px;\n"
"font-family:Microsoft JhengHei;\n"
"}\n"
""));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(530, 150, 411, 51));
        label_4->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:white;\n"
"font-size:32px;\n"
"font-family:Microsoft JhengHei;\n"
"background:transparent;\n"
"}"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(530, 320, 411, 51));
        label_5->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:white;\n"
"font-size:32px;\n"
"font-family:Microsoft JhengHei;\n"
"background:transparent;\n"
"}"));
        pushButton_4 = new QPushButton(groupBox);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(810, 380, 131, 131));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background:rgb(255, 255, 0);\n"
"border-radius:60px;\n"
"font-color:yellow;\n"
"font-size:28px;\n"
"font-family:Microsoft JhengHei;\n"
"}\n"
"QPushButton:hover{\n"
"background:rgb(85, 255, 255);\n"
"border-radius:60px;\n"
"font-size:28px;\n"
"font-family:Microsoft JhengHei;\n"
"}\n"
""));
        PIManagement->setCentralWidget(centralwidget);

        retranslateUi(PIManagement);

        QMetaObject::connectSlotsByName(PIManagement);
    } // setupUi

    void retranslateUi(QMainWindow *PIManagement)
    {
        PIManagement->setWindowTitle(QApplication::translate("PIManagement", "MainWindow", nullptr));
        label->setText(QApplication::translate("PIManagement", "<html><head/><body><p><span style=\" font-size:36pt; font-weight:600; font-style:italic; color:#5555ff;\">\344\270\252 \344\272\272 \344\277\241 \346\201\257</span></p></body></html>", nullptr));
        pushButton->setText(QApplication::translate("PIManagement", "\344\277\256\346\224\271", nullptr));
        pushButton_2->setText(QApplication::translate("PIManagement", "\350\277\224\345\233\236", nullptr));
        groupBox_2->setTitle(QString());
        label_6->setText(QApplication::translate("PIManagement", "<html><head/><body><p><span style=\" font-size:24pt; color:#aa0000;\">\347\224\250\346\210\267\345\220\215\357\274\232</span></p></body></html>", nullptr));
        label_7->setText(QApplication::translate("PIManagement", "<html><head/><body><p><span style=\" font-size:24pt; color:#aa0000;\">\345\257\206\347\240\201\357\274\232</span></p></body></html>", nullptr));
        groupBox->setTitle(QString());
        label_2->setText(QApplication::translate("PIManagement", "<html><head/><body><p><span style=\" font-size:24pt; font-weight:600; color:#ff007f;\">Username\357\274\232</span></p></body></html>", nullptr));
        label_3->setText(QApplication::translate("PIManagement", "<html><head/><body><p><span style=\" font-size:24pt; font-weight:600; color:#ff007f;\">Password\357\274\232</span></p></body></html>", nullptr));
        pushButton_3->setText(QApplication::translate("PIManagement", "\344\277\235\345\255\230", nullptr));
        label_4->setText(QApplication::translate("PIManagement", "15\344\275\215\344\273\245\345\206\205\346\225\260\345\255\227\344\270\216\345\255\227\346\257\215\347\232\204\347\273\204\345\220\210", nullptr));
        label_5->setText(QApplication::translate("PIManagement", "15\344\275\215\344\273\245\345\206\205\346\225\260\345\255\227\344\270\216\345\255\227\346\257\215\347\232\204\347\273\204\345\220\210", nullptr));
        pushButton_4->setText(QApplication::translate("PIManagement", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PIManagement: public Ui_PIManagement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PIMANAGEMENT_H
