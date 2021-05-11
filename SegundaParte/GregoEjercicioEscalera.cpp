#include <iostream>
using namespace std;

/*
Escalera. Realizar una escalera de #.
Ejemplo 
#
##
###
####
Que el usuario pueda disponer la cantidad de escalones.

*/

void leer(string mensaje, int &escalones)
{
    cout << mensaje << endl;
    cin >> escalones;
}

void calculo(int escalones)
{
    for (int i = 1; i <= escalones; i++)
    {

        for (int j = 1; i >= j; j++)

            cout << "#";

        cout << "\n";
    }
}

int main()
{

    int escalones;

    leer("Ingrese la cantidad de escalones: ", escalones);

    calculo(escalones);

    return 0;
}