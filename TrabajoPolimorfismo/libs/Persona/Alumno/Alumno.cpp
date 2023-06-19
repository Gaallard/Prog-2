#include <iostream>
#include "Alumno.h"
using namespace std;

//Este metodo recorre un ciclo for y va comparando cada materia del vector con la materia solicitada, si conincide devuelve la nota.
void Alumno::cargar_nota(Materia m1, int nota) {
    for (int i = 0; i < materias.size(); i++) {
        if (materias[i].getNombre() == m1.getNombre()) {
            materias[i].setNota(nota);
            return;
        }
    }
    cout << "El alumno no esta inscripto a dicha materia" << endl;
}

void Alumno::modificar_datos() {
    cout << "Ingrese nuevos datos: " << endl;
    cout << "Apellido: ";
    cin >> apellido;
    cout << "Nombres: ";
    cin >> nombre;
    cout << "Carrera: ";
    cin >> carrera;
    cout << "Mail: ";
    cin >> mail;
    cout << "Edad: ";
    cin >> edad;
}

void Alumno::consulta() {
    Persona::consulta();
    cout << "Carrera: " << carrera << endl;
    cout << "Edad: " << edad << endl<<endl;

    cout<< "# Materias"<<endl;
    for(int i = 0; i<materias.size();i++){
        cout<<"Cod: " + to_string(materias[i].getCodigo())<<endl;
        cout<<materias[i].getNombre() + ": "<<materias[i].getNota()<<endl<<endl;
    }
}