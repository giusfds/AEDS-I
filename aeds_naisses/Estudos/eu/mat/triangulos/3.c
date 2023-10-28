#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tamanho = 5;
    int **mat = malloc(tamanho * sizeof(int *));

    for (int i = 0; i < tamanho; i++)
    {
        mat[i] = malloc(tamanho * sizeof(int));
    }

    for (int i = 0; i <= (tamanho/2); i++)
    {
        for (int j = tamanho/2-i; j <= (tamanho/2)+i; j++)
        {
            mat[i][j]=1;
        }
    }

    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    free(mat);
    printf("\n\n--------- | FIM DO PROGRAMA | ---------\n\n");
    return 0;
}