#include <stdio.h>
#include <stdlib.h>

int main() {

    int *n1, *n2, *aux=NULL;
    n1 = (int*)malloc(sizeof(int));
    n2 = (int*)malloc(sizeof(int));
    // aux = (int*)malloc(sizeof(int));
    scanf("%d", n1);
    scanf("%d", n2);

    if(*n1>*n2){
        aux = n1;
    }else if(*n2>*n1){
        aux = n2;
    }else{
        printf("ele sao iguais\n");
    }
    if(aux) printf("%d\n", *aux);
    
    

    printf("\n\n--------- | FIM DO PROGRAMA | ---------\n\n");
    return 0;
}