#pragma once

#include <QThread>

class RecThread : public QThread
{
	Q_OBJECT

public:
	RecThread(QWidget *parent = Q_NULLPTR);
	~RecThread();
	void stop();

protected:
	void run();

private:
	volatile bool stopped;

signals:
	void success_rec();
signals:
	void success_accept();
};
