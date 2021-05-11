#include <iostream>
using namespace std;

/*
Calculo de potencia sin pow
*/

int pedidoNumero(int numero)
{

    cout << "Ingresar un numero: " << endl;
    cin >> numero;

    return numero;
}
int pedidoPotencia(int potencia)
{
    cout << "Ingresar la potencia del numero: " << endl;
    cin >> potencia;

    return potencia;
}
int funcionPotencia(int num, int pot, int x)
{

    int resultado = 0;

    if (pot == 0)
        resultado = 1;
    while (x < pot)
    {
        if (resultado < num)
        {
            resultado = num * num;
        }
        else
        {
            resultado = resultado * num;
        }
        x++;
    }

    return resultado;
}

int main()
{

    int numero = 0;
    int potencia = 0;
    int resultado = 0;
    int x = 1;

    numero = pedidoNumero(numero);
    potencia = pedidoPotencia(potencia);

    resultado = funcionPotencia(numero, potencia, x);

    cout << "El resultado es: " << resultado << endl;

    return 0;
}