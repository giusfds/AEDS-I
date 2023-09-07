#include "Giuseppe.h"

int main() {

    clear();
    id("exercicio 4");

    char nome[strMaxLength]; 

    // nao tenho o readstring :(
    printf("Digite seu nome completo: ");
    fgets(nome, sizeof(nome), stdin);

    nome[strcspn(nome, "\n")] = 0;

    int comprimento = strlen(nome);

    printf("O nome tem %d caracteres.\n", comprimento);

    pause ( "Apertar ENTER para terminar" );
    clear();
    return 0;
}