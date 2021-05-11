#include <iostream>

using namespace std;

int factorial(int n);

int main()
{
    int numero = 0;

    cout << "Ingrese el numero: " << endl;
    cin >> numero;
    cout << "El factorial de " << numero << " es: " << factorial(numero) << endl;
    return 0;
}
int factorial(int n)
{
    int resultado = 1;

    if (n == 0) //HIPOTESIS DE CORTE
    {
        return 1;
    }

    resultado = factorial(n - 1) * n;

    return resultado;

    // return n * factorial(--n);
}
