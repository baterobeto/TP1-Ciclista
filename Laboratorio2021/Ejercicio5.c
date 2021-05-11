#include <stdio.h>


int main(void){

    int num1, num2, mayor = 0;

    printf( "Ingrese el primer numero: \n ");
    scanf("%d" , &num1);

    printf("Ingrese el segundo numero: \n ");
    scanf("%d" , &num2);

    if (num1 > num2)
    {
        mayor = num1;
    }
    else
    {
        if (num1 < num2)
        {
            mayor = num2;
        }
        else
        {
            printf("Los numeros ingresados son iguales" );
            return 0; 
        }
    }
    printf("El numero mayor es : %d " , mayor);

    return 0;
}