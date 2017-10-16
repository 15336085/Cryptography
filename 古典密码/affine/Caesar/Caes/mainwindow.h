#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>



namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    int modulo(int n){
        int res = n;
        if(n > 0)
            while( res >= 26) res-=26;
        else if(n < 0)
            while(res < 0) res+=26;
        return res;
    }
private slots:
    void on_encryption_clicked();

    void on_decryption_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
