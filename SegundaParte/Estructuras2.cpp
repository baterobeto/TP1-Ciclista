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

struct Fecha
{
  int dia;
  int mes;
  int anio;
};

struct Persona
{
  string nombre;
  Fecha fechaNacimiento;
};

void cargar(Persona &persona)
{
}

bool fechaValida(Fecha fecha)
{
  return fecha.mes >= 1 && fecha.mes < 13 && fecha.dia >= 1 && fecha.dia < 31 && fecha.anio > 0;
}

void cargar(Fecha &fecha)
{
  leer("Ingrese el dia: ", fecha.dia);
  leer("Ingrese el mes: ", fecha.mes);
  leer("Ingrese el anio: ", fecha.anio);
}

Persona cargarPersona()
{
  Persona unaPersona;
  leer("Ingrese el nombre: ", unaPersona.nombre);
  cargar(unaPersona.fechaNacimiento);

  return unaPersona;
}

int main()
{
  Persona unaPersona = cargarPersona();

  Persona otraPersona = cargarPersona();

  return 0;
}