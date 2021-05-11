#include <iostream>
using namespace std;

bool esCapicua(int num);

int main()
{

    int cantNums = 0;
    int cantCapicuas = 0;
    int num = 0;

    cout << "Ingrese la cantidad de numeros que desea ingresar: " << endl;
    cin >> cantNums;

    for (int i = 0; i < cantNums; i++)
    {
        cout << "Ingrese el numero: " << endl;
        cin >> num;

        if (esCapicua(num))
        {
            cantCapicuas++;
        }
    }
    cout << "Cantidad de numeros capicua: " << cantCapicuas << endl;

    return 0;
}


bool esCapicua(int num){
    int primerDigito = num/100;
    int tercerDigito;
}