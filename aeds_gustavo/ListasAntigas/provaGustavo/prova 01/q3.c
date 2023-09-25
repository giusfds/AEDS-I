#include "Giuseppe.h"

int main() {

    clear();
    id("exercicio 3");
    
    int n=0, x=0, fatorial=1;
    float somatorio=0;

    n = readint("qual e a quantidade da aprocimacao que vc quer colocar: ");
    x = readint("qual e o valor que vc quer calcular: ");
    
    for (int i = 1; i <= n-1 ; i++)
    {
        somatorio += (double)(pow(-x, i)/fatorial);
        fatorial *= (i+1);
    }


    printf("o resultado do fatorial e: %d\n", fatorial);

    printf("o resultado da conta e: %.2f\n", somatorio);
    pause ( "Apertar ENTER para terminar" );
    clear();
    return 0;
}