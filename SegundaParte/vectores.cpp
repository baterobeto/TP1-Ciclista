#include <iostream>
using namespace std;

/*
Variable que puede contener varios datos, sabe guardar un numero de 
posicion para saber donde esta guardado cada uno de esos datos
*/

int main()
{

    int miArray[5] = {13, 7, 21, 12, 5};

    int maximo = 0;

    for (int i = 0; i < 5; i++)
    {
        if (miArray[i] > maximo)
        {
            maximo = miArray[i];
        }
        cout << miArray[i] << endl;
    }

    cout << "El valor maximo es: " << maximo << endl;

    return 0;
}