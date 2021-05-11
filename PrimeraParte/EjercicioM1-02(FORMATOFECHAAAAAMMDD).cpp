#include <iostream>
using namespace std;

//Ej. MI-2: Dada una terna de números naturales que representan al día, al mes y al año de una determinada
//fecha informarla como un solo número natural de 8 dígitos con la forma (AAAAMMDD).
int main()
{

    int dia, mes, anio = 0;
    int fecha = 0;

    cout << "Ingrese el dia en formato DD: " << endl;
    cin >> dia;

    cout << "Ingrese el mes en formato MM: " << endl;
    cin >> mes;

    cout << "Ingrese el anio en formato AAAA: " << endl;
    cin >> anio;

    fecha = (anio * 10000) + (mes * 100) + dia;

    cout << "La fecha ingresada es: " << fecha;

    return 0;
}