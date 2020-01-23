#include "configurarrede_dialog.h"
#include "ui_configurarrede_dialog.h"

ConfigurarRede_Dialog::ConfigurarRede_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ConfigurarRede_Dialog)
{
    ui->setupUi(this);

    novo = false;

    for(auto& item : QSerialPortInfo::availablePorts()){
        ui->comboBox_Porta->addItem(item.portName());
    }

    for(auto& item : QSerialPortInfo::standardBaudRates()){
        ui->comboBox_BaudRate->addItem(QString::number(item));
    }

    QWidget::setWindowTitle("Configuração da rede");
}

ConfigurarRede_Dialog::~ConfigurarRede_Dialog()
{
    delete ui;
}

void ConfigurarRede_Dialog::on_pushButton_Cancelar_clicked()
{
    close();
}

void ConfigurarRede_Dialog::on_pushButton_Salvar_clicked()
{
    novo = true;
    rate = (ui->comboBox_BaudRate->currentText().toInt());
    serialPort = (ui->comboBox_Porta->currentText());
    close();
}

int ConfigurarRede_Dialog::getRate() const
{
    return rate;
}

QString ConfigurarRede_Dialog::getSerialPort() const
{
    return serialPort;
}

bool ConfigurarRede_Dialog::getNovo() const
{
    return novo;
}

void ConfigurarRede_Dialog::setSerialTemp(int br, QString porta)
{
    ui->comboBox_BaudRate->setCurrentText(porta);
    ui->comboBox_Porta->setCurrentText(QString::number(br));
}
