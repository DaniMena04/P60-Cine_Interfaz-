#ifndef FACTURA_H
#define FACTURA_H

#include <QDialog>
#include <QDate>
#include <QTime>
#include <QDateTime>
#include <QMessageBox>
#include <QDir>
#include <QFile>

namespace Ui {
class Factura;
}

class Factura : public QDialog
{
    Q_OBJECT

public:
    explicit Factura(QWidget *parent = nullptr);
    ~Factura();

    void registroDatos (QString datos);
    void compra (QString productos);

    void Subtotal(QString subtotal);
    void Iva(QString iva);
    void Total(QString total);

    void toString();

private slots:

    void on_btnCancelar_clicked();

private:
    Ui::Factura *ui;

    QString m_datos;

    QString fecha;
    QString hora;
    QString fechaCompleta;
};

#endif // FACTURA_H
