#include "Bubble.h"

void BubbleSort(int vet[], int dim) {
    // Per un numero di volte pari alla dimensione ...
    for (int i = 0; i < dim; i++) {

        // ... scorrendo tutto il vettore ...
        for (int j = 0; j < dim; j++) {

            // ... con scambi a due a due l'elemento maggiore arriva in fondo
            if (vet[j] > vet[j + 1]) {
                int tmp = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = tmp;
            }
        }
    }
}

void OptimizedBubbleSort(int vet[], int dim) {
    // Per un numero di volte pari alla dimensione ...
    for (int i = dim - 1; i > 0; i--) {

        // ... riducendo ogni volta il sottovettore su cui si opera ...
        for (int j = 0; j < i; j++) {

            // ... con scambi a due a due l'elemento maggiore arriva in fondo
            if (vet[j] > vet[j + 1]) {
                int tmp = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = tmp;
            }
        }
    }
}

void BubbleSortWithFlag(int vet[], int dim) {
    bool sentinella;

    do {
        sentinella = false;

        // Scorrendo tutto il vettore ...
        for (int j = 0; j < dim; j++) {

            // ... con scambi a due a due l'elemento maggiore arriva in fondo
            if (vet[j] > vet[j + 1]) {
                int tmp = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = tmp;

                // Se viene effettuato almeno uno scambio, il flag diventa true
                sentinella = true;
            }
        }

        // Il ciclo continua finché le iterazioni effetuano degli scambi
    } while (sentinella);
}
