#include <iostream>
using namespace std;

#define FILAS 5
#define COLUMNAS 4

//matriz [FILA][COLUMNA]

int main()
{

    int matriz[FILAS][COLUMNAS] = {0};
    int array[] = {0};

    int contador = 1;

    for (int i = 0; i < COLUMNAS; i++)
    {

        for (int j = 0; j < FILAS; j++)
        {
            matriz[i][j] = contador;
            contador++;
            cout << " " << matriz[i][j] << " ";
            array[contador-1] = contador;
        }

        cout << endl;
    }

    for(int i = 0; i < 20 ; i++){

    }

    return 0;
}