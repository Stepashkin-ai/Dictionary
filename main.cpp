#include "mainwindow.h"
#include <QtGui>
#include <QObject>
#include <QPushButton>
#include <QLineEdit>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLabel>
#include <dictinary.h>

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWidget* mainWindow = new QWidget;
    Dictinary as(mainWindow);
    mainWindow->show();
    return a.exec();
}
