#include <stdio.h>
#include "1a4.h"

int main()
{

    int dia;
    int mes;
    int ano;

    printf("digite um dia do ano\n");
    scanf("%d", &dia);
    getchar();
    printf("digite um mes do ano\n");
    scanf("%d", &mes);
    getchar();
    printf("digite um ano\n");
    scanf("%d", &ano);
    getchar();

    Data data = verificacao(dia, mes, ano);

    if (data.ano == 0 && data.mes == 0 && data.dia == 0) {
        printf("Data invalida!\n");
    } else {
        printf("Data valida: %d/%d/%d\n", data.dia, data.mes, data.ano);
    }

    printf("\n\n--------- | FIM DO PROGRAMA | ---------\n\n");
    return 0;
}