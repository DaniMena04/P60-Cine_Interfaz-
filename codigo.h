#ifndef CODIGO_H
#define CODIGO_H
#include <QString>

class Codigo
{
public:
    Codigo(QString m_Contra);

    void setContra(QString m_Contra);

    QString getContra();

private:
    QString m_contra;

};

#endif // CODIGO_H
