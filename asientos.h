#ifndef ASIENTOS_H
#define ASIENTOS_H

#include <QDialog>
#include <QDebug>

#include "cartelera.h"
#include "boleto.h"

namespace Ui {
class Asientos;
}

class Asientos : public QDialog
{
    Q_OBJECT

public:
    explicit Asientos(int indice, QList<Cartelera*> m_cartelera, QWidget *parent = nullptr);


//    void bloquear();
//    void activar();

    ~Asientos();



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

    void on_numAsiAdu_valueChanged(int arg1);

    void on_numAsiNin_valueChanged(int arg1);


    void on_btnComprar_clicked();

private:
    Ui::Asientos *ui;

    int limite;
    int indice;
    int indice2;
    int numAsi;
    int valor;

    QString m_asientosEscojidos[16];

    QString m_Hora1;
    QString m_Hora2;
    QString m_Hora3;
    QString m_Hora4;
    QString m_Hora;
    QString m_Duracion;
    QString m_Pelicula;
    QString m_Sala;
    QString asi;


    int i;
};

#endif // ASIENTOS_H
