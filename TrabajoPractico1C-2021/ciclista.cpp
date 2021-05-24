#include <iostream>
using namespace std;

#define MAX_VUELTAS 100
#define MAX_TIEMPO 10000

struct Ciclista
{

  int cantVueltasGeneral = 20;
  int posicion = 0; //Posicion de ubucacion(Primera vuelta, segunda vuelta, etc.)
  int duracion = 0; //(Expresada como un numero entero en formato MMSS)
  int kilometraje = 0;
  int tiempoVuelta[MAX_TIEMPO];
  int numeroVuelta[MAX_VUELTAS];
  int distancia = 0;
};

void leer(string mensaje, int &valor)
{
  cout << mensaje << endl;
  cin >> valor;
}

int main()
{

  int principio = 1;
  int inicio = 1;
  int cantVueltasCiclista = 0;
  int tiempoVueltaMax = MAX_TIEMPO;
  int tiempoVueltaMin = 0;
  int i = 0;
  int numeroVueltaMax = 0;
  int numeroVueltaMin = 0;
  int porcentajeReduccion = 0;

  Ciclista unCiclista;

  while (principio != 0)
  {
    cout << " / Bienvenido / " << endl;
    cout << " / Se comenzara con la carga de los datos, presione 1 para CONTINUAR 0 para CANCELAR /" << endl;
    cin >> inicio;

    while (principio != 0 && inicio != 0)
    {
      cout << "Ingrese el numero de vuelta: ";
      cin >> unCiclista.numeroVuelta[i];
      cout << "Ingrese el tiempo de la vuelta: ";
      cin >> unCiclista.tiempoVuelta[i];
      cout << "Ingrese la distancia realizada: ";
      cin >> unCiclista.distancia;

      if (unCiclista.tiempoVuelta[i] < tiempoVueltaMax)
      {
        tiempoVueltaMax = unCiclista.tiempoVuelta[i];
        numeroVueltaMax = i + 1;
      }
      else
      {
        tiempoVueltaMin = unCiclista.tiempoVuelta[i];
        numeroVueltaMin = i + 1;
      }

      porcentajeReduccion = tiempoVueltaMin / tiempoVueltaMax - 1;

      cantVueltasCiclista++;
      i++;

      cout << "Presione 1 Para continuar // 0 Para finalizar: " << endl;
      cin >> inicio;
    }

    cout << "Seguro que desea finalizar? Presione 0" << endl;
    cin >> principio;
  }

  cout << "La vuelta mas rapida fue " << numeroVueltaMax << " con el tiempo " << tiempoVueltaMax << endl;
  cout << "La vuelta mas lenta fue " << numeroVueltaMin << " con el tiempo " << tiempoVueltaMin << endl;
  cout << "La porcentaje de reduccion de tiempo es " << porcentajeReduccion << endl;

  return 0;
}