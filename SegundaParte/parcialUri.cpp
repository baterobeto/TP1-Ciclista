#include <iostream>
using namespace std;

/*
Un restaurant tiene 5 mozos y 10 mesas, cada vez que cobran una mesa se anotan los siguientes datos:

			número de factura
			número de mozo 
			número de mesa
			monto de la cuenta

Se desea saber lo siguiente

A.	Cantidad de facturas realizadas
B.	Caja diaria realizada
C.	Monto facturado por cada mesa en total
D.	Monto facturado por cada mozo en total
E.	Monto PROMEDIO de cada mesa
F.	Mozo que facturó MAS.
G.	Mozo que facturó MENOS.      

*/

int main()
{
  int numeroFactura = 0;
  int numeroMozo = 0;
  int numeroMesa = 0;
  int monto = 0;

  int cantFacturas = 0; 
  int cajaDiaria = 0; 

  cout << "Ingrese el numero de factura (Presione 0 para finalizar la carga): " << endl;
  cin >> numeroFactura;

  while (numeroFactura != 0)
  {
    cout<<"Ingrese el numero de mozo : "<<endl; 
    cin>>numeroMozo;

    cout << "Ingrese el numero de mesa : " << endl;
    cin >> numeroMesa;

    cout << "Ingrese el monto de la cuenta : " << endl;
    cin >> monto;


  }

  return 0;
}