#include <iostream>
using namespace std;

/*

9. Ingresar un valor entero N (< 40). A continuación ingresar un conjunto A y luego otro conjunto B
ambos de N elementos. Generar un arreglo C donde cada elemento se forme de la siguiente
forma: C[1] = A[1]+B[N] C[2] = A[2]+B[N-1]

*/

int main()
{
    int numero = 0;

    cout << "Ingrese la cantidad de elementos de carga los vectores: " << endl;
    cin >> numero;

    int vecA[numero];
    vecA[numero] = {0};
    int vecB[numero];
    vecB[numero] = {0};
    int vecC[numero];
    vecC[numero] = {0};

    for (int i = 0; i < numero; i++)
    {
        cout << "Ingrese los valores del primer vector: " << endl;
        cin >> vecA[i];
    }
    for (int i = 0; i < numero; i++)
    {
        cout << "Ingrese los valores del segundo vector: " << endl;
        cin >> vecB[i];
    }

    for (int i = 0; i < numero; i++)
    {

        vecC[i] = vecA[i] + vecB[numero - 1 - i];

        cout << "Valor " << i << " :" << vecC[i] << endl;
    }

    return 0;
}