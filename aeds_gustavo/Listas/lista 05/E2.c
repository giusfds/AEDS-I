#include "Giuseppe.h"

void fib(int vezes){
    int fib1=1;
    int fib2=1;
    int soma=0;
    for (int i = 0; i < vezes; i++)
    {
        soma+=fib1+fib2;
        fib1 = fib2;
        fib2 = soma;
    }
    printf("o numero de fibonacci e de: %d\n", soma);
}

int main() {

    clear();
    id("exercicio 2");

    int vezes;

    printf("digite a quantidade de vezes que vc quer o numero de fib\n");
    scanf("%d", &vezes); 

    fib(vezes);

    pause ( "Apertar ENTER para terminar" );
    clear();
    return 0;
}