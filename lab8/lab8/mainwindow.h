#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFuture>
#include <QFutureWatcher>

template<typename T>
class QPromise;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

//    void process(QPromise<QString> &promise);

private slots:
    void on_psPauseResume_clicked();

    void on_psCancel_clicked();

private:
    Ui::MainWindow *ui;
    QFuture<QString> _future;
    QFutureWatcher<QString> _watcher;
};
#endif // MAINWINDOW_H
