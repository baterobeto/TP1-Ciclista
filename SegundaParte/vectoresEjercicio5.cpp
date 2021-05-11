#include <iostream>
using namespace std;
/*
Ingresar un valor entero N (< 30). A continuación ingresar un conjunto UNO y luego otro conjunto DOS, ambos de N componentes. 
Generar e imprimir otro conjunto TRES intercalando los valores de posición impar de DOS y los valores de posición par de UNO.
*/

int main()
{
    int dimension = 0;

    while (dimension < 1 || dimension > 29)
    {
        cout << "Ingrese la cantidad de elementos: " << endl;
        cin >> dimension;
    }

    int UNO[dimension];
    int DOS[dimension];
    int TRES[dimension];

    for (int i = 0; i < dimension; i++)
    {
        cout << "Ingrese un numero para el primer conjunto: " << endl;
        cin >> UNO[i];
    }

    for (int i = 0; i < dimension; i++)
    {
        cout << "Ingrese un numero para el segundo conjunto: " << endl;
        cin >> DOS[i];
    }

    for (int i = 0; i < dimension; i + 2)
    {
        TRES[i] = UNO[i];
    }

    for (int i = 1; i < dimension; i + 2)
    {
        TRES[i] = DOS[i];
    }

    for (int i = 0; i < dimension; i++)
    {
        cout << TRES[i] << endl;
    }

    return 0;
}