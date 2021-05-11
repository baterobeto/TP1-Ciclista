#include <iostream>
using namespace std;

/*
Ej. MI-15: ​ Se realiza una inspección en una fábrica de pinturas, y se detectaron 20 infracciones​ . ​ 
De cada infracción se tomó nota de los siguientes datos:
- Tipo de Infracción (1, 2, 3, ó 4)
- Motivo de la infracción
- Valor de la multa
- Gravedad de la infracción (‘L’,‘M’, ‘G’)
Se pide informar al final del proceso:
• ​ Los valores totales de la multa a pagar de acuerdo al tipo de gravedad.
• ​ La leyenda “Clausurar fábrica” si la cantidad de infracciones 3 y 4 con gravedad “G” sean mayor a 3.
*/

int main () {

    int cantInfracciones = 20;
    int tipoInfraccion;
    int valorMulta;
    char gravedadInfraccion; 

    int contadorLeves, contadorMedio, contadorGraves = 0;
    int contadorMultaLeves, contadorMultaMedio, contadorMultaGraves = 0;
    int contadorClausura = 0;



    while (cantInfracciones<21){


    cout<<"Ingrese la gravedad de la infraccion (‘L’,‘M’, ‘G’) "<<endl;
    cin>>gravedadInfraccion;

    if(gravedadInfraccion == 'L'){

    cout<<"Ingrese el valor de la multa: "<<endl;
    cin>>valorMulta; 

    cout<<"Ingrese el tipo de infraccion (1, 2, 3, ó 4): "<<endl;
    cin>>tipoInfraccion; 

    contadorMultaLeves = contadorMultaLeves + valorMulta;
 
    } else{
        if (gravedadInfraccion =='M'){
            
            cout<<"Ingrese el valor de la multa: "<<endl;
            cin>>valorMulta;
        }
    }

    }

    cout<<"El valor total de las multas a pagar es: "<<valorMulta<<endl; 

    
 
 return 0;
}

