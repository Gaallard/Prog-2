#include <iostream>

using namespace std;

int main()
{
    int n, aux = 0;
    cout << "Ingrese la cantidad de elementos del arreglo: " << endl;
    cin >> n;

    int array[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese el valor de array[" << i << "]: " << endl;
        cin >> array[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (n - 1); j++)
        {
            if (array[j] < array[j + 1])
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
}