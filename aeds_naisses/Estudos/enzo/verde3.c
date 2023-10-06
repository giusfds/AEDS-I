#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int vetor[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &vetor[i]);
    }

    int maior = vetor[0];
    int posicao = 0;

    for (int i = 1; i < N; i++) {
        if (vetor[i] >= maior) {
            maior = vetor[i];
            posicao = i;
        }
    }

    printf("%d ", maior);
    printf("%d", posicao);

    return 0;
}
