#include "usuario.h"
#include "ui_usuario.h"

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

    }

    archivo.close();
}

Usuario::~Usuario()
{
    delete ui;
}
