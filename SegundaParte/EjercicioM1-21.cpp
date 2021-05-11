#include <iostream>
using namespace std;

/*
Ej. MI-21: ​ Dados N valores informar el mayor, el menor y en qué posición del conjunto fueron ingresados.
*/

int main () {

    int numero = 0;
    int cantidad = 0; 
    int mayor = 0; 
    int menor = 0; 
    int posicionMayor = 0; 
    int posicionMenor = 0;

    cout<<"Ingrese la cantidad de numero que desea cargar: "<<endl; 
    cin>>cantidad; 

    for (int i = 1; i <= cantidad; i++)
    {
      
        cout<<"Ingrese los numeros deseados: "<<endl;
        cin>>numero; 
          if (i == 1){

            mayor = numero ;
            menor = numero ; 
            
        }

        if (numero > mayor){

            mayor = numero; 
            posicionMayor = i; 
        }
        else if (numero < mayor){
            
            menor = numero; 
            posicionMenor = i; 
        }
    }
        cout<<"El numero mayor es: "<<mayor<<" ingresado en la posicion: "<<posicionMayor<<endl; 
        cout<<"En numero menor es: "<<menor<<" ingresado en la posicion: "<<posicionMenor<<endl;

 
 return 0; 
}