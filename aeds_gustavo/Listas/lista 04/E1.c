#include "Giuseppe.h"

int main() {

    clear();
    id("exercicio 1");

    int n=0;
    n = readint("qual e o tamanho do vetor: ");
    int vetor[n];
    int maior = INT_MIN;

    printf("digite os numeros do vetor:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &vetor[i]);
        if (vetor[i] > maior)
        {
            maior = vetor[i];
        }
        
    }
    
    printf("o meior valor do vetor lido e: %d\n", maior);
    getchar();

    pause ( "Apertar ENTER para terminar" );
    clear();
    return 0;
}