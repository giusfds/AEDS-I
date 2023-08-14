#include <stdio.h>

int main() {
    float lado=0, ladox6=0, ladoquadrado;

    printf("qual e o lado do quadrado\n");
    scanf("%d", &lado);

    if (lado > 0)
    {
        ladox6=lado*6;

        ladoquadrado = ladox6 * ladox6;

        printf("%.2f\n", ladoquadrado);
    }else
    {
        printf("o valor e negativo ou igual a 0\n");
    }
   
    printf("\n\n--------- | FIM DO PROGRAMA | ---------\n\n");
    return 0;
}