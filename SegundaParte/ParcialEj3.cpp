#include <iostream>
using namespace std;

/*
Realizar un programa que reciba un número entero del usuario, y que devuelva:
 a) su factorial. (Este cálculo debe ser solucionado en una función).
 b) que informe si es múltiplo de 2. (Este cálculo deberá ser resuelto en otra función).
 */

int factorial(int valor);

bool esMultiplo(int numero);

int main()
{

    int numero = 0;
    int resultado = 0;
    bool multiplo;

    cout << "Ingrese un numero : " << endl;
    cin >> numero;

    resultado = factorial(numero);
    multiplo = esMultiplo(numero);

    cout << "El factorial de " << numero << " es: " << resultado << endl;

    return 0;
}

int factorial(int valor)
{
    int resultado = 1;

    if (valor == 1)
    {
        return 1;
    }

    resultado = factorial(valor - 1) * valor;

    return resultado;
}

bool esMultiplo(int numero)
{
    if (numero % 2 == 0)
    {
        cout << "El numero ingresado es multiplo de 2" << endl;

        return true;
    }

    cout << "El numero ingresado no es multiplo de 2" << endl;

    return false;
}