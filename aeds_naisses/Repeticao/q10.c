#include <stdio.h>

int main() {
    int numeros, aux=1;

    printf("quantos numeros vc quer ver\n");
    scanf("%d", &numeros);

    for (int i = 2; i < numeros; i+=2)
    {
        aux*=i;
    }

    printf("%d\n", aux);

    printf("\n\n--------- | FIM DO PROGRAMA | ---------\n\n");
    return 0;
}