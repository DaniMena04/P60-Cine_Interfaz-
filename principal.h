#ifndef PRINCIPAL_H
#define PRINCIPAL_H

#include <QMainWindow>
#include <QList>
#include <QDebug>

#include "asientos.h"
#include "cartelera.h"
#include "acerca_de.h"
#include "tienda.h"
#include "snacks.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Principal; }
QT_END_NAMESPACE

class Principal : public QMainWindow
{
    Q_OBJECT

public:
    Principal(QWidget *parent = nullptr);
    Principal(int indice);
    ~Principal();


    int indice;

    int getIndice1() const;

    int getIndice2() const;

    int getIndice3() const;

    int getIndice4() const;

private slots:
    void on_actionCartelera_triggered();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_actionSalir_triggered();

    void on_actionAcerca_de_triggered();

    void on_actionTienda_triggered();

private:
    Ui::Principal *ui;
    QList <Cartelera*> m_cartelera;
};
#endif // PRINCIPAL_H
