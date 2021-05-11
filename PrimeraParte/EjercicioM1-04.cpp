#include <iostream>
using namespace std;

/*
Ej. MI-4​ : A partir de un valor entero ingresado por teclado, se pide informar:
a) La quinta parte de dicho valor
b) El resto de la división por 5
c) La séptima parte del resultado del punto a)
*/

int main()
{

    int numero = 0;

    float quinta, septima, resto;

    cout << "Ingrese un numero: " << endl;
    cin >> numero;

    quinta = numero / 5;
    resto = numero % 5;
    septima = quinta / 7;

    cout << "La quinta parte de " << numero << " es: " << quinta << endl;
    cout << "El resto de la division por 5 de " << numero << " es: " << resto << endl;
    cout << "La septima parte de " << quinta << " es: " << septima;

    return 0;
}