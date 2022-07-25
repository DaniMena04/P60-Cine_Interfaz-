#include "boleto.h"
#include "ui_boleto.h"

Boleto::Boleto(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Boleto)
{
    ui->setupUi(this);

   Detalle *d;
   qDebug() << d->Pelicula();
   qDebug() << d->Hora();

    ui->outPelicula->setText(d->Pelicula());
    ui->outHora->setText(d->Hora());

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

    ui->outAsientos->setColumnCount(asientos->m_limite);

    while(i<asientos->m_limite){
        ui->outAsientos->setColumnWidth(i,20);
        i++;
    }

    ui->outAsientos->insertRow(fila);
    while(i<asientos->m_limite){
        ui->outAsientos->setItem(fila,i,new QTableWidgetItem(asientos->m_asientosEscojidos[asientos->m_limite]));
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
}

void Boleto::setPelicula(const QString &newPelicula)
{
    Pelicula = newPelicula;
}
