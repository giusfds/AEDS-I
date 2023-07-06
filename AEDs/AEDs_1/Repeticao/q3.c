#include <stdio.h>

int main() {
    int i;
    float numero, maior, menor;

    printf("Digite o 1 número: ");
    scanf("%f", &numero);
    maior = numero;
    menor = numero;

    for (i = 2; i <= 10; i++) {
        printf("Digite o %d número: ", i);
        scanf("%f", &numero);

        if (numero > maior) {
            maior = numero;
        }

        if (numero < menor) {
            menor = numero;
        }
    }

    printf("O maior número informado e: %.2f\n", maior);
    printf("O menor número informado e: %.2f\n", menor);

    return 0;
}
