#include <iostream>
using namespace std;

/*
Ej. MI-17: ​ Se ingresa un conjunto de valores float, cada uno de los cuales representan el sueldo de un empleado,
excepto el último valor que es cero e indica el fin del conjunto. Se pide desarrollar un programa que determine e informe:
a) Cuántos empleados ganan menos $1.520.
b) Cuántos ganan $1.520 o más pero menos de $2.780.
c) Cuántos ganan $2.780 o más pero menos de $5.999.
d) Cuántos ganan $5.999 o más.
*/

int main () {

    float sueldo;
    int contadorEmpleados1=0;
    int contadorEmpleados2=0;
    int contadorEmpleados3=0;
    int contadorEmpleados4=0;


    
    cout<<"Ingrese un sueldo (Presione 0 para finalizar)"<<endl;
    cin>>sueldo;

    while(sueldo > 0)
    {
        if (sueldo<1520){
            contadorEmpleados1 = contadorEmpleados1 + 1;
        }

        if (sueldo >=1520 && sueldo<2780){
            contadorEmpleados2 = contadorEmpleados2 + 1; 
        }

        if (sueldo >=2780 && sueldo < 5999){
            contadorEmpleados3 = contadorEmpleados3 + 1; 
        }

        if (sueldo >= 5999){
            contadorEmpleados4 = contadorEmpleados4 + 1;
        }

        cout<<"Ingrese un sueldo (Presione 0 para finalizar)"<<endl;
        cin>>sueldo;
    }

    cout<<"La cantidad de empleados que ganan menos que 1520 es : "<<contadorEmpleados1<<endl; 
    cout<<"La cantidad de empleados que ganan $1.520 o más pero menos de $2.780 es : "<<contadorEmpleados2<<endl; 
    cout<<"La cantidad de empleados que ganan $2.780 o más pero menos de $5.999 es : "<<contadorEmpleados3<<endl; 
    cout<<"La cantidad de empleados que ganan $5.999 o más es : "<<contadorEmpleados4<<endl; 
 
 return 0;
}