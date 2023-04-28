#include <iostream>
#include <math.h>

using namespace std;

int max_divisor(int m, int n){
    int mcd, aux=0;

    if(m>n){
        aux = n;
        n = m;
        m = aux;
    }

    for(int i=1; i<n; i++){
        if(m%i==0 && n%i==0){
            mcd = i; 
        }
    }

    return mcd;
}


int main(){
    int m, n;

    cout<<"Ingrese el valor de m: "<<endl;
    cin>>m;
    cout<<"Ingrese el valor de n: "<<endl;
    cin>>n;

    cout<<"EL maximo comun divisor es: "<<max_divisor(m, n)<<endl;

}