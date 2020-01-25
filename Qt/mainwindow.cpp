#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->progressBar_Nivel->setValue(0);
    ui->progressBar_Carga->setValue(0);

    connect(&serial,
            SIGNAL(readyRead()),
            this,
            SLOT(atualizarInterface()));

    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(atualizarInterface()));
    timer->start(1000);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::atualizarInterface()
{
    serial.open(QIODevice::ReadOnly);
    auto data = serial.readAll();
    auto dados = QJsonDocument::fromJson(data).object().toVariantMap();
    qDebug() << dados << endl;

    if(dados.contains("ID")){
        bueiro.setId(dados["ID"].toString());
        ui->lineEdit_Id->setText(bueiro.id());
    }

    if(dados.contains("BAIRRO")){
        bueiro.setBairro(dados["BAIRRO"].toString());
        ui->lineEdit_Bairro->setText(bueiro.bairro());
    }

    if(dados.contains("RUA")){
        bueiro.setRua(dados["RUA"].toString());
        ui->lineEdit_Rua->setText(bueiro.rua());
    }

    if(dados.contains("TIPO")){
        bueiro.setTipoDeBueiro(dados["TIPO"].toString());
        ui->lineEdit_TipoDeBueiro->setText(bueiro.tipoDeBueiro());
    }

    if(dados.contains("NIVEL")){
        bueiro.setNivel(dados["NIVEL"].toString().toFloat());
        ui->progressBar_Nivel->setValue(bueiro.nivel());
    }

    if(dados.contains("CARGA")){
        bueiro.setCarga(dados["CARGA"].toString().toFloat());
        ui->progressBar_Carga->setValue(bueiro.carga());
    }
}


void MainWindow::on_pushButton_ConfigurarRede_clicked()
{
    ConfigurarRede_Dialog configRede;



    configRede.setModal(true);
    configRede.exec();

    if(configRede.getNovo()){

        serial.setBaudRate(configRede.getRate());
        serial.setPortName(configRede.getSerialPort());

        atualizarInterface();
    }
}
