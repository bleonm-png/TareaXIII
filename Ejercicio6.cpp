#include <iostream>

#include "ejercicio6.h"

using namespace std;

void ejercicio6() {

    int matriz[3][3];
    int buscar;

    bool encontrado = false;

    cout << "\n=== EJERCICIO 6 ===\n";

    for(int i = 0; i < 3; i++) {

        for(int j = 0; j < 3; j++) {

            cout << "Ingrese valor ["
                 << i
                 << "]["
                 << j
                 << "]: ";

            cin >> matriz[i][j];
        }
    }

    cout << "Numero a buscar: ";
    cin >> buscar;

    cout << "\nPosiciones:\n";

    for(int i = 0; i < 3; i++) {

        for(int j = 0; j < 3; j++) {

            if(matriz[i][j] == buscar) {

                cout << "Fila "
                     << i
                     << " columna "
                     << j
                     << endl;

                encontrado = true;
            }
        }
    }

    if(!encontrado) {
        cout << "Numero no encontrado.\n";
    }
}