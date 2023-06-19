#include <iostream>
#include <string>
#pragma once
using namespace std;

class Materia
{
private:
    string nombre;
    int codigo;
    float nota;

public:
    Materia(){
        nombre="";
        codigo=0;
        nota=0.0;
    }
    Materia(string name, int code, float grade)
    {
        nombre = name;
        codigo = code;
        nota = grade;
    }
    void setNombre(string name);
    void setCodigo(int code);
    void setNota(float grade);
    string getNombre();
    int getCodigo();
    float getNota();
};
