#include <stdio.h>

/*
Ej. MI-7: Dado tres valores determinar e imprimir una leyenda según sea: “Forman triangulo” o “No forman triángulo”.
*/

int main (void) {

     int lado1, lado2, lado3;
    char leyenda[50] = "Forman triangulo ";
    char leyenda2[50] = "No forman triangulo ";

    printf("Ingrese el primer valor : ");
    scanf("%d" , &lado1);
 
    printf("Ingrese el segundo valor : ");
    scanf("%d" , &lado2);

    printf("Ingrese el tercer valor : ");
    scanf("%d" , &lado3);

    if ((lado1 - lado2) < lado3 )
    {
        printf("%s" , leyenda);
    }
    else
    {
        if ((lado1 - lado3) < lado2)
        {
            printf("%s" , leyenda);
        }
        else
        {
            if ((lado2 - lado3) < lado1)
            {
                printf("%s" , leyenda);
            }
            else
            {
                printf("%s" , leyenda2);
            }
        }
    }
 
 return 0;
}