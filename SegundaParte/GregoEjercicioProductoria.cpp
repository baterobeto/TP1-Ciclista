#include <iostream>
using namespace std;

void leer(string mensaje, int &valor)
{
    cout << mensaje << endl;
    cin >> valor;
}

void calculo(int numero, int &producto, int resultado)
{
    while (numero != 0)
    {

        producto = numero * producto;

        resultado = producto;

        leer("Ingrese un numero: (Presione 0 para finalizar)", numero);
    }
}

void imprimeResultado(string mensaje, int valor)
{
    cout << mensaje << valor << endl;
}

int main()
{

    int numero = 1;
    int producto = 1;
    int resultado;

    leer("Ingrese un numero: (Presione 0 para finalizar)", numero);

    calculo(numero, producto, resultado);

    imprimeResultado("El producto total es: ", producto);

    return 0;
}