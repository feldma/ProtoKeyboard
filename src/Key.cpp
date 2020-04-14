#include "Key.h"

#include <QtWidgets>

Key::Key(const QString& _name, QWidget* _parent)
	: QPushButton(_name, _parent)
{
	connect(this, SIGNAL(clicked()), SLOT(OnButtonPressed()));
}

void Key::OnButtonPressed()
{
	QMessageBox msgBox;
	msgBox.setWindowTitle("MessageBox Title");
	msgBox.setText("You Clicked " + ((QPushButton*)sender())->text());
	msgBox.exec();
}