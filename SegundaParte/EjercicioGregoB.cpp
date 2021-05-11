#include <iostream>
using namespace std;

/*
Crear otra función que reciba un array con los minutos de llegada de los 5 días de la semana, 
la cantidad total que se presentaron cada día, 
y la cantidad de alumnos necesaria para abrir la clase, 
y que devuelva un array con verdaderos y falsos según se debió abrir o no cada día. {true, false, false, true, true} 
*/

bool seAbreCursoSemana(int minutoSemana[], int cantidadAlumnos, int cantNecesarios)
{
}

int main()
{

    int minutosSemana[5];
    int cantidadAlumnos;
    int cantNecesarios;

    bool seAbreClase[5];

    cout << "Ingrese la cantidad de alumnos: " << endl;
    cin >> cantidadAlumnos;

    for (int i = 1; i < 6; i++)
    {
        
    }

    seAbreCursoSemana(minutosSemana, cantidadAlumnos, cantNecesarios);

    return 0;
}