#include "mainwindow.h"
#include "./ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    auto *fileSystemModel = new QFileSystemModel(this);
    fileSystemModel->setRootPath(QDir::currentPath());
    ui->treeView->setModel(fileSystemModel);
    ui->treeView->setRootIndex(
                fileSystemModel->index(QDir::currentPath()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

