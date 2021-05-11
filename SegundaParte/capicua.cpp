#include <iostream>
using namespace std;
/*
Dados N números naturales de 3 dígitos ingresados, informar cuántos eran capicúa.*/

void leer(string mensaje, int &valor);

void calculoCapicua(int aux, int resto, int numInv, int numero);

int main()
{
    int numero = 0;
    int resto = 0;
    int numInv = 0;
    int aux = 0;

    leer("Ingrese un numero de tres cifras: ", numero);

    aux = numero;

    calculoCapicua(aux, resto, numInv, numero);
    while (aux > 0)
    {
        resto = aux % 10;
        aux = aux / 10;
        numInv = numInv * 10 + resto;
    }

    if (numInv == numero)
    {
        cout << "El numero es capicua" << endl;
    }
    else
    {
        cout << "El numero no es capicua" << endl;
    }

    return 0;
}

void leer(string mensaje, int &valor)
{
    cout << mensaje << endl;
    cin >> valor;
}
