#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int vetor1[N];
    int vetor2[N];
    int vetorResultado[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &vetor1[i]);
    }

    for (int i = 0; i < N; i++) {
        scanf("%d", &vetor2[i]);
    }

    for (int i = 0; i < N; i++) {
        if (vetor1[i] == vetor2[i]) {
            vetorResultado[i] = 1;
        } else {
            vetorResultado[i] = 0;
        }
    }

    for (int i = 0; i < N; i++) {
        printf("%d ", vetorResultado[i]);
    }

    return 0;
}
