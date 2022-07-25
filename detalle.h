#ifndef DETALLE_H
#define DETALLE_H

#include <QDialog>
#include <QDebug>

#include "principal.h"
#include "asientos.h"

namespace Ui {
class Detalle;
}

class Detalle : public QDialog
{
    Q_OBJECT

public:
    explicit Detalle(QWidget *parent = nullptr);

    int indice;

    ~Detalle();

private slots:
    void on_outHora_1_stateChanged(int arg1);

    void on_outHora_2_stateChanged(int arg1);

    void on_outHora_3_stateChanged(int arg1);

    void on_outHora_4_stateChanged(int arg1);

    void on_btnCancelar_clicked();

    void on_btnAceptar_clicked();

    void on_spinBox_valueChanged(int arg1);

private:
    Ui::Detalle *ui;
};

#endif // DETALLE_H
