#include "recthread.h"
#include "MainWindow.h"
#include<QDebug>

RecThread::RecThread(QWidget *parent)
{
	stopped = false;
}

RecThread::~RecThread()
{
}

void RecThread::run()
{
	while(!stopped)
	{
		if (qreal a=::recv(s, sztext, sizeof(sztext), 0) > 0)
		{
			//qDebug() << QString("%1").arg(a);
			
			emit success_rec();//发送信号至主线程
		}
		msleep(200);//降低while循环速度，减少资源使用
	}
	stopped = false;
}

void RecThread::stop()
{
	stopped = true;
}