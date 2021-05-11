#include <iostream>
using namespace std;

/*
Ingresar un valor entero N(<30) y a continuacion un cojunto de N elementos. Si el ultimo elemento del conjunto
tiene un valor menor que 10 imprimir los negativos y en caso contrario los demas.
*/

int main()
{
    int cantidad;
    int imprimePositivos;
    int imprimeNegativos;

    cout << "Ingrese la cantidad de valores a ingresar: " << endl;
    cin >> cantidad;
    int miArray[cantidad];

    for (int i = 0; i < cantidad; i++)
    {
        cout << "Ingrese un numero: " << endl;
        cin >> miArray[i];
    }

    if (miArray[cantidad - 1] < 10)
    {
        for (int i = 0; i < cantidad; i++)
        {
            if (miArray[i] < 0)
            {
                cout << miArray[i] << endl;
            }
            else
            {
                if (miArray[cantidad - 1] >= 10)
                {
                    cout << miArray[i] << endl;
                }
            }
        }
    }

    return 0;
}