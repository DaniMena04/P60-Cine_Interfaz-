#ifndef BOLETO_H
#define BOLETO_H

#include <QDialog>
#include <QDebug>
#include <QFile>
#include <QDir>
#include <QList>

#include "principal.h"
#include "asientos.h"
#include "detalle.h"

namespace Ui {
class Boleto;
}

class Boleto : public QDialog
{
    Q_OBJECT

public:
    explicit Boleto(QWidget *parent = nullptr);
    ~Boleto();

    void asientos();

    const QString &getPelicula() const;
    void setPelicula(const QString &newPelicula);

    const QString &getDuracion() const;
    void setDuracion(const QString &newDuracion);

    const QString &getHora() const;
    void setHora(const QString &newHora);

    const QString &getSala() const;
    void setSala(const QString &newSala);

    const QString &getAsiento() const;

private:
    Ui::Boleto *ui;

//    Asientos *m_asientos;

    QString Pelicula;
    QString Duracion;
    QString Hora;
    QString Sala;
    QString Asiento;

    int indice;


};

#endif // BOLETO_H
