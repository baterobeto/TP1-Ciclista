#include <iostream>
using namespace std;

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
  cout << "Nota1: " << alumno.nota1 << endl;
  cout << "Nota2: " << alumno.nota2 << endl;
  cout << "Nota3: " << alumno.nota3 << endl;
}

Alumno cargar(Alumno alumno)
{

  leer("Ingrese el legajo: ", alumno.legajo);
  leer("Ingrese el Nombre: ", alumno.nombre);
  leer("Ingrese el Nota1: ", alumno.nota1);
  leer("Ingrese el Nota2: ", alumno.nota2);
  leer("Ingrese la Nota3: ", alumno.nota3);

  return;
}

struct NombreCompleto
{
};

struct Alumno
{
  int legajo;
  string nombre;
  int nota1;
  int nota2;
  int nota3;
};

bool aprobo(Alumno alumno)
{
  return alumno.nota1 > 5 && alumno.nota2 > 5;
}

int main()
{

  Alumno alumno;

  cargar(alumno);

  if (aprobo(alumno))
  {
    imprimir(alumno);
  }

  return 0;
}