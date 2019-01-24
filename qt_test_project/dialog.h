#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include "mainwindow.h"


namespace Ui {
class Dialog;
}

class MainWindow;

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();
    void setCaller(QObject *obj);

//signals:
//    void isactivated();

public slots:
    void emit_signal();

private:
    Ui::Dialog *ui;
    MainWindow *o;
};

#endif // DIALOG_H
