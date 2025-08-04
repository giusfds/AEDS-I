#include "Giuseppe.h"

int main() {

    clear();
    id("exercicio 2");

    int *vet = (int *) malloc( 10 * sizeof(int) );
    printf("digite os valores do vetor\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &vet[i]);
    }

    printf("digite o valor que vc quer virificar se contem no vetor: \n");
    int valor;
    scanf("%d", &valor);

    int cont = 0;
    for (int i = 0; i < 10; i++)
    {
        if (vet[i] == valor)
        {
            cont++;
        }
    }
    printf("o valor apareceu %d vezes\n", cont);
    printf("nas posicoes\n");

    for (int i = 0; i < 10; i++)
    {
        if (vet[i] == valor)
        {
            printf("%d, ", i);
        }
    }


    pause ( "Apertar ENTER para terminar" );
    clear();
    return 0;
}