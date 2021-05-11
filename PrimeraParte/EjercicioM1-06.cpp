#include <iostream>
using namespace std;

/*
Ej. MI-6 ​ Dadas dos fechas informar cual es la más reciente.
Determine cuáles serían los datos de entrada y las leyendas
a informar de acuerdo al proceso solicitado.
*/

int main()
{

    int fecha1, fecha2, reciente = 0;
    string leyenda = " es mas reciente";

    cout << "Ingrese una fecha en formato AAAAMMDD: " << endl;
    cin >> fecha1;

    cout << "Ingrese otra fecha en formato AAAAMMDD: " << endl;
    cin >> fecha2;

    if (fecha1 > fecha2)
    {
        reciente = fecha1;
    }
    else if (fecha2 > fecha1)
        {
            reciente = fecha2;
        }
        else
        {
            cout << "Las fechas ingresadas son iguales" << endl;
            return 0;
        }
    
    cout << reciente << leyenda;

    return 0;
}