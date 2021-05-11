#include <iostream>

using namespace std;

int pedidoSeleccion(int seleccion)
{
    cout << "Ingrese su seleccion: 1)piedra 2)papel 3)tijera  ---- PRESIONE 0 PARA FINALIZAR" << endl;
    cin >> seleccion;

    return seleccion;
}

void asignacionDeValores(int seleccion, int valorMaquina, string &usuario, string &maquina)
{

    if (seleccion == 1)
        usuario = " Piedra";
    if (seleccion == 2)
        usuario = " Papel";
    if (seleccion == 3)
        usuario = " Tijera";

    if (valorMaquina == 1)
        maquina = " Piedra";
    if (valorMaquina == 2)
        maquina = " Papel";
    if (valorMaquina == 3)
        maquina = " Tijera";
}

void comparacionDeVariables(int seleccion, int valorMaquina)
{
    if (seleccion == valorMaquina)
    {
        cout << "Empate" << endl;
    }

    if ((seleccion == 1 && valorMaquina == 2) || (seleccion == 2 && valorMaquina == 3) || (seleccion == 3 && valorMaquina == 1))
    {
        cout << "...mas suerte la proxima! " << endl;
    }
    if ((seleccion == 1 && valorMaquina == 3) || (seleccion == 2 && valorMaquina == 1) || (seleccion == 3 && valorMaquina == 2))
    {
        cout << "GANASTE!!" << endl;
    }
}

void resolucionGeneral(int seleccion)
{
    int valorMaquina;
    string usuario = " ";
    string maquina = " ";

    while (seleccion != 0)
    {

        valorMaquina = 1 + rand() % 3;

        asignacionDeValores(seleccion, valorMaquina, usuario, maquina);

        comparacionDeVariables(seleccion, valorMaquina);

        cout << "El usuario ingreso: " << usuario << endl;
        cout << "La maquina ingreso: " << maquina << endl;

        cout << "Ingrese su seleccion: 1)piedra 2)papel 3)tijera  ---- PRESIONE 0 PARA FINALIZAR" << endl;
        cin >> seleccion;
    }
}

int main()
{
    int seleccion;

    seleccion = pedidoSeleccion(seleccion);

    resolucionGeneral(seleccion);

    return 0;
}