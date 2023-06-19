#include "../Persona.h"
class Alumno : public Persona
{
private:
    string carrera;
    int edad;
public:
    Alumno(int dni, string name, string lastname, string career, string correo, int age){
        DNI = dni;
        nombre = name;
        apellido = lastname;
        mail = correo;
        carrera=career;
        edad=age;
    }


    void cargar_nota(Materia m1, int nota);
    void modificar_datos();
    void consulta();
};
