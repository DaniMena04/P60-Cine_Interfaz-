#include "edcartelera.h"
#include "ui_edcartelera.h"

#include <QDebug>

edCartelera::edCartelera(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::edCartelera)
{
    ui->setupUi(this);

    QStringList titulos;

    titulos << "Pelicula" << "Duracion" << "Hora 1" << "Hora 2" << "Hora 3" << "Hora 4" << "Sala 1" << "Sala 2" << "Sala 3" << "Sala 4";
    ui->outCarteleras->setColumnCount(10);
    ui->outCarteleras->setColumnWidth(0,200);
    ui->outCarteleras->setColumnWidth(1,90);
    ui->outCarteleras->setColumnWidth(2,100);
    ui->outCarteleras->setColumnWidth(3,100);
    ui->outCarteleras->setColumnWidth(4,100);
    ui->outCarteleras->setColumnWidth(5,100);
    ui->outCarteleras->setColumnWidth(6,100);
    ui->outCarteleras->setColumnWidth(7,100);
    ui->outCarteleras->setColumnWidth(8,100);
    ui->outCarteleras->setColumnWidth(9,100);

    ui->outCarteleras->setHorizontalHeaderLabels(titulos);

    QFile archivo;
    QTextStream io;

    QDir actual = QDir::current();
    QString nombreArchivo = actual.absolutePath() + "/cartelera.csv";

    QString Pelicula, Duracion, Hora1, Hora2, Hora3, Hora4, Sala1, Sala2, Sala3, Sala4;
    archivo.setFileName(nombreArchivo);

    if(archivo.open(QIODevice::ReadOnly | QIODevice::Text)){
        io.setDevice(&archivo);
        while(!io.atEnd()){
            QString linea =io.readLine();
            // qDebug() << linea;
            QStringList datos = linea.split(";");
            int i=0;
            Pelicula = datos.at(0);
            Duracion = datos.at(1);
            Hora1 = datos.at(2);
            Hora2 = datos.at(3);
            Hora3 = datos.at(4);
            Hora4 = datos.at(5);
            Sala1 = datos.at(6);

            // qDebug() << Pelicula;

            m_cartelera.append(new Cartelera(Pelicula, Duracion, Hora1, Hora2, Hora3, Hora4, Sala1, Sala2, Sala3, Sala4));

            int fila = ui->outCarteleras->rowCount();
            ui->outCarteleras->insertRow(fila);
            ui->outCarteleras->setItem(fila,0,new QTableWidgetItem(Pelicula));
            ui->outCarteleras->setItem(fila,1,new QTableWidgetItem(Duracion));
            ui->outCarteleras->setItem(fila,2,new QTableWidgetItem(Hora1));
            ui->outCarteleras->setItem(fila,3,new QTableWidgetItem(Hora2));
            ui->outCarteleras->setItem(fila,4,new QTableWidgetItem(Hora3));
            ui->outCarteleras->setItem(fila,5,new QTableWidgetItem(Hora4));
            ui->outCarteleras->setItem(fila,6,new QTableWidgetItem(Sala1));
//            ui->outCarteleras->setItem(fila,7,new QTableWidgetItem(Sala2));
//            ui->outCarteleras->setItem(fila,8,new QTableWidgetItem(Sala3));
//            ui->outCarteleras->setItem(fila,9,new QTableWidgetItem(Sala4));
        }

        // qDebug() << m_cartelera;

        archivo.close();
    }else{
        QMessageBox::critical(this,"Error","La cartelera no se pudo cargar");
    }
}

edCartelera::~edCartelera()
{
    delete ui;
}

void edCartelera::on_btnGuardar_clicked()
{
    QTextStream io;
    QDir actual = QDir::current();
    QString nombreArchivo = actual.absolutePath() + "/cartelera.csv";

    QFile archivo;

    archivo.setFileName(nombreArchivo);
    archivo.open(QFile::WriteOnly | QFile::Truncate);

    if(!archivo.isOpen()){
        QMessageBox::critical(this,"Aviso","No se pudo abrir el documento de carteleras");
        return;
    };

    io.setDevice(&archivo);

    int fila = ui->outCarteleras->rowCount();
    int columna = ui->outCarteleras->columnCount();

    QString celda;

    for(int i=0; i<fila; i++){
        for(int j=0; j<columna; j++){
            if(j != (columna-1)){
                celda = ui->outCarteleras->item(i,j)->text() + ";";
            }else{
                celda = ui->outCarteleras->item(i,j)->text();
            }

            io << celda;
        }

        io << "\n";
    }

    QMessageBox::information(this,"Aviso","Archivo guardado");
    archivo.flush();
    archivo.close();
}

void edCartelera::on_btnCancelar_clicked()
{
    close();
}

