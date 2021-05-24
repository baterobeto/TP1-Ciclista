#include <iostream>
using namespace std;

//BUSQUEDA BINARIA - El vector debe estar ordenado

struct Vendedor
{

    int legajo;
    string nombre;
};

int buscar(Vendedor vendedores[], int cant, int legajo)
{
    int inicio = 0;
    int fin = cant - 1;

    while (fin >= inicio)
    {
        int mitad = inicio + (fin - inicio) / 2;

        if (vendedores[mitad].legajo == legajo)
        {
            return mitad;
        }
        if (vendedores[mitad].legajo > legajo)
        {
            fin = mitad - 1;
        }
        else
        {
            inicio = mitad + 1;
        }
    }

    return -1;
}

int main()
{

    Vendedor vendedores[5];

    vendedores[0].legajo = 1111;
    vendedores[0].nombre = "Pepe";

    vendedores[1].legajo = 2223;
    vendedores[1].nombre = "Juan";

    vendedores[2].legajo = 3333;
    vendedores[2].nombre = "Maria";

    vendedores[3].legajo = 5555;
    vendedores[3].nombre = "Florencia";

    vendedores[4].legajo = 9998;
    vendedores[4].nombre = "Ana";

    int legajoABuscar;

    cout << "Ingrese el legajo: " << endl;
    cin >> legajoABuscar;

    int pos = buscar(vendedores, 5, legajoABuscar);

    cout << "Vendedor: " << vendedores[pos].nombre;

    return 0;
}