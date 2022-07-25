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

    if(archivo.open(QIODevice::ReadOnly | QIODevice::Text)){
        io.setDevice(&archivo);
        int i=0;
        indice = 0;
        while(!io.atEnd()){
            QString linea =io.readLine();
            // qDebug() << linea;
            QStringList datos = linea.split(";");
            Pelicula[i] = datos.at(0);
            Duracion[i] = datos.at(1);

            Hora_1[i] = datos.at(2);
            Hora_2[i] = datos.at(3);
            Hora_3[i] = datos.at(4);
            Hora_4[i] = datos.at(5);

            Sala_1[i] = datos.at(6);
            Sala_2[i] = datos.at(7);
            Sala_3[i] = datos.at(8);
            Sala_4[i] = datos.at(9);

            i++;
        }

        ui->textEdit->setText(Pelicula[0]);
        ui->textEdit_2->setText(Pelicula[1]);
        ui->textEdit_3->setText(Pelicula[2]);
        ui->textEdit_4->setText(Pelicula[3]);

    }
}

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
    indice = 1;
    Detalle *d = new Detalle(this);
    d->exec();
}


void Principal::on_pushButton_2_clicked()
{
    indice = 2;
    Detalle *d = new Detalle(this);
    d->exec();
}


void Principal::on_pushButton_3_clicked()
{
    indice = 3;
    Detalle *d = new Detalle(this);
    d->exec();
}


void Principal::on_pushButton_4_clicked()
{
    indice = 4;
    Detalle *d = new Detalle(this);
    d->exec();
}


