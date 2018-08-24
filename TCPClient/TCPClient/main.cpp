#include "MainWindow.h"
#include "LoginDialog.h"
#include <QtWidgets/QApplication>


int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	MainWindow m;
	LoginDialog dlg;
	if (dlg.exec() == QDialog::Accepted)
	{
		dlg.close();
		m.show();
		
		return a.exec();
	}
	else return 0;
}
