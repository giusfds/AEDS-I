#include "Giuseppe.h"

int main() {

    clear();
    id("exercicio 1");

    int soma=0;

    for (int i = 0; i <= 1000; i++)
    {
        soma+=i;
    }
    
    printf("a soma final e %d\n",soma);

    pause ( "Apertar ENTER para terminar" );
    clear();
    return 0;
}