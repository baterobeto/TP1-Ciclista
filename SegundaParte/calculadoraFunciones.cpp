#include <iostream>
using namespace std;

int pedidoNum1(int num1)
{
    cout << "Ingrese el primer numero: " << endl;
    cin >> num1;

    return num1;
}

int pedidoNum2(int num2)
{
    cout << "Ingrese el segundo numero: " << endl;
    cin >> num2;

    return num2;
}

int solicitudOperacion(int tipoOperacion)
{
    cout << "Ingrese la operacion que desea realizar: 1) SUMA  2) RESTA  3) MULTIPLICACION  4) DIVISION " << endl;
    cin >> tipoOperacion;

    return tipoOperacion;
}

int calculoSuma(int num1, int num2, int resultado)
{

    resultado = num1 + num2;

    return resultado;
}
int calculoResta(int num1, int num2, int resultado)
{
    resultado = num1 - num2;

    return resultado;
}
int calculoMultiplicacion(int num1, int num2, int resultado)
{
    resultado = num1 * num2;

    /*
   if (num1 == 0 || num2== 0 ){
        
        resultado == false; 
    }
   */

    return resultado;
}
int calculoDivision(int num1, int num2, int resultado)
{
    /*
   if (num2 == 0)
    {
        cout << "La division por cero no esta definida" << endl;
        return 0;
    }
   
   */

    if (num2 != 0)
    {

        resultado = num1 / num2;
    }

    return resultado;
}
int calculoOperaciones(int num1, int num2, int tipoOperacion, int resultado)
{
    switch (tipoOperacion)
    {
    case 1:
        resultado = calculoSuma(num1, num2, resultado);

        break;
    case 2:
        resultado = calculoResta(num1, num2, resultado);

        break;
    case 3:
        resultado = calculoMultiplicacion(num1, num2, resultado);

        break;
    case 4:

        if (num2 == 0 ){
            cout<<"Error Matematico"<<endl; 
            break; 
        } else {
            resultado = calculoDivision(num1, num2, resultado);

        break;

        }
        

    default:
        cout << "NUMERO INVALIDO" << endl;
        break;
    }

    return resultado;
}

void muestraResultado(int resultado)
{

    cout << "El resultado de la operacion ingresada es: " << resultado << endl;
}

int main()
{

    int num1;
    int num2;
    int tipoOperacion;
    int suma;
    int resta;
    int multiplicacion;
    int division;
    int resultado;
    //string mensajeError = "ERROR";

    num1 = pedidoNum1(num1);
    num2 = pedidoNum2(num2);
    tipoOperacion = solicitudOperacion(tipoOperacion);

    resultado = calculoOperaciones(num1, num2, tipoOperacion, resultado);

    muestraResultado(resultado);

    return 0;
}


/*
imprimir por pantalla una matriz
*/