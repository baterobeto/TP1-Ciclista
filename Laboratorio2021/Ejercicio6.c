#include <stdio.h>

/*

Ej. MI-6 Dadas dos fechas informar cual es la más reciente. 
Determine cuáles serían los datos de entrada y las leyendas
a informar de acuerdo al proceso solicitado.

*/

int main(void){

    int fecha1, fecha2, reciente;
    char leyenda[50] = " es mas reciente";

    printf( "Ingrese una fecha en formato AAAAMMDD: \n ");
    scanf("%d" , &fecha1);

   printf( "Ingrese otra fecha en formato AAAAMMDD: \n ");
    scanf("%d" , &fecha2);

    if (fecha1 > fecha2)
    {
        reciente = fecha1;
    }
    else
    {
        if (fecha2 > fecha1)
        {
            reciente = fecha2;
        }
        else
        {
            printf("Las fechas ingresadas son iguales");
            return 0;
        }
    }

    printf("%d , %s", reciente, leyenda);
   // printf( "%s", leyenda);

    return 0;
}