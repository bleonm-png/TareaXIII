#include <iostream>

#include "ejercicio7.h"

using namespace std;

void ejercicio7() {

    int tablero[5][5] = {0};

    int fila;
    int columna;

    cout << "\n=== EJERCICIO 7 ===\n";

    do {

        cout << "Ingrese fila (0-4): ";
        cin >> fila;

        cout << "Ingrese columna (0-4): ";
        cin >> columna;

        if(fila < 0 || fila > 4 ||
           columna < 0 || columna > 4) {

            cout << "Posicion invalida.\n";
           }

    } while(fila < 0 || fila > 4 ||
            columna < 0 || columna > 4);

    tablero[fila][columna] = 1;

    cout << "\nTablero:\n";

    for(int i = 0; i < 5; i++) {

        for(int j = 0; j < 5; j++) {

            cout << tablero[i][j] << " ";
        }

        cout << endl;
    }
}