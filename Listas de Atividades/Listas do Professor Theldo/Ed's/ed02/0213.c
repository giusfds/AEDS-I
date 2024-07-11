#include "io.h"

int main() {

    IO_id("exemplo 0213 - Programa - v0.0");

    int numero;

    numero = IO_readint("entre com o numero que vc quer saber que esta no intervalo ");

    if (25 < numero && numero < 65)
    {
        IO_println("o valor se encontra dentro do espaco de 25:65");
    }else
    {
        IO_println("o valor nao se encontra dentro do espaco de 25:65");
    }
    
    IO_pause ( "Apertar ENTER para terminar" );
    
    return 0;
}