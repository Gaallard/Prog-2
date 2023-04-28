#include <iostream>


using namespace std;

bool condicion_1(int n, int p, int q, int r)
{
    if (n > r && r > q && q > p && p >= 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool condicion_2(int n, int p, int q, int r, int A[])
{
    if ((A[p] + A[q] > A[r]) && (A[q] + A[r] > A[p]) && (A[r] + A[p] > A[q]))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n, p, q, r;

    cout << "Ingrese el valor de N: " << endl;
    cin >> n;
    cout << "Ingrese el valor de R: " << endl;
    cin >> r;
    cout << "Ingrese el valor de Q: " << endl;
    cin >> q;
    cout << "Ingrese el valor de P: " << endl;
    cin >> p;

    int A[n];

    if (!condicion_1(n, p, q, r))
    {
        cout << "No existe un triplete triangular para el arreglo." << endl;
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese el valor de A[" << i << "]: " << endl;
        cin >> A[i];
    }

    if (condicion_2(n, p, q, r, A))
    {
        cout << "Hay un triplete triangular para el arreglo" << endl;
    }
    else
    {
        cout << "No hay un triplete triangular para el arreglo." << endl;
    }
}