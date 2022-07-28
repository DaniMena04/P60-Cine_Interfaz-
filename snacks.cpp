#include "snacks.h"
#include "ui_snacks.h"

snacks::snacks(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::snacks)
{
    ui->setupUi(this);
    //Lista de productos en el constructor
    cargarProductos();
    //Mostrar los productos en el combo box
    foreach(Producto *p, m_productos){
        ui->inProducto->addItem(p->nombre());
    }
    //Configurar cabecera de la tabla
    QStringList cabecera ={tr("Cantidad"), tr("Producto"), tr("P. unitario"), tr("Subtotal")};
    ui->outDetalle->setColumnCount(4);
    ui->outDetalle->setHorizontalHeaderLabels(cabecera);
    //Establecer subtotal a cero
    m_subtotal=0;
}

snacks::~snacks()
{
    delete ui;
}
void snacks::cargarProductos()
{
    //Crear productos quemados en el codigo
    m_productos.append(new Producto(1, tr("Combo 1"), 4.20));
    m_productos.append(new Producto(2, tr("Combo 2"), 5.15));
    m_productos.append(new Producto(3, tr("Combo 3"), 5.50));
}

void snacks::calcular(float stProducto)
{
    //Calcular valores
    m_subtotal+=stProducto;
    m_iva=m_subtotal*IVA/100;
    m_total = m_subtotal+m_iva;
    //Mostrar valores en GUI
    ui->outSubtotal->setText("$ " + QString::number(m_subtotal, 'f', 2));
    ui->outIva->setText("$ " + QString::number(m_iva, 'f', 2));
    ui->outTotal->setText("$ " + QString::number(m_total, 'f', 2));
}


void snacks::on_inProducto_currentIndexChanged(int index)
{
    //Obtener el precio del producto actual seleccionado en base al indice de los productos en el vector
    float precio = m_productos.at(index)->precio();
    //Mostra el precio en la etiqueta
    ui->outPrecio->setText("$ " + QString::number(precio, 'f', 2));
    //Resetear el spinbox de cantidad
    ui->inCantidad->setValue(0);
    if(m_productos.at(index)->nombre()=="Combo 1"){
        ui->outImagen->setStyleSheet("image: url(:/Resources/Imagenes/Combo1.png);");
    }else if(m_productos.at(index)->nombre()=="Combo 2"){
        ui->outImagen->setStyleSheet("image: url(:/Resources/Imagenes/Combo2.png);");
    }else{
        ui->outImagen->setStyleSheet("image: url(:/Resources/Imagenes/Combo3.png);");
    }
}

void snacks::on_btnAgregar_released()
{
    //validar que no se agregen productos con 0 cantidad
    int cantidad=ui->inCantidad->value();
    if(cantidad==0){
        return;
    }

    //Obtener los datos de la GUI
    //Obtener producto
    int i = ui->inProducto->currentIndex();
    Producto *p = m_productos.at(i);

    //Calcular subtotal del producto
    float subtotal = p->precio()*cantidad;

    //Buscar y 'eliminar' repetidos
    if(!eliminarRepetidos(p, cantidad)){
        //Agregar datos a la tabla
        int fila = ui->outDetalle->rowCount(); //rowCout da el numero de filas
        ui->outDetalle->insertRow(fila);
        ui->outDetalle->setItem(fila, 0, new QTableWidgetItem(QString::number(cantidad)));
        ui->outDetalle->setItem(fila, 1, new QTableWidgetItem(p->nombre()));
        ui->outDetalle->setItem(fila, 2, new QTableWidgetItem(QString::number(p->precio(), 'f', 2)));
        ui->outDetalle->setItem(fila, 3, new QTableWidgetItem(QString::number(subtotal, 'f',2)));



        //Limpiar datos
        ui->inCantidad->setValue(0);
        ui->inProducto->setFocus();

        //Actualizar subtotales
        calcular(subtotal);
    }
}

void snacks::producto()
{
    int index = ui->inProducto->currentIndex();
    Producto *p = m_productos.at(index);
    int fila = ui->outDetalle->rowCount();
    ui->outDetalle->setItem(fila,1,new QTableWidgetItem(p->nombre()));
}

bool snacks::eliminarRepetidos(Producto *producto, int cantidad)
{
    //Obtener NumFilas
    int numFilas = ui->outDetalle->rowCount();
    //Recorrer la tabla de productos
    for(int i=0;i<numFilas;i++){

        //Obtener el item en la fila y columna posicion 1
        QTableWidgetItem *item = ui->outDetalle->item(i,1);

        //Obtener el nombre del producto
        QString dato = item->data(Qt::DisplayRole).toString();

        //Comparar el producto
        if(dato==producto->nombre()){
            QTableWidgetItem *item = ui->outDetalle->item(i,0);
            int actualCantidad = item->data(Qt::DisplayRole).toInt();

            //Sumar las cantidades de un mismo producto
            int nuevaCantidad = actualCantidad + cantidad;

            //Calcular el nuevo subtotal generado
            float subtotal = nuevaCantidad*producto->precio();

            //Actualizar en la tabla
            ui->outDetalle->setItem(i,0,new QTableWidgetItem(QString::number(nuevaCantidad)));
            ui->outDetalle->setItem(i,3,new QTableWidgetItem(QString::number(subtotal)));
            return true;
        }
    }
    return false;
}



void snacks::on_pushButton_released()
{
}
