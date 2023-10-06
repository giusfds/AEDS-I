#include <stdio.h>
#include <stdlib.h>

int main() {
    int vet[10];
    int par = 0;
    int impar = 0;
    int *imparptr;
    int *parptr;
    int *ptr;

    printf("Digite os 10 números do vetor:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vet[i]);
        if (vet[i] % 2 == 0) {
            par++;
        } else {
            impar++;
        }
    }

    parptr = (int*) malloc(par * sizeof(int));
    imparptr = (int*) malloc(impar * sizeof(int));

    int index_par = 0;
    int index_impar = 0;

    printf("Os números digitados são:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d\n", vet[i]);
        if (vet[i] % 2 == 0) {
            parptr[index_par] = vet[i];
            index_par++;
        } else {
            imparptr[index_impar] = vet[i];
            index_impar++;
        }
    }

    printf("Os valores pares:\n");
    for (int i = 0; i < par; i++) {
        printf("%d\n", parptr[i]);
    }

    printf("Os valores ímpares:\n");
    for (int i = 0; i < impar; i++) {
        printf("%d\n", imparptr[i]);
    }

    free(parptr);
    free(imparptr);

    printf("\n\n--------- | FIM DO PROGRAMA | ---------\n\n");
    return 0;
}
