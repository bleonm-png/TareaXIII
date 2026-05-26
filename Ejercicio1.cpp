#include <iostream>
#include "ejercicio1.h"

using namespace std;

void ejercicio1() {

    float temperaturas[7];
    float suma = 0, mayor, menor, promedio;
    int arriba = 0, abajo = 0;

    cout << "\n=== EJERCICIO 1 ===\n";

    for(int i = 0; i < 7; i++) {

        cout << "Ingrese temperatura del dia "
             << i + 1 << ": ";

        cin >> temperaturas[i];

        suma += temperaturas[i];

        if(i == 0) {
            mayor = menor = temperaturas[i];
        }
        else {

            if(temperaturas[i] > mayor)
                mayor = temperaturas[i];

            if(temperaturas[i] < menor)
                menor = temperaturas[i];
        }
    }

    promedio = suma / 7;

    for(int i = 0; i < 7; i++) {

        if(temperaturas[i] > promedio)
            arriba++;

        else if(temperaturas[i] < promedio)
            abajo++;
    }

    cout << "\nTemperaturas:\n";

    for(int i = 0; i < 7; i++) {
        cout << temperaturas[i] << " ";
    }

    cout << "\nMayor: " << mayor;
    cout << "\nMenor: " << menor;
    cout << "\nPromedio: " << promedio;
    cout << "\nArriba promedio: " << arriba;
    cout << "\nDebajo promedio: " << abajo << endl;
}