#include "Giuseppe.h"

bool cores(int vermelho, int verde, int azul){
    // funcao apenas para ver se entra ou nao no if (linha 25)
    if (vermelho < 0 OR vermelho > 255 OR verde < 0 OR verde > 255 OR azul < 0 OR azul > 255)
    {
        return true;
    }else{
        return false;
    }
    
}

int main() {

    clear();
    id("exercicio 6");

    int vermelho=0, azul=0, verde=0;

    vermelho = readint("Digite o valor para o canal vermelho (0-255): ");
    azul = readint("Digite o valor para o canal verde (0-255): ");
    verde = readint("Digite o valor para o canal verde (0-255): ");

    if (cores(vermelho, verde, azul))
    {
        // verificar se o usuario colocou os numeros dentro do espaco correto
        printf("valores nao estao dentro do espaco determinado\n");
        return 1; //giva o programa
    }

    printf("O valor em hexadecimal para a cor vermelha é: %02X\n", vermelho);
    printf("O valor em hexadecimal para a cor verde é: %02X\n", verde);
    printf("O valor em hexadecimal para a cor azul é: %02X\n", azul);
    
    pause ( "Apertar ENTER para terminar" );
    clear();
    return 0;
}