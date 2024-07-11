#include "io.h"
#include "Giuseppe.h"

// cada casa do vetor deve ser uma operacao diferente
// 7, 14, 21, 28...

int main() {

    clear();
    id("exemplo 0511 - Programa - v0.0");

    int n=0;
    n= readint("qual e o valor que vc quer ");
    int aux[n];

    for (int i = 0; i < n; i++)
    {
        aux[i] = (i+1)*7;
    }
    
    for (int i = 0; i < n; i++)
    {
        print("%d | ",aux[i]);
    }

    pause ( "Apertar ENTER para terminar" );
    clear();
    return 0;
}