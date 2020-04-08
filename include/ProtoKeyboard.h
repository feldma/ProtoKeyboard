#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_ProtoKeyboard.h"

class ProtoKeyboard : public QMainWindow
{
	Q_OBJECT

public:
	ProtoKeyboard(QWidget *parent = Q_NULLPTR);

private:
	Ui::ProtoKeyboardClass ui;
};
