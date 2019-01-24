#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dialog.h"

namespace Ui {
class MainWindow;
}

class Dialog;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void do_actions();
    void open_window();
    void set_msg();

private:
    int a;
    Ui::MainWindow *ui;
    Dialog *dlog;
};

#endif // MAINWINDOW_H
