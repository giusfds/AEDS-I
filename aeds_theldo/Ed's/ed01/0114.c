#include <stdio.h>

int main() {

    double lado, altura, lado5, altura5, area, perimetro;
    printf("fale o numero corespondente a lado\n");
    scanf("%d", &lado);
    printf("fale o numero corespondente a altura\n");
    scanf("%d", &altura);

    lado5 = lado / 5;
    altura5 = altura / 5;

    area =  altura5 * lado5;

    perimetro = (altura5 *2)+(lado5 *2);

    printf("a area do retangulo 1/5 maior e %.2lf\n", area);
    printf("o perimetro do retangulo 1/5 menor %.2lf\n");


    printf("\n\n--------- | FIM DO PROGRAMA | ---------\n\n");
    return 0;
}