#include "Giuseppe.h"

int* somaVetores(int* vetor1, int* vetor2, int tamanho) {
    int* resultado = (int*)malloc(tamanho * sizeof(int));

    for (int i = 0; i < tamanho; i++) {
        resultado[i] = vetor1[i] + vetor2[i];
    }

    return resultado;
}

int main() {

    clear();
    id("exercicio 5");

    int vet1[] = {1,2,3,4,5,6,7,8,9,10};
    int vet2[] = {11,12,13,14,15,16,17,18,19,20};

    int* vetorSoma = somaVetores(vet1, vet2, 10);

    printf("O vetor soma e:\n");
    for (int i = 0; i < 10; i++) 
    {
        printf("%d ", vetorSoma[i]);
    }

    printf("\n");
    free(vetorSoma);
    // getchar();
    pause ( "Apertar ENTER para terminar" );
    clear();
    return 0;
}