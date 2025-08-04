#include "Giuseppe.h"

int main() {

    clear();
    id("exercicio 2");

    double soma=0.0;
    int n=0;

    n = readint("qual e o valor de n: ");

    for (int i = 0; i <= n; i++)
    {
        soma+=1/(pow(2, i));
    }
    
    printf("resultado: %.4lf\n", soma);

    pause ( "Apertar ENTER para terminar" );
    clear();
    return 0;
}