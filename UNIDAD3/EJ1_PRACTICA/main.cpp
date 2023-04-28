#include "Cuenta.h"
#include <iostream>
#include <string>
using namespace std;

int main(){
    Cuenta agus;

    agus.setCantidad(100000);
    agus.setTitular("Agustin");
    agus.ingresar();
    agus.retirar();

    cout<<"El monto de la cuenta del titular "<<agus.getTitular()<<" luego de ingresar dinero ahora es: "<<agus.getingresar()<<endl;
    cout<<"El monto de la cuenta del titular "<<agus.getTitular()<<" luego de retirar dinero ahora es: "<<agus.getretirar()<<endl;
}