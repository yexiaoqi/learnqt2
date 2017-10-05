#include "learnqt2.h"
#include <QtWidgets/QApplication>
#include<QFile>
#include<QFileInfo>
#include<qDebug>
#include<Qdir>

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);

	QFile file("in.txt");//需要放在和main同一文件夹下
	if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
		qDebug() << "Open file failed.";
		return -1;
	}
	else {
		while (!file.atEnd()) {
			qDebug() << file.readLine();
		}
	}

	QFileInfo info(file);
	qDebug() << info.isDir();
	qDebug() << info.isExecutable();
	qDebug() << info.baseName();
	qDebug() << info.completeBaseName();
	qDebug() << info.suffix();
	qDebug() << info.completeSuffix();

	return app.exec();
}
