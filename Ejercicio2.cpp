#include <iostream>
#include "ejercicio2.h"

using namespace std;

void ejercicio2() {

    int numeros[10];
    bool repetido = false;

    cout << "\n=== EJERCICIO 2 ===\n";

    for(int i = 0; i < 10; i++) {

        cout << "Ingrese numero "
             << i + 1 << ": ";

        cin >> numeros[i];
    }

    cout << "\nNumeros repetidos:\n";

    for(int i = 0; i < 10; i++) {

        for(int j = i + 1; j < 10; j++) {

            if(numeros[i] == numeros[j]) {

                cout << numeros[i] << endl;
                repetido = true;
                break;
            }
        }
    }

    if(!repetido) {
        cout << "No existen repetidos.\n";
    }
}