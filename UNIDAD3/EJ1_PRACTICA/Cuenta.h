#include <string>
class Cuenta
{
    private:
    std::string Titular;
    double Cantidad;
    double CantidadFinal;


    public:
    Cuenta(){
        Titular = "";
        Cantidad = 0;
        CantidadFinal=0;
    }

    Cuenta(std::string persona, double dinero);
    void setTitular(std::string persona);
    void setCantidad(double dinero);
    void setCantidadFinal(double dinero);
    void ingresar();
    void retirar();
    std::string getTitular();
    double getCantidad();
    double getingresar();
    double getretirar();
    double getCantidadFinal();

};
