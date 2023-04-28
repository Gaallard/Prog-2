#include "Fecha.h"
#include <math.h>
#include <iostream>
using namespace std;

void Fecha::setdia(int d)
{
    dia = d;
}
void Fecha::setmes(int m)
{
    mes = m;
}
void Fecha::setanio(int a)
{
    anio = a;
}
void Fecha::operator++(int)
{
    dia++;

    if (mes == 2 && dia >= 28)
    {
        reset_month();
    }
    if (mes <= 6)
    {
        if (mes % 2 && dia >= 31)
        {
            reset_month();
        }
        else if (!(mes % 2) && dia >= 30)
        {
            reset_month();
        }
    }
    else if (mes > 6 && mes < 12)
    {
        if (!(mes % 2) && dia >= 31)
        {
            reset_month();
        }
        else if ((mes % 2) && dia >= 30)
        {
            reset_month();
        }
    }
    else if(mes==12 && dia>=31)
    {
        reset_year();
    }
}

void Fecha::operator+(int a)
{
    dia += a;
    if (mes == 2 && dia >= 28)
    {
        reset_month();
    }
    if (mes <= 6)
    {
        if (mes % 2 && dia >= 31)
        {
            reset_month();
        }
        else if (!(mes % 2) && dia >= 30)
        {
            reset_month();
        }
    }
    else if (mes > 6 && mes < 12)
    {
        if (!(mes % 2) && dia >= 31)
        {
            reset_month();
        }
        else if ((mes % 2) && dia >= 30)
        {
            reset_month();
        }
    }
    else
    {
        reset_year();
    }
}

int Fecha::getanio()
{
    return anio;
}
int Fecha::getdia()
{
    return dia;
}
int Fecha::getmes()
{
    return mes;
}
