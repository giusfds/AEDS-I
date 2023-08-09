// soma de 3 numeros aleatorios dadas pelo teclado

#include <stdio.h>

int main() {

    int n1=0,n2=0,n3=0;

    printf("coloque os 1 numeros que vc quer somar\n");
    scanf("%d", &n1);
    printf("coloque os 2 numeros que vc quer somar\n");
    scanf("%d", &n2);
    printf("coloque os 3 numeros que vc quer somar\n");
    scanf("%d", &n3);

    int soma;

    soma= n1+n2+n3;

    printf("o valor da soma e %d\n", soma);


    printf("\n\n--------- | FIM DO PROGRAMA | ---------\n\n");
    return 0;
}