#include <iostream>
using namespace std;

//Ej. MI-1 Dados dos valores enteros A y B, informar la suma, la resta y el producto.
int main()
{

    int A, B = 0;
    int suma, resta, producto = 0;
    string leyenda = "Ingrese un numero: ";

    cout << leyenda << endl;
    cin >> A;

    cout << leyenda << endl;
    cin >> B;

    suma = A + B;
    resta = A - B;
    producto = A * B;

    cout << "La suma es: " << suma << endl;
    cout << "La resta es: " << resta << endl;
    cout << "El producto es: " << producto << endl;

    return 0;
}