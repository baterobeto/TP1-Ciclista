#include <iostream>
using namespace std;

/*
Ej. MI-12 ​ Informar los primeros 100 números naturales y su sumatoria
*/

int main () {

/*    int numero = 0;
    int suma = 0;

    while (numero <=100)
    {
        suma += numero;
        cout<<numero<<endl; 
        numero ++;
    }
    cout<<"La suma de los primeros 100 numeros naturales es: "<<suma<<endl; 
*/

    //MISMO EJERCICIO CON FOR

    int numeroNatural = 1; 
    int sumatoria = 0; 

    for (int i = 1; i <= 100; i++)
    {
        sumatoria = sumatoria + i; 
        cout<<"Numero natural:  "<<i + 1<< "  Sumatoria : "<<sumatoria<<endl; 
       
    }
    
    
 
 return 0;
}