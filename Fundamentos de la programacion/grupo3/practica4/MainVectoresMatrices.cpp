//
// Created by jmart on 07/10/2024.
//
#include <iostream>
#include <string>
#include "functions.h"
#include "EjerciciosVectores.h"

using namespace std;

std::string textoMenu()
{
    return "Seleccione el ejercicio que desea probar de secuenciales: "
        "\nEjercicio 1: Almacenar y mostrar numeros con su indice."
        "\nEjercicio 2: Mostrar un array de numeros al reves."
        "\nEjercicio 3: Sumatoria de un array."
        "\nEjercicio 4: Suma acumulada de los elementos de una array."
        "\nEjercicio 5: Inicializar vector y mostrar el elemento mayor."
        "\nEjercicio 6: Encontrar el numero que pertenece al vector."
        "\nFin del programa: 0";
}

int menu()
{
    int opcion;

    do {
        cout << "\n -----------------------------------------------------------------------------------" << endl;
        cout << textoMenu() << endl;
        opcion = getInt("Inserte la opcion: ");

        switch (opcion)
        {
        case 0:
            {
                cout << "Fin" << endl;
                break;
            }
        case 1:
            {
                ejer1();
                break;
            }
        case 2:
            {
                ejer2();
                break;
            }
        case 3:
            {
                ejer3();
                break;
            }
        case 4:
            {
                ejer4();
                break;
            }
        case 5:
            {
                ejer5();
                break;
            }
        case 6:
            {
                ejer6();
                break;
            }
        default:
            {
                cout << "Opcion invalida \n\n" << endl;
                break;
            }
        }
    } while (opcion != 0);

    return 0;
}

int main()
{
    menu();
    return 0;
}
