#include <stdio.h>
#include "1a4.h"



int main()
{
    Data data;
    int n;
    printf("digite um numero de dias, para acrescentar\n");
    scanf("%d", &n);
    getchar();

    data = MaisDias(data, n);

    printf("\n\n--------- | FIM DO PROGRAMA | ---------\n\n");
    return 0;
}