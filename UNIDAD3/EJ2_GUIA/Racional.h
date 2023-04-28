#include <iostream>

using namespace std;
class Racional
{
private:
    int denominador;
    int numerador;
    double racional;
    void numRacional();

public:
    Racional()
    {
        denominador = 0;
        numerador = 0;
        racional = 0;
    }
    Racional(int num, int den){
        denominador = den;
        numerador = num;
        racional = (float) num/den;
    };
    void setden(int den);
    void setnum(int num);
    Racional& operator+(double);
    Racional& operator-(double);
    void operator++(int);
    void operator--(int);
    void operator+=(int);
    void operator-=(int);
    void simplificar(int);


    friend ostream& operator<<(ostream& os, Racional& r);

    int getnum();
    int getden();
    int getrac(){return racional;};
};
