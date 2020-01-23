/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
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
    QLabel *label_Carga;
    QLabel *label_Localizao;
    QLabel *label_6;
    QLineEdit *lineEdit_Rua;
    QLabel *label_7;
    QLabel *label_11;
    QFrame *line_3;
    QLineEdit *lineEdit_Status;
    QLineEdit *lineEdit_Nome;
    QLineEdit *lineEdit_TipoDeBueiro;
    QLineEdit *lineEdit_Id;
    QPushButton *pushButton_ConfigurarRede;
    QLabel *label_Nivel_2;
    QLabel *label_5;
    QLabel *label_13;
    QLabel *label_10;
    QLabel *label_14;
    QLabel *label_15;
    QLineEdit *lineEdit_Bairro;
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
        label_Status->setGeometry(QRect(50, 240, 41, 21));
        QFont font1;
        font1.setPointSize(9);
        label_Status->setFont(font1);
        label_Status->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
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
        label_Carga = new QLabel(centralwidget);
        label_Carga->setObjectName(QString::fromUtf8("label_Carga"));
        label_Carga->setGeometry(QRect(550, 40, 81, 31));
        QFont font3;
        font3.setPointSize(11);
        label_Carga->setFont(font3);
        label_Carga->setStyleSheet(QString::fromUtf8("color: rgb(238, 238, 236);"));
        label_Carga->setAlignment(Qt::AlignCenter);
        label_Localizao = new QLabel(centralwidget);
        label_Localizao->setObjectName(QString::fromUtf8("label_Localizao"));
        label_Localizao->setGeometry(QRect(30, 390, 101, 31));
        QFont font4;
        font4.setPointSize(10);
        label_Localizao->setFont(font4);
        label_Localizao->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_Localizao->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(50, 450, 39, 21));
        label_6->setFont(font1);
        lineEdit_Rua = new QLineEdit(centralwidget);
        lineEdit_Rua->setObjectName(QString::fromUtf8("lineEdit_Rua"));
        lineEdit_Rua->setGeometry(QRect(90, 500, 221, 20));
        lineEdit_Rua->setStyleSheet(QString::fromUtf8("border-bottom-color: rgb(0, 255, 255);"));
        lineEdit_Rua->setFrame(false);
        lineEdit_Rua->setClearButtonEnabled(false);
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
        lineEdit_Status = new QLineEdit(centralwidget);
        lineEdit_Status->setObjectName(QString::fromUtf8("lineEdit_Status"));
        lineEdit_Status->setGeometry(QRect(100, 240, 221, 21));
        lineEdit_Status->setStyleSheet(QString::fromUtf8("border-bottom-color: rgb(0, 255, 255);"));
        lineEdit_Status->setFrame(false);
        lineEdit_Status->setClearButtonEnabled(false);
        lineEdit_Nome = new QLineEdit(centralwidget);
        lineEdit_Nome->setObjectName(QString::fromUtf8("lineEdit_Nome"));
        lineEdit_Nome->setGeometry(QRect(100, 290, 221, 21));
        lineEdit_Nome->setStyleSheet(QString::fromUtf8("border-bottom-color: rgb(0, 255, 255);"));
        lineEdit_Nome->setFrame(false);
        lineEdit_Nome->setClearButtonEnabled(false);
        lineEdit_TipoDeBueiro = new QLineEdit(centralwidget);
        lineEdit_TipoDeBueiro->setObjectName(QString::fromUtf8("lineEdit_TipoDeBueiro"));
        lineEdit_TipoDeBueiro->setGeometry(QRect(150, 140, 111, 20));
        lineEdit_TipoDeBueiro->setStyleSheet(QString::fromUtf8("border-bottom-color: rgb(0, 255, 255);"));
        lineEdit_TipoDeBueiro->setFrame(false);
        lineEdit_TipoDeBueiro->setClearButtonEnabled(false);
        lineEdit_Id = new QLineEdit(centralwidget);
        lineEdit_Id->setObjectName(QString::fromUtf8("lineEdit_Id"));
        lineEdit_Id->setGeometry(QRect(80, 90, 221, 20));
        lineEdit_Id->setStyleSheet(QString::fromUtf8("border-bottom-color: rgb(0, 255, 255);"));
        lineEdit_Id->setFrame(false);
        lineEdit_Id->setClearButtonEnabled(false);
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
        label_13->setGeometry(QRect(50, 290, 41, 21));
        label_13->setFont(font1);
        label_13->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
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
        lineEdit_Bairro = new QLineEdit(centralwidget);
        lineEdit_Bairro->setObjectName(QString::fromUtf8("lineEdit_Bairro"));
        lineEdit_Bairro->setGeometry(QRect(100, 450, 221, 20));
        lineEdit_Bairro->setStyleSheet(QString::fromUtf8("border-bottom-color: rgb(0, 255, 255);"));
        lineEdit_Bairro->setFrame(false);
        lineEdit_Bairro->setClearButtonEnabled(false);
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
        label_Carga->raise();
        label_Localizao->raise();
        label_6->raise();
        lineEdit_Rua->raise();
        label_7->raise();
        label_11->raise();
        lineEdit_Status->raise();
        lineEdit_Nome->raise();
        lineEdit_TipoDeBueiro->raise();
        lineEdit_Id->raise();
        pushButton_ConfigurarRede->raise();
        label_Nivel_2->raise();
        label_5->raise();
        label_13->raise();
        label_10->raise();
        label_14->raise();
        label_15->raise();
        lineEdit_Bairro->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 661, 25));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Monitoramento do bueiro", nullptr));
        label_Status->setText(QCoreApplication::translate("MainWindow", "Status:", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "INFORMA\303\207\303\225ES DO BUEIRO", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "INFORMA\303\207\303\225ES DO BUEIRO", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "ID:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Tipo de bueiro:", nullptr));
        label_Carga->setText(QCoreApplication::translate("MainWindow", "CARGA", nullptr));
        label_Localizao->setText(QCoreApplication::translate("MainWindow", "LOCALIZA\303\207\303\203O", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Bairro:", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Rua:", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "REDE", nullptr));
        pushButton_ConfigurarRede->setText(QCoreApplication::translate("MainWindow", "Configurar rede", nullptr));
        label_Nivel_2->setText(QCoreApplication::translate("MainWindow", "NIVEL", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Tipo de bueiro:", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Nome:", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Bairro:", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "ID:", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Rua:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
