//
// Created by hwf on 2023/6/21.
//
#include <QApplication>
#include <QLabel>
#include "./mainwindow.h"

int main(int argc, char *argv[]) {
  QApplication app(argc, argv);

  MainWindow mainWindow(nullptr);
  mainWindow.show();

  return QApplication::exec();
}