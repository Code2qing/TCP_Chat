#pragma once

#include <QThread>


class MainWindow;

class RecThread : public QThread
{
	Q_OBJECT

public:
	RecThread(QWidget *parent = Q_NULLPTR);
	~RecThread();
	void stop();

private:
	volatile bool stopped;

protected:
	void run();

signals:
	void success_rec();
	
};

