/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QProgressBar *progressBar_Nivel;
    QProgressBar *progressBar_Carga;
    QFrame *line;
    QLabel *label_Status;
    QFrame *frame;
    QLabel *label;
    QFrame *frame_2;
    QLabel *label_9;
    QLabel *label_3;
    QLabel *label_4;
    QFrame *line_2;
    QLabel *label_Nivel;
    QLabel *label_Carga;
    QLabel *label_8;
    QLabel *label_6;
    QLineEdit *lineEdit;
    QLabel *label_7;
    QLabel *label_11;
    QFrame *line_3;
    QLabel *label_12;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QPushButton *pushButton_ConfigurarRede;
    QLabel *label_Nivel_2;
    QLabel *label_5;
    QLabel *label_13;
    QLabel *label_Status_2;
    QLabel *label_10;
    QLabel *label_14;
    QLabel *label_15;
    QLineEdit *lineEdit_6;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(661, 582);
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe UI Black"));
        MainWindow->setFont(font);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(71, 74, 81);"));
        MainWindow->setAnimated(true);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        progressBar_Nivel = new QProgressBar(centralwidget);
        progressBar_Nivel->setObjectName(QString::fromUtf8("progressBar_Nivel"));
        progressBar_Nivel->setEnabled(true);
        progressBar_Nivel->setGeometry(QRect(400, 90, 81, 441));
        progressBar_Nivel->setStyleSheet(QString::fromUtf8(""));
        progressBar_Nivel->setMaximum(45);
        progressBar_Nivel->setValue(24);
        progressBar_Nivel->setTextVisible(false);
        progressBar_Nivel->setOrientation(Qt::Vertical);
        progressBar_Nivel->setInvertedAppearance(false);
        progressBar_Carga = new QProgressBar(centralwidget);
        progressBar_Carga->setObjectName(QString::fromUtf8("progressBar_Carga"));
        progressBar_Carga->setEnabled(true);
        progressBar_Carga->setGeometry(QRect(550, 90, 81, 441));
        progressBar_Carga->setMaximum(20);
        progressBar_Carga->setValue(-1);
        progressBar_Carga->setTextVisible(false);
        progressBar_Carga->setOrientation(Qt::Vertical);
        progressBar_Carga->setInvertedAppearance(false);
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(509, 50, 21, 511));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        label_Status = new QLabel(centralwidget);
        label_Status->setObjectName(QString::fromUtf8("label_Status"));
        label_Status->setGeometry(QRect(50, 290, 41, 21));
        QFont font1;
        font1.setPointSize(9);
        label_Status->setFont(font1);
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 221, 41));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 181, 20));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Segoe UI Black"));
        font2.setPointSize(10);
        label->setFont(font2);
        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(0, 0, 221, 41));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_9 = new QLabel(frame_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(20, 10, 181, 20));
        label_9->setFont(font2);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 90, 21, 21));
        label_3->setFont(font1);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(50, 140, 91, 21));
        label_4->setFont(font1);
        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(0, 396, 351, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_Nivel = new QLabel(centralwidget);
        label_Nivel->setObjectName(QString::fromUtf8("label_Nivel"));
        label_Nivel->setGeometry(QRect(400, 40, 81, 31));
        QFont font3;
        font3.setPointSize(11);
        label_Nivel->setFont(font3);
        label_Nivel->setAlignment(Qt::AlignCenter);
        label_Carga = new QLabel(centralwidget);
        label_Carga->setObjectName(QString::fromUtf8("label_Carga"));
        label_Carga->setGeometry(QRect(550, 40, 81, 31));
        label_Carga->setFont(font3);
        label_Carga->setStyleSheet(QString::fromUtf8("color: rgb(238, 238, 236);"));
        label_Carga->setAlignment(Qt::AlignCenter);
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(30, 390, 101, 31));
        QFont font4;
        font4.setPointSize(10);
        label_8->setFont(font4);
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_8->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(50, 450, 39, 21));
        label_6->setFont(font1);
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(90, 500, 221, 20));
        lineEdit->setStyleSheet(QString::fromUtf8("border-bottom-color: rgb(0, 255, 255);"));
        lineEdit->setFrame(false);
        lineEdit->setClearButtonEnabled(false);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(50, 500, 31, 21));
        label_7->setFont(font1);
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(30, 190, 51, 21));
        label_11->setFont(font4);
        label_11->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_11->setAlignment(Qt::AlignCenter);
        line_3 = new QFrame(centralwidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(0, 190, 351, 20));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(50, 240, 41, 21));
        label_12->setFont(font1);
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(100, 290, 221, 20));
        lineEdit_2->setStyleSheet(QString::fromUtf8("border-bottom-color: rgb(0, 255, 255);"));
        lineEdit_2->setFrame(false);
        lineEdit_2->setClearButtonEnabled(false);
        lineEdit_3 = new QLineEdit(centralwidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(100, 240, 221, 20));
        lineEdit_3->setStyleSheet(QString::fromUtf8("border-bottom-color: rgb(0, 255, 255);"));
        lineEdit_3->setFrame(false);
        lineEdit_3->setClearButtonEnabled(false);
        lineEdit_4 = new QLineEdit(centralwidget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(150, 140, 111, 20));
        lineEdit_4->setStyleSheet(QString::fromUtf8("border-bottom-color: rgb(0, 255, 255);"));
        lineEdit_4->setFrame(false);
        lineEdit_4->setClearButtonEnabled(false);
        lineEdit_5 = new QLineEdit(centralwidget);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(80, 90, 221, 20));
        lineEdit_5->setStyleSheet(QString::fromUtf8("border-bottom-color: rgb(0, 255, 255);"));
        lineEdit_5->setFrame(false);
        lineEdit_5->setClearButtonEnabled(false);
        pushButton_ConfigurarRede = new QPushButton(centralwidget);
        pushButton_ConfigurarRede->setObjectName(QString::fromUtf8("pushButton_ConfigurarRede"));
        pushButton_ConfigurarRede->setGeometry(QRect(50, 340, 121, 25));
        pushButton_ConfigurarRede->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_Nivel_2 = new QLabel(centralwidget);
        label_Nivel_2->setObjectName(QString::fromUtf8("label_Nivel_2"));
        label_Nivel_2->setGeometry(QRect(400, 40, 81, 31));
        label_Nivel_2->setFont(font3);
        label_Nivel_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_Nivel_2->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(50, 140, 91, 21));
        label_5->setFont(font1);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(50, 240, 41, 21));
        label_13->setFont(font1);
        label_13->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_Status_2 = new QLabel(centralwidget);
        label_Status_2->setObjectName(QString::fromUtf8("label_Status_2"));
        label_Status_2->setGeometry(QRect(50, 290, 41, 21));
        label_Status_2->setFont(font1);
        label_Status_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(50, 450, 39, 21));
        label_10->setFont(font1);
        label_10->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_14 = new QLabel(centralwidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(50, 90, 21, 21));
        label_14->setFont(font4);
        label_14->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_15 = new QLabel(centralwidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(50, 500, 31, 21));
        label_15->setFont(font1);
        label_15->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lineEdit_6 = new QLineEdit(centralwidget);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(100, 450, 221, 20));
        lineEdit_6->setStyleSheet(QString::fromUtf8("border-bottom-color: rgb(0, 255, 255);"));
        lineEdit_6->setFrame(false);
        lineEdit_6->setClearButtonEnabled(false);
        MainWindow->setCentralWidget(centralwidget);
        line_3->raise();
        progressBar_Nivel->raise();
        progressBar_Carga->raise();
        line->raise();
        label_Status->raise();
        frame->raise();
        label_3->raise();
        label_4->raise();
        line_2->raise();
        label_Nivel->raise();
        label_Carga->raise();
        label_8->raise();
        label_6->raise();
        lineEdit->raise();
        label_7->raise();
        label_11->raise();
        label_12->raise();
        lineEdit_2->raise();
        lineEdit_3->raise();
        lineEdit_4->raise();
        lineEdit_5->raise();
        pushButton_ConfigurarRede->raise();
        label_Nivel_2->raise();
        label_5->raise();
        label_13->raise();
        label_Status_2->raise();
        label_10->raise();
        label_14->raise();
        label_15->raise();
        lineEdit_6->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 661, 21));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Monitoramento do bueiro", nullptr));
        label_Status->setText(QApplication::translate("MainWindow", "Status:", nullptr));
        label->setText(QApplication::translate("MainWindow", "INFORMA\303\207\303\225ES DO BUEIRO", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "INFORMA\303\207\303\225ES DO BUEIRO", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "ID:", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Tipo de bueiro:", nullptr));
        label_Nivel->setText(QApplication::translate("MainWindow", "NIVEL", nullptr));
        label_Carga->setText(QApplication::translate("MainWindow", "CARGA", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "LOCALIZA\303\207\303\203O", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Bairro:", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Rua:", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "REDE", nullptr));
        label_12->setText(QApplication::translate("MainWindow", "Nome:", nullptr));
        pushButton_ConfigurarRede->setText(QApplication::translate("MainWindow", "Configurar rede", nullptr));
        label_Nivel_2->setText(QApplication::translate("MainWindow", "NIVEL", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Tipo de bueiro:", nullptr));
        label_13->setText(QApplication::translate("MainWindow", "Nome:", nullptr));
        label_Status_2->setText(QApplication::translate("MainWindow", "Status:", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "Bairro:", nullptr));
        label_14->setText(QApplication::translate("MainWindow", "ID:", nullptr));
        label_15->setText(QApplication::translate("MainWindow", "Rua:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
