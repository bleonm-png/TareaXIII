#include <iostream>
#include <vector>

#include "ejercicio4.h"

using namespace std;

void ejercicio4() {

    vector<int> original;
    vector<int> filtrado;

    int num;
    int eliminar;

    cout << "\n=== EJERCICIO 4 ===\n";

    while(true) {

        cout << "Ingrese numero (0 para terminar): ";
        cin >> num;

        if(num == 0)
            break;

        original.push_back(num);
    }

    cout << "Numero a eliminar: ";
    cin >> eliminar;

    for(int i = 0; i < original.size(); i++) {

        if(original[i] != eliminar) {
            filtrado.push_back(original[i]);
        }
    }

    cout << "\nVector resultante:\n";

    for(int i = 0; i < filtrado.size(); i++) {
        cout << filtrado[i] << " ";
    }

    cout << endl;
}