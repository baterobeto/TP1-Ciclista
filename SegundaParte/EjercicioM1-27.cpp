#include <iostream>
using namespace std;

/*
Ej. MI-27: ​ En un torneo de fútbol participan K equipos. El torneo se juega con el sistema de todos contra todos. Por
cada partido disputado por un equipo se dispone de la siguiente información:
a) Nro. de equipo,
b) Código del resultado ('P'= Perdido, 'E'= Empatado, 'G'= Ganado).
Se arma un lote de datos con todos los resultados del torneo, agrupados por Nro. de equipo.
Desarrollar el programa que imprima:
Por cada equipo, su número y el puntaje total que obtuvo (suma 3 si gana, y 1 si empata).
*/

int main()
{

    int cantidadEquipos = 0;
    int numeroEquipo = 0;
    char resultado = 0;
    int cantResultados = 1;

    cout << "Ingrese la cantidad de equipos: " << endl;
    cin >> cantidadEquipos;

    for (int i = 1; i <= cantidadEquipos; i++)
    {

        int contadorGanados = 0;
        int contadorEmpatados = 0;
        int puntajeTotal = 0;

        cout << "Ingrese numero de equipo: " << endl;
        cin >> numeroEquipo;

        cout << "Ingrese la cantidad de partidos que desea ingresar: " << endl;
        cin >> cantResultados;

        for (int x = 0; x < cantResultados; x++)
        {

            cout << "Ingrese los resultados de los partidos del equipo " << i << "(G / P / E) :" << endl;
            cin >> resultado;

            switch (resultado)
            {
            case 'G':
                contadorGanados++;

                break;

            case 'P':

                break;

            case 'E':
                contadorEmpatados++;

                break;

            default:
                break;
            }
        }
        contadorGanados = contadorGanados * 3;
        puntajeTotal = contadorGanados + contadorEmpatados;
        cout << "Puntaje total Equipo: " << numeroEquipo << endl;
        cout << puntajeTotal << endl;
    }

    return 0;
}