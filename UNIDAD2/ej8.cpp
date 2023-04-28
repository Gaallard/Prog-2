#include <iostream>
using namespace std;


int minusculas_vocales(int n, char a[]){
    char *p, vocales_minusculas[5] = {'a','e','i','o','u'};
    int cont_voc_min=0;
    for(int i=0; i<n; i++){
        p = &a[i];
        for(int j=0; j<5; j++){
            if(*p == vocales_minusculas[j]){
                cont_voc_min++;
            }
        }
    }

    return cont_voc_min;
}

int main(){
    int n=51;
    while(n>50){
        cout<<"Ingrese la cantidad de caracteres: "<<endl;
        cin>>n;
    }

    char a[n];
    for(int i=0; i<n; i++){
        cout<<"caracter["<<i<<"]: "<<endl;
        cin>>a[i];
    }


    cout<<"El texto tiene "<<minusculas_vocales(n, a)<<" vocales minusculas."<<endl;

}