#include "io.h"

int main() {
    // definir dado
    int x = 0; // definir variavel com valor inicial

    // identificar
    IO_id ( "Exemplo0212 - Programa - v0.0" );

    // ler do teclado
    x = IO_readint ( "Entrar com um inteiro: ");

    // testar valor
    if ((x % 2 == 0) && (x > -30))
    {
        IO_println ("Numero par e maior que -15");
    } 
    else if ((x % 2 != 0) && (x < 30))
    {
        IO_println ("Numero impar e menor que trinta");
    } 
    else if ((x % 2 == 0) && (x < -30))
    {
        IO_println ("Numero par e menor que -15");
    }
    else if ((x % 2 != 0) && (x > 30))
    {
        IO_println ("Numero impar e maior que trinta");
    } 

    // encerrar
    IO_pause ( "Apertar ENTER para terminar" );
    return ( 0 );

    return 0;
}