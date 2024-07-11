// -------------------------- EXEMPLO0607
// bibliotecas de funcoes auxiliares
#include <stdio.h> // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
int PARES ( int X )
{
// DADO :
 int S = 0;
 if ( X > 0 )
 if ( X % 2 == 0 )
 S = 1 + PARES ( X-2 );
 else
 S = PARES ( X-1 );
 else
 S = 0;
 return ( S );
} // fim funcao PARES ( )
int main ( void )
{
// PROGRAMA RECURSIVO PARA CONTAR PARES
// identificar
 printf ( "EXEMPLO0607 - CONTAR OS PARES <= 10\n" );
 printf ( "\nPARES <= 10 = %d\n", PARES( 10 ) );
// encerrar
 printf ( "\nAPERTAR <Enter> PARA TERMINAR" );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );
} // end main ( )
