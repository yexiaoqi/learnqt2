#include "learnqt2.h"
#include <QtWidgets/QApplication>
#include<QFile>
#include<QFileInfo>
#include<qDebug>
#include<Qdir>
#include<QTableWidget>


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
#if 0
	//QDataStream提供流的形式
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
	//文本文件的写
	QFile data("file.txt");
	if (data.open(QFile::WriteOnly | QIODevice::Truncate)) {
		QTextStream out(&data);
		out << "The answer is " << 42;
	}
#endif
#if 0
	QFile data("file.txt");
	if (data.open(QFile::ReadOnly)) {
		QTextStream in(&data);
		QString str;
		int ans = 0;
		in >> str >> ans;
	}
#endif
#if 0
	//QListIterator,只读遍历器
	QList<QString> list;
	list << "A" << "B" << "C" << "D";

	QListIterator<QString> i(list);
	while (i.hasNext()) {
		qDebug() << i.next();
	}
#endif

#if 0
	//使用QMutableListIterator遍历集合，如果其值是奇数则将其删除
	QList<int> list;
	list << 1 << 2 << 3 << 4;
	QMutableListIterator<int> i(list);
	while (i.hasNext()) {
		if (i.next() % 2 != 0) {
			i.remove();
		}
	}
#endif

#if 0
	//修改已经存在的元素，使用setValue()函数
	QList<int> list;
	list << 1 << 2 << 3 << 411;
	QMutableListIterator<int> i(list);
	while (i.hasNext()) {
		if (i.next() > 128) {
			i.setValue(128);
		}
	}
#endif

#if 0
	QList<int> list;
	list << 1 << 2 << 3 << 411;
	QMutableListIterator<int> i(list);
	while (i.hasNext()) {
		i.next() *= 2;
	}
#endif
#if 0
	QMap<int, QWidget *> map;
	QHash<int, QWidget *> hash;

	QMapIterator<int, QWidget *> i(map);
	while (i.hasNext()) {
		i.next();
		hash.insert(i.key(), i.value());
	}
#endif

#if 0
	QList<QString> list;
	list << "A" << "B" << "C" << "D";

	QList<QString>::iterator i;
	for (i = list.begin(); i != list.end(); ++i) {
		*i = (*i).toLower();
	}
#endif
#if 0
	QList<QString> list;
	list << "A" << "B" << "C" << "D";
	QList<QString>::const_iterator i;
	for (i = list.constBegin(); i != list.constEnd(); ++i) {
		qDebug() << *i;
	}
#endif

	QApplication app(argc, argv);
#if 0
	QTreeWidget treeWidget;
	treeWidget.setColumnCount(1);

	QTreeWidgetItem *root = new QTreeWidgetItem(&treeWidget,
		QStringList(QString("Root")));
	new QTreeWidgetItem(root, QStringList(QString("Leaf 1")));
	QTreeWidgetItem *leaf2 = new QTreeWidgetItem(root, QStringList(QString("Leaf 2")));
	leaf2->setCheckState(0, Qt::Checked);

	QList<QTreeWidgetItem *> rootList;
	rootList << root;
	treeWidget.insertTopLevelItems(0, rootList);

	treeWidget.show();
#endif

#if 0
	QTreeWidget treeWidget;

	QStringList headers;
	headers << "Name" << "Number";
	treeWidget.setHeaderLabels(headers);

	QStringList rootTextList;
	rootTextList << "Root" << "0";
	QTreeWidgetItem *root = new QTreeWidgetItem(&treeWidget, rootTextList);

	new QTreeWidgetItem(root, QStringList() << QString("Leaf 1") << "1");
	QTreeWidgetItem *leaf2 = new QTreeWidgetItem(root,
		QStringList() << QString("Leaf 2") << "2");
	leaf2->setCheckState(0, Qt::Checked);

	QList<QTreeWidgetItem *> rootList;
	rootList << root;
	treeWidget.insertTopLevelItems(0, rootList);

	treeWidget.show();
#endif
#if 0
	QTableWidget tableWidget;
	tableWidget.setColumnCount(3);
	tableWidget.setRowCount(5);

	QStringList headers;
	headers << "ID" << "Name" << "Age" << "Sex";
	tableWidget.setHorizontalHeaderLabels(headers);

	tableWidget.setItem(0, 0, new QTableWidgetItem(QString("0001")));
	tableWidget.setItem(1, 0, new QTableWidgetItem(QString("0002")));
	tableWidget.setItem(2, 0, new QTableWidgetItem(QString("0003")));
	tableWidget.setItem(3, 0, new QTableWidgetItem(QString("0004")));
	tableWidget.setItem(4, 0, new QTableWidgetItem(QString("0005")));
	tableWidget.setItem(0, 1, new QTableWidgetItem(QString("20100112")));

	tableWidget.show();

	/*learnqt2 win;
	win.resize(400, 200);
	win.show();*/
	return app.exec();
#endif
	learnqt2 win;
	win.show();
	return app.exec();
}
