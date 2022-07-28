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
    ui->outFecha->setText("28 / 7 / 2022");
//    ui->outFecha->setStyle(QDate::currentDate());
//    ui->outFecha->setText(Fecha);

//    asientos(a->m_limite);

}

Boleto::~Boleto()
{
    delete ui;
}

//void Boleto::asientos(int m_limite)
//{
//    int i;
//    Asientos *a;
//    for(i = 0; i<m_limite; i++){
//        ui->outAsientos->setText(a->m_asientosEscojidos.at(i));
//    }
//}

void Boleto::on_btnAceptar_clicked()
{
    close();
}


void Boleto::on_btnCancelar_clicked()
{
    close();
}

