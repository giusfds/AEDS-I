#include "Giuseppe.h"

void somaVetores(int vet1[], int vet2[], int vet3[]) {
    for (int i = 0; i < 10; i++) {
        vet3[i] = vet1[i] + vet2[i];
    }
    printf("o valor do vetor somado e:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("na casa %d:",i);
        printf(" %d\n", vet3[i]);
    }
    
}

int main() {

    clear();
    id("exercicio 4");

    int vet1[] = {1,2,3,4,5,6,7,8,9,10};
    int vet2[] = {11,12,13,14,15,16,17,18,19,20};
    int vet3[10];

    somaVetores(vet1, vet2, vet3);

    getchar();
    pause ( "Apertar ENTER para terminar" );
    clear();
    return 0;
}