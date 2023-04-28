#include <iostream>
using namespace std;

int main()
{
    int n, aux=0;
    cout << "Ingrese el tamanio del arreglo: " << endl;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese el valor de array[" << i << "]: " << endl;
        cin >> array[i];
    }

    for(int i=0; i<n/2; i++){
        aux = array[i];
        array[i] = array[n-1-i];
        array[n-1-i] = aux;
    }

    for(int i=0; i<n; i++){
        cout<<"array["<<i<<"] = "<<array[i]<<endl;
    }


}
