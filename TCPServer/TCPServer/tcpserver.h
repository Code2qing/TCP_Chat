#pragma once

#include <QtWidgets/QDialog>
#include "ui_tcpserver.h"
#include<winsock2.h>						
#include<windows.h>
#include <Ws2tcpip.h>
#pragma comment(lib,"WS2_32.lib")
#include "recthread.h"
extern SOCKET s,s1;
extern char sztext[40];
extern sockaddr_in addr2;

class TCPServer : public QDialog
{
	Q_OBJECT

public:
	TCPServer(QWidget *parent = Q_NULLPTR);

private:
	Ui::TCPServerClass ui;
	RecThread thread;

private slots:
	void on_listenButton_clicked();
	void on_sendButton_clicked();
	void on_un_listenBt_clicked();
	void rec();
	void slot_accpet();
};
