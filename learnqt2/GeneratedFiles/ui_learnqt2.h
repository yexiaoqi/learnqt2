/********************************************************************************
** Form generated from reading UI file 'learnqt2.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEARNQT2_H
#define UI_LEARNQT2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_learnqt2Class
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *learnqt2Class)
    {
        if (learnqt2Class->objectName().isEmpty())
            learnqt2Class->setObjectName(QStringLiteral("learnqt2Class"));
        learnqt2Class->resize(600, 400);
        menuBar = new QMenuBar(learnqt2Class);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        learnqt2Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(learnqt2Class);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        learnqt2Class->addToolBar(mainToolBar);
        centralWidget = new QWidget(learnqt2Class);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        learnqt2Class->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(learnqt2Class);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        learnqt2Class->setStatusBar(statusBar);

        retranslateUi(learnqt2Class);

        QMetaObject::connectSlotsByName(learnqt2Class);
    } // setupUi

    void retranslateUi(QMainWindow *learnqt2Class)
    {
        learnqt2Class->setWindowTitle(QApplication::translate("learnqt2Class", "learnqt2", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class learnqt2Class: public Ui_learnqt2Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEARNQT2_H
