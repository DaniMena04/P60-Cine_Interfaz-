#include "boleto.h"
#include "ui_boleto.h"

Boleto::Boleto(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Boleto)
{
    ui->setupUi(this);

//    QFile archivo;
//    QTextStream io;

//    QDir actual = QDir::current();
//    QString nombreArchivo = actual.absolutePath() + "/cartelera.csv";
//    archivo.setFileName(nombreArchivo);

//    if(archivo.open(QIODevice::ReadOnly | QIODevice::Text)){
//        io.setDevice(&archivo);
//        int i=0;
//        indice = 0;
//        while(!io.atEnd()){
//            QString linea =io.readLine();
//            // qDebug() << linea;
//            QStringList datos = linea.split(";");
//            Pelicula[i] = datos.at(0);
//            Duracion[i] = datos.at(1);

//            Hora_1[i] = datos.at(2);
//            Hora_2[i] = datos.at(3);
//            Hora_3[i] = datos.at(4);
//            Hora_4[i] = datos.at(5);

//            Sala_1[i] = datos.at(6);
//            Sala_2[i] = datos.at(7);
//            Sala_3[i] = datos.at(8);
//            Sala_4[i] = datos.at(9);

//            i++;
//        }

//    //   Detalle *d;
//    Principal *p;
//    qDebug() << p->Pelicula[0];
//    //   qDebug() << d->Hora();

//    ui->outPelicula->setText(p->Pelicula[0]);
//    ui->outHora->setText("d->Hora()");

}

Boleto::~Boleto()
{
    delete ui;
}

void Boleto::asientos()
{
    int fila = 1;
    int i = 0;

    Asientos *asientos;

    ui->outAsientos->setColumnCount(asientos->indice);

    while(i<asientos->indice){
        ui->outAsientos->setColumnWidth(i,20);
        i++;
    }

    ui->outAsientos->insertRow(fila);
    while(i<asientos->indice){
        ui->outAsientos->setItem(fila,i,new QTableWidgetItem(asientos->m_asientosEscojidos[asientos->indice]));
        i++;
    }
}

const QString &Boleto::getAsiento() const
{
    return Asiento;
}

const QString &Boleto::getSala() const
{
    return Sala;
}

void Boleto::setSala(const QString &newSala)
{
    Sala = newSala;
}

const QString &Boleto::getHora() const
{
    return Hora;
}

void Boleto::setHora(const QString &newHora)
{
    Hora = newHora;
}

const QString &Boleto::getDuracion() const
{
    return Duracion;
}

void Boleto::setDuracion(const QString &newDuracion)
{
    Duracion = newDuracion;
}

const QString &Boleto::getPelicula() const
{
    return Pelicula;

//    m_asientos->getdatos();
}

void Boleto::setPelicula(const QString &newPelicula)
{
    Pelicula = newPelicula;
}
