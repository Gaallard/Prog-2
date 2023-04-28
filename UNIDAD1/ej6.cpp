#include <iostream>
#include <math.h>

using namespace std;

bool primo(int x)
{
    int divisores = 0;
    for (int i = 1; i <= x; i++)
    {
        if (x % i == 0)
        {
            divisores++;
        }
    }
    if (divisores == 2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool semi_primo(int x)
{
    int primo1 = 0, primo2 = 0;

    for (int i = 1; i <= x; i++)
    {
        if (x % i == 0 && primo(i) && primo(x / i))
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int x;
    do
    {
        cout << "Ingrese un número natural: " << endl;
        cin >> x;
    } while (x <= 1);

    if (semi_primo(x) == true)
    {
        cout << "El numero es semi-primo" << endl;
    }
    else
    {
        cout << "El numero no es semi-primo" << endl;
    }
}