#include <iostream>
using namespace std;
#include <cmath>


int pedidoBase(int base)
{
    cout << "Ingrese la base: " << endl;
    cin >> base;

    return base;
}

int pedidoPotencia(int potenciaRaizUsuario)
{
    cout << "Ingrese la potencia/raiz:  " << endl;
    cin >> potenciaRaizUsuario;

    return potenciaRaizUsuario;
}

int potencia(int base, int pot) //firma de la funcion
{

    int resultado = 1;

    if (pot == 0)
        resultado = 1;

    for (int i = 1; i <= pot; i++)
    {
        resultado = resultado * base;
    }

    return resultado;
}

int raizCuadrada(int base)
{
    int resultado = sqrt(base); 

    

    return resultado; 
}

int main()
{
    //llamada a la funcion

    int base = 0;
    int potenciaRaizUsuario = 0;
    int resultadoPotencia = 0;
    int resultadoRaiz = 0;

    base = pedidoBase(base);
    potenciaRaizUsuario = pedidoPotencia(potenciaRaizUsuario);
    resultadoPotencia = potencia(base, potenciaRaizUsuario);
    resultadoRaiz = raizCuadrada(base);

    cout << "Resultado: " << resultadoPotencia << endl;

    return 0;
}