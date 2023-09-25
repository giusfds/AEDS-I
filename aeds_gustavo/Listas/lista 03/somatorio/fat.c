#include <stdio.h>

int main() {

    int fat=1;

    for (int i = 1; i <= 5; i++)
    {
        fat*=i;
    }
    
    printf("o valor de fatorial de 5 e %d\n", fat);

    printf("\n\n--------- | FIM DO PROGRAMA | ---------\n\n");
    return 0;
}