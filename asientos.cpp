#include "asientos.h"
#include "ui_asientos.h"

Asientos::Asientos(int indice, QList<Cartelera*> m_cartelera, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Asientos)
{
    ui->setupUi(this);


    limite = indice;
    m_Pelicula = m_cartelera.at(limite)->getPelicula();
    m_Duracion = m_cartelera.at(limite)->getDuracion();
    m_Hora1 = m_cartelera.at(limite)->getHora1();
    m_Hora2 = m_cartelera.at(limite)->getHora2();
    m_Hora3 = m_cartelera.at(limite)->getHora3();
    m_Hora4 = m_cartelera.at(limite)->getHora4();

    ui->outPelicula->setText(m_Pelicula);
    ui->outDuracion->setText(m_Duracion);
    ui->outHora_1->setText(m_Hora1);
    ui->outHora_2->setText(m_Hora2);
    ui->outHora_3->setText(m_Hora3);
    ui->outHora_4->setText(m_Hora4);


    m_Sala = m_cartelera.at(limite)->getSala1();

    indice = 0;
    indice2 = 0;

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
        m_asientosEscojidos[0] = " A1 ";
        asi+=m_asientosEscojidos[0];
    }else{
        ui->A1->setStyleSheet("image: url(:/Resources/Imagenes/1.png);");
    }

}


void Asientos::on_A2_stateChanged(int arg1)
{
    if(arg1!=0){
        ui->A2->setStyleSheet("image: url(:/Resources/Imagenes/silla(1).png);");
        validacion();
        m_asientosEscojidos[1] = " A2 ";
        asi+=m_asientosEscojidos[1];

    }else{
        ui->A2->setStyleSheet("image: url(:/Resources/Imagenes/1.png);");
    }
}


void Asientos::on_A3_stateChanged(int arg1)
{
    if(arg1!=0){
        ui->A3->setStyleSheet("image: url(:/Resources/Imagenes/silla(1).png);");
        validacion();
        m_asientosEscojidos[2] = " A3 ";
        asi+=m_asientosEscojidos[2];
    }else{
        ui->A3->setStyleSheet("image: url(:/Resources/Imagenes/1.png);");
    }
}


void Asientos::on_A4_stateChanged(int arg1)
{
    if(arg1!=0){
        ui->A4->setStyleSheet("image: url(:/Resources/Imagenes/silla(1).png);");
        validacion();
        m_asientosEscojidos[3] = " A4 ";
        asi+=m_asientosEscojidos[3];

    }else{
        ui->A4->setStyleSheet("image: url(:/Resources/Imagenes/1.png);");
    }
}


void Asientos::on_B1_stateChanged(int arg1)
{
    if(arg1!=0){
        ui->B1->setStyleSheet("image: url(:/Resources/Imagenes/silla(1).png);");
        validacion();
        m_asientosEscojidos[4] = " B1 ";
        asi+=m_asientosEscojidos[4];

    }else{
        ui->B1->setStyleSheet("image: url(:/Resources/Imagenes/1.png);");
    }
}


void Asientos::on_B2_stateChanged(int arg1)
{
    if(arg1!=0){
        ui->B2->setStyleSheet("image: url(:/Resources/Imagenes/silla(1).png);");
        validacion();
        m_asientosEscojidos[5] = " B2 ";
        asi+=m_asientosEscojidos[5];

    }else{
        ui->B2->setStyleSheet("image: url(:/Resources/Imagenes/1.png);");
    }
}


void Asientos::on_B3_stateChanged(int arg1)
{
    if(arg1!=0){
        ui->B3->setStyleSheet("image: url(:/Resources/Imagenes/silla(1).png);");
        validacion();
        m_asientosEscojidos[6] = " B3 ";
        asi+=m_asientosEscojidos[6];

    }else{
        ui->B3->setStyleSheet("image: url(:/Resources/Imagenes/1.png);");
    }
}


void Asientos::on_B4_stateChanged(int arg1)
{
    if(arg1!=0){
        ui->B4->setStyleSheet("image: url(:/Resources/Imagenes/silla(1).png);");
        validacion();
        m_asientosEscojidos[7] = " B4 ";
        asi+=m_asientosEscojidos[7];

    }else{
        ui->B4->setStyleSheet("image: url(:/Resources/Imagenes/1.png);");
    }
}


void Asientos::on_C1_stateChanged(int arg1)
{
    if(arg1!=0){
        ui->C1->setStyleSheet("image: url(:/Resources/Imagenes/silla(1).png);");
        validacion();
        m_asientosEscojidos[8] = " C1 ";
        asi+=m_asientosEscojidos[8];

    }else{
        ui->C1->setStyleSheet("image: url(:/Resources/Imagenes/1.png);");
    }
}


void Asientos::on_C2_stateChanged(int arg1)
{
    if(arg1!=0){
        ui->C2->setStyleSheet("image: url(:/Resources/Imagenes/silla(1).png);");
        validacion();
        m_asientosEscojidos[9] = " C2 ";
        asi+=m_asientosEscojidos[9];

    }else{
        ui->C2->setStyleSheet("image: url(:/Resources/Imagenes/1.png);");
    }
}


void Asientos::on_C3_stateChanged(int arg1)
{
    if(arg1!=0){
        ui->C3->setStyleSheet("image: url(:/Resources/Imagenes/silla(1).png);");
        validacion();
        m_asientosEscojidos[10] = " C3 ";
        asi+=m_asientosEscojidos[10];

    }else{
        ui->C3->setStyleSheet("image: url(:/Resources/Imagenes/1.png);");
    }
}


void Asientos::on_C4_stateChanged(int arg1)
{
    if(arg1!=0){
        ui->C4->setStyleSheet("image: url(:/Resources/Imagenes/silla(1).png);");
        validacion();
        m_asientosEscojidos[11] = " C4 ";
        asi+=m_asientosEscojidos[11];

    }else{
        ui->C4->setStyleSheet("image: url(:/Resources/Imagenes/1.png);");
    }
}


void Asientos::on_D1_stateChanged(int arg1)
{
    if(arg1!=0){
        ui->D1->setStyleSheet("image: url(:/Resources/Imagenes/silla(1).png);");
        validacion();
        m_asientosEscojidos[12] = " D1 ";
        asi+=m_asientosEscojidos[12];

    }else{
        ui->D1->setStyleSheet("image: url(:/Resources/Imagenes/1.png);");
    }
}


void Asientos::on_D2_stateChanged(int arg1)
{
    if(arg1!=0){
        ui->D2->setStyleSheet("image: url(:/Resources/Imagenes/silla(1).png);");
        validacion();
        m_asientosEscojidos[13] = " D2 ";
        asi+=m_asientosEscojidos[13];

    }else{
        ui->D2->setStyleSheet("image: url(:/Resources/Imagenes/1.png);");
    }
}


void Asientos::on_D3_stateChanged(int arg1)
{
    if(arg1!=0){
        ui->D3->setStyleSheet("image: url(:/Resources/Imagenes/silla(1).png);");
        validacion();
        m_asientosEscojidos[14] = " D3 ";
        asi+=m_asientosEscojidos[14];
    }else{
        ui->D3->setStyleSheet("image: url(:/Resources/Imagenes/1.png);");
    }
}


void Asientos::on_D4_stateChanged(int arg1)
{
    if(arg1!=0){
        ui->D4->setStyleSheet("image: url(:/Resources/Imagenes/silla(1).png);");
        validacion();
        m_asientosEscojidos[15] = " D4 ";
        asi+=m_asientosEscojidos[15];

    }else{
        ui->D4->setStyleSheet("image: url(:/Resources/Imagenes/1.png);");
    }
}

void Asientos::validacion()
{
    numAsi=indice+indice2;
    qDebug()<<numAsi;
    if( i == numAsi-1){

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

        m_Hora=ui->outHora_1->text();
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

        m_Hora=ui->outHora_2->text();
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

    }else{
        ui->outHora_1->setEnabled(true);
        ui->outHora_2->setEnabled(true);
        ui->outHora_4->setEnabled(true);
    }

    m_Hora=ui->outHora_3->text();
}


void Asientos::on_outHora_4_stateChanged(int arg1)
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

    m_Hora=ui->outHora_4->text();
}


void Asientos::on_numAsiAdu_valueChanged(int arg1)
{
    if(arg1!=0)
    indice = arg1;
}


void Asientos::on_numAsiNin_valueChanged(int arg1)
{
    if(arg1!=0)
    indice2=arg1;
}



void Asientos::on_btnComprar_clicked()
{
    valor=(indice*5)+(indice2*3);
    Boleto *b = new Boleto(m_Pelicula,m_Hora,asi,m_Sala,valor);
    b->exec();
}

