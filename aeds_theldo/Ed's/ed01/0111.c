#include <stdio.h>

int main() {
    float lado=0, ladox6=0, ladoquadrado;

    printf("qual e o lado do quadrado\n");
    scanf("%d", &lado);

    ladox6=lado*6;

    ladoquadrado = ladox6 * ladox6;

    printf("%.2f\n", ladoquadrado);

    printf("\n\n--------- | FIM DO PROGRAMA | ---------\n\n");
    return 0;
}