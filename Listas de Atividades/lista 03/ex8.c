#include "Giuseppe.h"

int main() {

    clear();
    id("exercicio 8");

    int numero=0, fat=1;

    numero = readint("qual numero vc quer calcular o fatorial: ");

    for (int i = 1; i <= numero; i++)
    {
        fat*=i;
    }
    
    printf("resultado: %d\n", fat);

    pause ( "Apertar ENTER para terminar" );
    clear();
    return 0;
}