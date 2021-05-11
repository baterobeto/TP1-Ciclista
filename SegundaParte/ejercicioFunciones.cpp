#include <iostream>
using namespace std;

/*
Dados tres lados determine si es un triangulo o no, en caso que sea triangulo determinar el tipo e imprimirlo (equilatero, isoceles, escaleno)
Luego determinar si es un triangulo rectangulo, y en caso que lo sea calcular e imprimir 
*/

void leer(string mensaje, int &valor);
bool esTriangulo(int, int, int);
string obtenerTipo(int, int, int);
bool esTrianguloRectangulo(int, int, int);
int calcularAreaTringuloRectangulo(int, int, int);

int main()
{
    int lado1, lado2, lado3;
    leer("Ingrese el lado 1: ", lado1);
    leer("Ingrese el lado 2: ", lado2);
    leer("Ingrese el lado 3: ", lado3);

    if (esTriangulo(lado1, lado2, lado3))
    {
        cout << "Es triangulo" << endl;
        cout << "El tipo de triangulo es: " << obtenerTipo(lado1, lado2, lado3) << endl;
        if (esTrianguloRectangulo(lado1, lado2, lado3))
        {
            cout << "El area del triangulo es: " << calcularAreaTringuloRectangulo(lado1, lado2, lado3) << endl;
        }
    }

    return 0;
}

void leer(string mensaje, int &valor)
{
    cout << mensaje << endl;
    cin >> valor;
    return;
}

bool esTriangulo(int lado1, int lado2, int lado3)
{
    return lado1 + lado2 > lado3 && lado1 + lado3 > lado2 && lado2 + lado3 > lado1;
}

string obtenerTipo(int lado1, int lado2, int lado3)
{
    string tipo = " ";
    if (lado1 == lado2 && lado1 == lado3)
    {
        return "Equilatero";
    }

    if (lado1 != lado2 && lado1 != lado3 && lado2 != lado3)
    {
        return "Escaleno";
    }

    return "Isoceles";
}

bool esTrianguloRectangulo(int lado1, int lado2, int lado3)
{
}