#pragma once

#include <QtWidgets/QMainWindow>
#include<QLabel>
#include<QListWidget>
#include<QHBoxLayout>
class learnqt2 : public QWidget//������QWidget����Qmainwindow
{
	Q_OBJECT

public:
	learnqt2();

private:
	QLabel *label;
	QListWidget *listWidget;
};
