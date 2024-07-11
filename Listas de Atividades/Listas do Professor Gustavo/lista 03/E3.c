#include "Giuseppe.h"

int main() {

    clear();
    id("exercicio 3");

    float media=0.0, contador=0.0, numero=0.0, aux=0.0;

    do
    {
        printf("qual e o valor que vc quer colocar:");
        scanf("%f", &numero);
        aux = aux + numero;
        contador++;
    } while (numero != 0);

    media = aux / (contador - 1);

    printf("a media e: %.2f\n", media);

    pause ( "Apertar ENTER para terminar" );
    getchar();
    clear();
    return 0;
}