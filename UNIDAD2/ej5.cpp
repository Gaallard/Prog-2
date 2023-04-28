#include <iostream>

using namespace std;


void mayusculas(char a[]){
    char *p;
    for(int i=0; i<10; i++){
        p = &a[i];
        a[i]=toupper(*p);
    }
}



int main(){
    char cadena[10] = {'a','n','i','m','a','l','i','t','o','s'};

    mayusculas(cadena);
    for(int i=0; i<10; i++){
        cout<<cadena[i];
    }
}
