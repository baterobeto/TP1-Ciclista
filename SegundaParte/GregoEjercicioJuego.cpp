#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

/*
Juego: Acierta un número de 1 al 50. 
El programa debe informar si el número a descubrir es mayor o menor al ingresado,
y cuando el jugador lo descubre, debe informar la cantidad de intentos y terminar.
*/

void leer(string mensaje, int &valor)
{
    cout << mensaje << endl;
    cin >> valor;
}

void operaciones(int &numeroIngresado, int numeroMaquina, int &cantIntentos)
{
    while (numeroIngresado != numeroMaquina)
    {
        if (numeroIngresado > numeroMaquina)
            cout << "El numero ingresado es mas grande" << endl;
        if (numeroIngresado < numeroMaquina)
            cout << "El numero ingresado es menor" << endl;

        cantIntentos++;

        cout << "Ingrese un numero entre 1 y 50: " << endl;
        cin >> numeroIngresado;
    }
}
void imprimir(string mensaje, int numeroIngresado)
{
    cout << mensaje << numeroIngresado << endl;
}

void imprimir(string mensaje, int cantIntentos, string intentos)
{
    cout << mensaje << cantIntentos << intentos << endl;
}

int main()
{
    int numeroIngresado;

    int numeroMaquina;

    int cantIntentos = 1;

    srand(time(NULL));

    numeroMaquina = 1 + rand() % 50;

    leer("Ingrese un numero entre 1 y 50: ", numeroIngresado);

    operaciones(numeroIngresado, numeroMaquina, cantIntentos);

    imprimir("GANASTE!! El numero era ", numeroIngresado);

    imprimir("Lo realizaste en ", cantIntentos, " intentos");

    return 0;
}
