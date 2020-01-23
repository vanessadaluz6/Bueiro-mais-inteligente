#include "configurarrede_dialog.h"
#include "ui_configurarrede_dialog.h"

ConfigurarRede_Dialog::ConfigurarRede_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ConfigurarRede_Dialog)
{
    ui->setupUi(this);

    for(auto& item : QSerialPortInfo::availablePorts()){
        ui->comboBox_Porta->addItem(item.portName());
    }

    for(auto& item : QSerialPortInfo::standardBaudRates()){
        ui->comboBox_BaudRate->addItem(QString::number(item));
        serialTemp.setBaudRate(115200);
    }

    connect(&serialTemp,
            SIGNAL(readyRead()),
            this,
            SLOT(dadosRecebidos()));
}

ConfigurarRede_Dialog::~ConfigurarRede_Dialog()
{
    delete ui;
}
