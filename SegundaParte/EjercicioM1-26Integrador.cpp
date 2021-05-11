#include <iostream>
using namespace std;

/*
Ej. MI-26: ​ Un buque de carga traslada 100 contenedores a tres diferentes puertos del país.
Los puertos se identifican con los números 1, 2 y 3.
De cada contenedor que el buque traslade se registran los siguientes datos:
- Identificación del contenedor
- Peso del contenedor en kg
- Puerto de arribo (un valor de 1 a 3).
Se pide calcular e informar:
1) El peso total que el buque debe trasladar
2) La identificación del contenedor de mayor peso
3) La cantidad de contenedores que debe trasladar a cada puerto
*/

int main()
{

    int identificacionContenedor;
    int kilosContenedor;
    int contenedorMayorPeso;
    int identMayorPesoContenedor;
    int puertoDeArribo;
    int pesoTotal;
    int contenedorPuerto1;
    int contenedorPuerto2;
    int contenedorPuerto3;

    for (int i = 0; i < 5; i++)
    {

        cout << "Ingrese la identificacion del contenedor: " << endl;
        cin >> identificacionContenedor;

        cout << "Ingrese el peso del contenedor (En KG): " << endl;
        cin >> kilosContenedor;

        cout << "Ingrese el puerto de arribo: " << endl;
        cin >> puertoDeArribo;

        if (kilosContenedor > contenedorMayorPeso)
        {
            contenedorMayorPeso = kilosContenedor;
            identificacionContenedor = identificacionContenedor;
        }

        switch (puertoDeArribo)
        {
        case 1:
            contenedorPuerto1++;
            break;

        case 2:
            contenedorPuerto2++;
            break;

        case 3:
            contenedorPuerto3++;
            break;

        default:
            cout << "El puerto ingresado no existe" << endl;
            break;
        }
        pesoTotal += kilosContenedor;
    }

    cout << "El peso total del buque es de: " << pesoTotal << " kg." << endl;
    cout << "El contenedor mas pesado es el: " << identMayorPesoContenedor << endl;
    cout << "Al puerto 1 deben ir: " << contenedorPuerto1 << " contenedores" << endl;
    cout << "Al puerto 2 deben ir: " << contenedorPuerto2 << " contenedores" << endl;
    cout << "Al puerto 3 deben ir: " << contenedorPuerto3 << " contenedores" << endl;

    return 0;
}