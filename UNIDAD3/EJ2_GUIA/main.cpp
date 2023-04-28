#include "Racional.h"
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int num, den;
    cout << "Ingrese el numerador: " << endl;
    cin >> num;
    cout << "Ingrese el denominador: " << endl;
    cin >> den;

    Racional r(num, den);

    cout << "El numero ingresado es: " << r.getnum() << "/" << r.getden() << endl;
    if (num > den)
    {
        for (int i = 2; i < num; i++)
        {
            r.simplificar(i);
        }
    }
    else
    {
        for (int i = 2; i < den; i++)
        {
            r.simplificar(i);
        }
    }
    cout<<r;
    int opcion;
    int x;

    do{
        cout << "Seleccione una de las siguientes opciones: " << endl
            << endl;
        cout << "        ######## OPCIONES ########                " << endl;
        cout << "1: Sumar al numero original otro numero racional. " << endl;
        cout << "2. Restar al numero original otro numero racional." << endl;
        cout << "3. Sumarle 1 al numero original.                  " << endl;
        cout << "4. Restarle 1 al numero original.                 " << endl;
        cout << "5. Sumar al numero original un numero entero.     " << endl;
        cout << "6. Restar al numero original un numero entero.    " << endl;
        cout << "        ##########################                " << endl;
        cin >> opcion;

        switch (opcion)
        {

        case 1:
            double racional2;
            cout << "Ingrese un numero racional: " << endl;
            cin >> racional2;
            cout << "El numero final es: " << r + racional2 << endl;
            break;
        case 2:
            double racional3;
            cout << "Ingrese un numero racional: " << endl;
            cin >> racional3;
            cout << "El numero final es: " << r - racional3 << endl;
            break;
        case 3:
            r++;
            cout << "El numero final es: " << r << endl;
            break;
        case 4:
            r--;
            cout << "El numero final es: " << r << endl;
            break;
        case 5:
            cout << "Ingrese un numero entero: " << endl;
            cin >> x;
            r += x;
            cout << "El numero final es: " << r << endl;
            break;
        case 6:
            int x;
            cout << "Ingrese un numero entero: " << endl;
            cin >> x;
            r -= x;
            cout << "El numero final es: " << r << endl;
            break;
        default:
            break;
        }
    }while(opcion < 7);
}