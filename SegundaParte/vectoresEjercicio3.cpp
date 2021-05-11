#include <iostream>
using namespace std;

/*
Ingresar un valor entero (N<20). A continuacion ingresar un conjunto VEC de N componentes. 
A partir de este conjunto generar otro FACT en el que cada elemento sea el factorial del elemento homologo de VEC.
Finalmente imprimir ambos vectores a razon de un valor cada uno por renglon
*/

int calculoFactorial(int numero)
{

    if (numero < 0)
    {
        return 0;
    }
    else if (numero > 1)
    {
        return numero * calculoFactorial(numero - 1);
    }

    return 1;
}

int main()
{

    int longitud = 0;

    cout << "Ingrese la cantidad de numeros: " << endl;
    cin >> longitud;

    while (longitud > 20)
    {

        cout << "Para continuar, debe ingresar un numero menor que 20" << endl;

        cout << "Ingrese la cantidad de numeros: " << endl;
        cin >> longitud;
    }

    int VEC[longitud];
    int FACT[longitud];

    for (int i = 0; i < longitud; i++)
    {
        cout << "Ingrese un numero: " << endl;
        cin >> VEC[i];

        FACT[i] = calculoFactorial(VEC[i]);
    }

    for (int i = 0; i < longitud; i++)
    {
        cout << "El numero ingresado es: " << VEC[i] << endl;
        cout << "El factorial del numero es: " << FACT[i] << endl;
    }

    return 0;
}