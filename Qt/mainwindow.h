#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QTimer>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QJsonDocument>
#include <QJsonObject>
#include "bueiro.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_ConfigurarRede_clicked();
    void atualizarInterface();
private:
    Ui::MainWindow *ui;

    Bueiro bueiro;



    QSerialPort serial;
};
#endif // MAINWINDOW_H
