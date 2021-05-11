#include <iostream>
using namespace std;

/*
Ej. MI-13: ​ Dados N y M números naturales, informar su producto por sumas sucesivas.
*/

int main () {

    int n, m;
    int resultado = 0; 

    cout<<"Ingrese el primer numero: "<<endl;
    cin>>n;

    cout<<"Ingrese el segundo numero: "<<endl;
    cin>>m;

    for (int i = 0; i <m; i++)
    {
        resultado = resultado + n;
    }
    
    cout<<"El resultado de la suma sucesiva de los numeros es: "<<resultado<<endl; 
 
 return 0;
}