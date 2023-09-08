#include "Giuseppe.h"

int main() {

    clear();
    id("exercicio 4");

    int tamanho, contador=0;
    char nome[strMaxLength];

    printf("digite seu nome completo: ");
    fgets(nome, sizeof(nome), stdin); //! li o nome da pessoa

    tamanho = strlen(nome);

    for (int i = 0; i < tamanho -1; i++)
    {
        if (nome[i] == ' ')
        {
            //! so nao fazer nada
        }else if (isLetter)
        {
            contador++;
        }
    }
    
    printf("%d\n", contador);

    pause ( "Apertar ENTER para terminar" );
    clear();
    return 0;
}