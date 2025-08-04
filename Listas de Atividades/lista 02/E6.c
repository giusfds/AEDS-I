#include "Giuseppe.h"

int main() {

    clear();
    id("exercicio 6");

    int dia=0;

    if ((dia >= 1) OR (dia <= 7))
    {
        switch (dia){
        case 1:
            printf("Hoje e Domingo\n");
            break;
        case 2:
            printf("Hoje e Segunda-feira\n");
            break;
        case 3:
            printf("Hoje e Terca-feira\n");
            break;
        case 4:
            printf("Hoje e Quarta-feira\n");
            break;
        case 5:
            printf("Hoje e Quinta-feira\n");
            break;
        case 6:
            printf("Hoje e Sexta-feira\n");
            break;
        case 7:
            printf("Hoje e Sabado\n");
        }

    }else{
        printf("o numero nao e um dia da semana\n");
    }
    

    pause ( "Apertar ENTER para terminar" );
    clear();
    return 0;
}