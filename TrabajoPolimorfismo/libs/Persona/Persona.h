#include "../Materia/Materia.h"
#include <iostream>
#include <string>
#include <vector>
#pragma once
using namespace std;

class Persona
{
protected:
    int DNI;
    int cant_materias;
    string nombre;
    string apellido;
    string mail;
    vector<Materia> materias; //vector<> es un arreglo dinámico que puede variar su tamaño a lo largo del programa.
public:
    Persona(){

    };
    Persona(int dni, string name, string lastname, string correo)
    {
        DNI = dni;
        nombre = name;
        apellido = lastname;
        mail = correo;
        cant_materias=0;
    }
    void setNombre(string name);
    void setApellido(string lastname);
    void setMail(string correo);
    int getDNI();
    string getNombre();
    string getApellido();
    string getMail();
    virtual void consulta(); 
    void inscribirMateria(Materia m1);
};
