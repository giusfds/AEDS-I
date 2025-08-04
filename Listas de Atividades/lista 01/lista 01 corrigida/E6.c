#include "Giuseppe.h"

int main() {

    clear();
    id("exercicio 6 - Programa - v0.0");

    int r, g, b;
    printf("vermelho:\n");
    scanf("%i", &r);
    printf("verde:\n");
    scanf("%i", &g);
    printf("azul:\n");
    scanf("%i", &b);

    printf("%2x %2x %2x\n",r,g,b);

    pause ( "Apertar ENTER para terminar" );
    clear();
    return 0;
}