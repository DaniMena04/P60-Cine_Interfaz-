#include "boleto.h"
#include "ui_boleto.h"

Boleto::Boleto(QString m_Pelicula, QString m_Hora, QString asi, QString m_Sala, int valor, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Boleto)
{
    ui->setupUi(this);

    Fecha = QDate::currentDate().toString("dd/MM/yyyy");


    ui->outPelicula->setText(m_Pelicula);
    ui->outHora->setText(m_Hora);
    ui->outSala->setText(m_Sala);
    ui->outAsientos->setText(asi);
    ui->outFecha->setText(Fecha);
    ui->outTotal->setText(QString::number(valor) + "$");


}

Boleto::~Boleto()
{
    delete ui;
}

void Boleto::on_btnCancelar_clicked()
{
    close();
}


void Boleto::on_btnGuardar_clicked()
{
    QTextStream io;
    QDir actual = QDir::current();
    QString nombreArchivo = actual.absolutePath() + "/factura.csv";

    QString m_pelicula, m_hora, m_asientos, m_fecha, m_total, m_sala;
    QFile archivo;

    archivo.setFileName(nombreArchivo);
    archivo.open(QFile::WriteOnly | QFile::Truncate);

    if(!archivo.isOpen()){
        QMessageBox::critical(this,"Aviso","No se pudo abrir el documento de carteleras");
        return;
    };

    io.setDevice(&archivo);

    m_pelicula = ui->outPelicula->text() + ";";
    m_hora = ui->outHora->text() + ";";
    m_fecha = ui->outFecha->text() + ";";
    m_asientos = ui->outAsientos->text() + ";";
    m_sala = ui->outSala->text() + ";";
    m_total = ui->outTotal->text() + ";";

    io << m_pelicula << m_hora << m_fecha << m_asientos << m_sala << m_total;


    QMessageBox::information(this,"Aviso","Archivo guardado");
    archivo.flush();
    archivo.close();
}

