#include "io.h"
#include "Giuseppe.h"

int main() {

    clear();
    id("exemplo 0315 - Programa - v0.0");

    chars palavra;
    int count=0;
    palavra = IO_readchar("qual e a palavra que vc quer ver: ");

    for (int i = (int)strlen(palavra); i >= 0; i--)
    {
        if (isNumber)
        {
            print("%c\n",palavra[i]);
            count++;
        }
        
    }
    print("os numeros apareceram:[%d] vezes \n");

    pause ( "Apertar ENTER para terminar" );
    clear();
    return 0;
}