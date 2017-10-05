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

	QFile file("in.txt");//��Ҫ���ں�mainͬһ�ļ�����
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
	//д�ļ�
	QFile file("in.txt");
	file.open(QIODevice::WriteOnly);
	QDataStream out(&file);
	out << QString("the answer is");
	out << (qint32)42;
	file.close();
#endif

#if 0
	//д�ļ�
	QFile file("file.dat");
	file.open(QIODevice::ReadOnly);
	QDataStream in(&file);
	QString str;
	qint32 a;
	in >> str >> a;
#endif

#if 0
	QFile file("file.dat");
	file.open(QIODevice::WriteOnly);
	QDataStream out(&file);

	// д��ħ�����ֺͰ汾
	out << (quint32)0xA0B0C0D0;
	out << (qint32)123;

	out.setVersion(QDataStream::Qt_4_0);

	// д������
	out << (qint32)427;
#endif

#if 0
	QFile file("file.dat");
	file.open(QIODevice::ReadOnly);
	QDataStream in(&file);

	// ���ħ������
	quint32 magic;
	in >> magic;
	if (magic != 0xA0B0C0D0) {
		return BAD_FILE_FORMAT;
	}

	// ���汾
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
	// ��ȡ����
	in >> lots_of_interesting_data;
	if (version >= 120) {
		in >> data_new_in_version_1_2;
	}
	in >> other_interesting_data;
#endif
#if 0
	//QDataStream�ṩ������ʽ
	QFile file("file.dat");
	file.open(QIODevice::ReadWrite);

	QDataStream stream(&file);
	QString str = "the answer is 42";
	QString strout;

	stream << str;
	stream.device()->seek(0);
	stream >> strout;
#endif

#if 0
	//�ı��ļ���д
	QFile data("file.txt");
	if (data.open(QFile::WriteOnly | QIODevice::Truncate)) {
		QTextStream out(&data);
		out << "The answer is " << 42;
	}
#endif
	QFile data("file.txt");
	if (data.open(QFile::ReadOnly)) {
		QTextStream in(&data);
		QString str;
		int ans = 0;
		in >> str >> ans;
	}
}
