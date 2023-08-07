// -------------------------- EXEMPLO0602
// bibliotecas de funcoes auxiliares
#include <stdio.h> // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
void CONTAR ( int X )
{
 if ( X > 0 )
 {
 printf ( "\n%d\n", X );
 CONTAR ( X-1 );
 }
} // fim procedimento CONTAR( )
int main ( void )
{
// PROGRAMA PARA CONTAR 5 10 ATE' 1, RECURSIVAMENTE
// identificar
 printf ( "EXEMPLO0602 - CONTAR DE 5 A 1 RECURSIVAMENTE\n" );
 CONTAR ( 5 );
// encerrar
 printf ( "\nAPERTAR <Enter> PARA TERMINAR" );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );
} // end main ( )
