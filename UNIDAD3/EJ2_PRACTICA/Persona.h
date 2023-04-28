#include <string>
class Persona
{
    private:
    std::string nombre;
    int edad;
    int DNI;
    char sexo;
    float peso;
    float altura;
    float IMC;
    int generarDNI();
    void comprobarSexo();

    public:
    Persona(){
        nombre ="";
        edad=0;
        sexo='H';
        peso=0;
        altura=0;
        IMC=0;
        DNI = generarDNI();
        comprobarSexo();

    }
    Persona(std::string name, int age, char gender){
        nombre=name;
        edad=age;
        sexo=gender;
        peso=0;
        altura=0;
        IMC=0;
        DNI = generarDNI();
        comprobarSexo();

    }
    Persona(std::string name, int age, char gender, float weight, float height){
        nombre=name;
        edad=age;
        sexo=gender;
        peso=weight;
        altura=height;
        DNI = generarDNI();
        comprobarSexo();

    }
        
    void setnombre(std::string name);
    void setedad(int age);
    void setsexo(char gender);
    void setpeso(float weight);
    void setaltura(float height);
    void calcularIMC();
    bool esMayorDeEdad();
    std::string getnombre();
    int getedad();
    char getsexo();
    float getpeso();
    float getaltura();
    double getcalcularIMC();
    int getDNI();
    int PesoIdeal();

};

