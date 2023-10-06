#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int vetor[100];
    int maior = -9999; // Inicialize com um valor muito baixo
    int menor = 9999;  // Inicialize com um valor muito alto
    int maiorDe16 = 0;
    int menorQue16 = 0;
    double media = 0;
    int soma = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
        soma += vetor[i];

        if (vetor[i] > maior) {
            maior = vetor[i];
        }

        if (vetor[i] < menor) {
            menor = vetor[i];
        }

        if (vetor[i] <= 16) {
            menorQue16++;
        } else {
            maiorDe16++;
        }
    }

    media = soma / n;

    printf("%d\n", menorQue16);
    printf("%d\n", maiorDe16);
    printf("%.2lf\n", media);
    printf("%d\n", menor);
    printf("%d", maior);

    return 0;
}