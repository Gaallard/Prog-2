#include <iostream>
#include <math.h>
using namespace std;

void intercambiar(int x, int y)
{
    int aux = 0;

    aux = x;
    x = y;
    y = aux;

    cout << "El valor de x es: " << x << endl;
    cout << "El valor de y es: " << y << endl;
}

int main()
{
    int x, y;
    cout << "Ingrese un número x: " << endl;
    cin >> x;
    cout << "INgrese un número y: " << endl;
    cin >> y;

    intercambiar(x, y);
}