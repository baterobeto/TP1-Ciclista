#include <iostream>
using namespace std;

/*
8. Ingresar un valor entero N (< 25). A continuación ingresar un conjunto GG de N elementos.
Imprimir el arreglo en orden inverso generando tres estrategias para imprimir los elementos a
razón
de: a) Uno por línea, b) Diez por línea, c) Cinco por línea con identificación
*/

void imprimirDeA10(int vector[], int numero)
{
    int cantXLinea = 0;

    for (int i = 0; i < numero; i++)
    {
            cout << vector[numero - 1 - i] << " ";
            cantXLinea++;
        if (cantXLinea ==10)
        {
            cout << endl

            
                 << vector[numero - 1 - i] << " ";
            cantXLinea = 1;
        }
    }
}

int main()
{
    int numero = 0;

    cout << "Ingrese el tamanio del vector: " << endl;
    cin >> numero;

    int vector[] = {0};
    vector[numero];

    imprimirDeA10(vector, numero);

    return 0;
}

