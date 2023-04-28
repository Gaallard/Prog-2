#include <iostream>

using namespace std;

void invertir(char a[]){
    char *p, *q;
    char aux;
    for(int i=0; i<(10/2); i++){
        p = &a[i];
        q=&a[10-1-i];
        aux = *p;
        *p = *q;
        *q = aux;
    }
}



int main(){
    char cadena[10] = {'a','n','i','m','a','l','i','t','o','s'};

    invertir(cadena);
    for(int i=0; i<10; i++){
        cout<<cadena[i];
    }
}