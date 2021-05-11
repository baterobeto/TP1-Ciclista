#include <iostream>
using namespace std;

int main () {

    int nro1, nro2 , max;

    cout<<"Ingrese un numero entero: "<<endl; 
    cin>>nro1;

    cout<<"Ingrese otro numero distinto: "<<endl;
    cin>>nro2;

    if (nro1 > nro2){
        max = nro1;
    }
    else {
        max = nro2;
    }
    cout<<"El mayor numero ingresado es: "<<max<<endl; 
    
 return 0;
}