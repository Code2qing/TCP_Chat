/********************************************************************************
** Form generated from reading UI file 'tcpserver.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TCPSERVER_H
#define UI_TCPSERVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_TCPServerClass
{
public:
    QTextBrowser *textBrowser;
    QLineEdit *message_Edit;
    QPushButton *listenButton;
    QPushButton *sendButton;
    QPushButton *un_listenBt;

    void setupUi(QDialog *TCPServerClass)
    {
        if (TCPServerClass->objectName().isEmpty())
            TCPServerClass->setObjectName(QStringLiteral("TCPServerClass"));
        TCPServerClass->resize(326, 454);
        textBrowser = new QTextBrowser(TCPServerClass);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(20, 61, 281, 251));
        message_Edit = new QLineEdit(TCPServerClass);
        message_Edit->setObjectName(QStringLiteral("message_Edit"));
        message_Edit->setGeometry(QRect(20, 359, 171, 31));
        listenButton = new QPushButton(TCPServerClass);
        listenButton->setObjectName(QStringLiteral("listenButton"));
        listenButton->setGeometry(QRect(224, 320, 71, 23));
        listenButton->setAutoDefault(false);
        listenButton->setFlat(false);
        sendButton = new QPushButton(TCPServerClass);
        sendButton->setObjectName(QStringLiteral("sendButton"));
        sendButton->setGeometry(QRect(220, 360, 75, 31));
        QFont font;
        font.setFamily(QStringLiteral("04b_21"));
        font.setPointSize(9);
        sendButton->setFont(font);
        sendButton->setCursor(QCursor(Qt::ArrowCursor));
        sendButton->setMouseTracking(true);
        sendButton->setAutoFillBackground(false);
        sendButton->setAutoExclusive(false);
        sendButton->setAutoDefault(true);
        un_listenBt = new QPushButton(TCPServerClass);
        un_listenBt->setObjectName(QStringLiteral("un_listenBt"));
        un_listenBt->setGeometry(QRect(120, 320, 75, 23));
        un_listenBt->setAutoDefault(false);

        retranslateUi(TCPServerClass);

        listenButton->setDefault(false);
        sendButton->setDefault(false);


        QMetaObject::connectSlotsByName(TCPServerClass);
    } // setupUi

    void retranslateUi(QDialog *TCPServerClass)
    {
        TCPServerClass->setWindowTitle(QApplication::translate("TCPServerClass", "\347\256\200\346\230\223\350\201\212\345\244\251\347\250\213\345\272\217<\346\234\215\345\212\241\347\253\257>", nullptr));
        message_Edit->setPlaceholderText(QApplication::translate("TCPServerClass", "\350\276\223\345\205\245\350\246\201\345\217\221\351\200\201\347\232\204\346\266\210\346\201\257", nullptr));
        listenButton->setText(QApplication::translate("TCPServerClass", "\347\233\221\345\220\254", nullptr));
        sendButton->setText(QApplication::translate("TCPServerClass", "\345\217\221\351\200\201", nullptr));
        un_listenBt->setText(QApplication::translate("TCPServerClass", "\346\226\255\345\274\200\350\277\236\346\216\245", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TCPServerClass: public Ui_TCPServerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TCPSERVER_H
