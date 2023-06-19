#include "../Docente/Docente.h"
#include <iostream>
using namespace std;

void Docente::consulta() {
    Persona::consulta();
    cout << "Titulo: " << titulo << endl;
    
    cout<< "# Materias"<<endl;
    for(int i = 0; i<materias.size();i++){
        cout<<"Cod: " + to_string(materias[i].getCodigo())<<endl;
        cout<<materias[i].getNombre()<<endl;
    }
}

void Docente::modificar_datos() {
    cout << "Ingrese nuevos datos: " << endl;
    cout << "Apellido: ";
    cin >> apellido;
    cout << "Nombres: ";
    cin >> nombre;
    cout << "Mail: ";
    cin >> mail;
    cout << "Titulo: ";
    cin >> titulo;
}