#include <iostream>
using namespace std;

/*
Ej. MI-7: ​ Dado tres valores determinar e imprimir una leyenda según sea: 
“Forman triangulo” o “No forman triángulo”.
*/

int main()
{

    int lado1, lado2, lado3 = 0;
    string leyenda = "";

    cout << "Ingrese el primer valor : " << endl;
    cin >> lado1;

    cout << "Ingrese el segundo valor : " << endl;
    cin >> lado2;

    cout << "Ingrese el tercer valor : " << endl;
    cin >> lado3;

    if ((lado1 - lado2) < lado3)
    {
        leyenda = "Es triangulo";
    }
    else
    {
        if ((lado1 - lado3) < lado2)
        {
            leyenda = "Es triangulo";
        }
        else
        {
            if ((lado2 - lado3) < lado1)
            {
                leyenda = "Es triangulo";
            }
            else
            {
                leyenda = "NO ES TRIANGULO";
            }
        }
    }

    cout << leyenda << endl;

    return 0;
}