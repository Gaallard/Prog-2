#include <iostream>
using namespace std;

int suma_adyacentes(int columnas, int filas, int m[][100], int fila_elemento, int columna_elemento){
    int suma;
    // Definimos una matriz nula de 1 fila y 1 columna mas que la matriz original para sumar ambas y poder operar mas facilmente
    int matriz_nula[filas + 1][columnas + 1];
    for (int i = 0; i < (filas + 2); i++)
    {
        for (int j = 0; j < (columnas + 2); j++)
        {
            matriz_nula[i][j] = 0;
        }
    }

    // Realizamos la suma entre ambas matrices
    int M[filas + 1][columnas + 1];
    for (int i = 0; i < (filas + 2); i++)
    {
        for (int j = 0; j < (columnas + 2); j++)
        {
            M[i][j] = matriz_nula[i][j] + m[i][j];
        }
    }

    //Sumaremos los elementos adyacentes del elemento en cuestion
    suma = M[fila_elemento-1][columna_elemento-1] + M[fila_elemento-1][columna_elemento] + M[fila_elemento-1][columna_elemento+1]
        + M[fila_elemento][columna_elemento-1] + M[fila_elemento][columna_elemento+1] 
        + M[fila_elemento+1][columna_elemento-1] + M[fila_elemento+1][columna_elemento] + M[fila_elemento+1][columna_elemento+1];


    return suma;
    
}

int main()
{
    int columnas, filas, m[100][100], fila_elemento, columa_elemento;
    cout << "Ingrese las columnas de la matriz: " << endl;
    cin >> columnas;
    cout << "Ingrese las filas de la matriz: " << endl;
    cin >> filas;


    for (int i = 1; i < (filas + 1); i++)
    {
        for (int j = 1; j < (columnas + 1); j++)
        {
            cout << "Ingrese el elemento [" << i << "][" << j << "]: " << endl;
            cin >> m[i][j];
        }
    }

    do{
        cout<<"Ingrese la columna del elemento que desea: "<<endl;
        cin>>columa_elemento;
    }while(columa_elemento>columnas || columa_elemento<1);

    do{
        cout<<"Ingrese la fila del elemento que desea: "<<endl;
        cin>>fila_elemento;
    }while(fila_elemento>columnas || fila_elemento<1);


    cout<<"La suma de los elementos adyacentes al elemento elegido es: "<<suma_adyacentes(columnas, filas, m, fila_elemento, columa_elemento)<<endl;
}