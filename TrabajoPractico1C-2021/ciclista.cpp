#include <iostream>
using namespace std;

#define MAX_VUELTAS 100
#define MAX_TIEMPO 100000

struct Ciclista
{

  int cantVueltasGeneral = 20;
  int duracion = 0; //(Expresada como un numero entero en formato MMSS)
  int tiempoVuelta[MAX_TIEMPO];
  int numeroVuelta[MAX_VUELTAS];
  int distancia = 20; //KM en todas las vueltas es la misma distancia
};

void leer(string mensaje, int& valor) {
  cout << mensaje << endl;
  cin >> valor;
}

void carga(int& tiempoVueltaMax, int& tiempoVueltaMin, int& numeroVueltaMax, int& numeroVueltaMin, int& inicioPrograma) {
  Ciclista unCiclista;

  int cantVueltasCiclista = 0;
  cout << "Cuantas vueltas desea cargar: " << endl;
  cin >> cantVueltasCiclista;

  for (int i = 0; i < cantVueltasCiclista; i++) {

    cout << "Ingrese el tiempo de la vuelta " << i + 1 << " : (MMSS)";
    cin >> unCiclista.tiempoVuelta[i];


    if (unCiclista.tiempoVuelta[i] < tiempoVueltaMax) {
      tiempoVueltaMax = unCiclista.tiempoVuelta[i];
      numeroVueltaMax = i + 1;
    }
    if (unCiclista.tiempoVuelta[i] > tiempoVueltaMin) {
      tiempoVueltaMin = unCiclista.tiempoVuelta[i];
      numeroVueltaMin = i + 1;
    }
    inicioPrograma = 0;
  }
}

int main() {

  int numeroVueltaMax = 0;
  int numeroVueltaMin = 0;
  int tiempoVueltaMax = MAX_TIEMPO;
  int tiempoVueltaMin = 0;
  float reduccion = 0;
  int posicion = 0;
  int inicioPrograma = 1;

  while (inicioPrograma != 0) {

    cout << " /******* Bienvenido *******/ " << endl;

    leer(" / Se comenzara con la carga de los datos, presione 1 para CONTINUAR 0 para CANCELAR / ", inicioPrograma);

    if (inicioPrograma == 1) {

      carga(tiempoVueltaMax, tiempoVueltaMin, numeroVueltaMax, numeroVueltaMin, inicioPrograma);

      reduccion = ((tiempoVueltaMin - tiempoVueltaMax) * 100) / tiempoVueltaMin;
    }
    else {
      cout << " // Gracias por utilizar el programa // " << endl;

      return 0;
    }
    cout << endl;
  }

  cout << "La vuelta mas rapida fue " << numeroVueltaMax << " con el tiempo " << tiempoVueltaMax << endl;
  cout << "La vuelta mas lenta fue " << numeroVueltaMin << " con el tiempo " << tiempoVueltaMin << endl;
  cout << "La porcentaje de mejora en el mejor tiempo fue de " << reduccion << " %" << endl;

  return 0;
}