#include "learnqt2.h"

learnqt2::learnqt2()
{
#if 0
	//label = new QLabel;
	label = new QLabel;//(this);//如果不在h文件中写QLabel *label；则要加QLabel *
	label->setFixedWidth(70);

	listWidget = new QListWidget;//(this);

	new QListWidgetItem(QIcon(":/images/Chrome.png"), tr("Chrome"), listWidget);
	new QListWidgetItem(QIcon(":/images/Firefox.png"), tr("Firefox"), listWidget);

	listWidget->addItem(new QListWidgetItem(QIcon(":/images/IE.png"), tr("IE")));
	listWidget->addItem(new QListWidgetItem(QIcon(":/images/Netscape.png"), tr("Netscape")));
	listWidget->addItem(new QListWidgetItem(QIcon(":/images/Opera.png"), tr("Opera")));
	listWidget->addItem(new QListWidgetItem(QIcon(":/images/Safari.png"), tr("Safari")));
	listWidget->addItem(new QListWidgetItem(QIcon(":/images/TheWorld.png"), tr("TheWorld")));
	listWidget->addItem(new QListWidgetItem(QIcon(":/images/Traveler.png"), tr("Traveler")));

	QListWidgetItem *newItem = new QListWidgetItem;
	newItem->setIcon(QIcon(":images/Maxthon.png"));
	newItem->setText(tr("Maxthon"));
	listWidget->insertItem(3, newItem);
	listWidget->setViewMode(QListView::IconMode);
	QHBoxLayout *layout = new QHBoxLayout;
	layout->addWidget(label);
	layout->addWidget(listWidget);

	setLayout(layout);

	connect(listWidget, SIGNAL(currentTextChanged(QString)),
		label, SLOT(setText(QString)));
#endif
	QString program = "C:/Windows/System32/cmd.exe";
	QStringList arguments;
	arguments << "/c" << "dir" << "C:\\";
	QProcess *cmdProcess = new QProcess;
	QObject::connect(cmdProcess, &QProcess::readyRead, [=]() {
		QTextCodec *codec = QTextCodec::codecForName("GBK");
		QString dir = codec->toUnicode(cmdProcess->readAll());
		qDebug() << dir;
	});
	cmdProcess->start(program, arguments);
}
