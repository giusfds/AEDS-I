#include <stdio.h>
#include <math.h>

int main() {
    printf("Digite o número de termos para calcular pi:");
    int n;
    scanf("%d", &n);

    if (n <= 0) {
        printf("O número de termos deve ser um inteiro positivo.\n");
        return 1;
    }

    int i, sinal;
    float pi;
    for (i = 1, pi = 3, sinal = 1; i < n; i++) {
        pi += sinal * 4.0 / ((2 * i - 2) * (2 * i - 1) * (2 * i));
        sinal = -sinal;
    }

    const float PI = 3.14159265358979323846;
    float erro = fabs((PI - pi) / PI);

    if (erro > 0.01)
        printf("Erro maior que 1%%.\n");
    else if (erro > 0.001)
        printf("Erro maior que 0.1%%.\n");
    else if (erro > 0.0001)
        printf("Erro maior que 0.01%%.\n");

    printf("O valor de pi calculado: %.15f\n", pi);

    return 0;
}