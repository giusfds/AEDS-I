// -------------------------- EXEMPLO0506
// bibliotecas de funcoes auxiliares
#include <stdio.h> // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
void P2 (int X); // PROTOTIPO DE PROCEDIMENTO
void P1 (int X)
{
 printf ( "CHAMADO O PROCEDIMENTO P1 COM X = %d\n", X );
 if ( X < 5 )
 P2 ( X );
 printf ( "RETORNANDO AO PROCEDIMENTO P1 PARA A CHAMADA COM X = %d\n", X );
 getchar( ); // para esperar
} // fim do procedimento P1( )
void P2 (int X)
{
 printf ( "CHAMADO O PROCEDIMENTO P2 COM X = %d\n", X );
 X = X+1;
 printf ( "RETORNANDO AO PROCEDIMENTO P2 PARA A CHAMADA COM X = %d\n", X );
 getchar ( ); // para esperar
 P1 ( X );
} // fim do procedimento P2( )
int main ( void )
{
// PROGRAMA PARA MOSTRAR PASSAGENS DE PARAMETROS
// identificar
 printf ( "EXEMPLO0506 - CHAMADA/RETORNO COM PARAMETRO\n\n" );
 P1 ( 1 ); // OBSERVAR RECURSIVIDADE INDIRETA !
 printf ( "\n" );
// encerrar
 printf ( "\nAPERTAR <Enter> PARA TERMINAR." );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );
} // end main ( )