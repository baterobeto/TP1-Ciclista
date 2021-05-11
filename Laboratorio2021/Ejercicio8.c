#include <stdio.h>

/*
Ej. MI-8: Dado un triángulo representado por sus lados L1, L2, L3, determinar e imprimir una leyenda según sea:
equilátero, isósceles o escalenos.
*/


int main (void){

    int l1, l2, l3 = 0;
    char equilatero[10] = "Equilatero";
    char isoceles[8] = "Isoceles";
    char escaleno[8] = "Escaleno";

    int cantLados = 3;

    printf( "Ingrese el valor del lado 1 : ");
    scanf("%d" , &l1);

    printf( "Ingrese el valor del lado 2 : ");
    scanf("%d" , &l2);

    printf( "Ingrese el valor del lado 3 : ");
    scanf("%d" , &l3);

    if (l1 == l2 && l1 == l3)
    {
        printf("%s", equilatero);
    }

    if (l1 == l2 && l1 != l3 || l1 == l3 && l1 != l2 || l3 == l2 && l3 != l1)
    {
        printf("%s", isoceles);
    }

    if (l1 != l2 && l2 != l3 && l3 != l1)
    {
        printf("%s", escaleno);
    }

    return 0;
}