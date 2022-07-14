#include "codigo.h"

Codigo::Codigo(QString m_Contra)
{
    this->m_contra = m_Contra;
}

void Codigo::setContra(QString m_Contra)
{
    this->m_contra = m_Contra;
}

QString Codigo::getContra()
{
    return this->m_contra;
}
