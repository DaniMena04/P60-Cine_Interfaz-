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

