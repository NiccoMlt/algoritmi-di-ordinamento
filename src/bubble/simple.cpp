void BubbleSort(int vet[], int dim) {
    // Per un numero di volte pari alla dimensione ...
    for (int i = 0; i < dim; i++) {

        // ... scorrendo tutto il vettore ...
        for (int j = 0; j < dim; j++) {

            // ... con scambi a due a due l'elemento maggiore arriva in fondo
            if (vet[j] > vet[j+1]) {
                int tmp = vet[j];
                vet[j] = vet[j+1];
                vet[j+1] = tmp;
            }
        }
    }
 }
