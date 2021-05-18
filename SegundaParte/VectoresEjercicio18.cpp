#include <iostream>
using namespace std;

/*
18. Ingresar un valor N (< 25) y luego por filas una matriz cuadrada CUADRADA de N filas y columnas. 
Desarrollar un programa que determine e imprima:
a) Todos los elementos de la diagonal principal o secundaria según de cual resulte mayor la sumatoria de elementos.
b) Los elementos del cuarto (N/2 filas y N/2 columnas) cuya sumatoria resulte mayor (considerando que N fuera par).
c) Los elementos de la triangular superior o inferior dependiendo de cual tenga mayor sumatoria de elementos. 
*/

int main()
{

    int valor = 0;

    int filas = 0;
    int columnas = 0;

    cout << "Ingrese el valor de la matriz cuadrada: " << endl;
    cin >> valor;

    filas = valor;
    columnas = valor;

    int matriz[filas][columnas];
    matriz[filas][columnas] = {0};

    cout << "Ingrese los valores de la matriz: " << endl;

    for (int i = 0; i < valor; i++)
    {
        for (int j = 0; j < count; j++)
        {
            cin >> matriz[i][j] << endl;
            cout << " : " << endl;
        }
    }

    return 0;
}