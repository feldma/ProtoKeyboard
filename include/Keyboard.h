#pragma once

#include <vector>
#include <memory>
#include <QtWidgets/qmainwindow.h>
#include <QtWidgets>

class Key;

class Keyboard : public QDialog
{
public:
	Keyboard() = delete;
	Keyboard(QMainWindow *_parent);

	Keyboard(const Keyboard& _keyboard) = delete;

	void Setup();
	inline void SetKeyNumber(int _keyNumber) { m_keyNumber = _keyNumber; Rebuild(); }
	void Rebuild();

private:
	int m_keyNumber;
	std::vector<std::shared_ptr<Key>> m_keys;

	QGroupBox* horizontalGroupBox;
	QHBoxLayout* horizontalLayout;
};