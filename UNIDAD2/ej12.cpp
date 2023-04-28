#include <iostream>
using namespace std;

int main(){
    int **puntero_matriz, nFilas, nCol;
    cout<<"Ingrese el numero de filas: "<<endl;
    cin>>nFilas;
    cout<<"Ingrese el numero de columnas: "<<endl;
    cin>>nCol;

    puntero_matriz = new int *[nFilas];
    for(int i=0; i<nFilas; i++){
        puntero_matriz[i] = new int [nCol];
    }

    for(int i=0; i<nFilas; i++){
        for(int j=0; j<nCol; j++){
            cout<<"Ingrese el elemento["<<i<<"]["<<j<<"]: "<<endl;
            cin>>*(*(puntero_matriz+i)+j);
        }
    }


    for(int i=0; i<nFilas; i++){
        for(int j=0; j<nCol; j++){
            cout<<*(*(puntero_matriz+i)+j)<<" ";
        }
        cout<<endl;
    }

    delete[] puntero_matriz;
    




}