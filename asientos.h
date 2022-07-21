#ifndef ASIENTOS_H
#define ASIENTOS_H

#include <QDialog>
#include <QDebug>

namespace Ui {
class Asientos;
}

class Asientos : public QDialog
{
    Q_OBJECT

public:
    explicit Asientos(QWidget *parent = nullptr);
    ~Asientos();

    void maAsi();
private slots:

    void on_A1_stateChanged(int arg1);

    void on_A2_stateChanged(int arg1);

    void on_A3_stateChanged(int arg1);

    void on_A4_stateChanged(int arg1);

    void on_B1_stateChanged(int arg1);

    void on_B2_stateChanged(int arg1);

    void on_B3_stateChanged(int arg1);

    void on_B4_stateChanged(int arg1);

    void on_C1_stateChanged(int arg1);

    void on_C2_stateChanged(int arg1);

    void on_C3_stateChanged(int arg1);

    void on_C4_stateChanged(int arg1);

    void on_D1_stateChanged(int arg1);

    void on_D2_stateChanged(int arg1);

    void on_D3_stateChanged(int arg1);

    void on_D4_stateChanged(int arg1);

private:
    Ui::Asientos *ui;
};

#endif // ASIENTOS_H
