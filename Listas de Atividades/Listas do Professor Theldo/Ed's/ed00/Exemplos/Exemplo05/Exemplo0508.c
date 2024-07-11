// -------------------------- EXEMPLO0508
// bibliotecas de funcoes auxiliares
#include <stdio.h> // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
void P2 ( int X ); // PROTOTIPO DE PROCEDIMENTO
void P1 ( int X )
{
 X = X + 1;
 printf ( "CHAMADO O PROCEDIMENTO P1 COM X = %d\n", X );
 if ( X < 4 )
 {
 P1 ( X );
 P2 ( X );
 }
 printf ( "\nRETORNANDO AO PROCEDIMENTO P1 PARA A CHAMADA COM X = %d\n", X );
 getchar ( ) ; // para esperar
} // fim do procedimento P1( )
void P2 ( int X )
{
 printf ( "CHAMADO O PROCEDIMENTO P2 COM X = %d\n", X );
 if ( X > 1 )
 P2 ( X - 1 );
 printf ( "RETORNANDO AO PROCEDIMENTO P2 PARA A CHAMADA COM X = %d", X );
 getchar ( ); // para esperar
} // fim procedimento P2( )
int main ( void )
{
// PROGRAMA PARA MOSTRAR PASSAGENS DE PARAMETROS
// identificar
 printf ( "EXEMPLO0508 - MULTIPLAS CHAMADAS/RETORNOS\n\n" );
 P1 ( 1 );
 printf ( "\n" );
// encerrar
 printf ( "\nAPERTAR <Enter> PARA TERMINAR." );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );
} // end main ( )
