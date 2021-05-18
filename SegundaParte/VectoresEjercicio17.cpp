#include <iostream>
using namespace std;

/*
17. Ingresar dos valores, M (< 30) y N (< 25) y a continuación por filas todos los componentes 
de una matriz MATRIZA de M filas y N columnas.
Desarrollar un programa que:
a) Imprima la matriz MATRIZA por columnas.
b) Calcule e imprima el valor promedio de los componentes de la matriz.
c) Genere e imprima un vector VECSUMCOL donde cada componente sea la suma de la columna
homóloga.
d) Genere e imprima un vector VECMAXFIL donde cada componente sea el valor máximo de cada fila. 
*/

int main()
{

    int M = 0;
    int N = 0;
    int valorIngresado = 0;
    int sumador = 0;
    int auxPromedio = 0;
    float promedio = 0;
    int VECSUMCOL[] = {0};
    int VECMAXFIL[] = {0};
    int sumaColumnas = 0;
    int maximo = 0;
    int auxMaxFilas = 0;

    cout << "Ingrese la cantidad de filas: " << endl;
    cin >> M;

    cout << "Ingrese la cantidad de columnas: " << endl;
    cin >> N;

    auxPromedio = M * N;

    int matriz[M][N];
    matriz[M][N] = {0};

    for (int i = 0; i < N; i++)
    {

        for (int j = 0; j < M; j++)
        {
            cout << "Ingrese los numeros de la matriz: " << endl;
            cin >> matriz[i][j];

            sumador = sumador + matriz[i][j];
            cout << " " << matriz[i][j] << " ";

            sumaColumnas = sumaColumnas + matriz[i][j];

            if (matriz[i][j] > maximo)
                maximo = matriz[i][j];

            VECMAXFIL[auxMaxFilas++] = matriz[i][j];
        }

        VECSUMCOL[i] = sumaColumnas;
        sumaColumnas = 0;

        cout << endl;
    }

    promedio = sumador / auxPromedio;

    cout << "El promedio es : " << promedio << endl;

    cout << "El vector de suma de columnas es : " << endl;
    for (int i = 0; i < auxPromedio; i++)
    {
        cout << VECSUMCOL[i] << " ";
    }

    cout << "El vector de maximos por fila es: " << endl;
    for (int i = 0; i < auxPromedio; i++)
    {
        cout << VECMAXFIL[i] << " ";
    }

    return 0;
}