#include <iostream>
using namespace std;

#define PRECIO_SUBIDA 500
#define PRECIO_BAJADA 120

void calculoConsumo(int pisoInicial, int pisoFinal, float &cantKW);

void imprimir(string mensaje, float valor);

void leer(string mensaje, int &valor);

int main()
{

    float cantKW = 0;
    int pisoInicial = 0;
    int pisoFinal = 0;
    int cantPisos = 0;
    int piso = 0;

    leer("Ingrese los pisos que registro: ", cantPisos);

    leer("Ingrese el piso al que fue: ", pisoInicial);
    for (int i = 0; i < cantPisos; i++)
    {
        leer("Ingrese el piso al que fue: ", pisoFinal);
    }

    cout << "Ingrese el piso inicial: " << endl;
    cin >> pisoInicial;

    cout << "Ingrese el piso final: " << endl;
    cin >> pisoFinal;

    calculoConsumo(pisoInicial, pisoFinal, cantKW);

    imprimir("La cantidad de KW consumidos es: ", cantKW);

    return 0;
}

void calculoConsumo(int pisoInicial, int pisoFinal, float &cantKW)
{
    int cantPisos = 0;
    if (pisoInicial > pisoFinal)
    {
        cantPisos = pisoInicial - pisoFinal;
        cantKW = cantPisos * PRECIO_BAJADA;

        if (cantPisos > 5)
        {
            cantKW = cantKW - (cantKW * (0.10));
        }
    }
    else if (pisoInicial < pisoFinal)
    {
        cantPisos = pisoFinal - pisoInicial;
        cantKW = cantPisos * PRECIO_SUBIDA;
        if (cantPisos > 5)
        {
            cantKW = cantKW - (cantKW * (0.10));
        }
    }
}
void imprimir(string mensaje, float valor)
{
    cout << mensaje << valor << endl;
}
void leer(string mensaje, int &valor)
{
    cout << mensaje << endl;
    cin >> valor;
}