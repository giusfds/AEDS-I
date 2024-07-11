#include <stdio.h>

int main() {

    int i=0, n=0, soma=0;

    printf("qual e o valor que vc quer contar\n");
    scanf("%d", &n);

    while (i <= n)
    {
        soma+=i;
        i++;
    }
    
    printf("o velore e: %d\n", soma);

    printf("\n\n--------- | FIM DO PROGRAMA | ---------\n\n");
    return 0;
}