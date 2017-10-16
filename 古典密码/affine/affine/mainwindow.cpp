#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string>
using namespace std;

string encryption(int key1, int key2, string input){
    string output  = input;
    for(int i = 0; i < output.length(); i++){
        int t = (output[i] - 'a') * key1 + key2;
        output[i] = 'a' + t % 26;
    }
    return output;
}

string decryption(int key1, int key2, string input){
    string output  = input;
    for(int i = 0; i < output.length(); i++){
        int t = (output[i] - 'a'- key2);
        while(t%key1 != 0){
            t = t + 26;
        }
        t = t /key1;
        output[i] = 'a' + t ;
    }
    return output;
}

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

void MainWindow::on_Encode_clicked()
{
    string input, output; int k1, k2;
    QString inp = ui->input->text();
    k1 = ui->key1->value();
    k2 = ui->key2->value();
    input = inp.toStdString();
    for(int i = 0; i < input.length(); i++){
        input[i] = tolower(input[i]);
    }
    output=encryption(k1, k2, input);
    inp = QString::fromStdString(output);
    ui->output->setText(inp);
}

void MainWindow::on_Decode_clicked()
{
    string input, output; int k1, k2;
    QString inp = ui->input->text();
    k1 = ui->key1->value();
    k2 = ui->key2->value();
    input = inp.toStdString();
    for(int i = 0; i < input.length(); i++){
        input[i] = tolower(input[i]);
    }
    output=decryption(k1, k2, input);
    inp = QString::fromStdString(output);
    ui->output->setText(inp);
}
