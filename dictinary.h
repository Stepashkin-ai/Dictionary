#include "mainwindow.h"
#include <QtGui>
#include <QObject>
#include <QPushButton>
#include <QLineEdit>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLabel>
#include <word.h>
#include <QGridLayout>
#include <QTextBlock>

#ifndef DICTINARY_H
#define DICTINARY_H


class Dictinary
{
public:
    QWidget* mainWindow;
    QGridLayout* layout = new QGridLayout ();
    QLineEdit* from = new QLineEdit ();
    QLineEdit* to = new QLineEdit ();
    QTextBlock* answer = new QTextBlock ();
    Dictinary(QWidget* mainWindow);
    Dictinary();
signals:

public slots:

};

#endif // DICTINARY_H
