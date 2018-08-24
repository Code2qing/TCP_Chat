#include "recthread.h"
#include "tcpserver.h"

RecThread::RecThread(QWidget *parent)
{
	stopped = false;
}

RecThread::~RecThread()
{
}

void RecThread::run()
{
	while (!stopped)
	{
		int n = sizeof(addr2);
		if (s1 == NULL)
		{
			s1=::accept(s, (sockaddr*)&addr2, &n);
			emit success_accept();
		}
		if (s1 != NULL)
		{
			if (::recv(s1, sztext, sizeof(sztext), 0) > 0)
			{
				emit success_rec();//发送信号至主线程
			}
		}
		msleep(200);
		
	}
	stopped = false;
}

void RecThread::stop()
{
	stopped = true;
}
