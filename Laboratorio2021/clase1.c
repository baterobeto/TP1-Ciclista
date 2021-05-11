#include <stdio.h>


int main(void){

int dia = 9; 
int mes = 12;
int anio = 1990;
int fecha;

    fecha = (anio * 10000) + (mes * 100) + dia;

    printf("La fecha ingresada es: %d", fecha);

    return 0;


}