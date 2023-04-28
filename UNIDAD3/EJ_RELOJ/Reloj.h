class Reloj
{
private:
    int hora;
    int minuto;
    int segundo;
public:
    Reloj(int h, int m, int s){
        hora=h;
        minuto=m;
        segundo=s;
    }
    void sethora(int h);
    void setminuto(int m);
    void setsegundo(int s);
    int gethora();
    int getminuto();
    int getsegundo();
    void operator++();
};
