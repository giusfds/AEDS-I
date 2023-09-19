#include "Giuseppe.h"

int main() {

    clear();
    id("exercicio 4");

    int tamanho, contador=0;
    char nome[strMaxLength];

    printf("digite seu nome completo: ");
    fgets(nome, sizeof(nome), stdin); //! li o nome da pessoa

    tamanho = myStrlen(nome); 
    //myStrlen e uma variacao do strlen normal, so que feita sem o uso da 
    //biblioteca string.h

    for (int i = 0; i < tamanho; i++)
    {
        if (nome[i] == ' ')
        {
            //! so nao fazer nada
        }else if (isLetter(nome[i]))
        {
            contador++;
        }
    }
    
    printf("%d\n", contador);

    pause ( "Apertar ENTER para terminar" );
    clear();
    return 0;
}