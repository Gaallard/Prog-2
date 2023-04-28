#include <iostream>
#include <math.h>
using namespace std;


bool permutacion(int n, int secuencia[]){
    for(int i=0; i<n; i++){
        for(int u=(i+1); u<n; u++){
            if(secuencia[i]==secuencia[u]){
                return false;
            }
        }
    }

    return true;
}




int main(){
    int n, secuencia[n];

    cout<<"Ingrese el tamaño de la secuencia: "<<endl;
    cin>>n;

    for(int i=0; i<n; i++){
        cout<<"Ingrese el valor de la posicion ["<<i<<"]: "<<endl;
        cin>>secuencia[i];
    }

    if(!permutacion(n, secuencia)){
        cout<<"La secuencia no es una permutacion";
    }else{
        cout<<"La secuencia es una permutacion";
    }
}