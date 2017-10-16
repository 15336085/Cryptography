/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *title;
    QLineEdit *plain;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *key;
    QPushButton *encryption;
    QLabel *label_4;
    QPushButton *decryption;
    QLabel *label;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *cipher;
    QLabel *label_8;
    QLabel *label_9;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(698, 499);
        MainWindow->setContextMenuPolicy(Qt::CustomContextMenu);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/E:/\345\233\276\347\211\207/\347\264\240\346\235\220/\347\237\242\351\207\217\345\233\276\346\240\207/\345\212\240\345\257\206.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QStringLiteral("background-image: url(:/background.png);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        title = new QLabel(centralWidget);
        title->setObjectName(QStringLiteral("title"));
        title->setGeometry(QRect(170, -20, 481, 91));
        title->setStyleSheet(QStringLiteral("background:transparent"));
        title->setTextFormat(Qt::RichText);
        title->setAlignment(Qt::AlignCenter);
        title->setOpenExternalLinks(true);
        plain = new QLineEdit(centralWidget);
        plain->setObjectName(QStringLiteral("plain"));
        plain->setGeometry(QRect(200, 120, 321, 21));
        plain->setStyleSheet(QStringLiteral("background-image: url(:/border.png);"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(130, 120, 72, 20));
        label_2->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"font: 9pt \"\351\273\221\344\275\223\";"));
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(130, 190, 72, 20));
        label_3->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"font: 9pt \"\351\273\221\344\275\223\";"));
        label_3->setAlignment(Qt::AlignCenter);
        key = new QLineEdit(centralWidget);
        key->setObjectName(QStringLiteral("key"));
        key->setGeometry(QRect(200, 190, 321, 21));
        key->setStyleSheet(QStringLiteral("background-image: url(:/border.png);"));
        encryption = new QPushButton(centralWidget);
        encryption->setObjectName(QStringLiteral("encryption"));
        encryption->setGeometry(QRect(220, 330, 93, 28));
        encryption->setAutoFillBackground(false);
        encryption->setStyleSheet(QString::fromUtf8("background-image: url(:/border.png);\n"
"font: 9pt \"Adobe \351\273\221\344\275\223 Std R\";"));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(130, 260, 72, 20));
        label_4->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"font: 9pt \"\351\273\221\344\275\223\";"));
        label_4->setAlignment(Qt::AlignCenter);
        decryption = new QPushButton(centralWidget);
        decryption->setObjectName(QStringLiteral("decryption"));
        decryption->setGeometry(QRect(410, 330, 93, 28));
        decryption->setAutoFillBackground(false);
        decryption->setStyleSheet(QString::fromUtf8("background-image: url(:/border.png);\n"
"font: 9pt \"Adobe \351\273\221\344\275\223 Std R\";"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(170, 330, 41, 31));
        label->setStyleSheet(QStringLiteral("background:transparent"));
        label->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(360, 330, 41, 31));
        label_6->setStyleSheet(QStringLiteral("background:transparent"));
        label_6->setAlignment(Qt::AlignCenter);
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(240, 70, 241, 20));
        label_7->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"font: 9pt \"\351\273\221\344\275\223\";"));
        label_7->setAlignment(Qt::AlignCenter);
        cipher = new QLineEdit(centralWidget);
        cipher->setObjectName(QStringLiteral("cipher"));
        cipher->setGeometry(QRect(200, 260, 321, 21));
        cipher->setStyleSheet(QStringLiteral("background-image: url(:/border.png);"));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(100, 390, 501, 20));
        label_8->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"font: 9pt \"\351\273\221\344\275\223\";"));
        label_8->setAlignment(Qt::AlignCenter);
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(100, 420, 501, 20));
        label_9->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"font: 9pt \"\351\273\221\344\275\223\";"));
        label_9->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Caesar", 0));
        title->setText(QApplication::translate("MainWindow", "<html><head/><body><p><img src=\":/title.png\"/></p></body></html>", 0));
        plain->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "\346\230\216\346\226\207", 0));
        label_3->setText(QApplication::translate("MainWindow", "\345\257\206\351\222\245", 0));
        encryption->setText(QApplication::translate("MainWindow", "\345\212\240\345\257\206", 0));
        label_4->setText(QApplication::translate("MainWindow", "\345\257\206\346\226\207", 0));
        decryption->setText(QApplication::translate("MainWindow", "\350\247\243\345\257\206", 0));
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p><img src=\":/E:/\345\233\276\347\211\207/\347\264\240\346\235\220/\347\237\242\351\207\217\345\233\276\346\240\207/\345\212\240\345\257\20630.png\"/></p></body></html>", 0));
        label_6->setText(QApplication::translate("MainWindow", "<html><head/><body><p><img src=\":/E:/\345\233\276\347\211\207/\347\264\240\346\235\220/\347\237\242\351\207\217\345\233\276\346\240\207/\350\247\243\345\257\20630.png\"/></p></body></html>", 0));
        label_7->setText(QApplication::translate("MainWindow", "\347\275\221\347\273\234\345\267\245\347\250\213 \346\235\216\344\270\226\347\222\207 15336085", 0));
        label_8->setText(QApplication::translate("MainWindow", "\345\212\240\345\257\206\357\274\232\345\234\250\342\200\234\346\230\216\346\226\207\342\200\235\345\222\214\342\200\234\345\257\206\351\222\245\342\200\235\346\241\206\345\206\205\350\276\223\345\205\245\347\233\270\345\272\224\346\225\260\346\215\256\345\220\216\346\214\211\344\270\213\342\200\234\345\212\240\345\257\206\342\200\235\346\214\211\351\224\256", 0));
        label_9->setText(QApplication::translate("MainWindow", "\350\247\243\345\257\206\357\274\232\345\234\250\342\200\234\345\257\206\346\226\207\342\200\235\345\222\214\342\200\234\345\257\206\351\222\245\342\200\235\346\241\206\345\206\205\350\276\223\345\205\245\347\233\270\345\272\224\346\225\260\346\215\256\345\220\216\346\214\211\344\270\213\342\200\234\350\247\243\345\257\206\342\200\235\346\214\211\351\224\256", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
