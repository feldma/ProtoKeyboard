#include "Keyboard.h"
#include "Key.h"

#include <iostream>

Keyboard::Keyboard(QMainWindow* _parent)
	: QDialog(_parent)
	, m_keyNumber(5)
{
	Setup();
}

void Keyboard::Setup()
{
	Rebuild();

	QVBoxLayout* mainLayout = new QVBoxLayout();
	mainLayout->addWidget(horizontalGroupBox);
	setLayout(mainLayout);
	setWindowTitle(tr("Keyboard"));
}

void Keyboard::Rebuild()
{
	horizontalGroupBox = new QGroupBox(tr("Horizontal layout"));
	horizontalLayout = new QHBoxLayout();

	m_keys.clear();
	for (int i = 0; i < m_keyNumber; ++i)
	{
		std::shared_ptr<Key> key = std::make_shared<Key>(tr("Button %1").arg(i + 1), this);
		horizontalLayout->addWidget(key.get());
		m_keys.push_back(std::move(key));
	}
	horizontalGroupBox->setLayout(horizontalLayout);
}