// -------------------------- EXEMPLO0603
// bibliotecas de funcoes auxiliares
#include <stdio.h> // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
void PARES ( int X )
{
 if ( X > 0 )
 if ( X % 2 == 0 )
 {
 PARES ( X-2 );
 printf ( "\n%d\n", X );
 }
 else
 PARES ( X-1 );
} // fim procedimento PARES ( )
int main ( void )
{
// PROGRAMA RECURSIVO PARA MOSTRAR PARES
// identificar
 printf ( "EXEMPLO0603 - MOSTRAR OS PARES <= 10\n" );
 PARES ( 10 );
// encerrar
 printf ( "\nAPERTAR <Enter> PARA TERMINAR" );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );
} // end main ( )