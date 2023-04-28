#include "Raices.h"
#include <iostream>
#include <math.h>
using namespace std;

void Raices::seta(int A){
    a=A;
}
void Raices::setb(int B){
    b=B;
}
void Raices::setc(int C){
    c=C;
}
void Raices::setDisc(){
    double Disc;
    Disc = (pow(b,2))-(4*a*c);
}
void Raices::calcular(){
    if(Disc<0){
        cout<<"No hay soluciones reales."<<endl;
    }
    else{
        float x1, x2;
        x1 = (-b+sqrt(pow(b,2)-(4*a*c)))/(2*a);
        x2 = (-b-sqrt(pow(b,2)-(4*a*c)))/(2*a);
        cout<<"x1 = "<<x1<<endl;
        cout<<"x2 = "<<x2<<endl;
    }
}
float Raices::obtenerRaiz(){
    float x1;
    if(Disc==0){
        x1 = -b/(2*a);
    }
    return x1;
}
bool Raices::tieneRaices(){
    if(Disc>0){
        return true;
    }else{
        return false;
    }
}
bool Raices::tieneRaiz(){
    if(Disc==0){
        return true;
    }else{
        return false;
    }
}
int Raices::geta(){
    return a;
}
int Raices::getb(){
    return b;
}
int Raices::getc(){
    return c;
}
double Raices::getDisc(){
    return Disc;
}

