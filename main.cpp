
///BERTHA JASSEL LEON MELCHOR///

#include <iostream>

#include "ejercicio1.h"
#include "ejercicio2.h"
#include "ejercicio3.h"
#include "ejercicio4.h"
#include "ejercicio5.h"
#include "ejercicio6.h"
#include "ejercicio7.h"

using namespace std;

int main() {

    int opcion;

    do {

        cout << "\n====================================";
        cout << "\n  TAREA ARREGLOS Y MATRICES";
        cout << "\n====================================";
        cout << "\nEstudiante: Bertha Jassel Leon Melchor\n";

        cout << "\n1. Analisis de temperaturas";
        cout << "\n2. Numeros repetidos";
        cout << "\n3. Lista dinamica de palabras";
        cout << "\n4. Eliminacion logica";
        cout << "\n5. Matriz de notas";
        cout << "\n6. Busqueda en matriz";
        cout << "\n7. Tablero de posiciones";
        cout << "\n0. Salir";

        cout << "\n\nSeleccione una opcion: ";
        cin >> opcion;

        switch(opcion) {

            case 1:
                ejercicio1();
                break;

            case 2:
                ejercicio2();
                break;

            case 3:
                ejercicio3();
                break;

            case 4:
                ejercicio4();
                break;

            case 5:
                ejercicio5();
                break;

            case 6:
                ejercicio6();
                break;

            case 7:
                ejercicio7();
                break;

            case 0:
                cout << "\nSaliendo del programa...\n";
                break;

            default:
                cout << "\nOpcion invalida.\n";
        }

    } while(opcion != 0);

    return 0;
}