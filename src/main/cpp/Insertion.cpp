#include "Insertion.h"

void InsertionSortOutOfPlace(int vet[], int dim) {
    int vet2[dim]; // allocazione vettore di appoggio

    // Per ogni elemento di vet ...
    for (int i = 0; i < dim; i++) {
        int j = i;

        // ... si spostano i valori maggiori in vet2 ...
        while (j > 0 && vet2[j - 1] > vet[i]) {
            vet2[j] = vet2[j - 1];
            j--;
        }

        // ... e si inserisce il valore corrente
        vet2[j] = vet[i];
    }

    // Ora ritornare vet2 in vet1:
    // per esempio, si può fare:
    for (int i = 0; i < dim; i++) {
        vet[i]= vet2[i];
    }
}

void InsertionSortInPlace(int vet[], int dim) {
    for (int i = 1; i < dim; i++) {
        int n = vet[i]; // memorizzazione del valore da spostare

        int j = i - 1;

        // Si spostano i valori maggiori in vet2 ...
        while (j >= 0 && vet[j] > n) {
            vet[j + 1] = vet[j];
            j--;
        }

        // ... e si inserisce il valore corrente
        vet[j + 1] = n;
    }
}
