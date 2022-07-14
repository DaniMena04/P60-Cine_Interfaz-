#include "usuario.h"
#include "ui_usuario.h"
#include "edcartelera.h"
#include "ui_edcartelera.h"

Usuario::Usuario(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Usuario)
{
    ui->setupUi(this);
    ui->inContra->setEchoMode(QLineEdit::Password);
    QFile archivo;
    QDir archivoActual = QDir::current();
    QTextStream io;
    QString nombreArchivo = archivoActual.absolutePath() + "/usuario.csv";
    QString contra;

    archivo.setFileName(nombreArchivo);
    qDebug() << archivo.fileName();

    archivo.open(QIODevice::ReadOnly | QIODevice::Text);

    if(!archivo.isOpen()){
        QMessageBox::critical(this,"Error","Archivo no encontrado");
        return;
    }

    io.setDevice(&archivo);
    while(!io.atEnd()){
        auto linea = io.readLine();
        auto datos = linea.split(";");

        contra = datos[0];
        m_password.append(new Codigo(contra));

    }

    archivo.close();
}

Usuario::~Usuario()
{
    delete ui;
}

void Usuario::on_btnCancelar_clicked()
{
    close();
}


void Usuario::on_btnAceptar_released()
{
    bool bandera = false;
    for(int i = 0; i < m_password.size(); i++){
        if(ui->inContra->text() == m_password.at(i)->getContra()){
            bandera = true;

        }
    }

    if(bandera){
        edCartelera *dialog = new edCartelera(this);
        dialog->exec();

    }else{
        QMessageBox::critical(this,"Error","Codigo erroneo");
    }

    close();

}

