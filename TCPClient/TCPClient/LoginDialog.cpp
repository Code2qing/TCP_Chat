#include "LoginDialog.h"
#include <QMessageBox>

LoginDialog::LoginDialog(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	ui.pwdLineEdit->setEchoMode(QLineEdit::Password);
	
}

LoginDialog::~LoginDialog()
{
}

void LoginDialog::on_loginBtn_clicked()
{
	if (ui.userLineEdit->text() == "1234" && ui.pwdLineEdit->text() == "1234")
	{
		accept();
	}
	else {
		QMessageBox::warning(this, "Waring", QStringLiteral("用户名或密码错误"), QMessageBox::Yes);
		ui.userLineEdit->clear();
		ui.pwdLineEdit->clear();
		ui.userLineEdit->setFocus();
	}
}
