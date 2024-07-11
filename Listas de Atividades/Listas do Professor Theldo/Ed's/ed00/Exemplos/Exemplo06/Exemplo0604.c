// -------------------------- EXEMPLO0604
// bibliotecas de funcoes auxiliares
#include <stdio.h> // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
void PARES ( int X )
{
 if ( X > 0 )
 {
 PARES ( X-1 );
 printf ( "\n%d%c%d\n", X, " ", 2*X );
 }
} // fim procedimento PARES ( )
int main ( void )
{
// PROGRAMA RECURSIVO PARA MOSTRAR PARES
// identificar
 printf ( "EXEMPLO0604 - MOSTRAR OS 5 PRIMEIROS PARES\n" );
 PARES ( 5 );
// encerrar
 printf ( "\nAPERTAR <Enter> PARA TERMINAR" );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );
} // end main ( )
