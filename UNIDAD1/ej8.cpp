#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, x;

    cout << "Ingrese el grado del polinomio: " << endl;
    cin >> n;
    cout << "Ingrese el valor de x: " << endl;
    cin >> x;

    int coeficientes[n], variable[n], polinomio[n], acum = 0, j = n;

    for (int i = 0; i <= n; i++)
    {
        cout << "Ingrese el coeficiente " << i << ": " << endl;
        cin >> coeficientes[i];

        variable[i] = pow(x, j);
        j--;
    }

    for (int i = 0; i <= n; i++)
    {
        polinomio[i] = coeficientes[i] * variable[i];
        acum += polinomio[i];
    }

    cout << "El valor del polinomio es: " << acum;
}