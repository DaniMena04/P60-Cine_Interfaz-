#include "boleto.h"
#include "ui_boleto.h"

Boleto::Boleto(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Boleto)
{
    ui->setupUi(this);
    Asientos *a;

    qDebug() << QDate::currentDate();

//    Fecha

    ui->outPelicula->setText(a->m_Pelicula);
    ui->outHora->setText(a->m_Hora);
    ui->outSala->setText(a->m_Sala);
    ui->outAsientos->setText(a->asi);
    ui->outFecha->setText("28 / 7 / 2022");
    ui->outTotal->setText(QString::number(a->valor)+"$");

}

Boleto::~Boleto()
{
    delete ui;
}

void Boleto::on_btnAceptar_clicked()
{
    close();
}


void Boleto::on_btnCancelar_clicked()
{
    close();
}

