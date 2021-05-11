#include <iostream>
using namespace std;

/*
Ingresar e informar valores, mientras que el valor ingresado no sea negativo. Informar la cantidad de valores
ingresados.
*/

int main () {

    int numero;
    int cantidad = -1;  

    int i = 0; 

    while (i >= 0){

        cout<<"Ingrese un valor: (Ingrese un valor negativo para finalizar)"<<endl; 
        cin>>i; 

        cout<<"El numero ingresado fue : "<<i<<endl; 
        cantidad ++; 

    }   

    cout<<"La cantidad de valores ingresados fue: "<<cantidad<<endl; 
 
 return 0;
}