#ifndef SNACKS_H
#define SNACKS_H

#include <QDialog>
#include <string.h>
#include <QMessageBox>

#include "factura.h"
#include "producto.h"

#define IVA 12

namespace Ui {
class snacks;
}

class snacks : public QDialog
{
    Q_OBJECT

public:
    explicit snacks(QWidget *parent = nullptr);
    ~snacks();

private slots:
    void on_inProducto_currentIndexChanged(int index);

    void on_btnAgregar_released();


    void on_btnOk_clicked();

    void on_btnCancelar_clicked();

private:
    Ui::snacks *ui;
    QList <Producto*>m_productos;
    void cargarProductos();
    float m_subtotal;
    float m_iva;
    float m_total;
    void calcular(float stProducto);

    QString obtenerDatos();
    void limpiar();
    void producto();
    bool eliminarRepetidos(Producto *producto, int cantidad);


};

#endif // SNACKS_H
