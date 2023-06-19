#include "Materia.h"
#include <iostream>
using namespace std;

void Materia::setNombre(string name)
{
    nombre = name;
}

void Materia::setCodigo(int code)
{
    codigo = code;
}

void Materia::setNota(float grade)
{
    nota = grade;
}

string Materia::getNombre()
{
    return nombre;
}

int Materia::getCodigo()
{
    return codigo;
}

float Materia::getNota()
{
    return nota;
}
