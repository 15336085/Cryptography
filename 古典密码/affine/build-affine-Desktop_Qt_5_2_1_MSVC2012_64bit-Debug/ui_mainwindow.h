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
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLineEdit *input;
    QSpinBox *key1;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QSpinBox *key2;
    QLineEdit *output;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *Encode;
    QPushButton *Decode;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(669, 485);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/\345\212\240\345\257\206.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QStringLiteral("background-image: url(:/66.png);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        input = new QLineEdit(centralWidget);
        input->setObjectName(QStringLiteral("input"));
        input->setGeometry(QRect(190, 170, 311, 21));
        input->setStyleSheet(QStringLiteral("background-image: url(:/back.png);"));
        key1 = new QSpinBox(centralWidget);
        key1->setObjectName(QStringLiteral("key1"));
        key1->setGeometry(QRect(260, 230, 46, 22));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(140, 170, 41, 16));
        label->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font: 10pt \"\351\273\221\344\275\223\";\n"
"color: rgb(255, 255, 255);"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(150, -10, 681, 91));
        label_2->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font: 10pt \"\347\255\211\347\272\277\";\n"
"color: rgb(255, 255, 255);\n"
"background-image: url(:/150811303640115.png);"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(140, 310, 41, 16));
        label_3->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font: 10pt \"\351\273\221\344\275\223\";\n"
"color: rgb(255, 255, 255);"));
        key2 = new QSpinBox(centralWidget);
        key2->setObjectName(QStringLiteral("key2"));
        key2->setGeometry(QRect(410, 230, 46, 22));
        output = new QLineEdit(centralWidget);
        output->setObjectName(QStringLiteral("output"));
        output->setGeometry(QRect(190, 310, 311, 21));
        output->setStyleSheet(QStringLiteral("background-image: url(:/back.png);"));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(210, 230, 41, 20));
        label_4->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font: 10pt \"\351\273\221\344\275\223\";\n"
"color: rgb(255, 255, 255);"));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(350, 230, 51, 20));
        label_5->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font: 10pt \"\351\273\221\344\275\223\";\n"
"color: rgb(255, 255, 255);"));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(220, 90, 231, 20));
        label_6->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font: 10pt \"\351\273\221\344\275\223\";\n"
"color: rgb(255, 255, 255);"));
        Encode = new QPushButton(centralWidget);
        Encode->setObjectName(QStringLiteral("Encode"));
        Encode->setGeometry(QRect(220, 380, 93, 28));
        Encode->setStyleSheet(QString::fromUtf8("background-image: url(:/back.png);\n"
"font: 9pt \"\347\255\211\347\272\277\";"));
        Decode = new QPushButton(centralWidget);
        Decode->setObjectName(QStringLiteral("Decode"));
        Decode->setGeometry(QRect(380, 380, 93, 28));
        Decode->setStyleSheet(QString::fromUtf8("background-image: url(:/back.png);\n"
"font: 9pt \"\347\255\211\347\272\277\";"));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(210, 260, 221, 20));
        label_7->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font: 9pt \"\351\273\221\344\275\223\";\n"
"color: rgb(255, 255, 255);"));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(140, 400, 41, 16));
        label_8->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font: 10pt \"\351\273\221\344\275\223\";\n"
"color: rgb(255, 255, 255);"));
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(180, 380, 31, 31));
        label_9->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"image: url(:/\345\212\240\345\257\20630.png);\n"
"font: 10pt \"\351\273\221\344\275\223\";\n"
"color: rgb(255, 255, 255);"));
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(340, 380, 31, 31));
        label_10->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"image: url(:/\350\247\243\345\257\20630.png);\n"
"\n"
"font: 10pt \"\351\273\221\344\275\223\";\n"
"color: rgb(255, 255, 255);"));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Affine Cipher", 0));
        label->setText(QApplication::translate("MainWindow", "\350\276\223\345\205\245", 0));
        label_2->setText(QString());
        label_3->setText(QApplication::translate("MainWindow", "\350\276\223\345\207\272", 0));
        label_4->setText(QApplication::translate("MainWindow", "\345\257\206\351\222\2451", 0));
        label_5->setText(QApplication::translate("MainWindow", "\345\257\206\351\222\2452", 0));
        label_6->setText(QApplication::translate("MainWindow", "\347\275\221\347\273\234\345\267\245\347\250\213 15336085 \346\235\216\344\270\226\347\222\207", 0));
        Encode->setText(QApplication::translate("MainWindow", "\345\212\240\345\257\206", 0));
        Decode->setText(QApplication::translate("MainWindow", "\350\247\243\345\257\206", 0));
        label_7->setText(QApplication::translate("MainWindow", "*\345\257\206\351\222\2451\347\232\204\345\200\274\345\277\205\351\241\273\344\270\21626\344\272\222\350\264\250", 0));
        label_8->setText(QString());
        label_9->setText(QString());
        label_10->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
