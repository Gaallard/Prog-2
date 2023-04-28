#include "Persona.h"
#include <iostream>
#include <string>
using namespace std;

int main(){
    int edadA, edadB, edadC;
    float pesoA, alturaA, pesoB, alturaB, pesoC, alturaC;
    std::string nombreA, nombreB, nombreC;
    char sexoA, sexoB, sexoC;

    //datos de "a"
    cout<<"Ingrese la edad de la persona a: "<<endl;
    cin>>edadA;
    cout<<"Ingrese el nombre de a: "<<endl;
    cin>>nombreA;
    cout<<"Ingrese el peso de a (kg): "<<endl;
    cin>>pesoA;
    do{
        cout<<"Ingrese la altura de a (m): "<<endl;
        cin>>alturaA;
    }while(alturaA>2.50);
    cout<<"Ingrese el genero de a (H/M): "<<endl;
    cin>>sexoA;

    //datos de "b"
    cout<<"Ingrese la edad de la persona b: "<<endl;
    cin>>edadB;
    cout<<"Ingrese el nombre de b: "<<endl;
    cin>>nombreB;
    cout<<"Ingrese el peso de b (kg): "<<endl;
    cin>>pesoB;
    do{
        cout<<"Ingrese la altura de b (m): "<<endl;
        cin>>alturaB;
    }while(alturaB>2.50);
    cout<<"Ingrese el genero de b (H/M): "<<endl;
    cin>>sexoB;

    //datos de "c"
    cout<<"Ingrese la edad de la persona c: "<<endl;
    cin>>edadC;
    cout<<"Ingrese el nombre de c: "<<endl;
    cin>>nombreC;
    cout<<"Ingrese el peso de c (kg): "<<endl;
    cin>>pesoC;
    do{
        cout<<"Ingrese la altura de c (m): "<<endl;
        cin>>alturaC;
    }while(alturaC>2.50);
    cout<<"Ingrese el genero de c (H/M): "<<endl;
    cin>>sexoC;

    Persona a(nombreA,edadA, sexoA, pesoA, alturaA);
    a.setaltura(alturaA);
    a.setedad(edadA);
    a.setnombre(nombreA);
    a.setpeso(pesoA);
    a.setsexo(sexoA);

    Persona b(nombreB,edadB, sexoB, pesoB, alturaB);
    b.setaltura(alturaB);
    b.setedad(edadB);
    b.setnombre(nombreB);
    b.setpeso(pesoB);
    b.setsexo(sexoB);

    Persona c(nombreC,edadC, sexoC, pesoC, alturaC); 
    c.setaltura(alturaC);
    c.setedad(edadC);
    c.setnombre(nombreC);
    c.setpeso(pesoC);
    c.setsexo(sexoC);

    cout<<"********PERSONA a********"<<endl;
    //PERSONA a
    if(a.PesoIdeal()==-1){
        cout<<a.getnombre()<<" esta en su peso ideal"<<endl;
    }else if(a.PesoIdeal()==0){
        cout<<a.getnombre()<<" esta por debajo de su peso ideal"<<endl;
    }else{
        cout<<a.getnombre()<<" tiene sobrepeso"<<endl;
    }
    
    if(a.esMayorDeEdad()==true){
        cout<<a.getnombre()<<" es mayor de edad"<<endl;
    }else{
        cout<<a.getnombre()<<" es menor de edad"<<endl;
    }

    cout<<"DNI: "<<a.getDNI()<<endl;
    cout<<a.getedad()<<" anios"<<endl;
    cout<<a.getnombre()<<endl;
    cout<<"Pesa: "<<a.getpeso()<<endl;
    cout<<"Mide: "<<a.getaltura()<<endl;
    cout<<a.getsexo()<<endl<<endl;

    cout<<"********PERSONA b********"<<endl;
    //PERSONA b
    if(b.PesoIdeal()==-1){
        cout<<b.getnombre()<<" esta en su peso ideal"<<endl;
    }else if(b.PesoIdeal()==0){
        cout<<b.getnombre()<<" esta por debajo de su peso ideal"<<endl;
    }else{
        cout<<b.getnombre()<<" tiene sobrepeso"<<endl;
    }
    
    if(b.esMayorDeEdad()==true){
        cout<<b.getnombre()<<" es mayor de edad"<<endl;
    }else{
        cout<<b.getnombre()<<" es menor de edad"<<endl;
    }

    cout<<"DNI: "<<b.getDNI()<<endl;
    cout<<b.getedad()<<" anios"<<endl;
    cout<<b.getnombre()<<endl;
    cout<<"Pesa: "<<b.getpeso()<<endl;
    cout<<"Mide: "<<b.getaltura()<<endl;
    cout<<b.getsexo()<<endl<<endl;

    cout<<"********PERSONA c********"<<endl;
    //PERSONA c
    if(c.PesoIdeal()==-1){
        cout<<c.getnombre()<<" esta en su peso ideal"<<endl;
    }else if(c.PesoIdeal()==0){
        cout<<c.getnombre()<<" esta por debajo de su peso ideal"<<endl;
    }else{
        cout<<c.getnombre()<<" tiene sobrepeso"<<endl;
    }
    
    if(c.esMayorDeEdad()==true){
        cout<<c.getnombre()<<" es mayor de edad"<<endl;
    }else{
        cout<<c.getnombre()<<" es menor de edad"<<endl;
    }

    cout<<"DNI: "<<c.getDNI()<<endl;
    cout<<c.getedad()<<" anios"<<endl;
    cout<<c.getnombre()<<endl;
    cout<<"Pesa: "<<c.getpeso()<<endl;
    cout<<"Mide: "<<c.getaltura()<<endl;
    cout<<c.getsexo()<<endl<<endl;


}