#include <iostream>
using namespace std;

/*
Realizar un programa que dibuje un cuadrado numerales ( # ), 
con una cruz con ejes verticales y horizontales. 
El usuario debe poder ingresar el largo del alto y ancho.
*/

int main()
{

    int dimension = 20;

    int largo = 0;
    int ancho = 0;

    cout << "Ingrese el largo del cuadrado: " << endl;
    cin >> largo;

    cout << "Ingrese el ancho del cuadrado: " << endl;
    cin >> ancho;

    for (int i = 0; i < largo; i++)
    {
        for (int j = 0; j < ancho; j++)
        {
            if (i == 0 || i == largo - 1 || j == 0 || j == ancho - 1 || i == (largo / 2) || j == (ancho / 2))
                cout << " #";
            else
                cout << "  ";
        }
        cout << endl;
    }

    return 0;
}