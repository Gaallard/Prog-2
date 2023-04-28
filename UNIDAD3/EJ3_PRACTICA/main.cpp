#include "Raices.h"
#include <math.h>
#include <iostream>
using namespace std;

int main(){
    //pedimos al usuario que ingrese por teclado los coeficientes de la ecuacion
    int a, b, c;
    cout<<"Ingrese el coeficiente de grado 2: "<<endl;
    cin>>a;
    cout<<"Ingrese el coeficiente de grado 1: "<<endl;
    cin>>b;
    cout<<"Ingrese el coeficiente de grado 0: "<<endl;
    cin>>c;

    Raices ecuacion; //creamos el objeto "ecuacion"

    ecuacion.seta(a);
    ecuacion.setb(b);
    ecuacion.setc(c);

    cout<<"El discriminante de la ecuacion es: "<<ecuacion.getDisc()<<endl;
    if(ecuacion.tieneRaices()==true){
        ecuacion.calcular();
    }else{
        if(ecuacion.tieneRaiz()==true){
            cout<<"La unica raiz de la ecuacion es: "<<ecuacion.obtenerRaiz();
        }
    }


}