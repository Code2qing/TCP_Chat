#include "tcpserver.h"
#include<QMessageBox>
WSADATA data1;
WORD w = MAKEWORD(2, 0);
SOCKET s, s1;
char sztext[40];

sockaddr_in addr, addr2;

TCPServer::TCPServer(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	connect(&thread, SIGNAL(success_rec()), SLOT(rec()));
	connect(&thread, SIGNAL(success_accept()), SLOT(slot_accpet()));
	
}

void TCPServer::rec()
{
	ui.textBrowser->insertPlainText(QStringLiteral("接收成功\n"));
	QString str_message_2 = QStringLiteral("对方说>>") + QString::fromLocal8Bit(sztext) + "\n";
	memset(sztext, 0, sizeof(sztext));
	ui.textBrowser->insertPlainText(str_message_2);
	//ui.textBrowser->insertPlainText(QString(" %1").arg(sizeof(sztext)));
	ui.textBrowser->moveCursor(QTextCursor::End);
}

void TCPServer::slot_accpet()
{
	char sendBuf[20] = { '\0' };
	inet_ntop(AF_INET, (void*)&addr2.sin_addr, sendBuf, 16);
	ui.textBrowser->insertPlainText(QString::fromLocal8Bit(sendBuf) + QStringLiteral("已连接\n\n"));
	ui.textBrowser->moveCursor(QTextCursor::End);
}

void TCPServer::on_listenButton_clicked()
{
	::WSAStartup(w, &data1);
	s = ::socket(AF_INET, SOCK_STREAM, 0);
	
	addr.sin_family = AF_INET;
	addr.sin_port = htons(75);
	addr.sin_addr.S_un.S_addr = INADDR_ANY;
	::bind(s, (sockaddr*)&addr, sizeof(addr));
	::listen(s, 5);
	ui.textBrowser->insertPlainText(QStringLiteral("监听已开始!\n\n"));
	ui.textBrowser->moveCursor(QTextCursor::End);
	thread.start();//开启接收连接与接收消息线程
	QMessageBox::information(this, QStringLiteral("提示"), QStringLiteral("默认监听端口号为75"), QMessageBox::Ok);
	
}

void TCPServer::on_sendButton_clicked()
{
	QByteArray send_str = (ui.message_Edit->text()+"\0").toLocal8Bit();
	int status = ::send(s1,send_str, send_str.length(), 0);
	if (status > 0)
	{
		QString str_message = QStringLiteral("消息<") + ui.message_Edit->text() + QStringLiteral(">已发出") + "\n";
		ui.message_Edit->clear();
		ui.message_Edit->setFocus();
		//QString str_message = QString::fromLocal8Bit(ui.message_Edit->text().toLocal8Bit().data())+"\n";
		ui.textBrowser->insertPlainText(str_message);
		//ui.textBrowser->insertPlainText(QString::number(status, 10) );
		ui.textBrowser->moveCursor(QTextCursor::End);

	}
	else if (status == 0)
	{
		ui.textBrowser->insertPlainText(QStringLiteral("未发送任何数据！！\n"));
		ui.textBrowser->moveCursor(QTextCursor::End);
	}
	else if (status < 0)
	{
		ui.textBrowser->insertPlainText(QStringLiteral("Error：发生未知错误！\n"));
		ui.textBrowser->moveCursor(QTextCursor::End);
	}
}

void TCPServer::on_un_listenBt_clicked()
{
	::closesocket(s);						//关闭套接字句柄
	::closesocket(s1);
	::WSACleanup();
	s = NULL;
	s1 = NULL;
	if (thread.isRunning())
	{
		thread.stop();//关闭消息接收线程
	}

	ui.textBrowser->insertPlainText(QStringLiteral("连接已断开\n"));
	ui.textBrowser->moveCursor(QTextCursor::End);
}
