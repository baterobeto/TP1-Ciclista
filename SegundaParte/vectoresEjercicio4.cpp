#include <iostream>
using namespace std;

/*
Ingresar un valor entero N(<25). A continuacion ingresar un conjunto VEC de N componentes.
Si la suma de las componentes resulta mayor que 0 imprimir las de indice impar, 
sino los otros elementos. 
*/

int main()
{
    int cantidad = 0;
    int suma = 0;

    while (cantidad < 1 || cantidad > 24)
    {
        cout << "Ingrese la cantidad de elementos: " << endl;
        cin >> cantidad;
    }

    int VEC[cantidad];

    for (int i = 0; i < cantidad; i++)
    {
        cout << "Ingrese un numero: " << endl;
        cin >> VEC[i];

        suma = VEC[i] + suma;
    }

    if (suma > 0)
    {
        for (int i = 1; i < cantidad; i + 2)
        {
            cout << "Posicion: " << i << " Valor:" << VEC[i] << endl;
        }
    }
    else
    {
        for (int i = 0; i < cantidad; i + 2)
        {
            cout << "Posicion: " << i << " Valor:" << VEC[i] << endl;
        }
    }

    return 0;
}