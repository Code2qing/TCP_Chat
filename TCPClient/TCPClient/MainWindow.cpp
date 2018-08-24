#include "MainWindow.h"
#include<QMessageBox>


WSADATA data1;						//定义WSADATA结构体对象
WORD w = MAKEWORD(2, 0);					//定义版本号码

SOCKET s;						//定义连接套接字句柄
char  sztext[40] = {0};

sockaddr_in addr;					//定义套接字地址结构


MainWindow::MainWindow(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	ui.un_connect_bt->setEnabled(false);
	ui.send_bt->setEnabled(false);
	this->setFixedSize(this->width(), this->height());
	connect(&thread, SIGNAL(success_rec()),this,SLOT(rec()));
	
}

void MainWindow::rec()
{
	
		//ui.display_text->insertPlainText("ok");
		//if (::recv(s, sztext, sizeof(sztext), 0)>0)
		//{
		//	//char *p = { "欢迎你" };
			ui.display_text->insertPlainText(QStringLiteral("接收成功\n"));
			QString str_message_2 = QStringLiteral("对方说>>") + QString::fromLocal8Bit(sztext) + "\n";
			memset(sztext,0, sizeof(sztext));
			ui.display_text->insertPlainText(str_message_2);
			//ui.display_text->insertPlainText(QString(" %1").arg(sizeof(sztext)));
			ui.display_text->moveCursor(QTextCursor::End);
		//}
	

}

void MainWindow::on_connect_bt_clicked()
{
	
	
	::WSAStartup(w, &data1);					//初始化套接字库
	s = ::socket(AF_INET, SOCK_STREAM, 0);			//创建TCP套接字
	addr.sin_family = AF_INET;				//初始化地址结构
	bool ok;
	addr.sin_port = htons(ui.Port_Edit->text().toInt(&ok,10));
	
	
	addr.sin_addr.S_un.S_addr = inet_addr(ui.IP_addr_Edit->text().toStdString().data());
	ui.display_text->insertPlainText(QStringLiteral("正在尝试连接服务器！！！\n\n"));
	ui.display_text->moveCursor(QTextCursor::End);//将光标定位到末尾
	if (::connect(s, (sockaddr*)&addr, sizeof(addr))==0)
	{
		ui.connect_bt->setEnabled(false);
		ui.un_connect_bt->setEnabled(true);
		ui.send_bt->setEnabled(true);
		QString Str_notice = QStringLiteral( "已成功连接到主机" )+ ui.IP_addr_Edit->text()+"\n\n";
		ui.display_text->insertPlainText(Str_notice);
		ui.display_text->moveCursor(QTextCursor::End);
		thread.start();//开启循环接收数据线程
	}
	else
	{
		/*ui.display_text->insertPlainText(QStringLiteral("连接失败！！请检查输入的IP地址与端口号，也有可能是网络原因或其他未知错误"));
		ui.display_text->moveCursor(QTextCursor::End);*/
		::closesocket(s);					//关闭套接字句柄
		::WSACleanup();	
		QMessageBox::warning(this, QStringLiteral("连接失败"), QStringLiteral("请检查输入的IP地址与端口号！！\n也有可能是网络原因或其他未知错误"), QMessageBox::Yes);
	}
	
}



void MainWindow::on_send_bt_clicked()
{	
	QByteArray send_str = (ui.message_Edit->text() + "\0").toLocal8Bit();
	int status = ::send(s, send_str, send_str.length(), 0);
	if (status > 0)
	{
		QString str_message = QStringLiteral("消息<") + ui.message_Edit->text() + QStringLiteral(">已发出") + "\n";
		ui.display_text->insertPlainText(str_message);
		ui.display_text->moveCursor(QTextCursor::End);

	}
	else if(status == 0)
	{
		ui.display_text->insertPlainText(QStringLiteral("未发送任何数据！！\n"));
		ui.display_text->moveCursor(QTextCursor::End);
	}
	else if (status < 0)
	{
		ui.display_text->insertPlainText(QStringLiteral("Error：发生未知错误！\n"));
		ui.display_text->moveCursor(QTextCursor::End);
	}
	
}

void MainWindow::on_un_connect_bt_clicked()
{
	::closesocket(s);					//关闭套接字句柄
	::WSACleanup();						//释放套接字库
	s = NULL;
	/*if (s == NULL)
	{
		ui.display_text->insertPlainText(QStringLiteral("套接字已置空"));
	}*/

	ui.connect_bt->setEnabled(true);
	ui.un_connect_bt->setEnabled(false);
	ui.send_bt->setEnabled(false);


	if(thread.isRunning())
	{
		thread.stop();//关闭消息接收线程
	}
	
	ui.display_text->insertPlainText(QStringLiteral("连接已断开"));
	ui.display_text->moveCursor(QTextCursor::End);
}