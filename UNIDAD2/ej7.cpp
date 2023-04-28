#include <iostream>
#include <string>
#include <string.h>
#include <strings.h>
using namespace std;

string cambio_cadena(string a){
    string *p, b;
    p = &a;
    b = *p;

    return b;

}


int main(){
    string a;

    cout<<"Ingrese una cadena de caracteres: "<<endl;
    cin>>a;

    cout<<endl<<endl;
    
    cout<<cambio_cadena(a)<<endl;

}