#include <iostream>
using namespace std;

void leer(string mensaje, string &valor)
{
    cout << mensaje << endl;
    cin >> valor;
}

void leer(string mensaje, int &valor)
{
    cout << mensaje << endl;
    cin >> valor;
}

//5 vendedores con codigos que van del 101 al 104

struct Venta
{
    int codVendedor;
    int codProducto;
    float cantidad;
    float precio;
};

struct Vendedor
{
    int codVendedor;
    string nombre;
};

int buscarMayor(float ventasVendedor[], int cant)
{
}
//Posicion unica predecible PUP / Codigos consecutivos y COMPLETOS, no es una busqueda, accedemos solo a lo que queremos

int main()
{
    Venta ventas[100];
    Vendedor vendedores[5];

    float ventasVendedor[5] = {0};

    for (int i = 0; i < 100; i++)
    {
        int pos = ventas[i].codVendedor - 101;
        ventasVendedor[pos] += ventas[i].cantidad * ventas[i].precio;
    }

    int posMayor = buscarMayor(ventasVendedor, 5);

    cout << "El mejor vendedor fue: " << posMayor + 101 << endl;

    return 0;
}