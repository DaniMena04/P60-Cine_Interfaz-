#include "factura.h"
#include "ui_factura.h"
#include <QDebug>

Factura::Factura(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Factura)
{
    ui->setupUi(this);
    toString();
    ui->outFactura1->setPlainText(m_datos);
}

Factura::~Factura()
{
    delete ui;
}

void Factura::registroDatos(QString datos)
{
    ui->outFactura2->setPlainText(datos);
}

void Factura::compra(QString productos)
{
    ui->outCompra->setPlainText(productos);
}

void Factura::Subtotal(QString subtotal)
{
    ui->outSubtotal->setText(subtotal);
}

void Factura::Iva(QString iva)
{
    ui->outIVA->setText(iva);
}

void Factura::Total(QString total)
{
    ui->outTotal->setText(total);
}

void Factura::toString()
{
    m_datos+="**************************************\n";
    m_datos+="\tSale-Cine\n";
    m_datos+="**************************************\n";
    m_datos+="\tFACTURA\n";
    fecha = QDate::currentDate().toString("dd.MM.yyyy");
    hora = QTime::currentTime().toString("hh:mm:ss");
    fechaCompleta = QDateTime::currentDateTime().toString("ddMMyyyy_hhmmss");
    m_datos+="Fecha: "+fecha+"\t";
    m_datos+="Hora: "+hora+"\n";
    m_datos+="**************************************\n";
    m_datos+="DATOS DEL CLIENTE\n";
}


void Factura::on_btnCancelar_clicked()
{
    close();
}

