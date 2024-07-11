#include "Giuseppe.h"

int isPar(int numero){
    if (numero % 2 == 0)
    {
        return 1;
    }
    return 0; 
}
// pode se usar boolean para realizar tal ação. pois ambos retornam 0 ou 1 (true or false).

int main() {

    clear();
    id("exercicio 1");

    int numero;
    printf("digite o numero: ");
    scanf("%d", &numero);

    if (isPar(numero))
    {
        printf("o numero e par\n");
    }else{
        printf("o numero e impar\n");
    }
    

    pause ( "Apertar ENTER para terminar" );
    clear();
    return 0;
}