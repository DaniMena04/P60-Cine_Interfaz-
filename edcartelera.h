#ifndef EDCARTELERA_H
#define EDCARTELERA_H

#include <QDialog>
#include <QFile>
#include <QMessageBox>
#include <QDebug>
#include <QTextStream>
#include <QFileDialog>

#include "cartelera.h"

namespace Ui {
class edCartelera;
}

class edCartelera : public QDialog
{
    Q_OBJECT

public:
    explicit edCartelera(QWidget *parent = nullptr);
    ~edCartelera();

private slots:
    void on_btnAceptar_clicked();

    void on_btnCancelar_clicked();

private:
    Ui::edCartelera *ui;
    QList <Cartelera*> m_cartelera;
};

#endif // EDCARTELERA_H
