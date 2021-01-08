#include "mainwindow.h"

#include <QApplication>
#include <QSqlDatabase>
#include <QDebug>

void connectToDatabase()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("teste.db");
    bool ok = db.open();
    qDebug() << "Ok?" << ok;
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    connectToDatabase();
    MainWindow w;
    w.show();
    return a.exec();
}
