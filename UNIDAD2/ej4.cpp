#include <iostream>
#include <random>
#include <cmath>
using namespace std;

int main(){
    int a[15];
    int *p;

    for(int i=0; i<15; i++){
        a[i] = rand()%100;
        p = &a[i];

        cout<<*p<<", "<<p<<endl;
    }
}