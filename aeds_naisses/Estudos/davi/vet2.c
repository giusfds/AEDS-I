#include <stdio.h>
#include <limits.h>

int main() {

    int nummax = INT_MIN;
    int nummin = INT_MAX;
    int vet[7];
    int soma;
    float media;
    
    printf("digite os 7 numero do vetor");

    for (int i = 0; i < 7; i++)
    {
        scanf("%d", &vet[i]);
        soma+=vet[i];
        nummax = vet[i] > nummax ? vet[i] : nummax;
        nummin = vet[i] < nummin ? vet[i] : nummin;
    }

    media=soma/7;
    printf("a media e: %f", media);

    printf("o maior numero e: %d", nummax);
    printf("o menor numero e: %d", nummin);

    for (int i = 0; i < 7; i++)
    {
        printf("%d", vet[i]);
    }
    
    printf("\n\n--------- | FIM DO PROGRAMA | ---------\n\n");
    return 0;
}