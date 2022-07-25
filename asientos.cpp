#include "asientos.h"
#include "ui_asientos.h"

Asientos::Asientos(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Asientos)
{
    ui->setupUi(this);
    i = 1;
    Detalle *d;

//    qDebug() << d->indice;

    m_limite = d->indice;

//    qDebug() << m_limite;

}

Asientos::~Asientos()
{
    delete ui;
}

void Asientos::on_A1_stateChanged(int arg1)
{
    if(arg1!=0){
        ui->A1->setStyleSheet("image: url(:/Resources/Imagenes/silla(1).png);");
        validacion();
        m_asientosEscojidos[0] = "A1";

    }else{
        ui->A1->setStyleSheet("image: url(:/Resources/Imagenes/1.png);");
    }
}


void Asientos::on_A2_stateChanged(int arg1)
{
    if(arg1!=0){
        ui->A2->setStyleSheet("image: url(:/Resources/Imagenes/silla(1).png);");
        validacion();
        m_asientosEscojidos[1] = "A2";

    }else{
        ui->A2->setStyleSheet("image: url(:/Resources/Imagenes/1.png);");
    }
}


void Asientos::on_A3_stateChanged(int arg1)
{
    if(arg1!=0){
        ui->A3->setStyleSheet("image: url(:/Resources/Imagenes/silla(1).png);");
        validacion();
        m_asientosEscojidos[2] = "A3";
    }else{
        ui->A3->setStyleSheet("image: url(:/Resources/Imagenes/1.png);");
    }
}


void Asientos::on_A4_stateChanged(int arg1)
{
    if(arg1!=0){
        ui->A4->setStyleSheet("image: url(:/Resources/Imagenes/silla(1).png);");
        validacion();
        m_asientosEscojidos[3] = "A4";

    }else{
        ui->A4->setStyleSheet("image: url(:/Resources/Imagenes/1.png);");
    }
}


void Asientos::on_B1_stateChanged(int arg1)
{
    if(arg1!=0){
        ui->B1->setStyleSheet("image: url(:/Resources/Imagenes/silla(1).png);");
        validacion();
        m_asientosEscojidos[4] = "B1";

    }else{
        ui->B1->setStyleSheet("image: url(:/Resources/Imagenes/1.png);");
    }
}


void Asientos::on_B2_stateChanged(int arg1)
{
    if(arg1!=0){
        ui->B2->setStyleSheet("image: url(:/Resources/Imagenes/silla(1).png);");
        validacion();
        m_asientosEscojidos[5] = "B2";

    }else{
        ui->B2->setStyleSheet("image: url(:/Resources/Imagenes/1.png);");
    }
}


void Asientos::on_B3_stateChanged(int arg1)
{
    if(arg1!=0){
        ui->B3->setStyleSheet("image: url(:/Resources/Imagenes/silla(1).png);");
        validacion();
        m_asientosEscojidos[6] = "B3";

    }else{
        ui->B3->setStyleSheet("image: url(:/Resources/Imagenes/1.png);");
    }
}


void Asientos::on_B4_stateChanged(int arg1)
{
    if(arg1!=0){
        ui->B4->setStyleSheet("image: url(:/Resources/Imagenes/silla(1).png);");
        validacion();
        m_asientosEscojidos[7] = "B4";

    }else{
        ui->B4->setStyleSheet("image: url(:/Resources/Imagenes/1.png);");
    }
}


void Asientos::on_C1_stateChanged(int arg1)
{
    if(arg1!=0){
        ui->C1->setStyleSheet("image: url(:/Resources/Imagenes/silla(1).png);");
        validacion();
        m_asientosEscojidos[8] = "C1";

    }else{
        ui->C1->setStyleSheet("image: url(:/Resources/Imagenes/1.png);");
    }
}


void Asientos::on_C2_stateChanged(int arg1)
{
    if(arg1!=0){
        ui->C2->setStyleSheet("image: url(:/Resources/Imagenes/silla(1).png);");
        validacion();
        m_asientosEscojidos[9] = "C2";

    }else{
        ui->C2->setStyleSheet("image: url(:/Resources/Imagenes/1.png);");
    }
}


void Asientos::on_C3_stateChanged(int arg1)
{
    if(arg1!=0){
        ui->C3->setStyleSheet("image: url(:/Resources/Imagenes/silla(1).png);");
        validacion();
        m_asientosEscojidos[10] = "C3";

    }else{
        ui->C3->setStyleSheet("image: url(:/Resources/Imagenes/1.png);");
    }
}


void Asientos::on_C4_stateChanged(int arg1)
{
    if(arg1!=0){
        ui->C4->setStyleSheet("image: url(:/Resources/Imagenes/silla(1).png);");
        validacion();
        m_asientosEscojidos[11] = "C4";

    }else{
        ui->C4->setStyleSheet("image: url(:/Resources/Imagenes/1.png);");
    }
}


void Asientos::on_D1_stateChanged(int arg1)
{
    if(arg1!=0){
        ui->D1->setStyleSheet("image: url(:/Resources/Imagenes/silla(1).png);");
        validacion();
        m_asientosEscojidos[12] = "D1";

    }else{
        ui->D1->setStyleSheet("image: url(:/Resources/Imagenes/1.png);");
    }
}


void Asientos::on_D2_stateChanged(int arg1)
{
    if(arg1!=0){
        ui->D2->setStyleSheet("image: url(:/Resources/Imagenes/silla(1).png);");
        validacion();
        m_asientosEscojidos[13] = "D2";

    }else{
        ui->D2->setStyleSheet("image: url(:/Resources/Imagenes/1.png);");
    }
}


void Asientos::on_D3_stateChanged(int arg1)
{
    if(arg1!=0){
        ui->D3->setStyleSheet("image: url(:/Resources/Imagenes/silla(1).png);");
        validacion();
        m_asientosEscojidos[14] = "D3";
    }else{
        ui->D3->setStyleSheet("image: url(:/Resources/Imagenes/1.png);");
    }
}


void Asientos::on_D4_stateChanged(int arg1)
{
    if(arg1!=0){
        ui->D4->setStyleSheet("image: url(:/Resources/Imagenes/silla(1).png);");
        validacion();
        m_asientosEscojidos[15] = "D4";

    }else{
        ui->D4->setStyleSheet("image: url(:/Resources/Imagenes/1.png);");
    }
}

void Asientos::validacion()
{
//    qDebug() << m_limite;
//    qDebug() << i;
    if( i == m_limite){

        ui->A1->setEnabled(false);
        ui->A2->setEnabled(false);
        ui->A3->setEnabled(false);
        ui->A4->setEnabled(false);

        ui->B1->setEnabled(false);
        ui->B2->setEnabled(false);
        ui->B3->setEnabled(false);
        ui->B4->setEnabled(false);

        ui->C1->setEnabled(false);
        ui->C2->setEnabled(false);
        ui->C3->setEnabled(false);
        ui->C4->setEnabled(false);

        ui->D1->setEnabled(false);
        ui->D2->setEnabled(false);
        ui->D3->setEnabled(false);
        ui->D4->setEnabled(false);
    }

    i++;

}

void Asientos::on_btnComprar_clicked()
{
    Boleto *boletin = new Boleto(this);
    boletin->exec();
}


void Asientos::on_btnCancelar_clicked()
{
    close();
}

