#include "principal.h"
#include "ui_principal.h"
#include "usuario.h"
#include "ui_usuario.h"

Principal::Principal(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Principal)
{
    ui->setupUi(this);

    QFile archivo;
    QTextStream io;

    QDir actual = QDir::current();
    QString nombreArchivo = actual.absolutePath() + "/cartelera.csv";
    archivo.setFileName(nombreArchivo);

    QString Pelicula, Duracion, Hora_1, Hora_2, Hora_3, Hora_4, Sala_1, Sala_2, Sala_3, Sala_4;

    if(archivo.open(QIODevice::ReadOnly | QIODevice::Text)){
        io.setDevice(&archivo);
        indice = 0;
        while(!io.atEnd()){
            QString linea =io.readLine();
            // qDebug() << linea;
            QStringList datos = linea.split(";");
            Pelicula = datos.at(0);
            Duracion = datos.at(1);

            Hora_1 = datos.at(2);
            Hora_2 = datos.at(3);
            Hora_3 = datos.at(4);
            Hora_4 = datos.at(5);

            Sala_1 = datos.at(6);
            Sala_2 = datos.at(7);
            Sala_3 = datos.at(8);
            Sala_4 = datos.at(9);

            m_cartelera.append(new Cartelera(Pelicula,Duracion,Hora_1,Hora_2,Hora_3,Hora_4,Sala_1,Sala_2,Sala_3,Sala_4));
        }

        qDebug() << Pelicula;

        ui->textEdit->setText(m_cartelera.at(0)->getPelicula());
        ui->textEdit_2->setText(m_cartelera.at(1)->getPelicula());
        ui->textEdit_3->setText(m_cartelera.at(2)->getPelicula());
        ui->textEdit_4->setText(m_cartelera.at(3)->getPelicula());

    }
}

//Principal::Principal(int indice1, int indice2, int indice3, int indice4)
//{
//    this->indice1 = indice1;
//    this->indice2 = indice2;
//    this->indice3 = indice3;
//    this->indice4 = indice4;
//}

Principal::~Principal()
{
    delete ui;
}


void Principal::on_actionCartelera_triggered()
{
    Usuario *dialog = new Usuario(this);

    dialog->exec();
}


void Principal::on_pushButton_clicked()
{
    indice = 0;
    Asientos *a = new Asientos();
    a->exec();

}


void Principal::on_pushButton_2_clicked()
{
    indice = 1;
    Asientos *a = new Asientos();
    a->exec();
}


void Principal::on_pushButton_3_clicked()
{
    indice = 2;
    Asientos *a = new Asientos();
    a->exec();

}


void Principal::on_pushButton_4_clicked()
{
    indice = 3;
    Asientos *a = new Asientos();
    a->exec();
}



void Principal::on_actionSalir_triggered()
{
    close();
}


void Principal::on_actionAcerca_de_triggered()
{
    Acerca_de *dialog = new Acerca_de(this);
    dialog->exec();
}



