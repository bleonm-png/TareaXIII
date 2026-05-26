#include <iostream>
#include <vector>
#include <string>

#include "ejercicio3.h"

using namespace std;

void ejercicio3() {

    vector<string> palabras;
    string palabra;

    cout << "\n=== EJERCICIO 3 ===\n";

    while(true) {

        cout << "Ingrese palabra (fin para terminar): ";
        cin >> palabra;

        if(palabra == "fin")
            break;

        palabras.push_back(palabra);
    }

    if(palabras.size() == 0) {

        cout << "No hay palabras.\n";
        return;
    }

    string larga = palabras[0];
    string corta = palabras[0];

    int mayores5 = 0;

    for(int i = 0; i < palabras.size(); i++) {

        if(palabras[i].length() > larga.length())
            larga = palabras[i];

        if(palabras[i].length() < corta.length())
            corta = palabras[i];

        if(palabras[i].length() > 5)
            mayores5++;
    }

    cout << "\nCantidad: " << palabras.size();
    cout << "\nMas larga: " << larga;
    cout << "\nMas corta: " << corta;
    cout << "\nMas de 5 letras: " << mayores5;

    cout << "\n\nOrden inverso:\n";

    for(int i = palabras.size() - 1; i >= 0; i--) {
        cout << palabras[i] << endl;
    }
}