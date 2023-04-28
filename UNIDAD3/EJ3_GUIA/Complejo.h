class Complejo
{
private:
    float real;
    char imaginario;
    float complejo;
public:
    Complejo(){
        real=0;
        complejo=0;
    }
    Complejo(float r, char i, float complex){
        real=r;
        imaginario=i;
        complejo=complex;
    }
    void setEntero(float r);
    void setComplejo(float complex);
    float getEntero();
    float getComplejo();
    Complejo& operator+(double);
    Complejo& operator-(double);
    Complejo& operator*(double);
};



