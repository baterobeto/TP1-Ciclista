#include <stdio.h>


int main(void){

int dia, mes, anio;
int fecha;

printf("Ingrese la fecha en formato AAAAMMDD: ");
scanf("%d", &fecha);

    anio = fecha / 10000;
    mes = (fecha / 100) % 100;
    dia = fecha % 100;

    printf(" La fecha ingresada es %d , el anio es %d , el mes es %d y el dia es %d " , fecha, anio, mes, dia); 

    return 0;

}