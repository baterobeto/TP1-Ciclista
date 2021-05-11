#include <iostream>
using namespace std;

/*
Ej. MI-9: ​ Dados un mes y el año correspondiente informar cuántos días tiene el mes.
*/

int main()
{

    int mes, anio = 0;
    int esBisiesto = 0;

    cout << "Ingrese el numero de mes: " << endl;
    cin >> mes;

    cout << "Ingrese un anio: " << endl;
    cin >> anio;

    if ((anio % 4 == 0) && (anio % 100 != 0) || (anio % 400 == 0))
    {
        esBisiesto = 1;

        if (mes == 2)
        {
            cout << "El mes tiene 29 dias" << endl;
        }
    }

    if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
    {

        cout << "El mes tiene 31 dias" << endl;
    }
    else
    {
        if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
        {
            cout << "El mes tiene 30 dias" << endl;
        }
        else
        {
            if (mes == 2 && esBisiesto == 0)
            {
                cout << "El mes tiene 28 dias" << endl;
            }
        }
    }

    return 0;
}