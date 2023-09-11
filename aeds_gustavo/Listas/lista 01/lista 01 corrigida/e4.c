#include "Giuseppe.h"

int main() {

    clear();
    id("exercicio 4");

    char nome[strMaxLength];

    printf("digite seu nome\n");
    fgets(nome, sizeof(nome), stdin);

    int n= strlen(nome);
    printf("o nome %s tem %i caracteres\n",nome, n);
    

    pause ( "Apertar ENTER para terminar" );
    clear();
    return 0;
}