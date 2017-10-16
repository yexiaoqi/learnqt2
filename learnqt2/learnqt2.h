#pragma once

#include <QtWidgets/QMainWindow>
#include<QLabel>
#include<QListWidget>
#include<QHBoxLayout>
#include<QTreeWidget>
#include<QProcess>
#include<QTextCodec>
#include<qDebug>
class learnqt2 : public QWidget//必须是QWidget不是Qmainwindow
{
	Q_OBJECT

public:
	learnqt2();

private:
	QLabel *label;
	QListWidget *listWidget;
};
