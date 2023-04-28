#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int n, factorial=1;

    do{
        cout<<"Ingrese un numero natural: "<<endl;
        cin>>n;
    }while(n<0);

    for(int i=1; i<=n; i++){
        factorial*=i;
    }

    cout<<"El factorial del numero ingresado es: "<<factorial<<endl;
}