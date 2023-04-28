#include <iostream>
#include <math.h>

using namespace std;

bool divisor_primo(int m, int n){
    int contM=0, contN=0, comp_primo=0, divisoresM[100], divisoresN[100], k=0, l=0;

    for(int i=1; i<m; i++){
        if(m%i==0){
            for(int j=1; j<=i; j++){
                if(i%j==0){
                    comp_primo++;
                }
            }
            if(comp_primo==2){
                divisoresM[k]=i;
                k++;
            }

            comp_primo=0;
        }
    }

    for(int i=1; i<n; i++){
        if(n%i==0){
            for(int j=1; j<=i; j++){
                if(i%j==0){
                    comp_primo++;
                }
            }
            if(comp_primo==2){
                divisoresN[l]=i;
                l++;
            }
            comp_primo=0;
        }
    }

    if(l!=k){
        return false;
    }
    else{
        for(int i=0; i<k; i++){
            if(divisoresM[i] != divisoresN[i]){
                return false;
            }
            else{
                return true;
            }
        }
    }



}



int main(){
    int m, n;

    do
    {
        cout<<"Ingrese un entero positivo: "<<endl;
        cin>>m;
    } while (m<=0);

    do
    {
        cout<<"Ingrese otro entero positivo: "<<endl;
        cin>>n;
    } while (n<=0);

    if(divisor_primo(m, n) == false){
        cout<<"Los numeros no tienen los mismos divisores primos"<<endl;
    }
    else{
        cout<<"Los numeros tienen exactamente los mismos divisores primos"<<endl;
    }
    
}