#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QMainWindow>
#include <QDebug>
#include <string>
#include <QString>
using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_encryption_clicked()
{
    QString inp = ui->plain->text();
    QString key = ui->key->text();
    string in = inp.toStdString();
    int k = key.toInt();
    int size = inp.length();
    for(int i = 0; i < size; i++){
        if(in[i] >= 'a' && in[i] <= 'z'){
            int dif = in[i] - 'a';
            in[i] = 'a' + modulo(dif + k);
        }
        else if(in[i] >= 'A' && in[i] <= 'Z'){
            int dif = in[i] - 'A';
            in[i] = 'A' + modulo(dif + k);
        }
        else{
            in = "invalid input!";
        }
    }
    inp = QString::fromStdString(in);
     ui->cipher->setText(inp);
}


void MainWindow::on_decryption_clicked()
{
    QString inp = ui->cipher->text();
    QString key = ui->key->text();
    string in = inp.toStdString();
    int k = key.toInt();
    int size = inp.length();
    for(int i = 0; i < size; i++){
        if(in[i] >= 'a' && in[i] <= 'z'){
            int dif = in[i] - 'a';
            in[i] = 'a' + modulo(dif - k);
        }
        else if(in[i] >= 'A' && in[i] <= 'Z'){
            int dif = in[i] - 'A';
            in[i] = 'A' + modulo(dif - k);
        }
        else{
            in = "invalid input!";
        }
    }
    inp = QString::fromStdString(in);
     ui->plain->setText(inp);
}
