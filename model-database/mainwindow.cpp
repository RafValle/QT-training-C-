#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QSqlTableModel>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    auto *model = new QSqlTableModel;
    model->setTable("produtos");
    model->setEditStrategy(QSqlTableModel::OnFieldChange);
    model->select();
    model->setHeaderData(0, Qt::Horizontal, tr("Id"));
    model->setHeaderData(1, Qt::Horizontal, tr("Nome"));
    model->setHeaderData(2, Qt::Horizontal, tr("Preço"));

    ui->tableView->setModel(model);
    //ui->tableView->hideColumn(0); // don't show the ID
    ui->tableView->show();

}

MainWindow::~MainWindow()
{
    delete ui;
}

