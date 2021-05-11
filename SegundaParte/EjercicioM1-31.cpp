#include <iostream>
using namespace std;

/*
Ej. MI-31: ​ El gobierno de la Ciudad de Buenos Aires realiza una encuesta en casas de familia. De cada familia conoce:
domicilio, tipo de vivienda (‘C’:casa, ‘D’:departamento), y cantidad de integrantes.
De cada integrante de la familia se conoce: nombre y apellido, edad, sexo (‘F’, ‘M’), nivel de estudios
alcanzados (‘N’: no posee, ‘P’: primario, ‘S’: secundario, ‘T’: terciario, ‘U’: universitario), y un indicador (‘I’:
incompleto, ‘C’: completo) que se refiere al ítem anterior.
Los datos finalizan cuando la cantidad de integrantes sea igual a cero.
Se pide emitir un listado con los resultados:
a) los datos de los encuestados que hayan completado los estudios primarios
b) el porcentaje de analfabetismo en la ciudad (se considera analfabetos a los mayores de 10 años que no posean
estudios)
c) el domicilio de la familia con mayor cantidad de integrantes que viven en departamento
d) edad promedio de cada familia y de la ciudad
e) cantidad de encuestados en cada tipo de nivel de estudios alcanzados incompletos.
f) porcentaje de encuestados de sexo femenino y masculino.
*/

void leer(string mensaje, char &tipoVivienda)
{
    cout << mensaje << endl;
    cin >> tipoVivienda;
}
void leer(string mensaje, int &valor)
{
    cout << mensaje << endl;
    cin >> valor;
}
void leer(string mensaje, string &valor)
{
    cout << mensaje << endl;
    cin >> valor;

    return;
}

void leerIntegrante(string &nombre, int &edad, char &sexo, char &estudios, char &indicador)
{
    leer("Nombre y apellido: ", nombre);
    leer("Edad: ", edad);
    leer("Sexo (M / F): ", sexo);
    leer("Estudios (N , P , S , T , U): ", estudios);
    leer("Indicador (C / I): ", indicador);

    return;
}
void imprimirIntegrante(string &nombre, int &edad, char &sexo, char &estudios, char &indicador)
{
    cout << "Nombre y apellido: " << nombre << endl;
    cout << "Edad: " << edad << endl;
    cout << "Sexo (M / F): " << sexo << endl;
    cout << "Estudios (N , P , S , T , U): " << estudios << endl;
    cout << "Indicador (C / I): " << indicador << endl;

    return;
}

bool primarioCompleto(char nivelEstudios, char indicadorEstudios)
{
    return !(nivelEstudios == 'P' && indicadorEstudios == 'T' || nivelEstudios == 'N');
}

bool esAnalfabeto(int edad, char nivelEstudios)
{
}

bool viveEnDepto(char tipoVivienda)
{
    return tipoVivienda == 'D' || tipoVivienda == ' ';
}

int main()
{

    string domicilio;
    char tipoVivienda;
    int cantIntegrantes;
    string nombreApellido;
    int edad;
    char sexo;
    char nivelEstudios;
    char indicadorEstudios;
    int cantAnalfabetos;
    int encuestados;
    int edadFamilia;
    int mayor = 0;
    int primarioInc, secundarioInc, terciarioInc, universitarioInc;
    int cantFemeninos;

    string domicilioMayor;

    cout << "Ingrese la cantidad de integrantes: " << endl;
    cin >> cantIntegrantes;

    while (cantIntegrantes > 0)
    {

        leer("Ingrese el tipo de vivienda: ", tipoVivienda);
        leer("Ingrese la edad: ", edad);
        leer("Domicilio: ", domicilio);

        for (int i = 0; i < cantIntegrantes; i++)
        {
            leerIntegrante(nombreApellido, edad, sexo, nivelEstudios, indicadorEstudios);

            if (primarioCompleto(nivelEstudios, indicadorEstudios))
            {
                imprimirIntegrante(nombreApellido, edad, sexo, nivelEstudios, indicadorEstudios);
            }
            edadFamilia += edad;
            encuestados++;
        }

        esAnalfabeto(edad, nivelEstudios);

        if (viveEnDepto(tipoVivienda) && cantIntegrantes > mayor)
        {
            mayor = cantIntegrantes;
            domicilioMayor = domicilio;
        }

        cout << "Promedio de edad de la familia: " << edadFamilia / cantIntegrantes;

        if (indicadorEstudios == 'I')
        {
            switch (nivelEstudios)
            {
            case 'P':
                primarioInc++;
                break;
            case 'S':
                secundarioInc++;
                break;
            case 'T':
                terciarioInc++;
                break;
            case 'U':
                universitarioInc++;
                break;

            default:
                break;
            }
        }
        if (sexo == 'F')
        {
            cantFemeninos++;
        }

        leer("Cantidad de integrantes: ", cantIntegrantes);
    }

    cout << "Porcentaje Masculinos: " << (encuestados - cantFemeninos) / encuestados * 100 << "%" << endl;
    cout << "Porcentaje Femeninos: " << cantFemeninos / encuestados << endl;

    return 0;
}