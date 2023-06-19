
// #include "menues.cpp"
#include "utils/utils.h"
#include <iostream>
#include <stdexcept>


#define CYAN "\033[36m"

using namespace std;

vector<Cliente> crearCliente(vector<Cliente> clientes)
{
    int anio;
    float saldo;
    string nombre, apellido, tipo;

    do
    {
        try
        {
            cout << "Anio: ";
            cin >> anio;

            if (anio < 1907 || anio > 2023)
            {
                throw runtime_error("Ingrese un anio valido.");
            }
            break;
        }
        catch (exception &e)
        {
            cout << e.what() << endl;
            cin.clear();            // Limpia el flujo de entrada
            cin.ignore(1000, '\n'); // Descarta el contenido restante en el búfer
        }
    } while (true);

    do
    {
        try
        {
            bool isNumber = false;
            cout << "Nombre: ";
            cin >> nombre;

            for (char c : nombre)
            {
                if (isdigit(c))
                {
                    isNumber = true;
                    break;
                }
            }

            if (isNumber)
            {
                throw runtime_error("Ingrese un nombre valido.");
            }

            break;
        }
        catch (exception &e)
        {
            cout << e.what() << std::endl;
            cin.clear();
            cin.ignore(1000, '\n');
        }
    } while (true);

    do
    {
        try
        {
            bool isNumber = false;
            cout << "Apellido: ";
            cin >> apellido;

            for (char c : apellido)
            {
                if (isdigit(c))
                {
                    isNumber = true;
                    break;
                }
            }

            if (isNumber)
            {
                throw runtime_error("Ingrese un apellido valido.");
            }

            break;
        }
        catch (exception &e)
        {
            cout << e.what() << std::endl;
            cin.clear();
            cin.ignore(1000, '\n');
        }
    } while (true);

    do
    {
        try
        {
            bool isNumber = false;
            cout << "Tipo (oro, black, plata): ";
            cin >> tipo;

            if (tipo != "oro" && tipo != "black" && tipo != "plata")
            {
                throw runtime_error("Ingrese un tipo valido (plata, oro, black).");
            }

            for (char c : tipo)
            {
                if (isdigit(c))
                {
                    isNumber = true;
                    break;
                }
            }

            if (isNumber)
            {
                throw runtime_error("Ingrese un tipo valido (plata, oro, black).");
            }

            break;
        }
        catch (exception &e)
        {
            cout << e.what() << std::endl;
            cin.clear();
            cin.ignore(1000, '\n');
        }
    } while (true);

    do
    {

        try
        {
            cout << "Saldo: ";
            cin >> saldo;
            float number = stof(to_string(saldo));
            if (saldo < 0 || number == 0)
            {
                throw runtime_error("Ingrese un saldo valido.");
            }
            break;
        }
        catch (exception &e)
        {
            cout << e.what() << endl;
            cin.clear();
            cin.ignore(1000, '\n');
        }

    } while (true);

    Cliente cliente(anio, nombre, apellido, tipo, saldo);
    clientes.push_back(cliente);
    return clientes;
}

vector<Transaccion> crearTransaccion(vector<Transaccion> transacciones)
{
    int dia, mes, anio;
    float cantidad;
    char tipo;

    do
    {
        try
        {
            cout << "Dia: ";
            cin >> dia;

            if (dia < 1 || dia > 30)
            {
                throw runtime_error("Ingrese un dia valido.");
            }
            break;
        }
        catch (exception &e)
        {
            cout << e.what() << endl;
            cin.clear();
            cin.ignore(1000, '\n');
        }
    } while (true);

    do
    {
        try
        {
            cout << "Mes: ";
            cin >> mes;

            if (mes < 1 || mes > 12)
            {
                throw runtime_error("Ingrese un mes valido.");
            }
            break;
        }
        catch (exception &e)
        {
            cout << e.what() << endl;
            cin.clear();
            cin.ignore(1000, '\n');
        }
    } while (true);

    do
    {
        try
        {
            cout << "Anio: ";
            cin >> anio;

            if (anio < 1907 || anio > 2023)
            {
                throw runtime_error("Ingrese un anio valido.");
            }
            break;
        }
        catch (exception &e)
        {
            cout << e.what() << endl;
            cin.clear();
            cin.ignore(1000, '\n');
        }
    } while (true);

    do
    {

        try
        {
            cout << "Cantidad: ";
            cin >> cantidad;
            float number = stof(to_string(cantidad));
            if (cantidad < 0 || number == 0)
            {
                throw runtime_error("Ingrese un saldo valido.");
            }
            break;
        }
        catch (exception &e)
        {
            cout << e.what() << endl;
            cin.clear();
            cin.ignore(1000, '\n');
        }

    } while (true);

    do
    {
        try
        {
            bool isNumber = false;
            cout << "Tipo (D, E): ";
            cin >> tipo;

            if (tipo != 'D' && tipo != 'E')
            {
                throw runtime_error("Ingrese un tipo valido (D o E).");
            }

            if (isdigit(tipo))
            {
                isNumber = true;
                break;
            }

            if (isNumber)
            {
                throw runtime_error("Ingrese un tipo valido (D o E).");
            }

            break;
        }
        catch (exception &e)
        {
            cout << e.what() << endl;
            cin.clear();
            cin.ignore(1000, '\n');
        }
    } while (true);

    Transaccion transaccion(dia, mes, anio, cantidad, tipo);
    transacciones.push_back(transaccion);
    return transacciones;
}



int main()
{
    int opcion = 0;
    int counter = 0;
    int transaccionCounter = 0;
    vector<Cliente> clientes;
    vector<Transaccion> transacciones;

    while (opcion != 8)
    {

        cout << CYAN << "Sistema de Gestion:" << endl;
        cout << "1. Crear cliente." << endl;
        cout << "2. Eliminar cliente." << endl;
        cout << "3. Realizar transaccion." << endl;
        cout << "4. Buscar un cliente por su codigo." << endl;
        cout << "5. Mostrar todos los clientes." << endl;
        cout << "6. Mostrar las transacciones realizadas por cierto cliente." << endl;
        cout << "7. Mostrar las transacciones en cierto periodo." << endl;
        cout << "8. Salir" << endl;
        cout << "Ingrese una opcion: ";
        cin >> opcion;
        system("cls");

        switch (opcion)
        {
        case 1:
            clientes = crearCliente(clientes);
            clientes[counter].AgregarCliente(&clientes[counter]);
            break;
        case 2:

            int code;
            cout << "Ingrese el numero del cliente que quiere eliminar: ";
            try
            {
                cin >> code;
                int number = stoi(to_string(code));
                if (code < 0 || number==0)
                {
                    throw runtime_error("Ingrese un numero valido.");
                    break;
                }
            }
            catch (exception &e)
            {
                cout << e.what() << endl;
                cin.clear();
                cin.ignore(1000, '\n');
            }
            EliminarCliente(code, clientes);
            break;

        case 3:
            int nro_cliente;
            cout << "Ingrese el numero del cliente que hara la transaccion: ";
            try
            {
                cin >> nro_cliente;
                int number = stoi(to_string(nro_cliente));
                if (nro_cliente < 0 || number==0)
                {
                    throw runtime_error("Ingrese un numero valido.");
                    break;
                }
            }
            catch (exception &e)
            {
                cout << e.what() << endl;
                cin.clear();
                cin.ignore(1000, '\n');
            }
            transacciones = crearTransaccion(transacciones);

            transacciones[transaccionCounter].nuevaTransaccion(&clientes[nro_cliente - 1], &transacciones[transaccionCounter]);
            transaccionCounter++;

            break;
        case 4:
        {
            int code;
            cout << "Ingrese un codigo: ";
            try
            {
                cin >> code;
                int number = stoi(to_string(code));
                if (code < 0 || number==0)
                {
                    throw runtime_error("Ingrese un codigo valido.");
                    break;
                }
            }
            catch (exception &e)
            {
                cout << e.what() << endl;
                cin.clear();
                cin.ignore(1000, '\n');
            }

            BuscarClientePorId(code, clientes);
            break;
        }
        case 5:
            mostrarClientes();
            cout << endl
                 << endl;
            break;
        case 6:
            int codigoCliente;
            cout << "Ingrese el codigo para ver las transacciones: ";
            try
            {
                cin >> codigoCliente;
                int number = stoi(to_string(codigoCliente));
                if (codigoCliente < 0 || number==0)
                {
                    throw runtime_error("Ingrese un codigo valido.");
                    break;
                }
            }
            catch (exception &e)
            {
                cout << e.what() << endl;
                cin.clear();
                cin.ignore(1000, '\n');
            }

            transaccionPorCliente(codigoCliente, transacciones);
            break;
        case 7:
            int opcion;
            cout << "1. Mostrar total" << endl;
            cout << "2. Buscar por anio" << endl;
            cout << "3. Buscar por periodo de 6 meses" << endl;
            cout << "Opcion: ";

            try
            {
                cin >> opcion;
                int number = stoi(to_string(opcion));
                if (opcion < 1 || opcion > 3 || number==0)
                {
                    throw runtime_error("Ingrese una opcion valida.");
                    break;
                }
            }
            catch (exception &e)
            {
                cout << e.what() << endl;
                cin.clear();
                cin.ignore(1000, '\n');
            }

            if (opcion == 1)
            {
                MostrarTotal(transacciones);
            }
            else if (opcion == 2)
            {
                cout << "Ingrese un anio: ";
                int anio;
                cin >> anio;
                MostrarPorAnio(anio, transacciones);
            }
            else if (opcion == 3)
            {
                int anio, mes;
                cout << "Ingrese un anio: ";
                cin >> anio;
                cout << "Ingrese un mes: ";
                cin >> mes;
                MostrarPorPeriodo(mes, anio, transacciones);
            }

            break;

        default:
            break;
        }

        counter++;
    }

    return 0;
}