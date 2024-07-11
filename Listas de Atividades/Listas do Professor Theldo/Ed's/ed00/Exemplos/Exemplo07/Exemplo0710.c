// -------------------------- EXEMPLO0710
// bibliotecas de funcoes auxiliares
#include <stdio.h> // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
#define ORDEM 3
typedef int MATRIZ [ ORDEM ][ ORDEM ];
int main ( void )
{
// PROGRAMA PARA MOSTRAR A DIAGONAL DE UMA MATRIZ
// VARIAVEIS :
 MATRIZ M;
 int X = 0, Y = 0;
// identificar
 printf ( "EXEMPLO0710 - MOSTRAR A DIAGONAL DE UMA MATRIZ\n" );
// REPETIR PARA CADA LINHA
 for ( X = 0; X < ORDEM; X++ )
 { // REPETIR PARA CADA COLUNA
 for ( Y = 0; Y < ORDEM; Y++ )
 {
 printf ( "\nFORNECER ELEMENTO %d, %d : ",(X+1), (Y+1) );
 scanf ( "%d", &M[ X ][ Y ] );
 getchar ( ); // para limpar a entrada de dados
 } // FIM REPETIR
 } // FIM REPETIR
 printf ( "\n" );
// REPETIR PARA CADA LINHA
 for ( X = 0; X < ORDEM; X++ )
 { // REPETIR PARA CADA COLUNA
 for ( Y = 0; Y < ORDEM; Y++ )
 {
 if ( X == Y ) // SE ESTIVER NA DIAGONAL
 printf ( "%d ", M[ X ][ Y ] );
 } // FIM REPETIR
 } // FIM REPETIR
// encerrar
 printf ( "\n\nAPERTAR <Enter> PARA TERMINAR" );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );
} // end main ( )