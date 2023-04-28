#include <iostream>
using namespace std;

int main(){
    int *p, *q, n, *s, *r, acumulador=0, media_aritmetica;
    cout<<"Ingrese el tamanio del vector: "<<endl;
    cin>>n;
    p = new int[n];
    q=p;
    for(int i=0; i<n; i++){
        cout<<"Ingrese la componente["<<i<<"]: "<<endl;
        cin>>*q;
        acumulador+=*q;
        q++;
    }

    q=p;
    s=new int;
    *s = 0;
    for(int i=0; i<n; i++){
        if(*q > *s){
            *s = *q;
        }
        q++;
    }
    cout<<"El maximo del vector es: "<<*s<<endl;

    q=p;
    r=new int;
    *r = *q;
    for(int i=1; i<n; i++){
        if(*q < *r){
            *r = *q;
        }
        q++;
    }
    cout<<"El minimo del vector es: "<<*r<<endl;

    media_aritmetica = acumulador/n;

    cout<<"La media aritmetica entre los numeros es: "<<media_aritmetica<<endl;

}