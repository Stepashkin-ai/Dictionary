#include "dictinary.h"
#include "mainwindow.h"

Dictinary::Dictinary(QWidget* mainWindow)
{
    this->mainWindow = mainWindow;
    layout->setParent(this->mainWindow);
    from->setParent(this->mainWindow);
    to->setParent(this->mainWindow);
    answer->setParent(this->mainWindow);

    layout->addWidget(from, 1, 1, 1, 1);
    layout->addWidget(to, 1, 2, 1, 1);
    layout->addWidget(answer, 2, 2, 1, 1);
    this->mainWindow->setLayout(layout);
}
