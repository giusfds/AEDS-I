#include <stdio.h>

int main() {

    int lado1, lado2, lado3;

    printf("digite o valor do 1 lado\n");
    scanf("%d", &lado1);
    printf("digite o valor do 2 lado\n");
    scanf("%d", &lado2);
    printf("digite o valor do 3 lado\n");
    scanf("%d", &lado3);

    if (lado1 == lado2 && lado1 == lado3)
    {
        printf("o triangulo e equilatero\n");
    }
    if (lado1 == lado2 || lado1 == lado3)
    {
        printf("o triangulo e isoceles\n");
    }
    if (lado1 != lado2 && lado1 != lado3)
    {
        printf("o triangulo e acutangulo\n");
    }
    


    printf("\n\n--------- | FIM DO PROGRAMA | ---------\n\n");
    return 0;
}