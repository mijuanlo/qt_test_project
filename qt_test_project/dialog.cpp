#include "dialog.h"
#include "ui_dialog.h"
#include "mainwindow.h"
#include <QtWidgets>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}
Dialog::~Dialog()
{
    delete ui;
}

//void Dialog::isactivated(){
//}
void Dialog::emit_signal(){
    qDebug() << "emited";
    if (o != NULL){
        o->set_msg();
    }
}
void Dialog::setCaller(QObject *obj){
    o = (MainWindow*) obj;
}
