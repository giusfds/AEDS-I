// -------------------------- EXEMPLO0701
// bibliotecas de funcoes auxiliares
#include <stdio.h> // para entradas e saidas
#include <stdlib.h> // para outras funcoes de uso geral
typedef int TABELA [10];
int main ( void )
{
// PROGRAMA PARA LER UMA TABELA DE INTEIROS
// VARIAVEIS:
 TABELA V;
 int X = 0;
// identificar
 printf ( "EXEMPLO0701 - LER UM TABELA DE 10 INTEIROS\n" );
// REPETIR PARA CADA POSICAO
 for ( X = 0; X < 10; X++ )
 { // a primeira posicao e' zero !
 printf ( "\nFORNECER O %d o. INTEIRO : ",(X+1) );
 scanf ( "%d", &V[ X ] );
 getchar ( ); // para limpar a entrada de dados
 } // FIM REPETIR
 printf ( "\nVETOR LIDO: \n" );
// REPETIR PARA CADA POSICAO
 for ( X = 0; X < 10; X++ )
 {
 printf ( "%d ", V[ X ] );
 } // FIM REPETIR
// encerrar
 printf ( "\n\nAPERTAR <Enter> PARA TERMINAR" );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );
} // end main ( )