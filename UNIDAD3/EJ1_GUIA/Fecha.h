class Fecha{
    private:
    int dia;
    int mes;
    int anio;

    void reset_month(){dia = 1; mes++;}
    void reset_year(){dia=1; mes = 1; anio++;}
    public:
    Fecha(int d, int m, int a){
        dia=d;
        mes=m;
        anio=a;
    }
    Fecha(){
        dia=1;
        mes=1;
        anio=1900;
    }
    void setdia(int d);
    void setmes(int m);
    void setanio(int a);
    void operator++(int);
    void operator+(int);
    int getdia();
    int getmes();
    int getanio();

};