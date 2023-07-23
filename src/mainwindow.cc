//
// Created by hwf on 2023/6/21.
//

#define QT_DEBUG_PLUGINS 1

#include <QLabel>
#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent) {
  new QLabel("Hello world", this);
}
