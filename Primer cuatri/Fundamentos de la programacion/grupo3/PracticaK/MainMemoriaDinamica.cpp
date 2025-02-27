//
// Created by jmart on 03/12/2024.
//
#include <iostream>

#include "functions.h"
#include "EjerciciosMemoriaDinamica.h"

std::string textoMenu() {
    return "Seleccione el ejercicio que desea probar de Punteros: "
        "\nEjercicio 1: Intercambiar contenido de las zonas de memoria de dos punteros."
        "\nFin del programa: 0";
};

int menu() {
    int opcion;

    do {
        cout << "\n -----------------------------------------------------------------------------------" << endl;
        cout << textoMenu() << endl;
        opcion = getInt("Inserte la opcion: ");
        cin.ignore();

        switch (opcion)
        {
        case 0:
            {
                cout << "Fin" << endl;
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
        default:
            {
                cout << "Opcion invalida \n\n" << endl;
                break;
            }
        }
    } while (opcion != 0);

    return 0;
}

int main() {
    menu();
    return 0;
};
