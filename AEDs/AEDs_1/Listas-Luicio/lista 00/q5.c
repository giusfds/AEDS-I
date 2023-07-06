#include <stdio.h>

#define PI 3.14159

int main() {
    double raio, area;

    printf("Digite o valor do raio do círculo: ");
    scanf("%lf", &raio);
    area = PI * raio * raio;
    printf("A área do círculo é: %.2lf\n", area);

    return 0;
}
