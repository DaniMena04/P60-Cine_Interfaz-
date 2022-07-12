#ifndef CARTELERA_H
#define CARTELERA_H

#include <QDialog>
#include <QString>
#include <QFileDialog>

namespace Ui {
class Cartelera;
}

class Cartelera : public QDialog
{
    Q_OBJECT

public:
    explicit Cartelera(QWidget *parent = nullptr);
    ~Cartelera();

    void darInformacion();

private:
    Ui::Cartelera *ui;
//    int numSala;

};

#endif // CARTELERA_H
