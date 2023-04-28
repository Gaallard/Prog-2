#include <iostream>
#include <math.h>

using namespace std;

int cant_divisibles(int a, int b, int k){
    int cont=0;

    for(int i=a; i<=b; i++){
        if(i%k==0){
            cont++;
        }
    }

    return cont;
}


int main(){
    int a, b, k;

    cout<<"Ingrese el valor de a: "<<endl;
    cin>>a;
    cout<<"Ingrese el valor de b: "<<endl;
    cin>>b;
    cout<<"Ingrese el valor de k: "<<endl;
    cin>>k;

    cout<<"La cantidad de divisibles por K dentro del entorno (A,B) es: "<<cant_divisibles(a, b, k)<<endl;
}