#include <iostream>
using namespace std;

/*
Ej. MI-3: Dada un número entero de la forma (AAAAMMDD), que representa una fecha valida mostrar el dia, mes y
año que representa.
*/

int main()
{

    int dia, mes, anio;
    int fecha;

    cout << "Ingrese la fecha en formato AAAAMMDD: " << endl;
    cin >> fecha;

    anio = fecha / 10000;
    mes = (fecha / 100) % 100;
    dia = fecha % 100;

    cout << " La fecha ingresada es : " << anio << "/" << mes << "/" << dia;

    return 0;
}
