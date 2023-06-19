#include "../Persona.h"
class Docente : public Persona
{
private:
    string titulo;
public:
    Docente(int dni, string name, string lastname, string correo, string title){
        DNI = dni;
        nombre = name;
        apellido = lastname;
        mail = correo;
        titulo=title;
    }
    void consultar_materias();
    void consulta();
    void modificar_datos();
};