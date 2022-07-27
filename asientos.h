#ifndef ASIENTOS_H
#define ASIENTOS_H

#include <QDialog>
#include <QDebug>

#include  "principal.h"
#include "boleto.h"

namespace Ui {
class Asientos;
}

class Asientos : public QDialog
{
    Q_OBJECT

public:
    explicit Asientos(QWidget *parent = nullptr);
    int indice;

    ~Asientos();

    QString m_asientosEscojidos[16];

    const QString &Hora() const;
    void setHora(const QString &newHora);

    const QString &Pelicula() const;
    void setPelicula(const QString &newPelicula);

private slots:

    void on_A1_stateChanged(int arg1);

    void on_A2_stateChanged(int arg1);

    void on_A3_stateChanged(int arg1);

    void on_A4_stateChanged(int arg1);

    void on_B1_stateChanged(int arg1);

    void on_B2_stateChanged(int arg1);

    void on_B3_stateChanged(int arg1);

    void on_B4_stateChanged(int arg1);

    void on_C1_stateChanged(int arg1);

    void on_C2_stateChanged(int arg1);

    void on_C3_stateChanged(int arg1);

    void on_C4_stateChanged(int arg1);

    void on_D1_stateChanged(int arg1);

    void on_D2_stateChanged(int arg1);

    void on_D3_stateChanged(int arg1);

    void on_D4_stateChanged(int arg1);

    void validacion();

    void on_btnCancelar_clicked();

    void on_outHora_1_stateChanged(int arg1);

    void on_outHora_2_stateChanged(int arg1);

    void on_outHora_3_stateChanged(int arg1);

    void on_outHora_4_stateChanged(int arg1);

    void on_numAsi_valueChanged(int arg1);

private:
    Ui::Asientos *ui;

    QString m_Hora;
    QString m_Pelicula;
    int i;
};

#endif // ASIENTOS_H
