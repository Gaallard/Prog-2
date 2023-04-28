#include <iostream>
using namespace std;

int main(){
    int n, k;
    bool encontrado = false;

    cout << "Ingrese la cantidad de elementos del arreglo: " << endl;
    cin >> n;

    int array[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese el valor de array[" << i << "]: " << endl;
        cin >> array[i];
    }

    cout<<"Ingrese el numero a buscar: "<<endl;
    cin>>k;

    for(int i=0; i<n; i++){
        if(array[i] == k){
            cout<<"Se ha encontrado el elemento en la posicion "<<i<<endl;
            encontrado = true;
        }
    }
    
    if(encontrado==false){
        cout<<"No se ha encontrado el elemento dentro del arreglo."<<endl;
    }
}