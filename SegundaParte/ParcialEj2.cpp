#include <iostream>
using namespace std;

/*

Realizar un programa que pida número por consola, hasta que el usuario ingrese el número 0.
En cada ingreso, antes de pedir otro número debe informar cuántos números lleva ingresando el usuario.
Al finalizar (cuando el usuario ingresó 0), debe informar:Cantidad de números ingresados.Promedio.Mayor.Menor.*/

void leer(string mensaje, int &valor);

int main()
{

    int numero = 0;
    int contador = 0;
    int acumulador = 0;
    float promedio = 0;
    int mayor = 0;
    int menor = 0;

    leer("Ingrese un numero: (Ingrese 0 para finalizar)", numero);

    mayor = numero;
    menor = numero;

    while (numero != 0)
    {

        if (numero > mayor)
        {
            mayor = numero;
        }

        if (numero < menor)
        {
            menor = numero;
        }

        acumulador = acumulador + numero;

        contador++;

        leer("Ingrese un numero: (Ingrese 0 para finalizar)", numero);
    }

    promedio = acumulador / contador;

    cout << "La cantidad de numeros ingresados fue: " << contador << endl;
    cout << "El promedio es: " << promedio << endl;
    cout << "El mayor fue: " << mayor << endl;
    cout << "El menor fue: " << menor << endl;

    return 0;
}

void leer(string mensaje, int &valor)
{
    cout << mensaje << endl;
    cin >> valor;
}