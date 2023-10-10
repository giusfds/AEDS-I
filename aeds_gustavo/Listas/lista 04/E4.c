#include "Giuseppe.h"

int main() {

    clear();
    id("exercicio 4");

    char palavra[strMaxLength];

    printf("Digite a palavra que voce quer ler:\n");
    fgets(palavra, sizeof(palavra), stdin); 

    int meio = strlen(palavra) / 2;
    int fim = strlen(palavra)-1;
    
    for (int i = 0; i < meio; i++) 
    {
        if (palavra[i] != palavra[fim - i])
        {
            printf("Nao eh palindromo\n");
            break;
        }
    }

    printf("a palavra e um palindromo\n");

    pause ( "Apertar ENTER para terminar" );
    clear();
    return 0;
}