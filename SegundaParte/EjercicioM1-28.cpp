#include <iostream>
using namespace std;

/*
Ej. MI-28: ​ Dada una serie de caracteres que conforman una oración, donde cada palabra está separada de la siguiente
por un carácter blanco y la oración finaliza con un punto. Se pide informar:
a) cantidad de veces que apareció cada vocal
b) cantidad de palabras que contiene la oración
c) cantidad de letras que posee la palabra más larga.
*/
void leer(string mensaje, char &valor)
{
    cout << "Ingrese una letra: " << endl;
    cin.get(valor);
    cin.ignore();
}

void contarVocales(char caracter, int &contA, int &contE, int &contI, int &contO, int &contU)
{
    switch (caracter)
    {
    case 'a':

        contA++;
        break;

    case 'e':
        contE++;
        break;

    case 'i':
        contI++;
        break;
    case 'o':
        contO++;
        break;
    case 'u':
        contU++;
        break;

    default:
        break;
    }
}
int main()
{

    char caracter = ' ';
    int contPalabras = 0;
    int contVocales = 0;
    int contLetras = 0;
    int max = 0;

    int contA = 0;
    int contE = 0;
    int contI = 0;
    int contO = 0;
    int contU = 0;

    leer("Ingrese una letra: ", caracter);

    while (caracter != ' ' && caracter != '.')
    {

        contLetras = 0;

        while (caracter != ' ' && caracter != '.')
        {
            contLetras++;

            contLetras = 0;

            contarVocales(caracter, contA, contE, contI, contO, contU);
            contVocales = 0;

            leer("Ingrese una letra: ", caracter);
        }

        contPalabras++;

        if (contLetras > max)
        {
            max = contLetras;
        }

        if (caracter == ' ')
        {
            leer("Ingrese una letra: ", caracter);
        }
    }

    cout << "La letra A aparecio " << contA << " veces" << endl;
    cout << "La letra E aparecio " << contE << " veces" << endl;
    cout << "La letra I aparecio " << contI << " veces" << endl;
    cout << "La letra O aparecio " << contO << " veces" << endl;
    cout << "La letra U aparecio " << contU << " veces" << endl
         << endl;
    cout << "Se ingresaron " << contPalabras << " palabras." << endl;
    cout << "La palabra mas larga tiene " << max << " letras." << endl;
    return 0;
}