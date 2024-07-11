#include "io.h"

int main() {

    IO_id("exemplo 0213 - Programa - v0.0");

    int x;

    x = IO_readint("qual e o valor que vc quer averiguar ");

    if (25<x && x>=30)
    {
        IO_println("o numero faz parte do intervalo [15:30] e (25:50)");
    }else if (25< x && x>50)
    {
        IO_println("o numero faz parte do intervalo (25:50), apenas");
    }else if (15 <= x && x>= 30)
    {
        IO_println("o numero faz parte do intervalo [15:30], apenas");
    }else
    {
        IO_println("o numero nao faz parte do intervalo [15:30] e (25:50)");
    }
    

    IO_pause ( "Apertar ENTER para terminar" );
    return 0;
}