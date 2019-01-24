#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"
#include <iostream>
#include <QtWidgets>
using namespace std;

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    a=1;
    dlog = NULL;
    ui->setupUi(this);
    ui->mainToolBar->addAction(QIcon("/usr/share/icons/ContrastHigh/22x22/emotes/face-smile.png"),"hello world",this,&MainWindow::do_actions);
    ui->textEdit_2->setText(QString::number(a));
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::do_actions() {
    a += 1;
    cout << "JAJA" << endl;
    qDebug() << "EO" << endl;
    ui->textEdit_2->setText(QString::number(a));
}

void MainWindow::set_msg(){
    if (dlog != NULL){
        int res = dlog->result();
        if (res == QDialog::Accepted){
            ui->textEdit->setText(QString("Accepted"));
        }else{
            if (res == QDialog::Rejected){
                ui->textEdit->setText(QString("Canceled"));
            }else{
                ui->textEdit->setText(QString("Other"));
            }
        }
    }
}
void MainWindow::open_window() {
    qDebug() << "opened dialog";
    if (dlog == NULL){
        qDebug() << "opened new";
        dlog = new Dialog;
        dlog->setModal(true);
        dlog->setCaller(this);
    }else{
        qDebug() << "opened reused";
    }

    dlog->show();
}
