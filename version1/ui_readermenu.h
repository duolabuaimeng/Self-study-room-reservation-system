/********************************************************************************
** Form generated from reading UI file 'readermenu.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_READERMENU_H
#define UI_READERMENU_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ReaderMenu
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;

    void setupUi(QMainWindow *ReaderMenu)
    {
        if (ReaderMenu->objectName().isEmpty())
            ReaderMenu->setObjectName(QString::fromUtf8("ReaderMenu"));
        ReaderMenu->resize(1092, 900);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/0005.png"), QSize(), QIcon::Normal, QIcon::Off);
        ReaderMenu->setWindowIcon(icon);
        ReaderMenu->setStyleSheet(QString::fromUtf8("#centralwidget{\n"
"background:url(:/res/LW (2).jpg);\n"
"}"));
        centralwidget = new QWidget(ReaderMenu);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(70, 50, 951, 811));
        frame->setStyleSheet(QString::fromUtf8("QFrame{\n"
"background:rgba(255,255,157,0.70);\n"
"border-radius:15px;\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(330, 10, 391, 81));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:#00A388;\n"
"font-size:50px;\n"
"font-family:Microsoft JhengHei;\n"
"background:transparent;\n"
"}\n"
""));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(740, 570, 121, 121));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        pushButton_3 = new QPushButton(frame);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(90, 130, 301, 71));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background:#96CA2D;\n"
"border-radius:15px;\n"
"font-size:40px;\n"
"font-family:Microsoft JhengHei;\n"
"}\n"
"QPushButton:hover{\n"
"background:#168039;\n"
"border-radius:10px;\n"
"font-size:40px;\n"
"font-family:Microsoft JhengHei;\n"
"}\n"
""));
        pushButton_4 = new QPushButton(frame);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(570, 130, 301, 71));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background:#96CA2D;\n"
"border-radius:15px;\n"
"font-size:40px;\n"
"font-family:Microsoft JhengHei;\n"
"}\n"
"QPushButton:hover{\n"
"background:#168039;\n"
"border-radius:10px;\n"
"font-size:40px;\n"
"font-family:Microsoft JhengHei;\n"
"}\n"
""));
        pushButton_5 = new QPushButton(frame);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(90, 330, 301, 71));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background:#96CA2D;\n"
"border-radius:15px;\n"
"font-size:40px;\n"
"font-family:Microsoft JhengHei;\n"
"}\n"
"QPushButton:hover{\n"
"background:#168039;\n"
"border-radius:10px;\n"
"font-size:40px;\n"
"font-family:Microsoft JhengHei;\n"
"}\n"
""));
        pushButton_6 = new QPushButton(frame);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(570, 330, 301, 71));
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background:#96CA2D;\n"
"border-radius:15px;\n"
"font-size:40px;\n"
"font-family:Microsoft JhengHei;\n"
"}\n"
"QPushButton:hover{\n"
"background:#168039;\n"
"border-radius:10px;\n"
"font-size:40px;\n"
"font-family:Microsoft JhengHei;\n"
"}\n"
""));
        pushButton_7 = new QPushButton(frame);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(90, 540, 301, 71));
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background:#96CA2D;\n"
"border-radius:15px;\n"
"font-size:40px;\n"
"font-family:Microsoft JhengHei;\n"
"}\n"
"QPushButton:hover{\n"
"background:#168039;\n"
"border-radius:10px;\n"
"font-size:40px;\n"
"font-family:Microsoft JhengHei;\n"
"}\n"
""));
        ReaderMenu->setCentralWidget(centralwidget);

        retranslateUi(ReaderMenu);

        QMetaObject::connectSlotsByName(ReaderMenu);
    } // setupUi

    void retranslateUi(QMainWindow *ReaderMenu)
    {
        ReaderMenu->setWindowTitle(QApplication::translate("ReaderMenu", "\345\200\237\351\230\205\344\272\272\350\217\234\345\215\225", nullptr));
        label->setText(QApplication::translate("ReaderMenu", "\345\200\237\351\230\205\344\272\272\350\217\234\345\215\225", nullptr));
        pushButton->setText(QApplication::translate("ReaderMenu", "\346\263\250\351\224\200", nullptr));
        pushButton_3->setText(QApplication::translate("ReaderMenu", "\346\237\245\346\211\276|\345\200\237\344\271\246", nullptr));
        pushButton_4->setText(QApplication::translate("ReaderMenu", "\345\267\262\345\200\237|\350\277\230\344\271\246", nullptr));
        pushButton_5->setText(QApplication::translate("ReaderMenu", "\344\270\252\344\272\272\344\277\241\346\201\257\347\256\241\347\220\206", nullptr));
        pushButton_6->setText(QApplication::translate("ReaderMenu", "\347\273\255\345\200\237", nullptr));
        pushButton_7->setText(QApplication::translate("ReaderMenu", "\345\267\262\350\277\230|\347\275\232\351\207\221\347\273\223\346\270\205", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReaderMenu: public Ui_ReaderMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_READERMENU_H
