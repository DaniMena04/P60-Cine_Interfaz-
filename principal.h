#ifndef PRINCIPAL_H
#define PRINCIPAL_H

#include <QMainWindow>
#include <QDebug>

#include "detalle.h"
#include "cartelera.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Principal; }
QT_END_NAMESPACE

class Principal : public QMainWindow
{
    Q_OBJECT

public:
    Principal(QWidget *parent = nullptr);
    ~Principal();

    QString Pelicula[4];
    QString Duracion[4];

    QString Hora_1[4];
    QString Hora_2[4];
    QString Hora_3[4];
    QString Hora_4[4];

    QString Sala_1[4];
    QString Sala_2[4];
    QString Sala_3[4];
    QString Sala_4[4];

    int indice;

private slots:
    void on_actionCartelera_triggered();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Principal *ui;
};
#endif // PRINCIPAL_H
