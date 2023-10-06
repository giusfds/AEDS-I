#include <stdio.h>
#include <stdlib.h>

int main() {

    int *vetmasc = (int *) malloc(6 * sizeof(int));
    int *vetfem = (int *) malloc(6 * sizeof(int));
    int sexo;
    float soma;
    float mediahomem;


    for (int i = 0; i < 6; i++) {

        printf("e um homem ou mulher, [1] para homem e [2] para mulher:");
        scanf("%d", &sexo);

        if (sexo==2)
        {
            printf("digite a idade da mulher:");
            scanf("%d", &vetfem[i]);
        }else if(sexo==1)
        {
            printf("digite a idade do homem:");
            scanf("%d", &vetmasc[i]);
            soma+=vetmasc[i];
        }
    }

    mediahomem=soma/6;

    printf("a idade das mulheres e:");
    for (int i = 0; i < 6; i++)
    {
        printf("a idade da mulher %d e de %d\n", i+1, vetfem[i]);
    }

    printf("a media de idade dos homens e de %.2f\n", mediahomem);
    printf("a idade do grupo todo e:");
    for (int i = 0; i < 6; i++)
    {
        printf("a idade do homem %d e de %d\n", i+1, vetmasc[i]);
    }
    for (int i = 0; i < 6; i++)
    {
        printf("a idade do homem %d e de %d\n", i+1, vetmasc[i]);
    }

    free(vetmasc);
    free(vetfem);

    printf("\n\n--------- | FIM DO PROGRAMA | ---------\n\n");
    return 0;
}