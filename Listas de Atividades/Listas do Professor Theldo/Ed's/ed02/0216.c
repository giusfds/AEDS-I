#include "io.h"

int main() {

    IO_id("exemplo 0213 - Programa - v0.0");

    int x, y; 

    x = IO_readint("qual e o primeiro (x) numero");
    IO_println("");
    y = IO_readint("qual e o seugundo (y) numero");

    if (( x % 2 == 0) && ( y % 2 != 0)){
        IO_println ("(x) e impar e (y) e par");
    }else if (( x % 2 != 0) && ( y % 2 != 0)){
        IO_println ("(x) e (y) sao impares");
    }else if (( x % 2 == 0) && ( y % 2 != 0)){
        IO_println ("(x) e par e (y) e impar");
    }else{
        IO_println ("(x) e (y) sao pares");
    }

    IO_pause ( "Apertar ENTER para terminar" );
    return 0;
}