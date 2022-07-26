#include "acerca_de.h"
#include "ui_acerca_de.h"

Acerca_de::Acerca_de(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Acerca_de)
{
    ui->setupUi(this);
}

Acerca_de::~Acerca_de()
{
    delete ui;
}

void Acerca_de::on_btnAceptar_clicked()
{
    close();
}


void Acerca_de::on_btnCancelar_clicked()
{
    close();
}

