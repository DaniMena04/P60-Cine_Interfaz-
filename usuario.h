#ifndef USUARIO_H
#define USUARIO_H

#include <QDialog>
#include <QString>
#include <QDebug>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>

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

private:
    Ui::Usuario *ui;
    QString m_contra;
};

#endif // USUARIO_H
