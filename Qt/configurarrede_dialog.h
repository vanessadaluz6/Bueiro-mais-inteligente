#ifndef CONFIGURARREDE_DIALOG_H
#define CONFIGURARREDE_DIALOG_H

#include <QDialog>
#include <QString>
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

    void setSerialTemp(int br, QString porta);

    bool getNovo() const;

    QString getSerialPort() const;

    int getRate() const;

private slots:
    void on_pushButton_Cancelar_clicked();

    void on_pushButton_Salvar_clicked();

private:
    Ui::ConfigurarRede_Dialog *ui;

    QString serialPort;
    int rate;

    bool novo;
};

#endif // CONFIGURARREDE_DIALOG_H
