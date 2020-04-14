#pragma once

#include <QtWidgets/QMainWindow>
#include <QtWidgets>
#include "ui_ProtoKeyboard.h"


class ProtoKeyboard : public QMainWindow
{
	Q_OBJECT

public:
	ProtoKeyboard(QWidget *parent = Q_NULLPTR);

	void ShowDialog();

private:
	Ui::ProtoKeyboardClass ui;
};
