#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include <QThread>
#include <QPromise>
#include <QtConcurrent/QtConcurrentRun>


void process(QPromise<QString> &promise)
{
    promise.setProgressRange(0 ,100);
    for (int i = 0; i < 100; ++i) {
        promise.suspendIfRequested();
        if (promise.isCanceled())
            return;
        promise.setProgressValue(i);
        promise.addResult(QStringLiteral("Valeu %1").arg(i));
        QThread::currentThread()->sleep(1);
    }
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(&_watcher,
            &QFutureWatcher<QString>::progressValueChanged,
            ui->progressBar,
            &QProgressBar::setValue);
    _future = QtConcurrent::run(process);
    _watcher.setFuture(_future);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_psPauseResume_clicked()
{
    if(ui->psPauseResume->isChecked()){
        _future.suspend();
        ui->psPauseResume->setText(tr("Resume"));
    } else {
        _future.resume();
        ui->psPauseResume->setText(tr("Pause"));
    }
}

void MainWindow::on_psCancel_clicked()
{
        _future.cancel();
        ui->progressBar->setValue(0);
}
