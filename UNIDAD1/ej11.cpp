#include <iostream>

using namespace std;

int cant_distintos(int n, int array[])
{
    int contador_distintos = 0, aux = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (array[j] > array[j + 1])
            {
                aux = array[j];
                array[j] = array[j + 1];
                array[j + 1] = aux;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (array[i] != array[i + 1])
        {
            contador_distintos++;
        }
    }

    return contador_distintos;
}

int main()
{
    int n;
    cout << "Ingrese la cantidad de elementos del arreglo: " << endl;
    cin >> n;

    int array[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese el valor de array[" << i << "]: " << endl;
        cin >> array[i];
    }

    cout << "La cantidad de elementos distintos dentro del arreglo es: " << cant_distintos(n, array) << endl;
}