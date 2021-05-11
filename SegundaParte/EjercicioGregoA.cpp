#include <iostream>
using namespace std;

/*
Un profesor de programación, recibe un vector, con los minutos de llegada de cada estudiante, respecto de su horario de ingreso.
Por ejemplo, si recibe el valor -5 significa que llegó 5 ninuts antes. 
El valor 3 significa que llegó 3 minutos tarde. El valor 0 significa que llegó puntual. 
Por otro lado, también recibe la cantidad de alumnos que se presense taron, y la cantidad de alumnos que necesitan para abrir el curso.
Realizar una función seAbreCurso que reciba el array de tiempos, y el minimo de alumnos, y que devuelva verdadero si se abre el curso o falso si no se abre. 
Se abre cuando los que llegaron antes o puntuales son iguales o màs que los necesarios para abrir.

bool seAbreCurso(tiempoLlegada[], cantidadTotal, alumnosMinimosAbrir)

ejemplo de valores:
tiempoLlegada[] = {-3, 2, 0, 0, 4}
cantidadTotal = 5
alumnosMinimosAbrir = 2

Debe devolver: true. 

*/
bool seAbreCurso(int tiempoLlegadaSemanal[], int cantAlumnos, int cantNecesarios)
{
    int llegaTarde = 0;
    int llegaTemprano = 0;
    int llegaPuntual = 0;
    for (int i = 0; i < cantAlumnos; i++)
    {
        if (tiempoLlegadaSemanal[i] > 0)
            llegaTarde++;

        if (tiempoLlegadaSemanal[i] < 0)
            llegaTemprano++;

        if (tiempoLlegadaSemanal[i] == 0)
            llegaPuntual++;
    }

    if (llegaTemprano >= cantNecesarios || llegaPuntual >= cantNecesarios)
        return true;
    else
        return false;
}

bool tiempoLlegadaSemana(int tiempoLlegadaSemanal[], int cantDias, int cantNecesarios, int cantAlumnos)
{
    bool seAbreSemana[cantDias];

    for (int i = 0; i < cantDias; i++)
    {
        //seAbreSemana[i] = seAbreCurso(tiempoLlegadaSemanal[i], cantAlumnos, cantNecesarios);
    }
}

int main()
{

    int cantidadAlumnos = 0;
    int cantNecesarios;

    int cantDias = 5;

    int tiempoLlegada[cantidadAlumnos];
    int tiempoLlegadaSemanal[cantDias][cantidadAlumnos];
    string diasSemana[5] = {"Lunes", "Martes", "Miercoles", "Jueves", "Viernes"};

    cout << "Ingrese la cantidad de alumnos para ingresar su horario: " << endl;
    cin >> cantidadAlumnos;
    int tiempos[cantidadAlumnos];

    for (int i = 0; i < cantDias; i++)
    {
        for (int j = 0; j < cantidadAlumnos; j++)
        {
            cout << "Ingrese los tiempos de los alumos: " << endl;
            cin >> tiempoLlegadaSemanal[i][j];
        }
    }

    // seAbreCurso(tiempo, cantidadAlumnos, cantNecesarios);

    cout << "Ingrese la cantidad de alumnos necesarios para abrir el curso: " << endl;
    cin >> cantNecesarios;

    if (seAbreCurso)
        cout << "Se abre el curso" << endl;
    else
        cout << "No se abre el curso" << endl;

    return 0;
}