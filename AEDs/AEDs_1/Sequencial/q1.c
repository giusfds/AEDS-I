#include <stdio.h>

int main() {
    int soma, n1,n2,n3;

    printf("quais sao os numeros que vc quer somar\n");
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);

    soma = n1+n2+n3;

    printf("a soma total dos 3 numeros e %d\n",soma);  

    printf("\n\n--------- | FIM DO PROGRAMA | ---------\n\n");
    return 0;
}