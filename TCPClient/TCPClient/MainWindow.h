#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_MainWindow.h"
#include <winsock2.h>
#include <windows.h>

#pragma comment (lib,"WS2_32.lib")

extern SOCKET s;//与子线程共享套接字句柄
extern  char  sztext[40];
class RecThread;
#include "recthread.h"

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	MainWindow(QWidget *parent = Q_NULLPTR);

	

private slots:
    void on_connect_bt_clicked();

    void on_send_bt_clicked();

	void on_un_connect_bt_clicked();

	void rec();

	

private:
	Ui::MainWindowClass ui;
	RecThread thread;
};

