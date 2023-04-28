#include <iostream>
using namespace std;

int main(){
    int a[5] = {5, 10, 15, 20, 25}, diferencia;
    int *p, *q;

    p = &a[0];
    q = &a[4];

    diferencia = *q - *p;

    cout<<diferencia<<endl;
}
