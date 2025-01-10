#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Definizione della matrice 3x3
    int matrice[3][3];

    // Inizializzazione del generatore di numeri casuali
    srand(time(0));

    // Popolamento della matrice con numeri casuali tra 1 e 100
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrice[i][j] = rand() % 100 + 1; // Numero casuale tra 1 e 100
        }
    }

    // Stampa della matrice
    cout << "Matrice 3x3 con numeri casuali:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrice[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
