#include <iostream>
using namespace std;

/*
Ej. MI-14: ​ Dados 50 números enteros, informar el promedio de los mayores que 100 y 
la suma de los menores que –10.
*/

int main () {

    int numero, promedio, sumatoria = 0;
    int n;
    int contador = 0;
    int sumaPromedio = 0;
    int sumaNegativos = 0;

    cout<<"Ingrese la cantidad de numeros enteros: "<<endl; 
    cin>>numero;

        int a = 0;
        while(a<numero){

        cout<<"Ingrese un numero: "<<endl;
        cin>>n;

        if(n>99){
            contador = (contador + n);
            sumaPromedio = sumaPromedio + contador;
        }else {
            if (n<-9){
                sumatoria = sumatoria + n;
               // sumaNegativos = sumaNegativos + sumatoria;
            }
        }

        a++;
        }
        promedio = contador/numero;

        cout<<"El promedio de los mayores que 100 es: "<<promedio<<endl;
        cout<<"La sumatoria de los menores de -10 es: "<<sumatoria<<endl;

//Resolviendo con For


    
    

 
 return 0;
}