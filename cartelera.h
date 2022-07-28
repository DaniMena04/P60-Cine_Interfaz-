#ifndef CARTELERA_H
#define CARTELERA_H

#include <QString>

class Cartelera
{
public:

    Cartelera(QString m_pelicula,
              QString m_duracion,
              QString m_hora1,
              QString m_hora2,
              QString m_hora3,
              QString m_hora4,
              QString m_sala1,
              QString m_sala2,
              QString m_sala3,
              QString m_sala4);

    void setPelicula(QString m_pelicula);
    void setDuracion(QString m_duracion);

    void setHora1(QString m_hora1);
    void setHora2(QString m_hora2);
    void setHora3(QString m_hora3);
    void setHora4(QString m_hora4);

    void setSala1(QString m_sala1);
    void setSala2(QString m_sala2);
    void setSala3(QString m_psala3);
    void setSala4(QString m_psala4);

    QString getPelicula();
    QString getDuracion();

    QString getHora1();
    QString getHora2();
    QString getHora3();
    QString getHora4();

    QString getSala1();
    QString getSala2();
    QString getSala3();
    QString getSala4();

private:

    QString m_pelicula;
    QString m_duracion;

    QString m_hora1;
    QString m_hora2;
    QString m_hora3;
    QString m_hora4;

    QString m_sala1;
    QString m_sala2;
    QString m_sala3;
    QString m_sala4;

};

#endif // CARTELERA_H
