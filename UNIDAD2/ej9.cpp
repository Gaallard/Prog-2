#include <iostream>
using namespace std;

int main(){
    int *p, *q, n;
    cout<<"Ingrese el tamano del arreglo: "<<endl;
    cin>>n;

    p = new int [n];
    q = p;

    for(int i=0; i<n; i++){
        cout<<"Ingrese la componente "<<i<<": "<<endl;
        cin>>*q;
        q++;
    }

    q=p;
    cout<<endl<<endl;
    for(int i=0; i<n; i++){
        cout<<*q<<endl;
        q++;
    }
 }