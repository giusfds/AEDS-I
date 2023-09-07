#include <stdio.h>

int main() {

    double area=0, largura=0, altura=0;

    printf("qual e a altura do objeto\n");
    scanf("%lf", &altura);
    printf("qual e a largura do objeto\n");
    scanf("%lf", &largura);

    area = largura * altura;

    printf("a area da figura e: %.2lf\n", area);

    printf("\n\n--------- | FIM DO PROGRAMA | ---------\n\n");
    return 0;
}