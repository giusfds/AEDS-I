#include "io.h"

int main() {

    IO_id("exemplo 0213 - Programa - v0.0");

    int x;

    x = IO_readint("coloque o valor que vc quer testar ");

    if (20 <= x && x >= 60)
    {
        IO_println("o valor pertence ao intervalo de [20:60]");
    }else
    {
        IO_println("o valor nao pertence ao intervalo de [20:06]");
    }
    
    

    IO_pause ( "Apertar ENTER para terminar" );
    return 0;
}