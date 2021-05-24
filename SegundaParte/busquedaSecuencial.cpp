#include <iostream>
using namespace std;

struct Alumno
{
  int legajo;
  string nombre;
  int nota;
};

//BUSQUEDA SECUENCIAL
//Menos performante porque recorro todo el vector
int buscar(Alumno valores[], int cant, int legajo)
{

  for (int i = 0; i < 10; i++)
  {
    if (valores[i].legajo == legajo)
    {
      return i;
    }
  }

  return -1;
}
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

void imprimir(Alumno alumno)
{
  cout << "Legajo: " << alumno.legajo << endl;
  cout << "Nombre: " << alumno.nombre << endl;
  cout << "Nota: " << alumno.nota << endl;
}

Alumno cargar(int legajo, string nombre, int nota)
{
  Alumno alumno;
  alumno.nombre = nombre;
  alumno.legajo = legajo;
  alumno.nota = nota;

  return;
};

int main()
{

  Alumno alumnos[10];

  alumnos[0] = cargar(111, "Pepe", 6);
  alumnos[1] = cargar(111, "Carlos", 6);
  alumnos[2] = cargar(111, "Maria", 6);

  int legajoABuscar;

  leer("Inrese el legajo que desea buscar: ", legajoABuscar);

  int pos = buscar(alumnos, 10, legajoABuscar);

  if (pos != -1)
  {
    imprimir(alumnos[pos]);
  }
  else
  {
    cout << "El valor no estaba en el conjunto" << endl;
  }

  return 0;
}