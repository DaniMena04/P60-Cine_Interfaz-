#include "detalle.h"
#include "ui_detalle.h"

Detalle::Detalle(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Detalle)
{
    ui->setupUi(this);
    Principal *p;

    ui->outPelicula->setText(p->Pelicula[p->indice-1]);
    ui->outDuracion->setText(p->Duracion[p->indice-1]);
    ui->outHora_1->setText(p->Hora_1[p->indice-1]);
    ui->outHora_2->setText(p->Hora_2[p->indice-1]);
    ui->outHora_3->setText(p->Hora_3[p->indice-1]);
    ui->outHora_4->setText(p->Hora_4[p->indice-1]);
    update();
}

Detalle::~Detalle()
{
    delete ui;
}


void Detalle::on_outHora_1_stateChanged(int arg1)
{
    if(arg1 != 0){
        ui->outHora_2->setEnabled(false);
        ui->outHora_3->setEnabled(false);
        ui->outHora_4->setEnabled(false);
    }else{
        ui->outHora_2->setEnabled(true);
        ui->outHora_3->setEnabled(true);
        ui->outHora_4->setEnabled(true);
    }
}


void Detalle::on_outHora_2_stateChanged(int arg1)
{
    if(arg1 != 0){
        ui->outHora_1->setEnabled(false);
        ui->outHora_3->setEnabled(false);
        ui->outHora_4->setEnabled(false);
    }else{
        ui->outHora_1->setEnabled(true);
        ui->outHora_3->setEnabled(true);
        ui->outHora_4->setEnabled(true);
    }
}


void Detalle::on_outHora_3_stateChanged(int arg1)
{
    if(arg1 != 0){
        ui->outHora_1->setEnabled(false);
        ui->outHora_2->setEnabled(false);
        ui->outHora_4->setEnabled(false);
    }else{
        ui->outHora_1->setEnabled(true);
        ui->outHora_2->setEnabled(true);
        ui->outHora_4->setEnabled(true);
    }
}


void Detalle::on_outHora_4_stateChanged(int arg1)
{
    if(arg1 != 0){
        ui->outHora_1->setEnabled(false);
        ui->outHora_2->setEnabled(false);
        ui->outHora_3->setEnabled(false);
    }else{
        ui->outHora_1->setEnabled(true);
        ui->outHora_2->setEnabled(true);
        ui->outHora_3->setEnabled(true);
    }
}


void Detalle::on_btnCancelar_clicked()
{
    close();
}


void Detalle::on_btnAceptar_clicked()
{
    Asientos *asu = new Asientos(this);
    asu->exec();
}


void Detalle::on_spinBox_valueChanged(int arg1)
{
    this->indice = arg1;
}

