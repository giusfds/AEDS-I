#include <stdio.h>
#include <stdlib.h>

int main() {

    // fazer um ponteiro imprimir os valores de um vetor

    int vetor[10], *ptr;
    ptr = vetor;

    for (int i = 0; i < 10; i++)
    {
        vetor[i] = i; 
        printf("%d [%d]\n", i, vetor[i]);
    }



    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", *ptr);
        ptr++;

    }
    
    
    

    printf("\n\n--------- | FIM DO PROGRAMA | ---------\n\n");
    return 0;
}