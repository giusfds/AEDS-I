#include <stdio.h>

int main() {
    int N;

    scanf("%d", &N);

    int vetorOriginal[N];
    int vetorInvertido[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &vetorOriginal[i]);
    }

    for (int i = 0; i < N; i++) {
        vetorInvertido[i] = vetorOriginal[N - i - 1];
    }

    for (int i = 0; i < N; i++) {
        printf("%d ", vetorOriginal[i]);
    }
    printf("\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", vetorInvertido[i]);
    }

    return 0;
}
