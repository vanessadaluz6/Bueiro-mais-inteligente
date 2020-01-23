#ifndef CONFIGURARREDE_DIALOG_H
#define CONFIGURARREDE_DIALOG_H

#include <QDialog>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>

namespace Ui {
class ConfigurarRede_Dialog;
}

class ConfigurarRede_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit ConfigurarRede_Dialog(QWidget *parent = nullptr);
    ~ConfigurarRede_Dialog();

private:
    Ui::ConfigurarRede_Dialog *ui;

    QSerialPort serialTemp;
};

#endif // CONFIGURARREDE_DIALOG_H
