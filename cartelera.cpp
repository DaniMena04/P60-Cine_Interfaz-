#include "cartelera.h"


Cartelera::Cartelera(QString m_pelicula, QString m_duracion, QString m_hora1, QString m_hora2, QString m_hora3, QString m_hora4, QString m_sala1, QString m_sala2, QString m_sala3, QString m_sala4)
{
    this->m_pelicula = m_pelicula;
    this->m_duracion = m_duracion;
    this->m_hora1 = m_hora1;
    this->m_hora2 = m_hora2;
    this->m_hora3 = m_hora3;
    this->m_hora4 = m_hora4;
    this->m_sala1 = m_sala1;
    this->m_sala2 = m_sala2;
    this->m_sala3 = m_sala3;
    this->m_sala4 = m_sala4;
}

void Cartelera::setPelicula(QString m_pelicula)
{
    this->m_pelicula = m_pelicula;
}

void Cartelera::setDuracion(QString m_duracion)
{
    this->m_duracion = m_duracion;
}

void Cartelera::setHora1(QString m_hora1)
{
    this->m_hora1 = m_hora1;
}

void Cartelera::setHora2(QString m_hora2)
{
    this->m_hora2 = m_hora2;
}

void Cartelera::setHora3(QString m_hora3)
{
     this->m_hora3 = m_hora3;
}

void Cartelera::setHora4(QString m_hora4)
{
    this->m_hora4 = m_hora4;
}

void Cartelera::setSala1(QString m_sala1)
{
    this->m_sala1 = m_sala1;
}

void Cartelera::setSala2(QString m_sala2)
{
    this->m_sala2 = m_sala2;
}

void Cartelera::setSala3(QString m_psala3)
{
    this->m_sala3 = m_sala3;
}

void Cartelera::setSala4(QString m_psala4)
{
    this->m_sala4 = m_sala4;
}

QString Cartelera::getPelicula()
{
    return this->m_pelicula;
}

QString Cartelera::getDuracion()
{
    return this->m_duracion;
}

QString Cartelera::getHora1()
{
    return this->m_hora1;
}

QString Cartelera::getHora2()
{
    return this->m_hora2;
}

QString Cartelera::getHora3()
{
    return this->m_hora3;
}

QString Cartelera::getHora4()
{
    return this->m_hora4;
}

QString Cartelera::getSala1()
{
    return this->m_sala1;
}

QString Cartelera::getSala2()
{
    return this->m_sala2;
}

QString Cartelera::getSala3()
{
    return this->m_sala3;
}

QString Cartelera::getSala4()
{
    return this->m_sala4;
}
