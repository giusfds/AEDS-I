#include "io.h"
#include "Giuseppe.h"

int main() {

    clear();
    id("exemplo 0218 - Programa - v0.0");

    int x=0,y=0;

    x = IO_readint("escolha o valor de x ");
    y = IO_readint("escolha o valor de y ");
    
    int aux = y*2;

    if (x==aux)
    {
        print("ambos os valores sao iguais\n");
    }
    if (x<aux)
    {
        print("o valor de (x) e menor do que o dobro de (y)\n");
    }
    if (x>aux)
    {
        print("o valor de (x) e maior do que o dobro de (y)\n");
    }

    pause ( "Apertar ENTER para terminar" );
    clear();
    return 0;
}