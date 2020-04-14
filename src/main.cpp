#include "ProtoKeyboard.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	ProtoKeyboard w;
	w.show();
	w.ShowDialog();
	return a.exec();
}