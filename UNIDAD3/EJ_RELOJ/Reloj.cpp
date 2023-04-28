#include "Reloj.h"
#include <iostream>
using namespace std;

void Reloj::sethora(int h){
    hora=h;
}
void Reloj::setminuto(int m){
    minuto=m;
}
void Reloj::setsegundo(int s){
    segundo=s;
}
void Reloj::operator ++(){
    segundo++;
    if(segundo==60){
        minuto++;
        segundo=0;
        if(minuto==60){
            hora++;
            minuto=0;
        }
    }
}
int Reloj::gethora(){
    return hora;
}
int Reloj::getminuto(){
    return minuto;
}
int Reloj::getsegundo(){
    return segundo;
}