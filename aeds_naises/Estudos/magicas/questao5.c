#include <stdio.h>

int main() {

    double lado;
    printf("qual o valor do lado\n");
    scanf("%lf", &lado);
    getchar();

    double soma=0;

    soma = lado * lado * lado;

    printf("soma igual a %.2lf\n", soma);

    printf("\n\n--------- | FIM DO PROGRAMA | ---------\n\n");
    return 0;
}