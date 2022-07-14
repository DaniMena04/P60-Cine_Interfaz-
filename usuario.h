#ifndef USUARIO_H
#define USUARIO_H

#include <QDialog>
#include <QString>
#include <QDebug>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>

#include "codigo.h"

namespace Ui {
class Usuario;
}

class Usuario : public QDialog
{
    Q_OBJECT

public:
    explicit Usuario(QWidget *parent = nullptr);
    Usuario(QString m_contra);
    ~Usuario();

private slots:

    void on_btnCancelar_clicked();

    void on_btnAceptar_released();

private:
    Ui::Usuario *ui;
    QList <Codigo*> m_password;
};

#endif // USUARIO_H
