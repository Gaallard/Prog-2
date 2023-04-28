class Raices
{
private:
    int a;
    int b; 
    int c;
    double Disc;
    void setDisc();
public:
    Raices(){
        a=0;
        b=0;
        c=0;
        Disc=0;
    }

    void seta(int a);
    void setb(int b);
    void setc(int c);
    float obtenerRaices();
    float obtenerRaiz();
    bool tieneRaices();
    bool tieneRaiz();
    void calcular();
    int geta();
    int getb();
    int getc();
    double getDisc();

};
