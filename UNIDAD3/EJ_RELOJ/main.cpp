#include "Reloj.cpp"
#include <iostream>
using namespace std;

int main(){
    Reloj r(0,0,0);
    while(1){
        ++r;
        cout<<r.gethora()<<" "<<r.getminuto()<<" "<<r.getsegundo()<<endl;
    }
}