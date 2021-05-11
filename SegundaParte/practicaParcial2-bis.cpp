#include <iostream>
using namespace std;

bool esPrimo(int);
void leer(string mensaje, int &valor);

int main()
{
    int cantPrimos = 0, nro = 0, cantNros = 0;

    leer("Ingrese la cantidad de numeros a ingresar: ", cantNros);

    for (int i = 0; i <= cantNros; i++)
    {
        leer("Nro:", nro);
        if (esPrimo(nro))
        {
            cantPrimos++;
        }
    }

    return 0;
}

void leer(string mensaje, int &valor)
{
    cout << mensaje << endl;
    cin >> valor;
}

bool esPrimo(int numero)
{
    int divisores = 0;
    for (int i = 2; i < numero; i++)
    {
        if (numero % i == 0)
        {
            return false;
        }
    }
    return true;
}