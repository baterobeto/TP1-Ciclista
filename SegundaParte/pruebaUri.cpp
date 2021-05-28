#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

/* Ingresar facturas con Nro de Factura,Numero de mesas y el Nro del mozo (1,2,3,4,5) segun el numero de mozo e importe mont.*/
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
int main(int argc, char *argv[])
{
  int NroFactura = 0, C1000A = 0, C1000B = 0, C1000C = 0, C1000D = 0, C1000E = 0, CA = 0, CB = 0, CC = 0, CD = 0, CE = 0, NroMAX, NroMIN, c = 1, mesa, M1, M2, M3, M4, M5, M6, M7, M8, M9, M10, MontoM1, MontoM2, MontoM3, MontoM4, MontoM5, MontoM6, MontoM7, MontoM8, MontoM9, MontoM10, Mesa1, Mesa2, Mesa3, Mesa4, Mesa5, Mesa6, Mesa7, Mesa8, Mesa9, Mesa10;
  int Tipo;
  int gasto = 0;

  float TotalA = 0, TotalB = 0, TotalC = 0, TotalD = 0, TotalE = 0, PromeA = 0, PromeB = 0, PromeC = 0, PromeD = 0, PromeE = 0, MAX = 0, MIN = 0, Monto = 0, Montof = 0, Total = 0;

  printf("Ingrese el numero de Factura : ");
  scanf("%d", &NroFactura);

  MAX = Total;
  MIN = Total;
  while (NroFactura != 0)
  {
    // c++;
    //fflush(stdin);
    printf("Ingrese el Nro de mozo (1/2/3/4/5):");
    scanf("%i", &Tipo);
    printf("ingrese el numero de mesa(1-10):");
    scanf("%i", &mesa);
    printf("ingrese el importe gastado :");
    scanf("%i", &gasto);

    switch (mesa)
    {
    case 1:
      MontoM1 = MontoM1 + gasto;
      Mesa1++;
      break;
    case 2:
      MontoM2 = MontoM2 + gasto;
      Mesa2++;
      break;
    case 3:
      MontoM3 = MontoM3 + gasto;
      Mesa3++;
      break;
    case 4:
      MontoM4 = MontoM4 + gasto;
      Mesa4++;
      break;
    case 5:
      MontoM5 = MontoM5 + gasto;
      Mesa5++;
      break;
    case 6:
      MontoM6 = MontoM6 + gasto;
      Mesa6++;
      break;
    case 7:
      MontoM7 = MontoM7 + gasto;
      Mesa7++;
      break;
    case 8:
      MontoM8 = MontoM8 + gasto;
      Mesa8++;
      break;
    case 9:
      MontoM9 = MontoM9 + gasto;
      Mesa9++;
      break;
    case 10:
      MontoM10 = MontoM10 + gasto;
      Mesa10++;
      break;
    }
    if (c != 0)
    {

      if (MAX < Total)
      {
        MAX = Total;
        NroMAX = NroFactura;
      }
      if (MIN > Total)
      {
        MIN = Total;
        NroMIN = NroFactura;
      }
    }
    switch (Tipo)
    {
    case 1:
      /* code */
      break;

    default:
      break;
    }
    if (Tipo == 1 || Tipo == 'a')
    {
      CA++;
      TotalA = TotalA + Montof;
    }
    if (Tipo == 2 || Tipo == 'b')
    {
      CB++;
      TotalB = TotalB + Montof;
    }
    if (Tipo == 3 || Tipo == 'c')
    {
      CC++;
      TotalC = TotalC + Montof;
    }
    if (Tipo == 4 || Tipo == 'd')
    {
      CD++;
      TotalD = TotalD + Montof;
    }
    if (Tipo == 5 || Tipo == 'e')
    {
      CE++;
      TotalE = TotalE + Montof;
    }
    if ((Tipo == 1 || Tipo == 'a') && (gasto > 1000))
    {
      C1000A++;
    }
    if ((Tipo == 2 || Tipo == 'b') && (Montof > 1000))
    {
      C1000B++;
    }
    if ((Tipo == 3 || Tipo == 'c') && (Montof > 1000))
    {
      C1000C++;
    }
    if ((Tipo == 4 || Tipo == 'd') && (Montof > 1000))
    {
      C1000D++;
    }
    if ((Tipo == 5 || Tipo == 'e') && (Montof > 1000))
    {
      C1000E++;
    }

    c++;

    printf("Ingrese el numero de Factura : ");
    scanf("%d", &NroFactura);
  }
  TotalA = 5000;
  TotalB = 8000;

  if (CA == 0 || CB == 0 || CC == 0 || CD == 0 || CE == 0)
  {

    cout << "El mozo no tiene Facturas cargadas" << endl;
  }
  else
  {

    PromeA = TotalA / CA;
    PromeB = TotalB / CB;
    PromeC = TotalC / CC;
    PromeD = TotalD / CD;
    PromeE = TotalE / CE;
    Monto = Monto + Montof;
    Total = Total + Monto;
  }
  system("cls");
  printf("La cantidad de Facturas del mozo 1 que superan los 0$ son %d \n", C1000A);
  printf("La cantidad de Facturas del mozo 2 que superan los 0$ son %d \n", C1000B);
  printf("La cantidad de Facturas del mozo 3 que superan los 0$ son %d \n", C1000C);
  printf("La cantidad de Facturas del mozo 4 que superan los 0$ son %d \n", C1000D);
  printf("La cantidad de Facturas del mozo 5 que superan los 0$ son %d \n", C1000E);
  printf("El promedio de Facturas del mozo 1 es %6.2f \n", PromeA);
  printf("El promedio de Facturas del mozo 2 es %6.2f \n", PromeB);
  printf("El promedio de Facturas del mozo 3 es %6.2f \n", PromeC);
  printf("El promedio de Facturas del mozo 4 es %6.2f \n", PromeD);
  printf("El promedio de Facturas del mozo 5 es %6.2f \n", PromeE);
  printf("El promedio de factura  de la mesa 1 es %6.2f \n", M1);
  printf("El promedio de Facturas de la mesa 2 es %6.2f \n", M2);
  printf("El promedio de Facturas de la mesa 3 es %6.2f \n", M3);
  printf("El promedio de Facturas de la mesa 4 es %6.2f \n", M4);
  printf("El promedio de Facturas de la mesa 5 es %6.2f \n", M5);
  printf("El promedio de Facturas de la mesa 6 es %6.2f \n", M6);
  printf("El promedio de Facturas de la mesa 7 es %6.2f \n", M7);
  printf("El promedio de Facturas de la mesa 8 es %6.2f \n", M8);
  printf("El promedio de Facturas de la mesa 9 es %6.2f \n", M9);
  printf("El promedio de Facturas de la mesa 10 es %6.2f \n", M10);
  printf("El Monto total de la mesa 1 es %f \n", M1);
  printf("El Monto total de la mesa 2 es %f \n", M2);
  printf("El Monto total de la mesa 3 es %f \n", M3);
  printf("El Monto total de la mesa 4 es %f \n", M4);
  printf("El Monto total de la mesa 5 es %f \n", M5);
  printf("El Monto total de la mesa 6 es %f \n", M6);
  printf("El Monto total de la mesa 7 es %f \n", M7);
  printf("El Monto total de la mesa 8 es %f \n", M8);
  printf("El Monto total de la mesa 9 es %f \n", M9);
  printf("El Monto total de la mesa 10 es %f \n", M10);
  printf("La factura mas grande es %d , con un total de %6.2f, del mozo %c \n", NroMAX, MAX, Tipo);
  printf("La factura mas chica es %d , con un total de %6.2f, del mozo %c \n", NroMIN, MIN, Tipo);
  printf("la caja diaria es de un total de %f \n", Total);
  system("pause");
  return 0;
}