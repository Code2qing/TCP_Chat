#include "tcpserver.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	TCPServer w;
	w.show();
	
	return a.exec();
}
