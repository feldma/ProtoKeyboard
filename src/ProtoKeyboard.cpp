#include "ProtoKeyboard.h"
#include "Keyboard.h"

ProtoKeyboard::ProtoKeyboard(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

void ProtoKeyboard::ShowDialog()
{
	Keyboard* keyboard = new Keyboard(this);
	keyboard->show();
}