#include <iostream>
using namespace std;
/*
Ej. MI-5
Dados dos valores enteros y distintos, 
emitir una leyenda apropiada que informe cuál es el mayor entre ellos.
*/

int main()
{

    int num1, num2, mayor = 0;

    string leyenda = "El numero mayor es: ";

    cout << "Ingrese el primer numero: " << endl;
    cin >> num1;

    cout << "Ingrese el segundo numero: " << endl;
    cin >> num2;

    if (num1 > num2)
    {
        mayor = num1;
    }
    else
    {
        if (num1 < num2)
        {
            mayor = num2;
        }
        else
        {
            cout << "Los numeros ingresados son iguales" << endl;
            return 0; 
        }
    }
    cout<<leyenda<<mayor;

    return 0;
}