#include <iostream>
using namespace std;

int main () {

    int nota , promedio , cantNotas; 
    promedio = 0;


    cout << "Ingrese la cantidad de notas: "<<endl; 
    cin>>cantNotas; 

    cout<<"Ingrese slas notas : "<<endl; 
    int i = 0; 
    while (i < cantNotas)
    {
        //Sentencias a repetir
        cout <<"Ingrese una nota: " ; 
        cin>>nota; 
        promedio += nota; //promedio = promedio + nota
        i++; 
    }

    promedio = promedio / cantNotas; 

    cout<<"El promedio es: "<< promedio<<endl;     
 
 return 0;
}