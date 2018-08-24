/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowClass
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QTextBrowser *display_text;
    QLineEdit *message_Edit;
    QPushButton *send_bt;
    QGroupBox *groupBox_2;
    QLabel *label;
    QLineEdit *IP_addr_Edit;
    QLabel *label_2;
    QLineEdit *Port_Edit;
    QPushButton *connect_bt;
    QPushButton *un_connect_bt;
    QMenuBar *menuBar;
    QMenu *menu;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindowClass)
    {
        if (MainWindowClass->objectName().isEmpty())
            MainWindowClass->setObjectName(QStringLiteral("MainWindowClass"));
        MainWindowClass->resize(337, 530);
        QIcon icon;
        icon.addFile(QStringLiteral(":/MainWindow/Resources/images/Smile-256.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindowClass->setWindowIcon(icon);
        MainWindowClass->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        centralWidget = new QWidget(MainWindowClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 160, 311, 321));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\215\216\346\226\207\345\275\251\344\272\221"));
        font.setPointSize(12);
        groupBox->setFont(font);
        groupBox->setFlat(false);
        groupBox->setCheckable(false);
        display_text = new QTextBrowser(groupBox);
        display_text->setObjectName(QStringLiteral("display_text"));
        display_text->setGeometry(QRect(10, 30, 291, 231));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font1.setPointSize(9);
        display_text->setFont(font1);
        message_Edit = new QLineEdit(groupBox);
        message_Edit->setObjectName(QStringLiteral("message_Edit"));
        message_Edit->setGeometry(QRect(10, 280, 211, 31));
        message_Edit->setFont(font1);
        send_bt = new QPushButton(groupBox);
        send_bt->setObjectName(QStringLiteral("send_bt"));
        send_bt->setGeometry(QRect(230, 280, 75, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\346\226\260\345\256\213\344\275\223"));
        font2.setPointSize(9);
        send_bt->setFont(font2);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/MainWindow/Resources/images/mail-reply-sender.png"), QSize(), QIcon::Normal, QIcon::Off);
        send_bt->setIcon(icon1);
        send_bt->setAutoDefault(true);
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 20, 311, 131));
        groupBox_2->setFont(font);
        groupBox_2->setLayoutDirection(Qt::LeftToRight);
        groupBox_2->setStyleSheet(QStringLiteral("alternate-background-color: rgb(255, 255, 255);"));
        groupBox_2->setFlat(false);
        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 30, 81, 21));
        label->setFont(font2);
        IP_addr_Edit = new QLineEdit(groupBox_2);
        IP_addr_Edit->setObjectName(QStringLiteral("IP_addr_Edit"));
        IP_addr_Edit->setGeometry(QRect(110, 30, 161, 20));
        IP_addr_Edit->setFont(font2);
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 70, 71, 21));
        label_2->setFont(font2);
        label_2->setScaledContents(false);
        label_2->setWordWrap(false);
        Port_Edit = new QLineEdit(groupBox_2);
        Port_Edit->setObjectName(QStringLiteral("Port_Edit"));
        Port_Edit->setGeometry(QRect(110, 70, 51, 20));
        Port_Edit->setFont(font2);
        connect_bt = new QPushButton(groupBox_2);
        connect_bt->setObjectName(QStringLiteral("connect_bt"));
        connect_bt->setGeometry(QRect(200, 70, 71, 23));
        connect_bt->setFont(font2);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/MainWindow/Resources/images/player_play.png"), QSize(), QIcon::Normal, QIcon::Off);
        connect_bt->setIcon(icon2);
        connect_bt->setAutoDefault(true);
        un_connect_bt = new QPushButton(groupBox_2);
        un_connect_bt->setObjectName(QStringLiteral("un_connect_bt"));
        un_connect_bt->setGeometry(QRect(200, 100, 71, 23));
        un_connect_bt->setFont(font2);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/MainWindow/Resources/images/player_record.png"), QSize(), QIcon::Normal, QIcon::Off);
        un_connect_bt->setIcon(icon3);
        MainWindowClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindowClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 337, 23));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        MainWindowClass->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindowClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindowClass->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());

        retranslateUi(MainWindowClass);

        send_bt->setDefault(false);
        connect_bt->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowClass)
    {
        MainWindowClass->setWindowTitle(QApplication::translate("MainWindowClass", "\347\256\200\346\230\223\350\201\212\345\244\251\347\250\213\345\272\217<\345\256\242\346\210\267\347\253\257>", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindowClass", "\344\272\244\344\272\222\347\252\227\345\217\243", nullptr));
        send_bt->setText(QApplication::translate("MainWindowClass", "\345\217\221\351\200\201", nullptr));
        groupBox_2->setTitle(QApplication::translate("MainWindowClass", "\347\275\221\347\273\234", nullptr));
        label->setText(QApplication::translate("MainWindowClass", "\346\234\215\345\212\241\345\231\250\345\234\260\345\235\200", nullptr));
        IP_addr_Edit->setText(QString());
        IP_addr_Edit->setPlaceholderText(QApplication::translate("MainWindowClass", "\350\257\267\350\276\223\345\205\245IP\345\234\260\345\235\200", nullptr));
        label_2->setText(QApplication::translate("MainWindowClass", "\347\253\257      \345\217\243", nullptr));
        Port_Edit->setText(QString());
        Port_Edit->setPlaceholderText(QApplication::translate("MainWindowClass", "\347\253\257\345\217\243\345\217\267", nullptr));
        connect_bt->setText(QApplication::translate("MainWindowClass", "  \350\277\236\346\216\245  ", nullptr));
        un_connect_bt->setText(QApplication::translate("MainWindowClass", "\346\226\255\345\274\200\350\277\236\346\216\245", nullptr));
        menu->setTitle(QApplication::translate("MainWindowClass", "(\343\200\202\343\203\273\342\210\200\343\203\273)\343\203\216", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindowClass: public Ui_MainWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
