#include "principal.h"
#include "ui_principal.h"
#include "usuario.h"
#include "ui_usuario.h"

Principal::Principal(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Principal)
{
    ui->setupUi(this);
}

Principal::~Principal()
{
    delete ui;
}


void Principal::on_actionCartelera_triggered()
{
    Usuario *dialog = new Usuario(this);

    dialog->exec();
}


void Principal::on_pushButton_clicked()
{
    Asientos *asi = new Asientos(this);
    asi->exec();
}


void Principal::on_pushButton_2_clicked()
{
    Asientos *asi = new Asientos(this);
    asi->exec();
}


void Principal::on_pushButton_3_clicked()
{
    Asientos *asi = new Asientos(this);
    asi->exec();
}


void Principal::on_pushButton_4_clicked()
{
    Asientos *asi = new Asientos(this);
    asi->exec();
}

