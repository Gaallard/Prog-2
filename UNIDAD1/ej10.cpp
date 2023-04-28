#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, aux = 0;

    cout << "Ingrese la cantidad de elementos del vector: " << endl;
    cin >> n;

    int array[n], array_ordenado[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese el valor de la posicion [" << i << "]: " << endl;
        cin >> array[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (array[j] % 2 == 0)
            {
                aux = array[j];
                array[j] = array[j + 1];
                array[j + 1] = aux;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << "array[" << i << "] = " << array[i] << endl;
    }

    return 0;
}