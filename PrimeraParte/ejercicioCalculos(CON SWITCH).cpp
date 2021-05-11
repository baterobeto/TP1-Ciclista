#include <iostream>
using namespace std;

int main()
{

    int operacion, num1, num2, resultado;
    string aux= "";

    cout << "Ingrese un numero: " << endl;
    cin >> num1;

    cout << "Ingrese otro numero: " << endl;
    cin >> num2;

    cout << "Ingrese la operacion (1: SUMA, 2: RESTA, 3: MULTIPLICACION, 4: DIVISION)" << endl;
    cin >> operacion;

    

    switch (operacion)
    {
    case 1:
        resultado = num1 + num2;
        aux="suma";
        break;

    case 2:
        resultado = num1 - num2;
        aux="resta";
        break;

    case 3:
        resultado = num1 * num2;
        aux="multiplicacion";
        break;

    case 4:
        resultado = num1 / num2;
        aux="division";
        break;
    default:
        break;
    }

    cout << "El resultado de la "<<aux<<" es:" << resultado << endl;

    return 0;
}