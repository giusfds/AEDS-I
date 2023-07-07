#include <stdio.h>
#include <math.h>

int main() {

    float a, b;

    printf("qual e o valor da base\n");
    scanf("%d", &a);

    printf("qual e o expoente\n");
    scanf("%d", &b);

    float potencia;

    potencia = pow(a,b);

    printf("o resultado da conta e: %lf\n", potencia);

    printf("\n\n--------- | FIM DO PROGRAMA | ---------\n\n");
    return 0;
}















