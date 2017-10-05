#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_learnqt2.h"

class learnqt2 : public QMainWindow
{
	Q_OBJECT

public:
	learnqt2(QWidget *parent = Q_NULLPTR);

private:
	Ui::learnqt2Class ui;
};
