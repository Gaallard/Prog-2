#include "Racional.h"
#include <iostream>
using namespace std;

void Racional::setden(int den)
{
    denominador = den;
}
void Racional::setnum(int num)
{
    numerador = num;
}
void Racional::numRacional()
{
    double racional;
    racional =  numerador / denominador;
}
Racional& Racional::operator+(double r)
{
    racional += r;
    return *this;
}
Racional& Racional::operator-(double r)
{
    racional -= r;
    return *this;
}
void Racional::operator++(int)
{
    racional++;
}
void Racional::operator--(int)
{
    racional--;
}
void Racional::operator+=(int n)
{
    racional += n;
}

void Racional::operator-=(int n)
{
    racional -= n;

}
void Racional::simplificar(int x)
{
    while (numerador % x == 0 && denominador % x == 0)
    {
        numerador /= x;
        denominador /= x;
    }
    cout << "Numero simplificado: " << numerador << "/" << denominador << endl;
}
int Racional::getnum()
{
    return numerador;
}
int Racional::getden()
{
    return denominador;
}


ostream& operator<<(ostream& os, Racional& r){
    os << r.racional;
    return os;
};