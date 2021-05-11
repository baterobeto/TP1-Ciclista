#include <iostream>
using namespace std;

int factorial(int valor)
{
    int resultado = 1;

    if (valor == 1) //HIPOTESIS DE CORTE
    {
        return 1;
    }
    //return valor ==1? 1:factorial(valor - 1) * valor;  //IF TERNARIO
    resultado = factorial(valor - 1) * valor;

    return resultado;
}

int main()
{

    int valorUsuario = 1;
    int resultado = 1;

    cout << "Ingrese el valor: " << endl;
    cin >> valorUsuario;

    resultado = factorial(valorUsuario);

    cout << "El factorial de " << valorUsuario << " es: " << resultado << endl;

    return 0;
}