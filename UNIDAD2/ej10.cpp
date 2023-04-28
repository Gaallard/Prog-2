#include <iostream>
#include <random>
#include <time.h>
using namespace std;

int main(){
    int *p, n, *q, *r, *s;
    srand(time(NULL));
    cout<<"Ingrese el tamanio del vector: "<<endl;
    cin>>n;
    p = new int[n];
    
    q = p;

    for(int i=0; i<n; i++){
        *q = rand()%100 +1;
        q++;
    }

    q = p;
    r = p;
    s = new int;
        
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            r++;
            if(*q < *r){
                *s = *q;
                *q = *r;
                *r = *s;
            }
        }
        q++;
        r=q;
        
    }

    cout<<endl<<endl;
    q = p;

    for(int i=0; i<n; i++){
        cout<<*q<<endl;
        q++;
    }

    delete q;
    delete p;
}