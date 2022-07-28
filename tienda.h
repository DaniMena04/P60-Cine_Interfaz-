#ifndef TIENDA_H
#define TIENDA_H

#include <QMainWindow>

#include "producto.h"
//#include "factura.h"
#include <string.h>

#define IVA 12

QT_BEGIN_NAMESPACE
namespace Ui { class Tienda; }
QT_END_NAMESPACE

class Tienda : public QMainWindow
{
    Q_OBJECT

public:
    Tienda(QWidget *parent = nullptr);
    ~Tienda();

private slots:
    void on_inProducto_currentIndexChanged(int index);

    void on_btnAgregar_released();

    void on_btnFinalizar_released();

    void on_pushButton_released();

private:
    Ui::Tienda *ui;
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

    //Validaciones
    bool valcedulaEcuatoriana(char cedula[]);
    void borrar(char a[]);

};
#endif // TIENDA_H
