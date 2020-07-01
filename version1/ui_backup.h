/********************************************************************************
** Form generated from reading UI file 'backup.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BACKUP_H
#define UI_BACKUP_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Backup
{
public:
    QWidget *centralwidget;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QFrame *frame;
    QLabel *label_3;
    QComboBox *comboBox;
    QPushButton *pushButton_13;
    QLabel *label_6;
    QPushButton *pushButton_14;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_15;
    QLabel *label_7;
    QLabel *label_8;

    void setupUi(QMainWindow *Backup)
    {
        if (Backup->objectName().isEmpty())
            Backup->setObjectName(QString::fromUtf8("Backup"));
        Backup->resize(1916, 980);
        Backup->setStyleSheet(QString::fromUtf8("background:url(:/res/backup.jpg)"));
        centralwidget = new QWidget(Backup);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(680, 80, 541, 61));
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"	font: 18pt \"Comic Sans MS\";\n"
"background:rgba(255,150,150,0.5);\n"
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
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(1140, 80, 81, 61));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background:rgba(255,255,157,0.70);\n"
"border-radius:26px;\n"
"}\n"
"QPushButton:hover{\n"
"background:rgba(121,0,255,0.20);\n"
"border-radius:26px;\n"
"\n"
"}\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/xiugai.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(50, 50));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(180, 250, 451, 61));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/res/b.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);
        pushButton_2->setIconSize(QSize(50, 50));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(1250, 250, 451, 61));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/res/r.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon2);
        pushButton_3->setIconSize(QSize(50, 50));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(180, 400, 451, 61));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        pushButton_4->setIcon(icon1);
        pushButton_4->setIconSize(QSize(50, 50));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(1250, 400, 451, 61));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        pushButton_5->setIcon(icon2);
        pushButton_5->setIconSize(QSize(50, 50));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(180, 550, 451, 61));
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        pushButton_6->setIcon(icon1);
        pushButton_6->setIconSize(QSize(50, 50));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(1250, 550, 451, 61));
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        pushButton_7->setIcon(icon2);
        pushButton_7->setIconSize(QSize(50, 50));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(180, 700, 451, 61));
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        pushButton_8->setIcon(icon1);
        pushButton_8->setIconSize(QSize(50, 50));
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(1250, 700, 451, 61));
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        pushButton_9->setIcon(icon2);
        pushButton_9->setIconSize(QSize(50, 50));
        pushButton_10 = new QPushButton(centralwidget);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(180, 850, 451, 61));
        pushButton_10->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        pushButton_10->setIcon(icon1);
        pushButton_10->setIconSize(QSize(50, 50));
        pushButton_11 = new QPushButton(centralwidget);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setGeometry(QRect(1250, 850, 451, 61));
        pushButton_11->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        pushButton_11->setIcon(icon2);
        pushButton_11->setIconSize(QSize(50, 50));
        pushButton_12 = new QPushButton(centralwidget);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        pushButton_12->setGeometry(QRect(1790, 900, 81, 61));
        pushButton_12->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"\n"
"background:rgba(1,222,255,0.25);\n"
"border-radius:26px;\n"
"}\n"
"QPushButton:hover{\n"
"background:rgba(255,255,157,0.70);\n"
"border-radius:26px;\n"
"\n"
"}\n"
""));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/res/LW_8.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_12->setIcon(icon3);
        pushButton_12->setIconSize(QSize(50, 50));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(680, 240, 511, 341));
        frame->setStyleSheet(QString::fromUtf8("QFrame{\n"
"background:rgba(255,255,157,0.20);\n"
"border-radius:15px;\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(60, 10, 131, 101));
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:rgb(85, 170, 255);\n"
"font-size:37px;\n"
"font-family:Microsoft JhengHei;\n"
"background:transparent;\n"
"}"));
        comboBox = new QComboBox(frame);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(200, 30, 71, 71));
        comboBox->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"font: 75 20pt \"Ink Free\";\n"
"background:rgba(255,150,150,0.25);\n"
"border-radius:25px;\n"
"}\n"
"\n"
"\n"
"\n"
"/* \344\270\213\346\213\211\345\220\216\357\274\214\346\225\264\344\270\252\344\270\213\346\213\211\347\252\227\344\275\223\350\266\212\350\277\207\346\257\217\351\241\271\347\232\204\346\240\267\345\274\217 */\n"
"QComboBox QAbstractItemView::item:hover {\n"
"    font: 75 20pt \"Ink Free\";\n"
"background:rgba(255,150,150,0.5);\n"
"border-radius:25px;  /* \346\225\264\344\270\252\344\270\213\346\213\211\347\252\227\344\275\223\350\266\212\350\277\207\346\257\217\351\241\271\347\232\204\350\203\214\346\231\257\350\211\262 */\n"
"}\n"
"\n"
"\n"
"QComboBox QAbstractItemView::item:selected {\n"
"    font: 75 20pt \"Ink Free\";\n"
"background:rgba(255,150,150,0.5);\n"
"border-radius:25px;\n"
"}"));
        pushButton_13 = new QPushButton(frame);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        pushButton_13->setGeometry(QRect(280, 270, 91, 61));
        pushButton_13->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background:rgba(0,0,0,0.00);\n"
"border-radius:26px;\n"
"}\n"
"QPushButton:hover{\n"
"background:rgba(121,0,255,0.20);\n"
"border-radius:26px;\n"
"\n"
"}\n"
""));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/res/imfire.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_13->setIcon(icon4);
        pushButton_13->setIconSize(QSize(50, 50));
        label_6 = new QLabel(frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(60, 100, 171, 101));
        label_6->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:rgb(85, 170, 255);\n"
"font-size:37px;\n"
"font-family:Microsoft JhengHei;\n"
"background:transparent;\n"
"}"));
        pushButton_14 = new QPushButton(frame);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));
        pushButton_14->setGeometry(QRect(400, 270, 81, 61));
        pushButton_14->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background:rgba(0,0,0,0);\n"
"border-radius:26px;\n"
"}\n"
"QPushButton:hover{\n"
"background:rgba(121,0,255,0.20);\n"
"border-radius:26px;\n"
"\n"
"}\n"
""));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/res/concel.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_14->setIcon(icon5);
        pushButton_14->setIconSize(QSize(50, 50));
        lineEdit_2 = new QLineEdit(frame);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(220, 120, 271, 61));
        lineEdit_2->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"	font: 18pt \"Comic Sans MS\";\n"
"background:rgba(255,150,150,0.5);\n"
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
        pushButton_15 = new QPushButton(frame);
        pushButton_15->setObjectName(QString::fromUtf8("pushButton_15"));
        pushButton_15->setGeometry(QRect(410, 120, 81, 61));
        pushButton_15->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background:rgba(0,0,0,0.00);\n"
"border-radius:26px;\n"
"}\n"
"QPushButton:hover{\n"
"background:rgba(121,0,255,0.20);\n"
"border-radius:26px;\n"
"\n"
"}\n"
""));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/res/back.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_15->setIcon(icon6);
        pushButton_15->setIconSize(QSize(50, 50));
        label_7 = new QLabel(frame);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(50, 180, 481, 51));
        label_7->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:white;\n"
"font-size:25px;\n"
"font-family:Microsoft JhengHei;\n"
"background:transparent;\n"
"}"));
        label_8 = new QLabel(frame);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(130, 220, 481, 51));
        label_8->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:white;\n"
"font-size:25px;\n"
"font-family:Microsoft JhengHei;\n"
"background:transparent;\n"
"}"));
        Backup->setCentralWidget(centralwidget);

        retranslateUi(Backup);

        QMetaObject::connectSlotsByName(Backup);
    } // setupUi

    void retranslateUi(QMainWindow *Backup)
    {
        Backup->setWindowTitle(QApplication::translate("Backup", "MainWindow", nullptr));
        lineEdit->setInputMask(QString());
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QApplication::translate("Backup", "   \346\220\234\347\264\242", nullptr));
        pushButton->setText(QString());
        pushButton_2->setText(QApplication::translate("Backup", " \345\244\207 \344\273\275 \346\211\200 \346\234\211 \346\225\260 \346\215\256", nullptr));
        pushButton_3->setText(QApplication::translate("Backup", " \350\277\230 \345\216\237 \346\211\200 \346\234\211 \346\225\260 \346\215\256", nullptr));
        pushButton_4->setText(QApplication::translate("Backup", " \345\244\207 \344\273\275 \345\233\276 \344\271\246 \344\277\241 \346\201\257", nullptr));
        pushButton_5->setText(QApplication::translate("Backup", " \350\277\230 \345\216\237 \345\233\276 \344\271\246 \344\277\241 \346\201\257", nullptr));
        pushButton_6->setText(QApplication::translate("Backup", " \345\244\207 \344\273\275 \350\264\246 \346\210\267 \344\277\241 \346\201\257", nullptr));
        pushButton_7->setText(QApplication::translate("Backup", " \350\277\230 \345\216\237 \350\264\246 \346\210\267 \344\277\241 \346\201\257", nullptr));
        pushButton_8->setText(QApplication::translate("Backup", " \345\244\207 \344\273\275 \345\200\237 \351\230\205 \350\256\260 \345\275\225", nullptr));
        pushButton_9->setText(QApplication::translate("Backup", " \350\277\230 \345\216\237 \345\200\237 \351\230\205 \344\277\241 \346\201\257", nullptr));
        pushButton_10->setText(QApplication::translate("Backup", " \345\244\207 \344\273\275 \346\240\241 \345\233\255 \345\215\241 \344\277\241 \346\201\257", nullptr));
        pushButton_11->setText(QApplication::translate("Backup", " \350\277\230 \345\216\237 \346\240\241 \345\233\255 \345\215\241\344\277\241 \346\201\257", nullptr));
        pushButton_12->setText(QString());
        label_3->setText(QApplication::translate("Backup", " \347\243\201 \347\233\230 :", nullptr));
        comboBox->setItemText(0, QApplication::translate("Backup", "C", nullptr));
        comboBox->setItemText(1, QApplication::translate("Backup", "D", nullptr));
        comboBox->setItemText(2, QApplication::translate("Backup", "E", nullptr));

        pushButton_13->setText(QString());
        label_6->setText(QApplication::translate("Backup", " \346\226\207 \344\273\266 \345\244\271 :", nullptr));
        pushButton_14->setText(QString());
        lineEdit_2->setInputMask(QString());
        lineEdit_2->setText(QString());
        lineEdit_2->setPlaceholderText(QApplication::translate("Backup", "  foldername", nullptr));
        pushButton_15->setText(QString());
        label_7->setText(QApplication::translate("Backup", "\350\213\245\350\267\257\345\276\204\344\270\255\351\234\200\350\246\201\345\214\205\346\213\254\346\226\207\344\273\266\345\244\271                  \342\206\221", nullptr));
        label_8->setText(QApplication::translate("Backup", "\350\257\267\345\234\250\350\276\223\345\205\245\346\226\207\344\273\266\345\244\271\345\220\215\345\220\216\347\202\271\345\207\273\344\270\212\351\235\242\346\214\211\351\222\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Backup: public Ui_Backup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BACKUP_H
