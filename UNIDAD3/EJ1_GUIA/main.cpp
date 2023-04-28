#include <iostream>
#include "Fecha.h"

using namespace std;

int main(){
    int a, opcion;
    cout<<"Ingrese 1 para incrementar la fecha de a un dia. Ingrese 2 para incrementar la fecha segun los dias que usted ingrese."<<endl;
    cin>>opcion;
    
    Fecha f(1, 1, 1900);

    bool flag=false;
    while(flag==false){
        switch (opcion)
        {
        case 1:
            while(1){
                f++;
                cout<<f.getdia()<<"/"<<f.getmes()<<"/"<<f.getanio()<<endl<<endl;
            }
            flag=true;
            break;
        case 2:
            cout<<"Ingrese cada cuantos dias se incrementara la fecha: "<<endl;
            cin>>a;
            do{
                f+a;
                cout<<f.getdia()<<"/"<<f.getmes()<<"/"<<f.getanio()<<endl<<endl;
            }while(true);
            flag=true;
            break;
        default:
            cout<<"Ingrese 1 para incrementar la fecha de a un dia. Ingrese 2 para incrementar la fecha segun los dias que usted ingrese."<<endl;
            cin>>opcion;
        }
    }
    
    return 0;
}