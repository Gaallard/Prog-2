#include <iostream>
using namespace std;

int main(){
    int a, b;
    int *p;

    cout<<"Ingrese el valor de a: "<<endl;
    cin>>a;
    cout<<"Ingrese el valor de b: "<<endl;
    cin>>b;

    p = &a;
    cout<<"La direccion de memoria de a es: "<<p<<endl<<"Y su valor es: "<<*p<<endl;

    cout<<endl<<endl;

    p = &b; 
    cout<<"La direccion de memoria de b es: "<<p<<endl<<"Y su valor es: "<<*p<<endl;
}