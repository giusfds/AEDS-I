#include <stdio.h>

int main() {

    char nome[100];

    printf("digite seu nome completo: ");
    fgets(nome, sizeof(nome), stdin); 
    printf("%s\n", nome);

    printf("\n\n--------- | FIM DO PROGRAMA | ---------\n\n");
    return 0;
}