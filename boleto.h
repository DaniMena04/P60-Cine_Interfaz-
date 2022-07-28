#ifndef BOLETO_H
#define BOLETO_H

#include <QDialog>
#include <QDateTime>
#include <QMessageBox>
#include <QDebug>
#include <QFile>
#include <QDir>
#include <QList>

#include "asientos.h"

namespace Ui {
class Boleto;
}

class Boleto : public QDialog
{
    Q_OBJECT

public:
    explicit Boleto(QString m_Pelicula, QString m_Hora, QString asi, QString m_Sala, int valor, QWidget *parent = nullptr);
    ~Boleto();

    void asientos(int m_limite);

private slots:

    void on_btnCancelar_clicked();

    void on_btnGuardar_clicked();

private:
    Ui::Boleto *ui;
    QString m_Pelicula;
    QString m_Hora;
    QString m_Sala;
    QString m_Asiento;
    QString Fecha;
    int m_limite;
    int indice;


};

#endif // BOLETO_H
