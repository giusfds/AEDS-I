#include "Giuseppe.h"

int main() {

    clear();
    id("exercicio 5");

    int hexa;

    printf("digite uma seguencia de cores do formato #RRGGBB\n");
    scanf("%x", &hexa);

    int r, g, b;
    r = hexa/(256*256);
    g = hexa%(256*256)/256;  //! tendi isso aqui nao
    b = hexa%(16*16);

    printf("R= %i G=%i B=%i", r, g, b);

    pause ( "Apertar ENTER para terminar" );
    clear();
    return 0;
}