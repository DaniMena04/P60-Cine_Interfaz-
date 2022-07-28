#ifndef BOLETO_H
#define BOLETO_H

#include <QDialog>
#include <QDateTime>
#include <QDebug>
#include <QFile>
#include <QDir>
#include <QList>

#include "principal.h"
#include "asientos.h"

namespace Ui {
class Boleto;
}

class Boleto : public QDialog
{
    Q_OBJECT

public:
    explicit Boleto(QWidget *parent = nullptr);
    ~Boleto();

    void asientos(int m_limite);

private slots:
    void on_btnAceptar_clicked();

    void on_btnCancelar_clicked();

private:
    Ui::Boleto *ui;
    QString Pelicula;
    QString Duracion;
    QString Hora;
    QString Sala;
    QString Asiento;
    QString Fecha;
    int m_limite;
    int indice;


};

#endif // BOLETO_H
