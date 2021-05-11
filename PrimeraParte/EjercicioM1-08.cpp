#include <iostream>
using namespace std;
/*
Ej. MI-8: ​ Dado un triángulo representado por sus lados L1, L2, L3, 
determinar e imprimir una leyenda según sea:
equilátero, isósceles o escalenos.

*/

int main()
{

    int l1, l2, l3 = 0;
    string leyenda = "";

    int cantLados = 3;

    cout << "Ingrese el valor del lado 1 : " << endl;
    cin >> l1;

    cout << "Ingrese el valor del lado 2 : " << endl;
    cin >> l2;

    cout << "Ingrese el valor del lado 3 : " << endl;
    cin >> l3;

    if (l1 == l2 && l1 == l3)
    {
        leyenda = "EQUILATERO!!";
    }

    if (l1 == l2 && l1 != l3 || l1 == l3 && l1 != l2 || l3 == l2 && l3 != l1)
    {
        leyenda = "ISOCELES!!";
    }

    if (l1 != l2 && l2 != l3 && l3 != l1)
    {
        leyenda = "ESCALENO!!";
    }

    cout << "Con los valores ingresados, se forma un triangulo..." << leyenda << endl;

    return 0;
}