#include "Selection.h"

void SelectionSort(int vet[], int dim) {
    int tmp;

    for (int i = 0; i < dim - 1; i++) {
        // Partendo dal primo elemento del sottovettore non ordinato ...
        int min = i;

        // ... si procede con la ricerca del minimo ...
        for (int j = i + 1; j < dim; j++) {
            if (vet[j] < vet[min]) {
                min = j;
            }
        }

        // ... e lo si posiziona alla del sottovettore ordinato
        tmp = vet[min];
        vet[min] = vet[i];
        vet[i] = tmp;
    }
}
