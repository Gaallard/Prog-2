#include "Persona.h"
#include <iostream>
#include <time.h>
#include <cstdlib>
#include <string>
using namespace std;

void Persona::setNombre(string name)
{
    nombre = name;
}
void Persona::setApellido(string lastname)
{
    apellido = lastname;
}
void Persona::setMail(string correo)
{
    mail = correo;
}
int Persona::getDNI()
{
    return DNI;
}
string Persona::getNombre()
{
    return nombre;
}
string Persona::getApellido()
{
    return apellido;
}
string Persona::getMail()
{
    return mail;
}

void Persona::consulta()
{
    cout << "DNI: " << DNI << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Apellido: " << apellido << endl;
    cout << "Mail: " << mail << endl;
}

void Persona::inscribirMateria(Materia m1)
{
    //.push_back nos indica que se enviará la materia "m1" al final del arreglo dinamico materias. Eso nos sirve para ir creando espacios al fondo del array y añadiendo materias.
    materias.push_back(m1);
}
