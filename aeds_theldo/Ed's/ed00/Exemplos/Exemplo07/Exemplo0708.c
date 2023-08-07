// -------------------------- EXEMPLO0708
// bibliotecas de funcoes auxiliares
#include <stdio.h> // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
typedef int MATRIZ[2][2];
int main ( void )
{
// PROGRAMA PARA LER UMA MATRIZ
// VARIAVEIS :
 MATRIZ M;
 int X = 0, Y = 0;
// identificar
 printf ( "EXEMPLO0708 - LER UMA MATRIZ INTEIRA 2x2\n" );
// REPETIR PARA CADA LINHA
 for ( X = 0; X < 2; X++ )
 { // REPETIR PARA CADA COLUNA
 for ( Y = 0; Y < 2; Y++ )
 {
 printf ( "\nFORNECER ELEMENTO %d, %d : ",(X+1), (Y+1) );
 scanf ( "%d", &M[ X ][ Y ] );
 getchar ( ); // para limpar a entrada de dados
 } // FIM REPETIR
 } // FIM REPETIR
 printf ( "\n" );
// REPETIR PARA CADA LINHA
 for ( X = 0; X < 2; X++ )
 { // REPETIR PARA CADA COLUNA
 for ( Y = 0; Y < 2; Y++ )
 printf ( "%d ", M[ X ][ Y ] );
 printf ( "\n" );
 } // FIM REPETIR
// encerrar
 printf ( "\n\nAPERTAR <Enter> PARA TERMINAR" );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );
} // end main ( )