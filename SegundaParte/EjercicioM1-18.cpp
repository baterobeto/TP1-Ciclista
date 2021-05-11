#include <iostream>
using namespace std;

/*
Dado un valor M determinar y emitir un listado con los M primeros múltiplos de 3 que no lo sean de 5,
dentro del conjunto de los números naturales.
*/

int main () {

    int M; 
    int nro = 1; 

    cout<<"Ingrese la cantidad de multiplos de 3 y no de 5 que desea: "<<endl; 
    cin>>M; 

    int cumplen = 0; 
    while (cumplen < M)
    {
        if (nro%3 ==0 && nro%5 !=0){

            cout<<nro<<endl; 
            cumplen = cumplen +1 ;

        }

        nro = nro + 1; 
    }
    
 
 return 0;
}