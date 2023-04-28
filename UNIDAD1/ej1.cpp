#include <iostream>
#include <math.h>

using namespace std;

int saltos_minimos(int x, int y, int d){
    int resta;
    int saltos;

    resta = y-x;
    saltos = resta/d;

    return saltos;
}


int main(){
    int x, y, d;

    cout<<"Ingrese la posicion de la que parte el grillo: "<<endl;
    cin>>x;

    do{
        cout<<"Ingresa la posicion a la cual quiere llegar el grillo (mas lejos que desde donde parte): "<<endl;
        cin>>y;
    }while(y<x);
    
    cout<<"Ingrese la distancia que recorre el grillo con cada salto: "<<endl;
    cin>>d;

    cout<<"La cantidad de saltos minimos que debe dar el grillo es de: "<<saltos_minimos(x, y, d)<<" saltos."<<endl;

}