#include <stdio.h>
#include "1a4.h"


int main()
{
    Data data1;
    Data data2;

    

    int diferente = diferenca(data1, data2);

    printf("a diferenca entre os dias sao %d\n", diferente);
    printf("sem contar ano bisexto\n");

    printf("\n\n--------- | FIM DO PROGRAMA | ---------\n\n");
    return 0;
}