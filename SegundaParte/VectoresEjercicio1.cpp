#include <iostream>
using namespace std;

/*
Ingresar un valor N (<25). Generar un arreglo de N componentes en el cual las mismas 
contengan los primeros numeros naturales pares e imprimirlo
*/
int main()
{
    int miArray[25] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24};

    for (int i = 0; i < 25; i++)
    {
        if (i % 2 == 0)
        {
            cout << miArray[i] << endl;
        }
    }

    return 0;
}