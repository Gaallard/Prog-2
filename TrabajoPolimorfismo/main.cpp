#include "./libs/Materia/Materia.h"
#include "./libs/Persona/Persona.h"
#include "./libs/Persona/Alumno/Alumno.h"
#include "./libs/Persona/Docente/Docente.h"
#include <iostream>
using namespace std;

// Primero crearemos todas las funciones que utilizaremos en el main.

vector<Alumno> altaAlumno(vector<Alumno> alumnos)
{
    string apellido, nombres, carrera, mail;
    int edad, DNI;
    cout << "Ingrese el DNI del alumno: ";
    cin >> DNI;
    cout << "Ingrese el apellido del alumno: ";
    cin >> apellido;
    cout << "Ingrese los nombres del alumno: ";
    cin >> nombres;
    cout << "Ingrese la carrera del alumno: ";
    cin >> carrera;
    cout << "Ingrese el mail del alumno: ";
    cin >> mail;
    cout << "Ingrese la edad del alumno: ";
    cin >> edad;
    Alumno nuevoAlumno(DNI, apellido, nombres, carrera, mail, edad);
    alumnos.push_back(nuevoAlumno);
    cout << "Alumno agregado correctamente." << endl;

    return alumnos;
}

vector<Docente> altaDocente(vector<Docente> docentes)
{
    string apellido, nombres, mail, titulo;
    int DNI;
    cout << "Ingrese el DNI del docente: ";
    cin >> DNI;
    cout << "Ingrese el apellido del docente: ";
    cin >> apellido;
    cout << "Ingrese los nombres del docente: ";
    cin >> nombres;
    cout << "Ingrese el mail del docente: ";
    cin >> mail;
    cout << "Ingrese el titulo del docente: ";
    cin >> titulo;
    Docente nuevoDocente(DNI, apellido, nombres, mail, titulo);
    docentes.push_back(nuevoDocente);
    cout << "Docente agregado correctamente." << endl;

    return docentes;
}

int materiasExistente(string nombreMateria, vector<Materia> materias)
{
    for (int i = 0; i < materias.size(); i++)
    {
        string mn = materias[i].getNombre();
        if (mn.compare(nombreMateria) == 0) //.compare compara dos strings, en este caso la materia ingresada y el nombre de cada materia en el vector
        {
            cout << "Materia existente" << endl;
            return i;
        }
    }
    return 404;
}

vector<Alumno> inscribirMateriaAlumno(vector<Alumno> alumnos, vector<Materia> materias)
{
    int dniNuevo;
    string materiaNueva;
    cout << "Ingrese el dni del alumno al que desea anotar a una materia" << endl;
    cin >> dniNuevo;
    for (int i = 0; i < alumnos.size(); i++)
    {
        if (alumnos[i].getDNI() == dniNuevo)
        {
            cout << "Ingrese el nombre de la materia" << endl;
            cin >> materiaNueva;
            /*inscribirMateria recibe como parametros el vector materias cuya posicion es la posicion de la materia a la que se desea inscribir gracias a la funcion materiasExistente que
            nos retorna la posicion de la misma.*/
            alumnos[i].inscribirMateria(materias[materiasExistente(materiaNueva, materias)]);
            return alumnos;
        }
    }
    return alumnos;
}

vector<Materia> altaMateria(vector<Materia> materias)
{
    int codigo;
    string nombre;
    cout << "Ingrese el codigo de la materia: ";
    cin >> codigo;
    cout << "Ingrese el nombre: ";
    cin >> nombre;
    Materia nuevaMateria(nombre, codigo, -1);
    materias.push_back(nuevaMateria);
    cout << "Materia agregada correctamente." << endl;

    return materias;
}

vector<Docente> inscribirMateriaDocente(vector<Docente> docentes, vector<Materia> materias)
{
    int dniNuevo;
    string materiaNueva;
    cout << "Ingrese el dni del docente al que desea anotar a una materia" << endl;
    cin >> dniNuevo;
    for (int i = 0; i < docentes.size(); i++)
    {
        if (docentes[i].getDNI() == dniNuevo)
        {
            cout << "Ingrese el nombre de la materia" << endl;
            cin >> materiaNueva;
            /*inscribirMateria recibe como parametros el vector materias cuya posicion es la posicion de la materia a la que se desea inscribir gracias a la funcion materiasExistente que
            nos retorna la posicion de la misma.*/
            docentes[i].inscribirMateria(materias[materiasExistente(materiaNueva, materias)]);
            return docentes;
        }
    }

    return docentes;
}

vector<Alumno> cargarNotaAlumno(vector<Alumno> alumnos, vector<Materia> materias)
{
    int dniNuevo, notaNueva;
    string materiaNueva;
    cout << "Ingrese el dni del alumno al que desea colocarle una nota" << endl;
    cin >> dniNuevo;
    for (int i = 0; i < alumnos.size(); i++)
    {
        if (alumnos[i].getDNI() == dniNuevo)
        {
            cout << "Ingrese el nombre de la materia" << endl;
            cin >> materiaNueva;
            cout << "Ingrese la nota del alumno" << endl;
            cin >> notaNueva;
            alumnos[i].cargar_nota(materias[materiasExistente(materiaNueva, materias)], notaNueva);
            return alumnos;
        }
    }
    return alumnos;
}

vector<Alumno> modificarAlumno(vector<Alumno> alumnos, vector<Materia> materias)
{
    int dniNuevo, notaNueva;
    string materiaNueva;
    cout << "Ingrese el dni del alumno al que desea colocarle una nota" << endl;
    cin >> dniNuevo;
    for (int i = 0; i < alumnos.size(); i++)
    {
        if (alumnos[i].getDNI() == dniNuevo)
        {
            alumnos[i].modificar_datos();
            return alumnos;
        }
    }
    return alumnos;
}

vector<Docente> modificarDocente(vector<Docente> docentes, vector<Materia> materias)
{
    int dniNuevo;
    string materiaNueva;
    cout << "Ingrese el dni del docente al que le desea modificar los datos" << endl;
    cin >> dniNuevo;
    for (int i = 0; i < docentes.size(); i++)
    {
        if (docentes[i].getDNI() == dniNuevo)
        {
            docentes[i].modificar_datos();
            return docentes;
        }
    }
    return docentes;
}

void mostrarTodo(vector<Alumno> alumnos, vector<Docente> docentes, vector<Materia> materias)
{
    cout << endl;
    for (int i = 0; i < alumnos.size(); i++)
    {
        cout << "###### ALUMNO " << i + 1 << " ######" << endl;
        alumnos[i].consulta();
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < docentes.size(); i++)
    {
        cout << "###### DOCENTE " << i + 1 << " ######" << endl;
        docentes[i].consulta();
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < materias.size(); i++)
    {
        cout << "###### " << materias[i].getCodigo() << " ######" << endl;
        cout << materias[i].getNombre() << endl;
        cout << endl;
    }

    return;
}

int main()
{
    system("color A");


    Materia m1("Matematicas", 1, 8.5);
    Materia m2("Fisica", 2, 7.0);
    Materia m3("Programacion", 3, 9.0);
    int opcion = 0;

    vector<Alumno> alumnos;
    vector<Docente> docentes;
    vector<Materia> materias;

    Alumno a1(1, "Agustin", "Gallardo", "Ingenieria en Sistemas", "agustin@gmail.com", 19);
    Docente d1(2, "Maria", "Camoletto", "maria@gmail.com", "Ingenieria en Computacion");

    alumnos.push_back(a1);
    docentes.push_back(d1);
    materias.push_back(m1);
    materias.push_back(m2);
    materias.push_back(m3);
    
    while (opcion != 10)
    {
        cout << endl;
        cout << "Sistema de Gestion:" << endl;
        cout << "1. Alta Alumno" << endl;
        cout << "2. Alta docente" << endl;
        cout << "3. Inscribir a materia (Alumnos)" << endl;
        cout << "4. Anotar titular (Docente)" << endl;
        cout << "5. Cargar Nota (Alumnos)" << endl;
        cout << "6. Modificar Datos alumno." << endl;
        cout << "7. Modificar Datos docente." << endl;
        cout << "8. Alta materia." << endl;
        cout << "9. Mostrar datos" << endl;
        cout << "10. Salir" << endl;

        cout << "Ingrese una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            alumnos = altaAlumno(alumnos);
            break;
        case 2:
            docentes = altaDocente(docentes);
            break;
        case 3:
            alumnos = inscribirMateriaAlumno(alumnos, materias);
            break;
        case 4:
            docentes = inscribirMateriaDocente(docentes, materias);
            break;
        case 5:
            alumnos = cargarNotaAlumno(alumnos, materias);
            break;
        case 6:
            alumnos = modificarAlumno(alumnos, materias);
            break;
        case 7:
            docentes = modificarDocente(docentes, materias);
            break;
        case 8:
            materias = altaMateria(materias);
            break;
        case 9:
            mostrarTodo(alumnos, docentes, materias);
            break;
        case 10:
            cout << "Saliendo del programa..." << endl;
            break;
        default:
            cout << "Opcion inválida. Por favor ingrese una opción válida." << endl;
            break;
        }
    }

    return 0;
}
