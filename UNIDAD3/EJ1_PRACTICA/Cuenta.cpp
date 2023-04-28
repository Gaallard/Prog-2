#include "Cuenta.h"
#include <iostream>
#include <string>
using namespace std;

void Cuenta::setCantidad(double dinero){
    Cantidad = dinero;
}
void Cuenta::setCantidadFinal(double dinero){
    CantidadFinal = dinero;
}
void Cuenta::setTitular(std::string persona){
    Titular = persona;
}
void Cuenta::ingresar(){
    double cant_ingreso=0;
    cout<<"Cantidad de dinero que desea ingresar a la cuenta: "<<endl;
    cin>>cant_ingreso;

    if(cant_ingreso>0){
        Cantidad += cant_ingreso;
    }
}
void Cuenta::retirar(){
    double cant_retiro=0;
    cout<<"Monto que desea retirar de la cuenta: "<<endl;
    cin>>cant_retiro;

    if(cant_retiro>Cantidad){
        CantidadFinal=0;
    }else{
        CantidadFinal = Cantidad-cant_retiro;
    }
}
double Cuenta::getCantidad(){
    return Cantidad;
}
std::string Cuenta::getTitular(){
    return Titular;
}
double Cuenta::getingresar(){
    return Cantidad;
}
double Cuenta::getretirar(){
    return CantidadFinal;
}