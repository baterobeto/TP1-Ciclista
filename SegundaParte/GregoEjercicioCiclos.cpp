#include <iostream>
using namespace std;

void calculo(int numero)
{
    for (int i = 0; i < numero; i++)
    {

        if ((i % 5 != 0))
        {
            cout << i << endl;
        }
    }
}

int main()
{

    int numero = 30;

    calculo(numero);

    return 0;
}