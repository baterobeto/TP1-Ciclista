#include <iostream>
using namespace std;

void leer(string mensaje, int &numero)
{
    cout << mensaje << endl;
    cin >> numero;
}

void calculo(int numero, int pares, int impares, int &sumaPares, int &sumaImpares)
{
    while (numero != 0)
    {

        if (numero % 2 == 0)
        {
            pares++;
            sumaPares = numero + sumaPares;
        }
        else
        {
            impares++;
            sumaImpares = numero + sumaImpares;
        }

        cout << "Ingrese un numero: (Presione 0 para finalizar)" << endl;
        cin >> numero;
    }
}

void imprimir(string mensaje, int valor)
{
    cout << mensaje << valor << endl;
}
int main()
{

    int numero = 1;
    int pares = 0;
    int sumaPares = 0;
    int sumaImpares = 0;
    int impares = 0;

    leer("Ingrese un numero: (Presione 0 para finalizar)", numero);

    calculo(numero, pares, impares, sumaPares, sumaImpares);

    imprimir("La suma de los numeros pares es: ", sumaPares);

    imprimir("La suma de los numeros impares es: ", sumaImpares);

    return 0;
}