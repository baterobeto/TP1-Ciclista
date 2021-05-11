#include <iostream>
using namespace std;

/*


Realizar un programa que reciba un número, y que muestre por pantalla, saltando de línea en cada número, 
todos los números del 1 hasta el ingresado por el usuario, 
excepto: Los múltiplos de 3, aunque si son también múltiplos de 10 los debe mostrar.
*/

void calculo(int numero);

void leer(string mensaje, int &valor);

void leer(string mensaje, int &valor);

int main()
{

    int numero = 0;

    cout << "Ingrese la cantidad de numeros: " << endl;
    cin >> numero;

    calculo(numero);

    return 0;
}

void leer(string mensaje, int &valor)
{
    cout << mensaje << endl;
    cin >> valor;
}

void calculo(int numero)
{
    for (int i = 1; i <= numero; i++)
    {

        if ((i % 3 != 0) || i % 10 == 0)
        {
            cout << i << endl;
        }
    }
}