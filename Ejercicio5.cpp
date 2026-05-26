#include <iostream>

#include "ejercicio5.h"

using namespace std;

void ejercicio5() {

    float notas[4][3];

    cout << "\n=== EJERCICIO 5 ===\n";

    for(int i = 0; i < 4; i++) {

        for(int j = 0; j < 3; j++) {

            cout << "Nota estudiante "
                 << i + 1
                 << " evaluacion "
                 << j + 1 << ": ";

            cin >> notas[i][j];
        }
    }

    cout << "\nMatriz:\n";

    for(int i = 0; i < 4; i++) {

        for(int j = 0; j < 3; j++) {
            cout << notas[i][j] << " ";
        }

        cout << endl;
    }

    float mejorPromedio = 0;
    int mejorEstudiante = 0;

    for(int i = 0; i < 4; i++) {

        float suma = 0;

        for(int j = 0; j < 3; j++) {
            suma += notas[i][j];
        }

        float promedio = suma / 3;

        cout << "Promedio estudiante "
             << i + 1
             << ": "
             << promedio << endl;

        if(promedio > mejorPromedio) {

            mejorPromedio = promedio;
            mejorEstudiante = i;
        }
    }

    float menorPromedio = 100;
    int peorEvaluacion = 0;

    for(int j = 0; j < 3; j++) {

        float suma = 0;

        for(int i = 0; i < 4; i++) {
            suma += notas[i][j];
        }

        float promedio = suma / 4;

        cout << "Promedio evaluacion "
             << j + 1
             << ": "
             << promedio << endl;

        if(promedio < menorPromedio) {

            menorPromedio = promedio;
            peorEvaluacion = j;
        }
    }

    cout << "\nMejor estudiante: "
         << mejorEstudiante + 1;

    cout << "\nEvaluacion mas baja: "
         << peorEvaluacion + 1
         << endl;
}