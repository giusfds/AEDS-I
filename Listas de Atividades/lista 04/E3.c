#include "Giuseppe.h"

void BubbleSort(int vetor[], int n) {
    int aux;

    for (int i = 1; i < n; i++) {

        for (int j = 0; j < n - 1; j++) {

            if (vetor[j] > vetor[j + 1]) {
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
}

int main() {
    clear();
    id("exercicio 3");

    int *vet = (int *)malloc(10 * sizeof(int));

    printf("Digite os valores que voce quer ler:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vet[i]);
    }
    getchar();

    BubbleSort(vet, 10);

    printf("\n\nVetor ordenado:\n\n");
    for (int i = 0; i < 10; i++) {
        printf("%5d", vet[i]);
    }

    printf("\n");
    free(vet);
    pause("Aperte ENTER para terminar");
    clear();
    return 0;
}
