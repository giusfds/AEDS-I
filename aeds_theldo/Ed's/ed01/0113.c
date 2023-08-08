#include <stdio.h>

int main() {

    double lado, altura, ladox4, alturax4, area;
    printf("fale o numero corespondente a lado\n");
    scanf("%d", &lado);
    printf("fale o numero corespondente a altura\n");
    scanf("%d", &altura);

    ladox4 = lado * 4;
    alturax4 = altura *4;

    area =  alturax4 * ladox4;

    printf("a area do retangulo 4x maior e %.2lf\n", area);


    printf("\n\n--------- | FIM DO PROGRAMA | ---------\n\n");
    return 0;
}