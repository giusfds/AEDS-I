// -------------------------- EXEMPLO0501
// bibliotecas de funcoes auxiliares
#include <stdio.h> // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
void P1 ( void )
{
 printf ( "\n" );
 printf ( "\nCHAMADO O PROCEDIMENTO P1 SEM PARAMETROS" );
 printf ( "\n" );
} // fim procedimento P1( )
int main ( void )
{
// PROGRAMA PARA CHAMADA DE PROCEDIMENTO SEM PARAMETROS
// identificar
 printf ( "EXEMPLO0501 - CHAMADA A UM PROCEDIMENTO" );
 P1 ( ); // chamada ao procedimento
 printf ( "\n" );
// encerrar
 printf ( "\nAPERTAR <Enter> PARA TERMINAR." );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );
} // end main ( )