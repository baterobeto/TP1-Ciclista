#include <iostream>
using namespace std;

int main()
{

    int escalones;

    int n;

    cout << "Ingrese n: ";

    cin >> n;

    for (int i = 1, k = 1; i <= n; k++)
    {

        for (int j = 0; j < k && i <= n; j++)

            cout << i++;

        cout << endl;
    }
    return 0;
}