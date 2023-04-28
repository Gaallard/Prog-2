#include "Persona.h"
#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>
using namespace std;


void Persona::setnombre(std::string name){
    nombre=name;
}
void Persona::setedad(int age){
    edad=age;
}
void Persona::setsexo(char gender){
    sexo=gender;
    comprobarSexo();
}
void Persona::setpeso(float weight){
    peso=weight;
}
void Persona::setaltura(float height){
    altura=height;
}
void Persona::calcularIMC(){
    IMC=peso/(altura*altura);
}
void Persona::comprobarSexo(){
    if(sexo!='H' && sexo!='M'){
        sexo='H';
    }
}
bool Persona::esMayorDeEdad(){
    if(edad>=18){
        return true;
    }else{
        return false;
    }
}
int Persona::generarDNI(){
    int DNI;
    DNI= 10000000 + rand()%(10000000-10000000);
}
std::string Persona::getnombre(){
    return nombre;
}
int Persona::getedad(){
    return edad;
}
char Persona::getsexo(){
    return sexo;
}
float Persona::getpeso(){
    return peso;
}
float Persona::getaltura(){
    return altura;
}
double Persona::getcalcularIMC(){
    return IMC;
}
int Persona::getDNI(){
    return DNI;
}
int Persona::PesoIdeal(){
    if(IMC<20){
        return -1;
    }
    else if(IMC>=20 && IMC<=25){
        return 0;
    }else{
        return 1;
    }
}
