#include <iostream>
using namespace std;

#define MAX_VUELTAS 100
#define MAX_TIEMPO 100000

struct Ciclista
{

  int cantVueltasGeneral = 20;
  int posicion = 0; //Posicion de ubicacion(Primera vuelta, segunda vuelta, etc.)
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

void carga(int principio, int inicio, int &tiempoMax, int &tiempoMin,
           int &numeroVueltaMax, int &numeroVueltaMin, int &porcentaje, int &posicion)
{
  Ciclista unCiclista;

  int cantVueltasCiclista = 0;

  while (principio != 0 && inicio != 0)
  {
    cout << "Ingrese el numero de vuelta: ";
    cin >> unCiclista.numeroVuelta[posicion];
    cout << "Ingrese el tiempo de la vuelta: (MMSS)";
    cin >> unCiclista.tiempoVuelta[posicion];
    cout << "Ingrese la distancia realizada: (KM) ";
    cin >> unCiclista.distancia;

    if (unCiclista.tiempoVuelta[posicion] < tiempoMax)
    {
      tiempoMax = unCiclista.tiempoVuelta[posicion];
      numeroVueltaMax = posicion + 1;
    }
    else
    {
      tiempoMin = unCiclista.tiempoVuelta[posicion];
      numeroVueltaMin = posicion + 1;
    }

    porcentaje = tiempoMin / tiempoMax - 1;

    cantVueltasCiclista++;
    posicion++;

    cout << "Presione 1 Para continuar // 0 Para finalizar: " << endl;
    cin >> inicio;
  }
}

int main()
{

  int principio = 1;
  int inicio = 1;
  int numeroVueltaMax = 0;
  int numeroVueltaMin = 0;

  int tiempoVueltaMax = MAX_TIEMPO;

  int tiempoVueltaMin = 0;
  int porcentajeReduccion = 0;
  int posicion = 0;

  while (principio != 0)
  {

    cout << " /******* Bienvenido *******/ " << endl;

    leer(" / Se comenzara con la carga de los datos, presione 1 para CONTINUAR 0 para CANCELAR / ", inicio);

    carga(principio, inicio, tiempoVueltaMax, tiempoVueltaMin, numeroVueltaMax, numeroVueltaMin, porcentajeReduccion, posicion);

    leer("/**** Seguro que desea finalizar? Presione 0 ****/", principio);
  }

  cout << "La vuelta mas rapida fue " << numeroVueltaMax << " con el tiempo " << tiempoVueltaMax << endl;
  cout << "La vuelta mas lenta fue " << numeroVueltaMin << " con el tiempo " << tiempoVueltaMin << endl;
  cout << "La porcentaje de mejora en el mejor tiempo fue es de " << porcentajeReduccion << endl;

  return 0;
}