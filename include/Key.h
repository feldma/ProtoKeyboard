#pragma once

#include <QtWidgets/qpushbutton.h>
#include "ui_ProtoKeyboard.h"

class Key : public QPushButton
{
	Q_OBJECT
public:
	Key(const QString& _name, QWidget* parent = 0);

private slots:
	void OnButtonPressed();
};