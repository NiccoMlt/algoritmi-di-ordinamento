void BubbleSort(int vet[], int dim) {
    bool sentinella;

    do {
        sentinella = false;

        // Scorrendo tutto il vettore ...
        for (int j = 0; j < dim; j++) {

            // ... con scambi a due a due l'elemento maggiore arriva in fondo
            if (vet[j] > vet[j+1]) {
                int tmp = vet[j];
                vet[j] = vet[j+1];
                vet[j+1] = tmp;

                // Se viene effettuato almeno uno scambio, il flag diventa true
                sentinella = true;
            }
        }

    // Il ciclo continua finché le iterazioni effetuano degli scambi
    } while (sentinella);
 }
