#include <stdio.h>
#include <stdbool.h>


bool conferir(int valor){

    if (valor %2==0)
    {
        return true;
    }
    return false;
}

int main() {

    printf("digite um valor para saber se e par ou impar\n");
    int valor=0; 
    scanf("%d", &valor);
    getchar();

    if (conferir(valor))
    {
        printf("o valor e par\n");
    }else{
        printf("o valor e impar\n");
    }
    

    printf("\n\n--------- | FIM DO PROGRAMA | ---------\n\n");
    return 0;
}