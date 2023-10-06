#include <stdio.h>

int main() {
    int N;

    // Lê o valor de N
    scanf("%d", &N);

    // Declara os vetores
    int vetor1[N];
    int vetor2[N];
    int vetor3[2*N]; // O vetor resultante terá o dobro do tamanho dos vetores originais

    // Lê os elementos do primeiro vetor
    for (int i = 0; i < N; i++) {
        scanf("%d", &vetor1[i]);
    }

    // Lê os elementos do segundo vetor
    for (int i = 0; i < N; i++) {
        scanf("%d", &vetor2[i]);
    }

    // Intercala os elementos dos dois vetores
    for (int i = 0; i < N; i++) {
        vetor3[2*i] = vetor1[i];
        vetor3[2*i + 1] = vetor2[i];
    }

    // Imprime o vetor resultante
    for (int i = 0; i < 2*N; i++) {
        printf("%d ", vetor3[i]);
    }

    return 0;
}
