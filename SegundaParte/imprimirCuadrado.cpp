#include <iostream>
using namespace std;

int main()
{
    //Si desea cambiar el tamanio de la matriz, cambie el valor de la siguiente variable
    int dimension = 20;

    for (int i = 0; i < dimension; i++)
    {
        for (int j = 0; j < dimension; j++)
        {

            if (i == 0 || i == dimension - 1 || j == 0 || j == dimension - 1 || j == 1 || j == (dimension + 1))
            {
                cout << " # ";
            }
            else
                cout << "  ";

            if (j == dimension - 1)
            {
                cout << "" << endl;
            }
        }

        cout << endl;
    }

    return 0;
}