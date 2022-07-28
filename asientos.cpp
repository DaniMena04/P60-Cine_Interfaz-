#include "asientos.h"
#include "ui_asientos.h"

Asientos::Asientos(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Asientos)
{
    ui->setupUi(this);

    Principal *p;

    qDebug() << p->indice;

    ui->outPelicula->setText(p->m_cartelera.at(p->indice)->getPelicula());
    ui->outDuracion->setText(p->m_cartelera.at(p->indice)->getDuracion());
    ui->outHora_1->setText(p->m_cartelera.at(p->indice)->getHora1());
    ui->outHora_2->setText(p->m_cartelera.at(p->indice)->getHora2());
    ui->outHora_3->setText(p->m_cartelera.at(p->indice)->getHora3());
    ui->outHora_4->setText(p->m_cartelera.at(p->indice)->getHora4());

    m_Pelicula = p->m_cartelera.at(p->indice)->getPelicula();
    m_Sala = p->m_cartelera.at(p->indice)->getSala1();
    i = 1;

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
        m_asientosEscojidos.append("A1");

    }else{
        ui->A1->setStyleSheet("image: url(:/Resources/Imagenes/1.png);");
    }

}


void Asientos::on_A2_stateChanged(int arg1)
{
    if(arg1!=0){
        ui->A2->setStyleSheet("image: url(:/Resources/Imagenes/silla(1).png);");
        validacion();
        m_asientosEscojidos.append("A2");

    }else{
        ui->A2->setStyleSheet("image: url(:/Resources/Imagenes/1.png);");
    }
}


void Asientos::on_A3_stateChanged(int arg1)
{
    if(arg1!=0){
        ui->A3->setStyleSheet("image: url(:/Resources/Imagenes/silla(1).png);");
        validacion();
        m_asientosEscojidos.append("A3");
    }else{
        ui->A3->setStyleSheet("image: url(:/Resources/Imagenes/1.png);");
    }
}


void Asientos::on_A4_stateChanged(int arg1)
{
    if(arg1!=0){
        ui->A4->setStyleSheet("image: url(:/Resources/Imagenes/silla(1).png);");
        validacion();
        m_asientosEscojidos.append("A4");

    }else{
        ui->A4->setStyleSheet("image: url(:/Resources/Imagenes/1.png);");
    }
}


void Asientos::on_B1_stateChanged(int arg1)
{
    if(arg1!=0){
        ui->B1->setStyleSheet("image: url(:/Resources/Imagenes/silla(1).png);");
        validacion();
        m_asientosEscojidos.append("B1");

    }else{
        ui->B1->setStyleSheet("image: url(:/Resources/Imagenes/1.png);");
    }
}


void Asientos::on_B2_stateChanged(int arg1)
{
    if(arg1!=0){
        ui->B2->setStyleSheet("image: url(:/Resources/Imagenes/silla(1).png);");
        validacion();
        m_asientosEscojidos.append("B2");

    }else{
        ui->B2->setStyleSheet("image: url(:/Resources/Imagenes/1.png);");
    }
}


void Asientos::on_B3_stateChanged(int arg1)
{
    if(arg1!=0){
        ui->B3->setStyleSheet("image: url(:/Resources/Imagenes/silla(1).png);");
        validacion();
        m_asientosEscojidos.append("B3");

    }else{
        ui->B3->setStyleSheet("image: url(:/Resources/Imagenes/1.png);");
    }
}


void Asientos::on_B4_stateChanged(int arg1)
{
    if(arg1!=0){
        ui->B4->setStyleSheet("image: url(:/Resources/Imagenes/silla(1).png);");
        validacion();
        m_asientosEscojidos.append("B4");

    }else{
        ui->B4->setStyleSheet("image: url(:/Resources/Imagenes/1.png);");
    }
}


void Asientos::on_C1_stateChanged(int arg1)
{
    if(arg1!=0){
        ui->C1->setStyleSheet("image: url(:/Resources/Imagenes/silla(1).png);");
        validacion();
        m_asientosEscojidos.append("C1");

    }else{
        ui->C1->setStyleSheet("image: url(:/Resources/Imagenes/1.png);");
    }
}


void Asientos::on_C2_stateChanged(int arg1)
{
    if(arg1!=0){
        ui->C2->setStyleSheet("image: url(:/Resources/Imagenes/silla(1).png);");
        validacion();
        m_asientosEscojidos.append("C2");

    }else{
        ui->C2->setStyleSheet("image: url(:/Resources/Imagenes/1.png);");
    }
}


void Asientos::on_C3_stateChanged(int arg1)
{
    if(arg1!=0){
        ui->C3->setStyleSheet("image: url(:/Resources/Imagenes/silla(1).png);");
        validacion();
        m_asientosEscojidos.append("C3");

    }else{
        ui->C3->setStyleSheet("image: url(:/Resources/Imagenes/1.png);");
    }
}


void Asientos::on_C4_stateChanged(int arg1)
{
    if(arg1!=0){
        ui->C4->setStyleSheet("image: url(:/Resources/Imagenes/silla(1).png);");
        validacion();
        m_asientosEscojidos.append("C4");

    }else{
        ui->C4->setStyleSheet("image: url(:/Resources/Imagenes/1.png);");
    }
}


void Asientos::on_D1_stateChanged(int arg1)
{
    if(arg1!=0){
        ui->D1->setStyleSheet("image: url(:/Resources/Imagenes/silla(1).png);");
        validacion();
        m_asientosEscojidos.append("D1");

    }else{
        ui->D1->setStyleSheet("image: url(:/Resources/Imagenes/1.png);");
    }
}


void Asientos::on_D2_stateChanged(int arg1)
{
    if(arg1!=0){
        ui->D2->setStyleSheet("image: url(:/Resources/Imagenes/silla(1).png);");
        validacion();
        m_asientosEscojidos.append("D2");

    }else{
        ui->D2->setStyleSheet("image: url(:/Resources/Imagenes/1.png);");
    }
}


void Asientos::on_D3_stateChanged(int arg1)
{
    if(arg1!=0){
        ui->D3->setStyleSheet("image: url(:/Resources/Imagenes/silla(1).png);");
        validacion();
        m_asientosEscojidos.append("D3");
    }else{
        ui->D3->setStyleSheet("image: url(:/Resources/Imagenes/1.png);");
    }
}


void Asientos::on_D4_stateChanged(int arg1)
{
    if(arg1!=0){
        ui->D4->setStyleSheet("image: url(:/Resources/Imagenes/silla(1).png);");
        validacion();
        m_asientosEscojidos.append("D4");

    }else{
        ui->D4->setStyleSheet("image: url(:/Resources/Imagenes/1.png);");
    }
}

void Asientos::validacion()
{
    qDebug()<<m_limite;
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


void Asientos::on_btnCancelar_clicked()
{

    close();
}

void Asientos::on_outHora_1_stateChanged(int arg1)
{
    if(arg1 != 0){
        ui->outHora_2->setEnabled(false);
        ui->outHora_3->setEnabled(false);
        ui->outHora_4->setEnabled(false);
        m_Hora = ui->outHora_1->text();
    }else{
        ui->outHora_2->setEnabled(true);
        ui->outHora_3->setEnabled(true);
        ui->outHora_4->setEnabled(true);
    }
}


void Asientos::on_outHora_2_stateChanged(int arg1)
{
    if(arg1 != 0){
        ui->outHora_1->setEnabled(false);
        ui->outHora_3->setEnabled(false);
        ui->outHora_4->setEnabled(false);
        m_Hora = ui->outHora_2->text();
    }else{
        ui->outHora_1->setEnabled(true);
        ui->outHora_3->setEnabled(true);
        ui->outHora_4->setEnabled(true);
    }
}


void Asientos::on_outHora_3_stateChanged(int arg1)
{
    if(arg1 != 0){
        ui->outHora_1->setEnabled(false);
        ui->outHora_2->setEnabled(false);
        ui->outHora_4->setEnabled(false);
        m_Hora = ui->outHora_3->text();
    }else{
        ui->outHora_1->setEnabled(true);
        ui->outHora_2->setEnabled(true);
        ui->outHora_4->setEnabled(true);
    }

}


void Asientos::on_outHora_4_stateChanged(int arg1)
{
    if(arg1 != 0){
        ui->outHora_1->setEnabled(false);
        ui->outHora_2->setEnabled(false);
        ui->outHora_3->setEnabled(false);
        m_Hora = ui->outHora_4->text();
    }else{
        ui->outHora_1->setEnabled(true);
        ui->outHora_2->setEnabled(true);
        ui->outHora_3->setEnabled(true);
    }

}

void Asientos::on_numAsi_valueChanged(int arg1)
{
    m_limite = arg1;
    qDebug()<<m_limite;
}


void Asientos::on_btnComprar_clicked()
{
    Boleto *b = new Boleto(this);
    b->exec();
}

