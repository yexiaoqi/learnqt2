#include "learnqt2.h"
#include <QtWidgets/QApplication>
#include<QFile>
#include<QFileInfo>
#include<qDebug>
#include<Qdir>

int main(int argc, char *argv[])
{
#if 0
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
#endif

#if 0
	//写文件
	QFile file("in.txt");
	file.open(QIODevice::WriteOnly);
	QDataStream out(&file);
	out << QString("the answer is");
	out << (qint32)42;
	file.close();
#endif

#if 0
	//写文件
	QFile file("in.txt");
	file.open(QIODevice::ReadOnly);
	QDataStream in(&file);
	QString str;
	qint32 a;
	in >> str >> a;
#endif

#if 0
	QFile file("in.txt");
	file.open(QIODevice::WriteOnly);
	QDataStream out(&file);

	// 写入魔术数字和版本
	out << (quint32)0xA0B0C0D0;
	out << (qint32)123;

	out.setVersion(QDataStream::Qt_4_0);

	// 写入数据
	out << (qint32)427;
#endif

#if 0
	QFile file("file.dat");
	file.open(QIODevice::ReadOnly);
	QDataStream in(&file);

	// 检查魔术数字
	quint32 magic;
	in >> magic;
	if (magic != 0xA0B0C0D0) {
		return BAD_FILE_FORMAT;
	}

	// 检查版本
	qint32 version;
	in >> version;
	if (version < 100) {
		return BAD_FILE_TOO_OLD;
	}
	if (version > 123) {
		return BAD_FILE_TOO_NEW;
	}

	if (version <= 110) {
		in.setVersion(QDataStream::Qt_5_7);
	}
	else {
		in.setVersion(QDataStream::Qt_4_0);
	}
	// 读取数据
	in >> lots_of_interesting_data;
	if (version >= 120) {
		in >> data_new_in_version_1_2;
	}
	in >> other_interesting_data;
#endif

	//QDataStream提供流的形式
	QFile file("in.txt");
	file.open(QIODevice::ReadWrite);

	QDataStream stream(&file);
	QString str = "the answer is 42";
	QString strout;

	stream << str;
	stream.device()->seek(0);
	stream >> strout;
}
